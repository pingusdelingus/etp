#include "ATP.h"
#include "Profiler.h"

#include <algorithm>
#include <chrono>
#include <fstream>
#include <functional>
#include <map>
#include <set>

namespace {

std::string clause_signature(const Clause& clause) {
    std::map<std::string, int> variable_ids;
    int next_variable_id = 0;

    std::function<std::string(const std::shared_ptr<Term>&)> term_key =
        [&](const std::shared_ptr<Term>& term) -> std::string {
            if (term->is_variable) {
                auto [found, inserted] = variable_ids.emplace(term->name, next_variable_id);
                if (inserted) {
                    next_variable_id += 1;
                }
                return "V" + std::to_string(found->second);
            }

            if (term->arguments.empty()) {
                return "C(" + term->name + ")";
            }

            std::string key = "F(" + term->name;
            for (const std::shared_ptr<Term>& argument : term->arguments) {
                key += "," + term_key(argument);
            }
            key += ")";
            return key;
        };

    auto literal_key = [&](const Literal& literal) {
        std::string key = literal.is_negated ? "~" : "";
        key += literal.predicate + "/" + std::to_string(literal.terms.size());
        for (const std::shared_ptr<Term>& term : literal.terms) {
            key += ":" + term_key(term);
        }
        return key;
    };

    std::vector<std::string> parts;
    parts.reserve(clause.literals.size());
    for (const Literal& literal : clause.literals) {
        parts.push_back(literal_key(literal));
    }
    std::sort(parts.begin(), parts.end());

    std::string signature;
    for (const std::string& part : parts) {
        signature += part;
        signature += ";";
    }
    return signature;
}

std::shared_ptr<Term> replace_subterm(
    const std::shared_ptr<Term>& term,
    const std::vector<size_t>& path,
    size_t depth,
    const std::shared_ptr<Term>& replacement
) {
    if (depth == path.size()) {
        return clone_term(replacement);
    }

    auto copy = std::make_shared<Term>();
    copy->name = term->name;
    copy->is_variable = term->is_variable;
    copy->arguments.reserve(term->arguments.size());
    for (size_t index = 0; index < term->arguments.size(); ++index) {
        if (index == path[depth]) {
            copy->arguments.push_back(replace_subterm(term->arguments[index], path, depth + 1, replacement));
        } else {
            copy->arguments.push_back(clone_term(term->arguments[index]));
        }
    }
    return copy;
}

void collect_positions(
    const std::shared_ptr<Term>& pattern,
    const std::shared_ptr<Term>& current,
    std::vector<size_t>& path,
    std::vector<std::vector<size_t>>& matches
) {
    if (!current) {
        return;
    }

    Substitution substitution;
    if (unify_terms(pattern, current, substitution)) {
        matches.push_back(path);
    }

    for (size_t index = 0; index < current->arguments.size(); ++index) {
        path.push_back(index);
        collect_positions(pattern, current->arguments[index], path, matches);
        path.pop_back();
    }
}

std::vector<std::vector<size_t>> find_rewrite_positions(const std::shared_ptr<Term>& pattern, const std::shared_ptr<Term>& term) {
    std::vector<std::vector<size_t>> matches;
    std::vector<size_t> path;
    collect_positions(pattern, term, path, matches);
    return matches;
}

// Collect all variable names occurring in a clause (for the subsumer side of subsumption checks).
std::unordered_set<std::string> collect_variable_names(const Clause& clause) {
    std::unordered_set<std::string> vars;
    std::function<void(const std::shared_ptr<Term>&)> visit = [&](const std::shared_ptr<Term>& t) {
        if (t->is_variable) {
            vars.insert(t->name);
        }
        for (const auto& arg : t->arguments) {
            visit(arg);
        }
    };
    for (const Literal& lit : clause.literals) {
        for (const auto& t : lit.terms) {
            visit(t);
        }
    }
    return vars;
}

// One-directional matching: only variables of the subsumer (listed in subsumer_vars) may be bound.
// Variables appearing in the target (subsumed clause) are treated as rigid constants.
bool match_term(
    const std::shared_ptr<Term>& source,
    const std::shared_ptr<Term>& target,
    Substitution& substitution,
    const std::unordered_set<std::string>& subsumer_vars
) {
    std::shared_ptr<Term> s = source;
    while (s->is_variable) {
        auto it = substitution.find(s->name);
        if (it == substitution.end()) break;
        s = it->second;
    }

    if (s->is_variable && subsumer_vars.count(s->name) > 0) {
        substitution[s->name] = target;
        return true;
    }

    if (target->is_variable) {
        // Target variable is rigid: only succeeds if source reduced to the exact same variable.
        return s->is_variable && s->name == target->name;
    }

    if (s->is_variable) {
        // Subsumer variable was bound to a target variable (rigid) earlier; now target is non-variable.
        return false;
    }

    if (s->name != target->name || s->arguments.size() != target->arguments.size()) {
        return false;
    }
    for (size_t i = 0; i < s->arguments.size(); ++i) {
        if (!match_term(s->arguments[i], target->arguments[i], substitution, subsumer_vars)) {
            return false;
        }
    }
    return true;
}

bool literals_match_under_substitution(
    const Literal& source,
    const Literal& target,
    Substitution& substitution,
    const std::unordered_set<std::string>& subsumer_vars
) {
    if (source.predicate != target.predicate || source.is_negated != target.is_negated ||
        source.terms.size() != target.terms.size()) {
        return false;
    }
    for (size_t i = 0; i < source.terms.size(); ++i) {
        if (!match_term(source.terms[i], target.terms[i], substitution, subsumer_vars)) {
            return false;
        }
    }
    return true;
}

std::string literal_head_key(const Literal& literal) {
    return literal.predicate + "/" + std::to_string(literal.terms.size()) + (literal.is_negated ? "/neg" : "/pos");
}

bool literal_heads_can_cover(const Clause& subsumer, const Clause& subsumed) {
    for (const auto& entry : subsumer.head_counts) {
        auto found = subsumed.head_counts.find(entry.first);
        if (found == subsumed.head_counts.end() || found->second < entry.second) {
            return false;
        }
    }
    return true;
}

}  // namespace

ATP::ATP(Problem problem) : problem_(std::move(problem)) {
    ScopedProfile profile("ATP::ATP");
    for (Clause clause : problem_.usable) {
        for (const Literal& literal : clause.literals) {
            if (literal.is_equality()) {
                has_equality_ = true;
            }
        }
        index_existing_clause(std::move(clause));
    }
    for (Clause clause : problem_.sos) {
        for (const Literal& literal : clause.literals) {
            if (literal.is_equality()) {
                has_equality_ = true;
            }
        }
        add_to_sos(std::move(clause));
    }
}

RunResult ATP::run_anl_loop(int timeout_seconds) {
    ScopedProfile profile("ATP::run_anl_loop");
    using Clock = std::chrono::steady_clock;
    const Clock::time_point deadline = Clock::now() + std::chrono::seconds(timeout_seconds);

    if (sos_.empty()) {
        for (Clause clause : problem_.usable) {
            add_to_sos(std::move(clause));
        }
        usable_.clear();
    }

    while (!sos_.empty()) {
        if (Clock::now() >= deadline) {
            return {false, true, "timed out after 60 seconds without a refutation", Clause()};
        }

        Clause given = take_given_clause();
        if (is_subsumed(given)) {
            continue;
        }

        for (Clause factor : factor_clause(given)) {
            if (factor.is_empty()) {
                clause_index_[factor.id] = factor;
                return {true, false, "derived empty clause by factoring", factor};
            }
            add_to_sos(std::move(factor));
        }

        std::vector<Clause> snapshot = usable_;
        for (const Clause& other : snapshot) {
            std::vector<Clause> derived = derive_inferences(given, other);
            for (Clause& clause : derived) {
                if (clause.is_empty()) {
                    clause_index_[clause.id] = clause;
                    return {true, false, "derived empty clause", clause};
                }
                add_to_sos(std::move(clause));
            }
        }

        usable_.push_back(given);
        clause_index_[given.id] = given;
        add_clause_to_index(given, true);
    }

    return {false, false, "search saturated without deriving the empty clause", Clause()};
}

bool ATP::write_proof(const std::string& output_path, const Clause& final_clause) const {
    ScopedProfile profile("ATP::write_proof");
    std::ofstream output(output_path);
    if (!output) {
        return false;
    }

    std::map<int, Clause> proof_index = clause_index_;
    Clause root = final_clause;
    if (root.id == 0) {
        root.id = -1;
        if (root.name.empty()) {
            root.name = "final_empty_clause";
        }
    }
    proof_index[root.id] = root;

    std::set<int> visited;
    std::vector<int> ordered;
    std::function<void(int)> collect = [&](int id) {
        if (visited.count(id) > 0) {
            return;
        }
        visited.insert(id);
        auto found = proof_index.find(id);
        if (found == proof_index.end()) {
            return;
        }
        for (int parent : found->second.parents) {
            collect(parent);
        }
        ordered.push_back(id);
    };

    collect(root.id);
    output << "% ETP proof output\n";
    for (int id : ordered) {
        output << proof_index.at(id).to_tptp() << "\n";
    }
    return true;
}

void ATP::index_existing_clause(Clause clause) {
    ScopedProfile profile("ATP::index_existing_clause");
    if (clause.id == 0) {
        clause.id = next_clause_id_++;
    } else {
        next_clause_id_ = std::max(next_clause_id_, clause.id + 1);
    }
    if (clause.name.empty()) {
        clause.name = "c" + std::to_string(clause.id);
    }
    clause = freshen_clause(clause, clause.id);
    clause.signature = clause_signature(clause);
    clause.head_counts.clear();
    for (const Literal& literal : clause.literals) {
        clause.head_counts[literal_head_key(literal)] += 1;
    }
    clause_index_[clause.id] = clause;
    seen_signatures_.insert(clause.signature);
    usable_.push_back(clause);
    add_clause_to_index(clause, true);
}

Clause ATP::take_given_clause() {
    ScopedProfile profile("ATP::take_given_clause");
    auto best = std::min_element(
        sos_.begin(),
        sos_.end(),
        [](const Clause& left, const Clause& right) {
            if (left.literals.size() != right.literals.size()) {
                return left.literals.size() < right.literals.size();
            }
            return left.id < right.id;
        }
    );

    Clause selected = *best;
    sos_.erase(best);
    remove_clause_from_sos_index(selected);
    return selected;
}

std::vector<Clause> ATP::derive_inferences(const Clause& given, const Clause& other) {
    ScopedProfile profile("ATP::derive_inferences");
    std::vector<Clause> derived = resolve_clauses(given, other);

    if (has_equality_) {
        std::vector<Clause> forward = paramodulate(given, other);
        derived.insert(derived.end(), forward.begin(), forward.end());

        std::vector<Clause> backward = paramodulate(other, given);
        derived.insert(derived.end(), backward.begin(), backward.end());
    }
    return derived;
}

std::vector<Clause> ATP::resolve_clauses(const Clause& left, const Clause& right) {
    ScopedProfile profile("ATP::resolve_clauses");
    std::vector<Clause> resolvents;

    for (size_t left_index = 0; left_index < left.literals.size(); ++left_index) {
        for (size_t right_index = 0; right_index < right.literals.size(); ++right_index) {
            const Literal& left_literal = left.literals[left_index];
            const Literal& right_literal = right.literals[right_index];

            if (left_literal.predicate != right_literal.predicate ||
                left_literal.is_negated == right_literal.is_negated ||
                left_literal.terms.size() != right_literal.terms.size()) {
                continue;
            }

            Substitution substitution;
            if (!unify_literals(left_literal, right_literal, substitution)) {
                continue;
            }

            Clause resolvent;
            resolvent.role = "plain";
            resolvent.inference = "resolution";
            resolvent.parents = {left.id, right.id};

            for (size_t index = 0; index < left.literals.size(); ++index) {
                if (index != left_index) {
                    resolvent.literals.push_back(apply_substitution(left.literals[index], substitution));
                }
            }
            for (size_t index = 0; index < right.literals.size(); ++index) {
                if (index != right_index) {
                    resolvent.literals.push_back(apply_substitution(right.literals[index], substitution));
                }
            }

            if (is_tautology(resolvent)) {
                continue;
            }

            resolvents.push_back(finalize_clause(std::move(resolvent)));
        }
    }

    return resolvents;
}

std::vector<Clause> ATP::factor_clause(const Clause& clause) {
    ScopedProfile profile("ATP::factor_clause");
    std::vector<Clause> factors;

    for (size_t left = 0; left < clause.literals.size(); ++left) {
        for (size_t right = left + 1; right < clause.literals.size(); ++right) {
            if (!clause.literals[left].same_shape_as(clause.literals[right])) {
                continue;
            }

            Substitution substitution;
            if (!unify_literals(clause.literals[left], clause.literals[right], substitution)) {
                continue;
            }

            Clause factor;
            factor.role = "plain";
            factor.inference = "factor";
            factor.parents = {clause.id};

            for (size_t index = 0; index < clause.literals.size(); ++index) {
                if (index != right) {
                    factor.literals.push_back(apply_substitution(clause.literals[index], substitution));
                }
            }

            if (is_tautology(factor)) {
                continue;
            }

            factors.push_back(finalize_clause(std::move(factor)));
        }
    }

    return factors;
}

std::vector<Clause> ATP::paramodulate(const Clause& equality_clause, const Clause& target_clause) {
    ScopedProfile profile("ATP::paramodulate");
    std::vector<Clause> derived;

    for (size_t eq_index = 0; eq_index < equality_clause.literals.size(); ++eq_index) {
        const Literal& equality_literal = equality_clause.literals[eq_index];
        if (!equality_literal.is_equality() || equality_literal.is_negated) {
            continue;
        }

        std::vector<std::pair<std::shared_ptr<Term>, std::shared_ptr<Term>>> directions = {
            {equality_literal.terms[0], equality_literal.terms[1]},
            {equality_literal.terms[1], equality_literal.terms[0]}
        };

        for (const auto& direction : directions) {
            if (direction.first->is_variable) {
                continue;
            }

            for (size_t literal_index = 0; literal_index < target_clause.literals.size(); ++literal_index) {
                const Literal& target_literal = target_clause.literals[literal_index];
                for (size_t term_index = 0; term_index < target_literal.terms.size(); ++term_index) {
                    std::vector<std::vector<size_t>> positions = find_rewrite_positions(direction.first, target_literal.terms[term_index]);
                    for (const std::vector<size_t>& path : positions) {
                        Substitution substitution;
                        std::shared_ptr<Term> matched = target_literal.terms[term_index];
                        if (!path.empty()) {
                            for (size_t step : path) {
                                matched = matched->arguments[step];
                            }
                        }

                        if (!unify_terms(direction.first, matched, substitution)) {
                            continue;
                        }

                        Clause clause;
                        clause.role = "plain";
                        clause.inference = "paramodulation";
                        clause.parents = {equality_clause.id, target_clause.id};

                        for (size_t index = 0; index < equality_clause.literals.size(); ++index) {
                            if (index != eq_index) {
                                clause.literals.push_back(apply_substitution(equality_clause.literals[index], substitution));
                            }
                        }

                        for (size_t index = 0; index < target_clause.literals.size(); ++index) {
                            Literal rebuilt = apply_substitution(target_clause.literals[index], substitution);
                            if (index == literal_index) {
                                rebuilt.terms[term_index] = replace_subterm(
                                    rebuilt.terms[term_index],
                                    path,
                                    0,
                                    apply_substitution(direction.second, substitution)
                                );
                            }
                            clause.literals.push_back(std::move(rebuilt));
                        }

                        if (is_tautology(clause)) {
                            continue;
                        }

                        derived.push_back(finalize_clause(std::move(clause)));
                    }
                }
            }
        }
    }

    return derived;
}

bool ATP::is_subsumed(const Clause& candidate) const {
    ScopedProfile profile("ATP::is_subsumed");
    for (int clause_id : candidate_subsumer_ids(candidate, true)) {
        const Clause& clause = clause_index_.at(clause_id);
        if (clause.id == candidate.id || clause.literals.size() > candidate.literals.size()) {
            continue;
        }
        if (!literal_heads_can_cover(clause, candidate)) {
            continue;
        }
        if (clause_subsumes(clause, candidate)) {
            return true;
        }
    }

    for (int clause_id : candidate_subsumer_ids(candidate, false)) {
        const Clause& clause = clause_index_.at(clause_id);
        if (clause.id == candidate.id || clause.literals.size() > candidate.literals.size()) {
            continue;
        }
        if (!literal_heads_can_cover(clause, candidate)) {
            continue;
        }
        if (clause_subsumes(clause, candidate)) {
            return true;
        }
    }

    return false;
}

bool ATP::clause_subsumes(const Clause& subsumer, const Clause& subsumed) const {
    ScopedProfile profile("ATP::clause_subsumes");
    if (subsumer.literals.size() > subsumed.literals.size() || !literal_heads_can_cover(subsumer, subsumed)) {
        return false;
    }

    const std::unordered_set<std::string> subsumer_vars = collect_variable_names(subsumer);

    struct MatchOptions {
        size_t subsumer_index;
        std::vector<size_t> candidate_indices;
    };

    std::vector<MatchOptions> options;
    options.reserve(subsumer.literals.size());
    for (size_t subsumer_index = 0; subsumer_index < subsumer.literals.size(); ++subsumer_index) {
        MatchOptions match_options{subsumer_index, {}};
        match_options.candidate_indices.reserve(subsumed.literals.size());

        for (size_t candidate_index = 0; candidate_index < subsumed.literals.size(); ++candidate_index) {
            const Literal& source = subsumer.literals[subsumer_index];
            const Literal& target = subsumed.literals[candidate_index];
            if (source.predicate == target.predicate &&
                source.is_negated == target.is_negated &&
                source.terms.size() == target.terms.size()) {
                match_options.candidate_indices.push_back(candidate_index);
            }
        }

        if (match_options.candidate_indices.empty()) {
            return false;
        }
        options.push_back(std::move(match_options));
    }

    std::sort(
        options.begin(),
        options.end(),
        [](const MatchOptions& left, const MatchOptions& right) {
            return left.candidate_indices.size() < right.candidate_indices.size();
        }
    );

    std::function<bool(size_t, std::vector<bool>&, Substitution&)> backtrack =
        [&](size_t index, std::vector<bool>& used, Substitution& substitution) {
            if (index == options.size()) {
                return true;
            }

            const Literal& source = subsumer.literals[options[index].subsumer_index];
            for (size_t candidate : options[index].candidate_indices) {
                if (used[candidate]) {
                    continue;
                }

                Substitution branch = substitution;
                if (!literals_match_under_substitution(source, subsumed.literals[candidate], branch, subsumer_vars)) {
                    continue;
                }

                used[candidate] = true;
                if (backtrack(index + 1, used, branch)) {
                    return true;
                }
                used[candidate] = false;
            }

            return false;
        };

    std::vector<bool> used(subsumed.literals.size(), false);
    Substitution substitution;
    return backtrack(0, used, substitution);
}

bool ATP::add_to_sos(Clause clause) {
    ScopedProfile profile("ATP::add_to_sos");
    clause = finalize_clause(std::move(clause));
    if (clause.inference != "input" && (int)clause.literals.size() > 6) {
        return false;
    }
    clause.signature = clause_signature(clause);
    if (seen_signatures_.count(clause.signature) > 0) {
        return false;
    }
    if (is_tautology(clause) || is_subsumed(clause)) {
        return false;
    }

    seen_signatures_.insert(clause.signature);
    sos_.push_back(clause);
    clause_index_[clause.id] = clause;
    add_clause_to_index(clause, false);
    return true;
}

Clause ATP::finalize_clause(Clause clause) {
    ScopedProfile profile("ATP::finalize_clause");
    if (clause.id == 0) {
        clause.id = next_clause_id_++;
        if (clause.name.empty()) {
            clause.name = "c" + std::to_string(clause.id);
        }
        clause = freshen_clause(clause, clause.id);
    }
    if (clause.name.empty()) {
        clause.name = "c" + std::to_string(clause.id);
    }
    clause.signature.clear();
    clause.head_counts.clear();
    for (const Literal& literal : clause.literals) {
        clause.head_counts[literal_head_key(literal)] += 1;
    }
    return clause;
}

void ATP::add_clause_to_index(const Clause& clause, bool usable_pool) {
    ScopedProfile profile("ATP::add_clause_to_index");
    std::unordered_set<std::string> seen_heads;
    auto& index = usable_pool ? usable_head_index_ : sos_head_index_;
    auto& ids = usable_pool ? usable_ids_ : sos_ids_;

    ids.insert(clause.id);
    for (const Literal& literal : clause.literals) {
        const std::string head = literal_head_key(literal);
        if (seen_heads.insert(head).second) {
            index[head].push_back(clause.id);
        }
    }
}

void ATP::remove_clause_from_sos_index(const Clause& clause) {
    ScopedProfile profile("ATP::remove_clause_from_sos_index");
    sos_ids_.erase(clause.id);
    for (const auto& entry : clause.head_counts) {
        auto found = sos_head_index_.find(entry.first);
        if (found != sos_head_index_.end()) {
            auto& ids = found->second;
            ids.erase(std::remove(ids.begin(), ids.end(), clause.id), ids.end());
        }
    }
}

std::vector<int> ATP::candidate_subsumer_ids(const Clause& candidate, bool usable_pool) const {
    ScopedProfile profile("ATP::candidate_subsumer_ids");
    std::vector<int> ids;
    std::unordered_set<int> seen_ids;
    std::unordered_set<std::string> seen_heads;

    const auto& index = usable_pool ? usable_head_index_ : sos_head_index_;
    const auto& active_ids = usable_pool ? usable_ids_ : sos_ids_;

    for (const Literal& literal : candidate.literals) {
        const std::string head = literal_head_key(literal);
        if (!seen_heads.insert(head).second) {
            continue;
        }

        auto found = index.find(head);
        if (found == index.end()) {
            continue;
        }

        for (int clause_id : found->second) {
            if (active_ids.count(clause_id) == 0) {
                continue;
            }
            if (seen_ids.insert(clause_id).second) {
                ids.push_back(clause_id);
            }
        }
    }

    return ids;
}
