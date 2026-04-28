#include <fstream>
#include <iostream>
#include <string>

#include "ATP.h"
#include "Profiler.h"
#include "TPTPToInternalVisitorATP.h"
#include "antlr4-runtime.h"
#include "TPTPLexer.h"
#include "TPTPParser.h"

int main(int argc, const char* argv[]) {
    bool profile_enabled = false;
    std::string input_path = "ANLLoopProblems/PUZ001-1.p";
    for (int index = 1; index < argc; ++index) {
        const std::string argument = argv[index];
        if (argument == "--profile") {
            profile_enabled = true;
        } else {
            input_path = argument;
        }
    }
    const std::string proof_path = "proof.out";
    Profiler::set_enabled(profile_enabled);

    std::ifstream stream(input_path);
    if (!stream) {
        std::cerr << "Failed to open input file: " << input_path << "\n";
        return 1;
    }

    antlr4::ANTLRInputStream input(stream);
    TPTPLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    TPTPParser parser(&tokens);
    TPTPParser::Tptp_fileContext* tree = parser.tptp_file();

    if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing failed with " << parser.getNumberOfSyntaxErrors() << " syntax errors\n";
        return 1;
    }

    try {
        const auto parse_start = std::chrono::steady_clock::now();
        TPTPProblemParser problem_parser;
        Problem problem = problem_parser.parse(tree);
        const auto parse_elapsed = std::chrono::steady_clock::now() - parse_start;

        std::cout << "% Loaded " << problem.usable.size() << " usable clauses and " << problem.sos.size()
                  << " set-of-support clauses from " << input_path << "\n";
        if (profile_enabled) {
            std::cout << "% Parse time: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(parse_elapsed).count()
                      << " ms\n";
        }

        ATP prover(std::move(problem));
        const auto reasoning_start = std::chrono::steady_clock::now();
        RunResult result = prover.run_anl_loop(60);
        const auto reasoning_elapsed = std::chrono::steady_clock::now() - reasoning_start;
        if (profile_enabled) {
            std::cout << "% Reasoning time: "
                      << std::chrono::duration_cast<std::chrono::milliseconds>(reasoning_elapsed).count()
                      << " ms\n";
        }

        if (result.refuted) {
            if (!prover.write_proof(proof_path, result.final_clause)) {
                std::cerr << "% Status: Unsatisfiable\n";
                std::cerr << "% Proof found, but proof file could not be written to " << proof_path << "\n";
                return 1;
            }

            std::cout << "% Status: Unsatisfiable\n";
            std::cout << "% Refutation found. Proof written to " << proof_path << "\n";
            Profiler::print_report(std::cout);
            return 0;
        }

        std::cout << "% Status: GaveUp/Satisfiable\n";
        std::cout << "% Reason: " << result.reason << "\n";
        Profiler::print_report(std::cout);
        return result.timed_out ? 2 : 0;
    } catch (const std::exception& error) {
        std::cerr << "ETP failed: " << error.what() << "\n";
        return 1;
    }
}
