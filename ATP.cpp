#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>

#include "Clause.cpp"
#include "Literal.cpp"
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

    bool run_anl_loop(int timeout_seconds) {
        while (!sos.empty()) {
            Clause given = sos.front(); 
            sos.erase(sos.begin());

            for (const Clause& target : usable) {
                Clause resolvent = resolve(given, target);
                if (resolvent.literals.empty()) {
                    std::cout << "unsat! empty clause found" << std::endl;
                    return true;
                


          }// end of fof
        }// end of while
                
                if (!is_subsumed(resolvent)) {
                    add_to_sos(resolvent);
                }
            }// run_anl

            usable.push_back(given);
        }
        return false; 
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
