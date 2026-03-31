
#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>

#include "Term.cpp"

struct Literal {
    std::string predicate;
    bool is_negated;
    std::vector<std::shared_ptr<Term>> terms;

    bool opposes(const Literal& other) const {
        return predicate == other.predicate && is_negated != other.is_negated;
    }
};
