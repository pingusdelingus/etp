#include "Clause.h"
#include "Profiler.h"

#include <map>
#include <set>
#include <sstream>

namespace {

std::string clause_formula_to_string(const std::vector<Literal>& literals) {
    if (literals.empty()) {
        return "$false";
    }

    std::ostringstream output;
    if (literals.size() == 1) {
        output << literals.front().to_string();
        return output.str();
    }

    output << "(";
    for (size_t index = 0; index < literals.size(); ++index) {
        if (index > 0) {
            output << " | ";
        }
        output << literals[index].to_string();
    }
    output << ")";
    return output.str();
}

}  // namespace

bool Clause::is_empty() const {
    ScopedProfile profile("Clause::is_empty");
    return literals.empty();
}

std::string Clause::to_string() const {
    ScopedProfile profile("Clause::to_string");
    return clause_formula_to_string(literals);
}

std::string Clause::to_tptp() const {
    ScopedProfile profile("Clause::to_tptp");
    std::ostringstream output;
    std::string clause_name = name.empty() ? "c" + std::to_string(id) : name;
    std::string clause_role = role.empty() ? "plain" : role;

    output << "cnf(" << clause_name << "," << clause_role << "," << to_string();

    if (!parents.empty()) {
        output << ",inference(" << inference << ",[],[";
        for (size_t index = 0; index < parents.size(); ++index) {
            if (index > 0) {
                output << ",";
            }
            output << "c" << parents[index];
        }
        output << "])";
    }

    output << ").";
    return output.str();
}

Clause apply_substitution(const Clause& clause, const Substitution& substitution) {
    ScopedProfile profile("apply_substitution(clause)");
    Clause applied = clause;
    applied.literals.clear();
    applied.literals.reserve(clause.literals.size());
    for (const Literal& literal : clause.literals) {
        applied.literals.push_back(apply_substitution(literal, substitution));
    }
    return applied;
}

Clause freshen_clause(const Clause& clause, int salt) {
    ScopedProfile profile("freshen_clause");
    Clause freshened = clause;
    Substitution renaming;

    for (const Literal& literal : clause.literals) {
        for (const std::shared_ptr<Term>& term : literal.terms) {
            std::vector<std::shared_ptr<Term>> agenda{term};
            while (!agenda.empty()) {
                std::shared_ptr<Term> current = agenda.back();
                agenda.pop_back();

                if (current->is_variable && renaming.find(current->name) == renaming.end()) {
                    auto renamed = std::make_shared<Term>();
                    renamed->name = current->name + "_" + std::to_string(salt);
                    renamed->is_variable = true;
                    renaming[current->name] = renamed;
                }

                for (const std::shared_ptr<Term>& argument : current->arguments) {
                    agenda.push_back(argument);
                }
            }
        }
    }

    freshened = apply_substitution(clause, renaming);
    freshened.id = clause.id;
    freshened.name = clause.name;
    freshened.role = clause.role;
    freshened.parents = clause.parents;
    freshened.inference = clause.inference;
    return freshened;
}

bool is_tautology(const Clause& clause) {
    ScopedProfile profile("is_tautology");
    for (size_t left = 0; left < clause.literals.size(); ++left) {
        for (size_t right = left + 1; right < clause.literals.size(); ++right) {
            const Literal& a = clause.literals[left];
            const Literal& b = clause.literals[right];
            if (a.predicate != b.predicate || a.is_negated == b.is_negated || a.terms.size() != b.terms.size()) {
                continue;
            }

            Substitution substitution;
            if (unify_literals(a, b, substitution)) {
                return true;
            }
        }
    }
    return false;
}
