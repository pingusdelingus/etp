#include "Term.h"
#include "Profiler.h"

#include <sstream>

namespace {

bool occurs_in(const std::string& variable_name, const std::shared_ptr<Term>& term, const Substitution& substitution) {
    std::shared_ptr<Term> resolved = apply_substitution(term, substitution);
    if (!resolved) {
        return false;
    }

    if (resolved->is_variable && resolved->name == variable_name) {
        return true;
    }

    for (const std::shared_ptr<Term>& argument : resolved->arguments) {
        if (occurs_in(variable_name, argument, substitution)) {
            return true;
        }
    }

    return false;
}

bool bind_variable(const std::shared_ptr<Term>& variable, const std::shared_ptr<Term>& term, Substitution& substitution) {
    auto existing = substitution.find(variable->name);
    if (existing != substitution.end()) {
        return unify_terms(existing->second, term, substitution);
    }

    if (term->is_variable) {
        auto other = substitution.find(term->name);
        if (other != substitution.end()) {
            return unify_terms(variable, other->second, substitution);
        }
    }

    if (occurs_in(variable->name, term, substitution)) {
        return false;
    }

    substitution[variable->name] = clone_term(term);
    return true;
}

}  // namespace

bool Term::operator==(const Term& other) const {
    ScopedProfile profile("Term::operator==");
    if (name != other.name || is_variable != other.is_variable || arguments.size() != other.arguments.size()) {
        return false;
    }

    for (size_t index = 0; index < arguments.size(); ++index) {
        if (!term_equals(arguments[index], other.arguments[index])) {
            return false;
        }
    }

    return true;
}

std::string Term::to_string() const {
    ScopedProfile profile("Term::to_string");
    if (arguments.empty()) {
        return name;
    }

    std::ostringstream output;
    output << name << "(";
    for (size_t index = 0; index < arguments.size(); ++index) {
        if (index > 0) {
            output << ",";
        }
        output << arguments[index]->to_string();
    }
    output << ")";
    return output.str();
}

std::shared_ptr<Term> clone_term(const std::shared_ptr<Term>& term) {
    ScopedProfile profile("clone_term");
    if (!term) {
        return nullptr;
    }

    auto copy = std::make_shared<Term>();
    copy->name = term->name;
    copy->is_variable = term->is_variable;
    copy->arguments.reserve(term->arguments.size());
    for (const std::shared_ptr<Term>& argument : term->arguments) {
        copy->arguments.push_back(clone_term(argument));
    }
    return copy;
}

bool term_equals(const std::shared_ptr<Term>& left, const std::shared_ptr<Term>& right) {
    ScopedProfile profile("term_equals");
    if (!left || !right) {
        return left == right;
    }
    return *left == *right;
}

std::shared_ptr<Term> apply_substitution(const std::shared_ptr<Term>& term, const Substitution& substitution) {
    ScopedProfile profile("apply_substitution(term)");
    if (!term) {
        return nullptr;
    }

    if (term->is_variable) {
        auto found = substitution.find(term->name);
        if (found != substitution.end()) {
            return apply_substitution(found->second, substitution);
        }
    }

    auto copy = std::make_shared<Term>();
    copy->name = term->name;
    copy->is_variable = term->is_variable;
    copy->arguments.reserve(term->arguments.size());
    for (const std::shared_ptr<Term>& argument : term->arguments) {
        copy->arguments.push_back(apply_substitution(argument, substitution));
    }
    return copy;
}

bool unify_terms(const std::shared_ptr<Term>& left, const std::shared_ptr<Term>& right, Substitution& substitution) {
    ScopedProfile profile("unify_terms");
    std::shared_ptr<Term> left_applied = apply_substitution(left, substitution);
    std::shared_ptr<Term> right_applied = apply_substitution(right, substitution);

    if (term_equals(left_applied, right_applied)) {
        return true;
    }

    if (left_applied->is_variable) {
        return bind_variable(left_applied, right_applied, substitution);
    }

    if (right_applied->is_variable) {
        return bind_variable(right_applied, left_applied, substitution);
    }

    if (left_applied->name != right_applied->name || left_applied->arguments.size() != right_applied->arguments.size()) {
        return false;
    }

    for (size_t index = 0; index < left_applied->arguments.size(); ++index) {
        if (!unify_terms(left_applied->arguments[index], right_applied->arguments[index], substitution)) {
            return false;
        }
    }

    return true;
}
