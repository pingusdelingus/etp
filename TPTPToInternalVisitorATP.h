#pragma once

#include <string>

#include "ATP.h"
#include "antlr4-runtime.h"
#include "TPTPParser.h"

class TPTPProblemParser {
public:
    Problem parse(TPTPParser::Tptp_fileContext* file) const;

private:
    Clause parse_clause(TPTPParser::Cnf_annotatedContext* ctx) const;
    Literal parse_literal(TPTPParser::Cnf_literalContext* ctx) const;
    Literal parse_atomic_formula(TPTPParser::Fof_atomic_formulaContext* ctx, bool is_negated) const;
    Literal parse_inequality(TPTPParser::Fof_infix_unaryContext* ctx) const;
    std::shared_ptr<Term> parse_term(TPTPParser::Fof_termContext* ctx) const;
    std::shared_ptr<Term> parse_plain_term(TPTPParser::Fof_plain_termContext* ctx) const;
    std::shared_ptr<Term> parse_defined_term(TPTPParser::Fof_defined_termContext* ctx) const;
    std::shared_ptr<Term> parse_system_term(TPTPParser::Fof_system_termContext* ctx) const;
    std::vector<std::shared_ptr<Term>> parse_arguments(TPTPParser::Fof_argumentsContext* ctx) const;
    std::string parse_name(TPTPParser::NameContext* ctx) const;
};
