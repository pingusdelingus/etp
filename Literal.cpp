#include "Literal.h"
#include "Profiler.h"

#include <sstream>

bool Literal::is_equality() const {
    ScopedProfile profile("Literal::is_equality");
    return predicate == "=" && terms.size() == 2;
}

bool Literal::same_shape_as(const Literal& other) const {
    ScopedProfile profile("Literal::same_shape_as");
    return predicate == other.predicate && is_negated == other.is_negated && terms.size() == other.terms.size();
}

std::string Literal::to_string() const {
    ScopedProfile profile("Literal::to_string");
    std::ostringstream output;
    if (is_negated) {
        output << "~";
    }

    if (is_equality()) {
        output << terms[0]->to_string() << "=" << terms[1]->to_string();
        return output.str();
    }

    output << predicate;
    if (!terms.empty()) {
        output << "(";
        for (size_t index = 0; index < terms.size(); ++index) {
            if (index > 0) {
                output << ",";
            }
            output << terms[index]->to_string();
        }
        output << ")";
    }
    return output.str();
}

Literal apply_substitution(const Literal& literal, const Substitution& substitution) {
    ScopedProfile profile("apply_substitution(literal)");
    Literal applied = literal;
    applied.terms.clear();
    applied.terms.reserve(literal.terms.size());
    for (const std::shared_ptr<Term>& term : literal.terms) {
        applied.terms.push_back(apply_substitution(term, substitution));
    }
    return applied;
}

bool unify_literals(const Literal& left, const Literal& right, Substitution& substitution) {
    ScopedProfile profile("unify_literals");
    if (left.predicate != right.predicate || left.terms.size() != right.terms.size()) {
        return false;
    }

    for (size_t index = 0; index < left.terms.size(); ++index) {
        if (!unify_terms(left.terms[index], right.terms[index], substitution)) {
            return false;
        }
    }

    return true;
}
