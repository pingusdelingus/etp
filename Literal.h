#pragma once

#include <string>
#include <vector>

#include "Term.h"

struct Literal {
    std::string predicate;
    bool is_negated = false;
    std::vector<std::shared_ptr<Term>> terms;

    bool is_equality() const;
    bool same_shape_as(const Literal& other) const;
    std::string to_string() const;
};

Literal apply_substitution(const Literal& literal, const Substitution& substitution);
bool unify_literals(const Literal& left, const Literal& right, Substitution& substitution);
