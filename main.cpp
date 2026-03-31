#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <map>

#include "antlr4-runtime.h"
#include "TPTPLexer.h"
#include "TPTPParser.h"
#include "ATP.cpp"
int main(int argc, const char* argv[]) {
    // 1. Setup the input stream (can be a file or string)
    std::ifstream stream;
    stream.open("./assignment-03-pingusdelingus/ANLLoopProblems/PUZ001-1.p");

    antlr4::ANTLRInputStream input(stream);

    // 2. Create the Lexer
    TPTPLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    // 3. Create the Parser
    TPTPParser parser(&tokens);

    // 4. Call a rule (replace 'tptp_file' with your actual top-level rule name)
    antlr4::tree::ParseTree* tree = parser.tptp_file();

// 4. Initialize ATP and run
    ATP prover;
    for (auto& c : initial_clauses) {
        prover.add_to_sos(c);
    }

    if (prover.run_anl_loop(60)) {
        std::cout << "% Status: Unsatisfiable" << std::endl;
    } else {
        std::cout << "% Status: GaveUp/Satisfiable" << std::endl;
    }

    return 0;
}
