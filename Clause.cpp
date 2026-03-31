#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>
#include "Literal.cpp"


class Clause {
public:
    int id;
    std::vector<Literal> literals;
    std::vector<int> parents; // For proof output tracking

    void print() const {
        for (size_t i = 0; i < literals.size(); ++i) {
            if (literals[i].is_negated) std::cout << "~";
            std::cout << literals[i].predicate << "(";
            // ... print terms ...
            std::cout << ")" << (i == literals.size() - 1 ? "" : " | ");
        }
        std::cout << std::endl;
    }
};
