#include "TPTPBaseVisitor.h"

class TPTPToInternalVisitor : public TPTPBaseVisitor {
public:
    // This matches the 'cnf' rule in your TPTP grammar
    antlrcpp::Any visitCnf_annotated(TPTPParser::Cnf_annotatedContext *ctx) override {
        Clause c;
        
        // Extracting information from: cnf(name, role, ( literals )).
        std::string name = ctx->name()->getText();
        std::string role = ctx->formula_role()->getText();

        // TODO: Iterate through literals in the parse tree
        // c.literals.push_back(parse_literal(ctx->cnf_formula()));

        return c;
    }
};
