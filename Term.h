#pragma once

#include <map>
#include <memory>
#include <string>
#include <vector>

struct Term {
    std::string name;
    bool is_variable = false;
    std::vector<std::shared_ptr<Term>> arguments;

    bool operator==(const Term& other) const;
    std::string to_string() const;
};

using Substitution = std::map<std::string, std::shared_ptr<Term>>;

std::shared_ptr<Term> clone_term(const std::shared_ptr<Term>& term);
bool term_equals(const std::shared_ptr<Term>& left, const std::shared_ptr<Term>& right);
std::shared_ptr<Term> apply_substitution(const std::shared_ptr<Term>& term, const Substitution& substitution);
bool unify_terms(const std::shared_ptr<Term>& left, const std::shared_ptr<Term>& right, Substitution& substitution);
