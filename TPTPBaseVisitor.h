
// Generated from TPTP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TPTPVisitor.h"


/**
 * This class provides an empty implementation of TPTPVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TPTPBaseVisitor : public TPTPVisitor {
public:

  virtual std::any visitTptp_file(TPTPParser::Tptp_fileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTptp_input(TPTPParser::Tptp_inputContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotated_formula(TPTPParser::Annotated_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTpi_annotated(TPTPParser::Tpi_annotatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTpi_formula(TPTPParser::Tpi_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_annotated(TPTPParser::Thf_annotatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_annotated(TPTPParser::Tff_annotatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTcf_annotated(TPTPParser::Tcf_annotatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_annotated(TPTPParser::Fof_annotatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCnf_annotated(TPTPParser::Cnf_annotatedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotations(TPTPParser::AnnotationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormula_role(TPTPParser::Formula_roleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_formula(TPTPParser::Thf_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_logic_formula(TPTPParser::Thf_logic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_binary_formula(TPTPParser::Thf_binary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_binary_nonassoc(TPTPParser::Thf_binary_nonassocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_binary_assoc(TPTPParser::Thf_binary_assocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_or_formula(TPTPParser::Thf_or_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_and_formula(TPTPParser::Thf_and_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_apply_formula(TPTPParser::Thf_apply_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_unit_formula(TPTPParser::Thf_unit_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_preunit_formula(TPTPParser::Thf_preunit_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_unitary_formula(TPTPParser::Thf_unitary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_quantified_formula(TPTPParser::Thf_quantified_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_quantification(TPTPParser::Thf_quantificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_variable_list(TPTPParser::Thf_variable_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_typed_variable(TPTPParser::Thf_typed_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_unary_formula(TPTPParser::Thf_unary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_prefix_unary(TPTPParser::Thf_prefix_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_infix_unary(TPTPParser::Thf_infix_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_atomic_formula(TPTPParser::Thf_atomic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_plain_atomic(TPTPParser::Thf_plain_atomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_defined_atomic(TPTPParser::Thf_defined_atomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_defined_term(TPTPParser::Thf_defined_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_defined_infix(TPTPParser::Thf_defined_infixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_system_atomic(TPTPParser::Thf_system_atomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_let(TPTPParser::Thf_letContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_let_types(TPTPParser::Thf_let_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_atom_typing_list(TPTPParser::Thf_atom_typing_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_let_defns(TPTPParser::Thf_let_defnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_let_defn(TPTPParser::Thf_let_defnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_let_defn_list(TPTPParser::Thf_let_defn_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_unitary_term(TPTPParser::Thf_unitary_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_conn_term(TPTPParser::Thf_conn_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_tuple(TPTPParser::Thf_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_fof_function(TPTPParser::Thf_fof_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_arguments(TPTPParser::Thf_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_formula_list(TPTPParser::Thf_formula_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComma_thf_logic_formula(TPTPParser::Comma_thf_logic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_atom_typing(TPTPParser::Thf_atom_typingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_top_level_type(TPTPParser::Thf_top_level_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_unitary_type(TPTPParser::Thf_unitary_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_apply_type(TPTPParser::Thf_apply_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_binary_type(TPTPParser::Thf_binary_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_mapping_type(TPTPParser::Thf_mapping_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_xprod_type(TPTPParser::Thf_xprod_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_union_type(TPTPParser::Thf_union_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_subtype(TPTPParser::Thf_subtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_definition(TPTPParser::Thf_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_sequent(TPTPParser::Thf_sequentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_formula(TPTPParser::Tff_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_logic_formula(TPTPParser::Tff_logic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_binary_formula(TPTPParser::Tff_binary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_binary_nonassoc(TPTPParser::Tff_binary_nonassocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_binary_assoc(TPTPParser::Tff_binary_assocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_or_formula(TPTPParser::Tff_or_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_and_formula(TPTPParser::Tff_and_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_unit_formula(TPTPParser::Tff_unit_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_preunit_formula(TPTPParser::Tff_preunit_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_unitary_formula(TPTPParser::Tff_unitary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_unitary_formula(TPTPParser::Txf_unitary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_quantified_formula(TPTPParser::Tff_quantified_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_variable_list(TPTPParser::Tff_variable_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_variable(TPTPParser::Tff_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_typed_variable(TPTPParser::Tff_typed_variableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_unary_formula(TPTPParser::Tff_unary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_prefix_unary(TPTPParser::Tff_prefix_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_infix_unary(TPTPParser::Tff_infix_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_atomic_formula(TPTPParser::Tff_atomic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_plain_atomic(TPTPParser::Tff_plain_atomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_defined_atomic(TPTPParser::Tff_defined_atomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_defined_plain(TPTPParser::Tff_defined_plainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_defined_infix(TPTPParser::Tff_defined_infixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_system_atomic(TPTPParser::Tff_system_atomicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_let(TPTPParser::Txf_letContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_let_types(TPTPParser::Txf_let_typesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_atom_typing_list(TPTPParser::Tff_atom_typing_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_let_defns(TPTPParser::Txf_let_defnsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_let_defn(TPTPParser::Txf_let_defnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_let_LHS(TPTPParser::Txf_let_LHSContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_let_defn_list(TPTPParser::Txf_let_defn_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNxf_atom(TPTPParser::Nxf_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_term(TPTPParser::Tff_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_unitary_term(TPTPParser::Tff_unitary_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_tuple(TPTPParser::Txf_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_arguments(TPTPParser::Tff_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComma_tff_term(TPTPParser::Comma_tff_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_atom_typing(TPTPParser::Tff_atom_typingContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_top_level_type(TPTPParser::Tff_top_level_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_non_atomic_type(TPTPParser::Tff_non_atomic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTf1_quantified_type(TPTPParser::Tf1_quantified_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_monotype(TPTPParser::Tff_monotypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_unitary_type(TPTPParser::Tff_unitary_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_atomic_type(TPTPParser::Tff_atomic_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_type_arguments(TPTPParser::Tff_type_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_mapping_type(TPTPParser::Tff_mapping_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_xprod_type(TPTPParser::Tff_xprod_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_tuple_type(TPTPParser::Txf_tuple_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_type_list(TPTPParser::Tff_type_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_subtype(TPTPParser::Tff_subtypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_definition(TPTPParser::Txf_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTxf_sequent(TPTPParser::Txf_sequentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNhf_long_connective(TPTPParser::Nhf_long_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNhf_parameter_list(TPTPParser::Nhf_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNhf_parameter(TPTPParser::Nhf_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNhf_key_pair(TPTPParser::Nhf_key_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNxf_long_connective(TPTPParser::Nxf_long_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNxf_parameter_list(TPTPParser::Nxf_parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNxf_parameter(TPTPParser::Nxf_parameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNxf_key_pair(TPTPParser::Nxf_key_pairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNtf_connective_name(TPTPParser::Ntf_connective_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNtf_index(TPTPParser::Ntf_indexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNtf_short_connective(TPTPParser::Ntf_short_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTcf_formula(TPTPParser::Tcf_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTcf_logic_formula(TPTPParser::Tcf_logic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTcf_quantified_formula(TPTPParser::Tcf_quantified_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_formula(TPTPParser::Fof_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_logic_formula(TPTPParser::Fof_logic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_binary_formula(TPTPParser::Fof_binary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_binary_nonassoc(TPTPParser::Fof_binary_nonassocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_binary_assoc(TPTPParser::Fof_binary_assocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_or_formula(TPTPParser::Fof_or_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_and_formula(TPTPParser::Fof_and_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_unary_formula(TPTPParser::Fof_unary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_infix_unary(TPTPParser::Fof_infix_unaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_unit_formula(TPTPParser::Fof_unit_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_unitary_formula(TPTPParser::Fof_unitary_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_quantified_formula(TPTPParser::Fof_quantified_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_variable_list(TPTPParser::Fof_variable_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_atomic_formula(TPTPParser::Fof_atomic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_plain_atomic_formula(TPTPParser::Fof_plain_atomic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_defined_atomic_formula(TPTPParser::Fof_defined_atomic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_defined_plain_formula(TPTPParser::Fof_defined_plain_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_defined_infix_formula(TPTPParser::Fof_defined_infix_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_system_atomic_formula(TPTPParser::Fof_system_atomic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_plain_term(TPTPParser::Fof_plain_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_defined_term(TPTPParser::Fof_defined_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_defined_atomic_term(TPTPParser::Fof_defined_atomic_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_defined_plain_term(TPTPParser::Fof_defined_plain_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_system_term(TPTPParser::Fof_system_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_arguments(TPTPParser::Fof_argumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_term(TPTPParser::Fof_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_function_term(TPTPParser::Fof_function_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_sequent(TPTPParser::Fof_sequentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_formula_tuple(TPTPParser::Fof_formula_tupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_formula_tuple_list(TPTPParser::Fof_formula_tuple_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComma_fof_logic_formula(TPTPParser::Comma_fof_logic_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCnf_formula(TPTPParser::Cnf_formulaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCnf_disjunction(TPTPParser::Cnf_disjunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCnf_literal(TPTPParser::Cnf_literalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_quantifier(TPTPParser::Thf_quantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThf_unary_connective(TPTPParser::Thf_unary_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTh1_quantifier(TPTPParser::Th1_quantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTh0_quantifier(TPTPParser::Th0_quantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubtype_sign(TPTPParser::Subtype_signContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_unary_connective(TPTPParser::Tff_unary_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTff_quantifier(TPTPParser::Tff_quantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFof_quantifier(TPTPParser::Fof_quantifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNonassoc_connective(TPTPParser::Nonassoc_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssoc_connective(TPTPParser::Assoc_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary_connective(TPTPParser::Unary_connectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGentzen_arrow(TPTPParser::Gentzen_arrowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(TPTPParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentical(TPTPParser::IdenticalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_constant(TPTPParser::Type_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType_functor(TPTPParser::Type_functorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefined_type(TPTPParser::Defined_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(TPTPParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUntyped_atom(TPTPParser::Untyped_atomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefined_infix_pred(TPTPParser::Defined_infix_predContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfix_equality(TPTPParser::Infix_equalityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInfix_inequality(TPTPParser::Infix_inequalityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(TPTPParser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctor(TPTPParser::FunctorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefined_constant(TPTPParser::Defined_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefined_functor(TPTPParser::Defined_functorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSystem_constant(TPTPParser::System_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSystem_functor(TPTPParser::System_functorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef_or_sys_constant(TPTPParser::Def_or_sys_constantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTh1_defined_term(TPTPParser::Th1_defined_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefined_term(TPTPParser::Defined_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable(TPTPParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSource(TPTPParser::SourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSources(TPTPParser::SourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDag_source(TPTPParser::Dag_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInference_record(TPTPParser::Inference_recordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInference_rule(TPTPParser::Inference_ruleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInternal_source(TPTPParser::Internal_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntro_type(TPTPParser::Intro_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExternal_source(TPTPParser::External_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_source(TPTPParser::File_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_info(TPTPParser::File_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheory(TPTPParser::TheoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTheory_name(TPTPParser::Theory_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreator_source(TPTPParser::Creator_sourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCreator_name(TPTPParser::Creator_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParents(TPTPParser::ParentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParent_list(TPTPParser::Parent_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComma_parent_info(TPTPParser::Comma_parent_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParent_info(TPTPParser::Parent_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParent_details(TPTPParser::Parent_detailsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOptional_info(TPTPParser::Optional_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUseful_info(TPTPParser::Useful_infoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude(TPTPParser::IncludeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclude_optionals(TPTPParser::Include_optionalsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormula_selection(TPTPParser::Formula_selectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName_list(TPTPParser::Name_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSpace_name(TPTPParser::Space_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneral_term(TPTPParser::General_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneral_data(TPTPParser::General_dataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneral_function(TPTPParser::General_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormula_data(TPTPParser::Formula_dataContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneral_list(TPTPParser::General_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGeneral_terms(TPTPParser::General_termsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComma_general_term(TPTPParser::Comma_general_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName(TPTPParser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomic_word(TPTPParser::Atomic_wordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomic_defined_word(TPTPParser::Atomic_defined_wordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtomic_system_word(TPTPParser::Atomic_system_wordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(TPTPParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFile_name(TPTPParser::File_nameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNothing(TPTPParser::NothingContext *ctx) override {
    return visitChildren(ctx);
  }


};

