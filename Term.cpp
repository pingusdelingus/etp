#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>


struct Term {
    std::string name;
    bool is_variable;
    std::vector<std::shared_ptr<Term>> arguments; // For functional terms like f(X)
};
