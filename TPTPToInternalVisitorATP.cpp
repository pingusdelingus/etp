#include "TPTPToInternalVisitorATP.h"
#include "Profiler.h"

#include <stdexcept>

namespace {

template <typename ContextType>
std::string text_or_empty(ContextType* ctx) {
    return ctx ? ctx->getText() : "";
}

}  // namespace

Problem TPTPProblemParser::parse(TPTPParser::Tptp_fileContext* file) const {
    ScopedProfile profile("TPTPProblemParser::parse");
    Problem problem;

    for (TPTPParser::Tptp_inputContext* input : file->tptp_input()) {
        if (!input->annotated_formula() || !input->annotated_formula()->cnf_annotated()) {
            continue;
        }

        Clause clause = parse_clause(input->annotated_formula()->cnf_annotated());
        if (clause.role == "negated_conjecture") {
            problem.sos.push_back(std::move(clause));
        } else {
            problem.usable.push_back(std::move(clause));
        }
    }

    if (problem.sos.empty()) {
        problem.sos = problem.usable;
        problem.usable.clear();
    }

    return problem;
}

Clause TPTPProblemParser::parse_clause(TPTPParser::Cnf_annotatedContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_clause");
    Clause clause;
    clause.name = parse_name(ctx->name());
    clause.role = ctx->formula_role()->getText();
    clause.inference = "input";

    std::function<void(TPTPParser::Cnf_disjunctionContext*)> collect =
        [&](TPTPParser::Cnf_disjunctionContext* disjunction) {
            if (!disjunction) {
                return;
            }
            if (disjunction->cnf_disjunction()) {
                collect(disjunction->cnf_disjunction());
            }
            clause.literals.push_back(parse_literal(disjunction->cnf_literal()));
        };

    TPTPParser::Cnf_formulaContext* formula = ctx->cnf_formula();
    while (formula && formula->cnf_formula()) {
        formula = formula->cnf_formula();
    }

    if (formula && formula->cnf_disjunction()) {
        collect(formula->cnf_disjunction());
    }

    return clause;
}

Literal TPTPProblemParser::parse_literal(TPTPParser::Cnf_literalContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_literal");
    if (ctx->fof_infix_unary()) {
        return parse_inequality(ctx->fof_infix_unary());
    }

    const bool is_negated = !ctx->getText().empty() && ctx->getText()[0] == '~';
    return parse_atomic_formula(ctx->fof_atomic_formula(), is_negated);
}

Literal TPTPProblemParser::parse_atomic_formula(TPTPParser::Fof_atomic_formulaContext* ctx, bool is_negated) const {
    ScopedProfile profile("TPTPProblemParser::parse_atomic_formula");
    Literal literal;
    literal.is_negated = is_negated;

    if (ctx->fof_plain_atomic_formula()) {
        TPTPParser::Fof_plain_termContext* term = ctx->fof_plain_atomic_formula()->fof_plain_term();
        literal.predicate = text_or_empty(term->functor() ? term->functor()->atomic_word() : nullptr);
        literal.terms = parse_arguments(term->fof_arguments());
        if (!term->functor()) {
            literal.predicate = term->constant()->getText();
        }
        return literal;
    }

    if (ctx->fof_defined_atomic_formula() && ctx->fof_defined_atomic_formula()->fof_defined_infix_formula()) {
        TPTPParser::Fof_defined_infix_formulaContext* infix = ctx->fof_defined_atomic_formula()->fof_defined_infix_formula();
        literal.predicate = infix->defined_infix_pred()->getText();
        literal.terms.push_back(parse_term(infix->fof_term(0)));
        literal.terms.push_back(parse_term(infix->fof_term(1)));
        return literal;
    }

    throw std::runtime_error("Unsupported CNF atomic formula: " + ctx->getText());
}

Literal TPTPProblemParser::parse_inequality(TPTPParser::Fof_infix_unaryContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_inequality");
    Literal literal;
    literal.predicate = "=";
    literal.is_negated = true;
    literal.terms.push_back(parse_term(ctx->fof_term(0)));
    literal.terms.push_back(parse_term(ctx->fof_term(1)));
    return literal;
}

std::shared_ptr<Term> TPTPProblemParser::parse_term(TPTPParser::Fof_termContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_term");
    if (ctx->variable()) {
        auto variable = std::make_shared<Term>();
        variable->name = ctx->variable()->getText();
        variable->is_variable = true;
        return variable;
    }

    TPTPParser::Fof_function_termContext* function = ctx->fof_function_term();
    if (function->fof_plain_term()) {
        return parse_plain_term(function->fof_plain_term());
    }
    if (function->fof_defined_term()) {
        return parse_defined_term(function->fof_defined_term());
    }
    if (function->fof_system_term()) {
        return parse_system_term(function->fof_system_term());
    }

    throw std::runtime_error("Unsupported term: " + ctx->getText());
}

std::shared_ptr<Term> TPTPProblemParser::parse_plain_term(TPTPParser::Fof_plain_termContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_plain_term");
    auto term = std::make_shared<Term>();
    term->is_variable = false;
    term->name = ctx->functor() ? ctx->functor()->getText() : ctx->constant()->getText();
    term->arguments = parse_arguments(ctx->fof_arguments());
    return term;
}

std::shared_ptr<Term> TPTPProblemParser::parse_defined_term(TPTPParser::Fof_defined_termContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_defined_term");
    auto term = std::make_shared<Term>();
    term->is_variable = false;

    if (ctx->defined_term()) {
        term->name = ctx->defined_term()->getText();
        return term;
    }

    TPTPParser::Fof_defined_plain_termContext* defined = ctx->fof_defined_atomic_term()->fof_defined_plain_term();
    term->name = defined->defined_functor() ? defined->defined_functor()->getText() : defined->defined_constant()->getText();
    term->arguments = parse_arguments(defined->fof_arguments());
    return term;
}

std::shared_ptr<Term> TPTPProblemParser::parse_system_term(TPTPParser::Fof_system_termContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_system_term");
    auto term = std::make_shared<Term>();
    term->is_variable = false;
    term->name = ctx->system_functor() ? ctx->system_functor()->getText() : ctx->system_constant()->getText();
    term->arguments = parse_arguments(ctx->fof_arguments());
    return term;
}

std::vector<std::shared_ptr<Term>> TPTPProblemParser::parse_arguments(TPTPParser::Fof_argumentsContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_arguments");
    std::vector<std::shared_ptr<Term>> arguments;
    if (!ctx) {
        return arguments;
    }

    std::function<void(TPTPParser::Fof_argumentsContext*)> collect =
        [&](TPTPParser::Fof_argumentsContext* current) {
            arguments.push_back(parse_term(current->fof_term()));
            if (current->fof_arguments()) {
                collect(current->fof_arguments());
            }
        };

    collect(ctx);
    return arguments;
}

std::string TPTPProblemParser::parse_name(TPTPParser::NameContext* ctx) const {
    ScopedProfile profile("TPTPProblemParser::parse_name");
    return ctx->getText();
}
