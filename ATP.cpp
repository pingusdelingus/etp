#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>

#include "Clause.cpp"
#include "Literal.cpp"
#include ""
class ATP {
private:
    std::vector<Clause> usable;
    std::vector<Clause> sos;
    int clause_counter = 0;

public:
    void add_to_sos(Clause c) {
        c.id = ++clause_counter;
        sos.push_back(c);
    }

    // The core ANL Loop
    bool run_anl_loop(int timeout_seconds) {
        while (!sos.empty()) {
            // 1. Pick a "Given Clause" from SOS (Heuristics go here!)
            Clause given = sos.front(); 
            sos.erase(sos.begin());

            // 2. Resolve 'given' with everything in 'usable'
            for (const auto& target : usable) {
                Clause resolvent = resolve(given, target);
                if (resolvent.literals.empty()) {
                    std::cout << "Unsatisfiable! (Empty clause found)" << std::endl;
                    return true;
                }
                
                // 3. Subsumption check (Feature to implement)
                if (!is_subsumed(resolvent)) {
                    add_to_sos(resolvent);
                }
            }

            usable.push_back(given);
        }
        return false; // Satisfiable or ran out of clauses
    }

    Clause resolve(Clause c1, Clause c2) {
        // TODO: Implement Unification and Binary Resolution
        return Clause(); 
    }

    bool is_subsumed(Clause c) {
        // TODO: Implement forward/backward subsumption
        return false;
    }
};
