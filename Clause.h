#pragma once

#include <map>
#include <string>
#include <vector>

#include "Literal.h"

class Clause {
public:
    int id = 0;
    std::string name;
    std::string role;
    std::vector<Literal> literals;
    std::vector<int> parents;
    std::string inference = "input";
    std::string signature;
    std::map<std::string, int> head_counts;

    bool is_empty() const;
    std::string to_string() const;
    std::string to_tptp() const;
};

Clause apply_substitution(const Clause& clause, const Substitution& substitution);
Clause freshen_clause(const Clause& clause, int salt);
bool is_tautology(const Clause& clause);
