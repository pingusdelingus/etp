
// Generated from TPTP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "TPTPParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TPTPParser.
 */
class  TPTPListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTptp_file(TPTPParser::Tptp_fileContext *ctx) = 0;
  virtual void exitTptp_file(TPTPParser::Tptp_fileContext *ctx) = 0;

  virtual void enterTptp_input(TPTPParser::Tptp_inputContext *ctx) = 0;
  virtual void exitTptp_input(TPTPParser::Tptp_inputContext *ctx) = 0;

  virtual void enterAnnotated_formula(TPTPParser::Annotated_formulaContext *ctx) = 0;
  virtual void exitAnnotated_formula(TPTPParser::Annotated_formulaContext *ctx) = 0;

  virtual void enterTpi_annotated(TPTPParser::Tpi_annotatedContext *ctx) = 0;
  virtual void exitTpi_annotated(TPTPParser::Tpi_annotatedContext *ctx) = 0;

  virtual void enterTpi_formula(TPTPParser::Tpi_formulaContext *ctx) = 0;
  virtual void exitTpi_formula(TPTPParser::Tpi_formulaContext *ctx) = 0;

  virtual void enterThf_annotated(TPTPParser::Thf_annotatedContext *ctx) = 0;
  virtual void exitThf_annotated(TPTPParser::Thf_annotatedContext *ctx) = 0;

  virtual void enterTff_annotated(TPTPParser::Tff_annotatedContext *ctx) = 0;
  virtual void exitTff_annotated(TPTPParser::Tff_annotatedContext *ctx) = 0;

  virtual void enterTcf_annotated(TPTPParser::Tcf_annotatedContext *ctx) = 0;
  virtual void exitTcf_annotated(TPTPParser::Tcf_annotatedContext *ctx) = 0;

  virtual void enterFof_annotated(TPTPParser::Fof_annotatedContext *ctx) = 0;
  virtual void exitFof_annotated(TPTPParser::Fof_annotatedContext *ctx) = 0;

  virtual void enterCnf_annotated(TPTPParser::Cnf_annotatedContext *ctx) = 0;
  virtual void exitCnf_annotated(TPTPParser::Cnf_annotatedContext *ctx) = 0;

  virtual void enterAnnotations(TPTPParser::AnnotationsContext *ctx) = 0;
  virtual void exitAnnotations(TPTPParser::AnnotationsContext *ctx) = 0;

  virtual void enterFormula_role(TPTPParser::Formula_roleContext *ctx) = 0;
  virtual void exitFormula_role(TPTPParser::Formula_roleContext *ctx) = 0;

  virtual void enterThf_formula(TPTPParser::Thf_formulaContext *ctx) = 0;
  virtual void exitThf_formula(TPTPParser::Thf_formulaContext *ctx) = 0;

  virtual void enterThf_logic_formula(TPTPParser::Thf_logic_formulaContext *ctx) = 0;
  virtual void exitThf_logic_formula(TPTPParser::Thf_logic_formulaContext *ctx) = 0;

  virtual void enterThf_binary_formula(TPTPParser::Thf_binary_formulaContext *ctx) = 0;
  virtual void exitThf_binary_formula(TPTPParser::Thf_binary_formulaContext *ctx) = 0;

  virtual void enterThf_binary_nonassoc(TPTPParser::Thf_binary_nonassocContext *ctx) = 0;
  virtual void exitThf_binary_nonassoc(TPTPParser::Thf_binary_nonassocContext *ctx) = 0;

  virtual void enterThf_binary_assoc(TPTPParser::Thf_binary_assocContext *ctx) = 0;
  virtual void exitThf_binary_assoc(TPTPParser::Thf_binary_assocContext *ctx) = 0;

  virtual void enterThf_or_formula(TPTPParser::Thf_or_formulaContext *ctx) = 0;
  virtual void exitThf_or_formula(TPTPParser::Thf_or_formulaContext *ctx) = 0;

  virtual void enterThf_and_formula(TPTPParser::Thf_and_formulaContext *ctx) = 0;
  virtual void exitThf_and_formula(TPTPParser::Thf_and_formulaContext *ctx) = 0;

  virtual void enterThf_apply_formula(TPTPParser::Thf_apply_formulaContext *ctx) = 0;
  virtual void exitThf_apply_formula(TPTPParser::Thf_apply_formulaContext *ctx) = 0;

  virtual void enterThf_unit_formula(TPTPParser::Thf_unit_formulaContext *ctx) = 0;
  virtual void exitThf_unit_formula(TPTPParser::Thf_unit_formulaContext *ctx) = 0;

  virtual void enterThf_preunit_formula(TPTPParser::Thf_preunit_formulaContext *ctx) = 0;
  virtual void exitThf_preunit_formula(TPTPParser::Thf_preunit_formulaContext *ctx) = 0;

  virtual void enterThf_unitary_formula(TPTPParser::Thf_unitary_formulaContext *ctx) = 0;
  virtual void exitThf_unitary_formula(TPTPParser::Thf_unitary_formulaContext *ctx) = 0;

  virtual void enterThf_quantified_formula(TPTPParser::Thf_quantified_formulaContext *ctx) = 0;
  virtual void exitThf_quantified_formula(TPTPParser::Thf_quantified_formulaContext *ctx) = 0;

  virtual void enterThf_quantification(TPTPParser::Thf_quantificationContext *ctx) = 0;
  virtual void exitThf_quantification(TPTPParser::Thf_quantificationContext *ctx) = 0;

  virtual void enterThf_variable_list(TPTPParser::Thf_variable_listContext *ctx) = 0;
  virtual void exitThf_variable_list(TPTPParser::Thf_variable_listContext *ctx) = 0;

  virtual void enterThf_typed_variable(TPTPParser::Thf_typed_variableContext *ctx) = 0;
  virtual void exitThf_typed_variable(TPTPParser::Thf_typed_variableContext *ctx) = 0;

  virtual void enterThf_unary_formula(TPTPParser::Thf_unary_formulaContext *ctx) = 0;
  virtual void exitThf_unary_formula(TPTPParser::Thf_unary_formulaContext *ctx) = 0;

  virtual void enterThf_prefix_unary(TPTPParser::Thf_prefix_unaryContext *ctx) = 0;
  virtual void exitThf_prefix_unary(TPTPParser::Thf_prefix_unaryContext *ctx) = 0;

  virtual void enterThf_infix_unary(TPTPParser::Thf_infix_unaryContext *ctx) = 0;
  virtual void exitThf_infix_unary(TPTPParser::Thf_infix_unaryContext *ctx) = 0;

  virtual void enterThf_atomic_formula(TPTPParser::Thf_atomic_formulaContext *ctx) = 0;
  virtual void exitThf_atomic_formula(TPTPParser::Thf_atomic_formulaContext *ctx) = 0;

  virtual void enterThf_plain_atomic(TPTPParser::Thf_plain_atomicContext *ctx) = 0;
  virtual void exitThf_plain_atomic(TPTPParser::Thf_plain_atomicContext *ctx) = 0;

  virtual void enterThf_defined_atomic(TPTPParser::Thf_defined_atomicContext *ctx) = 0;
  virtual void exitThf_defined_atomic(TPTPParser::Thf_defined_atomicContext *ctx) = 0;

  virtual void enterThf_defined_term(TPTPParser::Thf_defined_termContext *ctx) = 0;
  virtual void exitThf_defined_term(TPTPParser::Thf_defined_termContext *ctx) = 0;

  virtual void enterThf_defined_infix(TPTPParser::Thf_defined_infixContext *ctx) = 0;
  virtual void exitThf_defined_infix(TPTPParser::Thf_defined_infixContext *ctx) = 0;

  virtual void enterThf_system_atomic(TPTPParser::Thf_system_atomicContext *ctx) = 0;
  virtual void exitThf_system_atomic(TPTPParser::Thf_system_atomicContext *ctx) = 0;

  virtual void enterThf_let(TPTPParser::Thf_letContext *ctx) = 0;
  virtual void exitThf_let(TPTPParser::Thf_letContext *ctx) = 0;

  virtual void enterThf_let_types(TPTPParser::Thf_let_typesContext *ctx) = 0;
  virtual void exitThf_let_types(TPTPParser::Thf_let_typesContext *ctx) = 0;

  virtual void enterThf_atom_typing_list(TPTPParser::Thf_atom_typing_listContext *ctx) = 0;
  virtual void exitThf_atom_typing_list(TPTPParser::Thf_atom_typing_listContext *ctx) = 0;

  virtual void enterThf_let_defns(TPTPParser::Thf_let_defnsContext *ctx) = 0;
  virtual void exitThf_let_defns(TPTPParser::Thf_let_defnsContext *ctx) = 0;

  virtual void enterThf_let_defn(TPTPParser::Thf_let_defnContext *ctx) = 0;
  virtual void exitThf_let_defn(TPTPParser::Thf_let_defnContext *ctx) = 0;

  virtual void enterThf_let_defn_list(TPTPParser::Thf_let_defn_listContext *ctx) = 0;
  virtual void exitThf_let_defn_list(TPTPParser::Thf_let_defn_listContext *ctx) = 0;

  virtual void enterThf_unitary_term(TPTPParser::Thf_unitary_termContext *ctx) = 0;
  virtual void exitThf_unitary_term(TPTPParser::Thf_unitary_termContext *ctx) = 0;

  virtual void enterThf_conn_term(TPTPParser::Thf_conn_termContext *ctx) = 0;
  virtual void exitThf_conn_term(TPTPParser::Thf_conn_termContext *ctx) = 0;

  virtual void enterThf_tuple(TPTPParser::Thf_tupleContext *ctx) = 0;
  virtual void exitThf_tuple(TPTPParser::Thf_tupleContext *ctx) = 0;

  virtual void enterThf_fof_function(TPTPParser::Thf_fof_functionContext *ctx) = 0;
  virtual void exitThf_fof_function(TPTPParser::Thf_fof_functionContext *ctx) = 0;

  virtual void enterThf_arguments(TPTPParser::Thf_argumentsContext *ctx) = 0;
  virtual void exitThf_arguments(TPTPParser::Thf_argumentsContext *ctx) = 0;

  virtual void enterThf_formula_list(TPTPParser::Thf_formula_listContext *ctx) = 0;
  virtual void exitThf_formula_list(TPTPParser::Thf_formula_listContext *ctx) = 0;

  virtual void enterComma_thf_logic_formula(TPTPParser::Comma_thf_logic_formulaContext *ctx) = 0;
  virtual void exitComma_thf_logic_formula(TPTPParser::Comma_thf_logic_formulaContext *ctx) = 0;

  virtual void enterThf_atom_typing(TPTPParser::Thf_atom_typingContext *ctx) = 0;
  virtual void exitThf_atom_typing(TPTPParser::Thf_atom_typingContext *ctx) = 0;

  virtual void enterThf_top_level_type(TPTPParser::Thf_top_level_typeContext *ctx) = 0;
  virtual void exitThf_top_level_type(TPTPParser::Thf_top_level_typeContext *ctx) = 0;

  virtual void enterThf_unitary_type(TPTPParser::Thf_unitary_typeContext *ctx) = 0;
  virtual void exitThf_unitary_type(TPTPParser::Thf_unitary_typeContext *ctx) = 0;

  virtual void enterThf_apply_type(TPTPParser::Thf_apply_typeContext *ctx) = 0;
  virtual void exitThf_apply_type(TPTPParser::Thf_apply_typeContext *ctx) = 0;

  virtual void enterThf_binary_type(TPTPParser::Thf_binary_typeContext *ctx) = 0;
  virtual void exitThf_binary_type(TPTPParser::Thf_binary_typeContext *ctx) = 0;

  virtual void enterThf_mapping_type(TPTPParser::Thf_mapping_typeContext *ctx) = 0;
  virtual void exitThf_mapping_type(TPTPParser::Thf_mapping_typeContext *ctx) = 0;

  virtual void enterThf_xprod_type(TPTPParser::Thf_xprod_typeContext *ctx) = 0;
  virtual void exitThf_xprod_type(TPTPParser::Thf_xprod_typeContext *ctx) = 0;

  virtual void enterThf_union_type(TPTPParser::Thf_union_typeContext *ctx) = 0;
  virtual void exitThf_union_type(TPTPParser::Thf_union_typeContext *ctx) = 0;

  virtual void enterThf_subtype(TPTPParser::Thf_subtypeContext *ctx) = 0;
  virtual void exitThf_subtype(TPTPParser::Thf_subtypeContext *ctx) = 0;

  virtual void enterThf_definition(TPTPParser::Thf_definitionContext *ctx) = 0;
  virtual void exitThf_definition(TPTPParser::Thf_definitionContext *ctx) = 0;

  virtual void enterThf_sequent(TPTPParser::Thf_sequentContext *ctx) = 0;
  virtual void exitThf_sequent(TPTPParser::Thf_sequentContext *ctx) = 0;

  virtual void enterTff_formula(TPTPParser::Tff_formulaContext *ctx) = 0;
  virtual void exitTff_formula(TPTPParser::Tff_formulaContext *ctx) = 0;

  virtual void enterTff_logic_formula(TPTPParser::Tff_logic_formulaContext *ctx) = 0;
  virtual void exitTff_logic_formula(TPTPParser::Tff_logic_formulaContext *ctx) = 0;

  virtual void enterTff_binary_formula(TPTPParser::Tff_binary_formulaContext *ctx) = 0;
  virtual void exitTff_binary_formula(TPTPParser::Tff_binary_formulaContext *ctx) = 0;

  virtual void enterTff_binary_nonassoc(TPTPParser::Tff_binary_nonassocContext *ctx) = 0;
  virtual void exitTff_binary_nonassoc(TPTPParser::Tff_binary_nonassocContext *ctx) = 0;

  virtual void enterTff_binary_assoc(TPTPParser::Tff_binary_assocContext *ctx) = 0;
  virtual void exitTff_binary_assoc(TPTPParser::Tff_binary_assocContext *ctx) = 0;

  virtual void enterTff_or_formula(TPTPParser::Tff_or_formulaContext *ctx) = 0;
  virtual void exitTff_or_formula(TPTPParser::Tff_or_formulaContext *ctx) = 0;

  virtual void enterTff_and_formula(TPTPParser::Tff_and_formulaContext *ctx) = 0;
  virtual void exitTff_and_formula(TPTPParser::Tff_and_formulaContext *ctx) = 0;

  virtual void enterTff_unit_formula(TPTPParser::Tff_unit_formulaContext *ctx) = 0;
  virtual void exitTff_unit_formula(TPTPParser::Tff_unit_formulaContext *ctx) = 0;

  virtual void enterTff_preunit_formula(TPTPParser::Tff_preunit_formulaContext *ctx) = 0;
  virtual void exitTff_preunit_formula(TPTPParser::Tff_preunit_formulaContext *ctx) = 0;

  virtual void enterTff_unitary_formula(TPTPParser::Tff_unitary_formulaContext *ctx) = 0;
  virtual void exitTff_unitary_formula(TPTPParser::Tff_unitary_formulaContext *ctx) = 0;

  virtual void enterTxf_unitary_formula(TPTPParser::Txf_unitary_formulaContext *ctx) = 0;
  virtual void exitTxf_unitary_formula(TPTPParser::Txf_unitary_formulaContext *ctx) = 0;

  virtual void enterTff_quantified_formula(TPTPParser::Tff_quantified_formulaContext *ctx) = 0;
  virtual void exitTff_quantified_formula(TPTPParser::Tff_quantified_formulaContext *ctx) = 0;

  virtual void enterTff_variable_list(TPTPParser::Tff_variable_listContext *ctx) = 0;
  virtual void exitTff_variable_list(TPTPParser::Tff_variable_listContext *ctx) = 0;

  virtual void enterTff_variable(TPTPParser::Tff_variableContext *ctx) = 0;
  virtual void exitTff_variable(TPTPParser::Tff_variableContext *ctx) = 0;

  virtual void enterTff_typed_variable(TPTPParser::Tff_typed_variableContext *ctx) = 0;
  virtual void exitTff_typed_variable(TPTPParser::Tff_typed_variableContext *ctx) = 0;

  virtual void enterTff_unary_formula(TPTPParser::Tff_unary_formulaContext *ctx) = 0;
  virtual void exitTff_unary_formula(TPTPParser::Tff_unary_formulaContext *ctx) = 0;

  virtual void enterTff_prefix_unary(TPTPParser::Tff_prefix_unaryContext *ctx) = 0;
  virtual void exitTff_prefix_unary(TPTPParser::Tff_prefix_unaryContext *ctx) = 0;

  virtual void enterTff_infix_unary(TPTPParser::Tff_infix_unaryContext *ctx) = 0;
  virtual void exitTff_infix_unary(TPTPParser::Tff_infix_unaryContext *ctx) = 0;

  virtual void enterTff_atomic_formula(TPTPParser::Tff_atomic_formulaContext *ctx) = 0;
  virtual void exitTff_atomic_formula(TPTPParser::Tff_atomic_formulaContext *ctx) = 0;

  virtual void enterTff_plain_atomic(TPTPParser::Tff_plain_atomicContext *ctx) = 0;
  virtual void exitTff_plain_atomic(TPTPParser::Tff_plain_atomicContext *ctx) = 0;

  virtual void enterTff_defined_atomic(TPTPParser::Tff_defined_atomicContext *ctx) = 0;
  virtual void exitTff_defined_atomic(TPTPParser::Tff_defined_atomicContext *ctx) = 0;

  virtual void enterTff_defined_plain(TPTPParser::Tff_defined_plainContext *ctx) = 0;
  virtual void exitTff_defined_plain(TPTPParser::Tff_defined_plainContext *ctx) = 0;

  virtual void enterTff_defined_infix(TPTPParser::Tff_defined_infixContext *ctx) = 0;
  virtual void exitTff_defined_infix(TPTPParser::Tff_defined_infixContext *ctx) = 0;

  virtual void enterTff_system_atomic(TPTPParser::Tff_system_atomicContext *ctx) = 0;
  virtual void exitTff_system_atomic(TPTPParser::Tff_system_atomicContext *ctx) = 0;

  virtual void enterTxf_let(TPTPParser::Txf_letContext *ctx) = 0;
  virtual void exitTxf_let(TPTPParser::Txf_letContext *ctx) = 0;

  virtual void enterTxf_let_types(TPTPParser::Txf_let_typesContext *ctx) = 0;
  virtual void exitTxf_let_types(TPTPParser::Txf_let_typesContext *ctx) = 0;

  virtual void enterTff_atom_typing_list(TPTPParser::Tff_atom_typing_listContext *ctx) = 0;
  virtual void exitTff_atom_typing_list(TPTPParser::Tff_atom_typing_listContext *ctx) = 0;

  virtual void enterTxf_let_defns(TPTPParser::Txf_let_defnsContext *ctx) = 0;
  virtual void exitTxf_let_defns(TPTPParser::Txf_let_defnsContext *ctx) = 0;

  virtual void enterTxf_let_defn(TPTPParser::Txf_let_defnContext *ctx) = 0;
  virtual void exitTxf_let_defn(TPTPParser::Txf_let_defnContext *ctx) = 0;

  virtual void enterTxf_let_LHS(TPTPParser::Txf_let_LHSContext *ctx) = 0;
  virtual void exitTxf_let_LHS(TPTPParser::Txf_let_LHSContext *ctx) = 0;

  virtual void enterTxf_let_defn_list(TPTPParser::Txf_let_defn_listContext *ctx) = 0;
  virtual void exitTxf_let_defn_list(TPTPParser::Txf_let_defn_listContext *ctx) = 0;

  virtual void enterNxf_atom(TPTPParser::Nxf_atomContext *ctx) = 0;
  virtual void exitNxf_atom(TPTPParser::Nxf_atomContext *ctx) = 0;

  virtual void enterTff_term(TPTPParser::Tff_termContext *ctx) = 0;
  virtual void exitTff_term(TPTPParser::Tff_termContext *ctx) = 0;

  virtual void enterTff_unitary_term(TPTPParser::Tff_unitary_termContext *ctx) = 0;
  virtual void exitTff_unitary_term(TPTPParser::Tff_unitary_termContext *ctx) = 0;

  virtual void enterTxf_tuple(TPTPParser::Txf_tupleContext *ctx) = 0;
  virtual void exitTxf_tuple(TPTPParser::Txf_tupleContext *ctx) = 0;

  virtual void enterTff_arguments(TPTPParser::Tff_argumentsContext *ctx) = 0;
  virtual void exitTff_arguments(TPTPParser::Tff_argumentsContext *ctx) = 0;

  virtual void enterComma_tff_term(TPTPParser::Comma_tff_termContext *ctx) = 0;
  virtual void exitComma_tff_term(TPTPParser::Comma_tff_termContext *ctx) = 0;

  virtual void enterTff_atom_typing(TPTPParser::Tff_atom_typingContext *ctx) = 0;
  virtual void exitTff_atom_typing(TPTPParser::Tff_atom_typingContext *ctx) = 0;

  virtual void enterTff_top_level_type(TPTPParser::Tff_top_level_typeContext *ctx) = 0;
  virtual void exitTff_top_level_type(TPTPParser::Tff_top_level_typeContext *ctx) = 0;

  virtual void enterTff_non_atomic_type(TPTPParser::Tff_non_atomic_typeContext *ctx) = 0;
  virtual void exitTff_non_atomic_type(TPTPParser::Tff_non_atomic_typeContext *ctx) = 0;

  virtual void enterTf1_quantified_type(TPTPParser::Tf1_quantified_typeContext *ctx) = 0;
  virtual void exitTf1_quantified_type(TPTPParser::Tf1_quantified_typeContext *ctx) = 0;

  virtual void enterTff_monotype(TPTPParser::Tff_monotypeContext *ctx) = 0;
  virtual void exitTff_monotype(TPTPParser::Tff_monotypeContext *ctx) = 0;

  virtual void enterTff_unitary_type(TPTPParser::Tff_unitary_typeContext *ctx) = 0;
  virtual void exitTff_unitary_type(TPTPParser::Tff_unitary_typeContext *ctx) = 0;

  virtual void enterTff_atomic_type(TPTPParser::Tff_atomic_typeContext *ctx) = 0;
  virtual void exitTff_atomic_type(TPTPParser::Tff_atomic_typeContext *ctx) = 0;

  virtual void enterTff_type_arguments(TPTPParser::Tff_type_argumentsContext *ctx) = 0;
  virtual void exitTff_type_arguments(TPTPParser::Tff_type_argumentsContext *ctx) = 0;

  virtual void enterTff_mapping_type(TPTPParser::Tff_mapping_typeContext *ctx) = 0;
  virtual void exitTff_mapping_type(TPTPParser::Tff_mapping_typeContext *ctx) = 0;

  virtual void enterTff_xprod_type(TPTPParser::Tff_xprod_typeContext *ctx) = 0;
  virtual void exitTff_xprod_type(TPTPParser::Tff_xprod_typeContext *ctx) = 0;

  virtual void enterTxf_tuple_type(TPTPParser::Txf_tuple_typeContext *ctx) = 0;
  virtual void exitTxf_tuple_type(TPTPParser::Txf_tuple_typeContext *ctx) = 0;

  virtual void enterTff_type_list(TPTPParser::Tff_type_listContext *ctx) = 0;
  virtual void exitTff_type_list(TPTPParser::Tff_type_listContext *ctx) = 0;

  virtual void enterTff_subtype(TPTPParser::Tff_subtypeContext *ctx) = 0;
  virtual void exitTff_subtype(TPTPParser::Tff_subtypeContext *ctx) = 0;

  virtual void enterTxf_definition(TPTPParser::Txf_definitionContext *ctx) = 0;
  virtual void exitTxf_definition(TPTPParser::Txf_definitionContext *ctx) = 0;

  virtual void enterTxf_sequent(TPTPParser::Txf_sequentContext *ctx) = 0;
  virtual void exitTxf_sequent(TPTPParser::Txf_sequentContext *ctx) = 0;

  virtual void enterNhf_long_connective(TPTPParser::Nhf_long_connectiveContext *ctx) = 0;
  virtual void exitNhf_long_connective(TPTPParser::Nhf_long_connectiveContext *ctx) = 0;

  virtual void enterNhf_parameter_list(TPTPParser::Nhf_parameter_listContext *ctx) = 0;
  virtual void exitNhf_parameter_list(TPTPParser::Nhf_parameter_listContext *ctx) = 0;

  virtual void enterNhf_parameter(TPTPParser::Nhf_parameterContext *ctx) = 0;
  virtual void exitNhf_parameter(TPTPParser::Nhf_parameterContext *ctx) = 0;

  virtual void enterNhf_key_pair(TPTPParser::Nhf_key_pairContext *ctx) = 0;
  virtual void exitNhf_key_pair(TPTPParser::Nhf_key_pairContext *ctx) = 0;

  virtual void enterNxf_long_connective(TPTPParser::Nxf_long_connectiveContext *ctx) = 0;
  virtual void exitNxf_long_connective(TPTPParser::Nxf_long_connectiveContext *ctx) = 0;

  virtual void enterNxf_parameter_list(TPTPParser::Nxf_parameter_listContext *ctx) = 0;
  virtual void exitNxf_parameter_list(TPTPParser::Nxf_parameter_listContext *ctx) = 0;

  virtual void enterNxf_parameter(TPTPParser::Nxf_parameterContext *ctx) = 0;
  virtual void exitNxf_parameter(TPTPParser::Nxf_parameterContext *ctx) = 0;

  virtual void enterNxf_key_pair(TPTPParser::Nxf_key_pairContext *ctx) = 0;
  virtual void exitNxf_key_pair(TPTPParser::Nxf_key_pairContext *ctx) = 0;

  virtual void enterNtf_connective_name(TPTPParser::Ntf_connective_nameContext *ctx) = 0;
  virtual void exitNtf_connective_name(TPTPParser::Ntf_connective_nameContext *ctx) = 0;

  virtual void enterNtf_index(TPTPParser::Ntf_indexContext *ctx) = 0;
  virtual void exitNtf_index(TPTPParser::Ntf_indexContext *ctx) = 0;

  virtual void enterNtf_short_connective(TPTPParser::Ntf_short_connectiveContext *ctx) = 0;
  virtual void exitNtf_short_connective(TPTPParser::Ntf_short_connectiveContext *ctx) = 0;

  virtual void enterTcf_formula(TPTPParser::Tcf_formulaContext *ctx) = 0;
  virtual void exitTcf_formula(TPTPParser::Tcf_formulaContext *ctx) = 0;

  virtual void enterTcf_logic_formula(TPTPParser::Tcf_logic_formulaContext *ctx) = 0;
  virtual void exitTcf_logic_formula(TPTPParser::Tcf_logic_formulaContext *ctx) = 0;

  virtual void enterTcf_quantified_formula(TPTPParser::Tcf_quantified_formulaContext *ctx) = 0;
  virtual void exitTcf_quantified_formula(TPTPParser::Tcf_quantified_formulaContext *ctx) = 0;

  virtual void enterFof_formula(TPTPParser::Fof_formulaContext *ctx) = 0;
  virtual void exitFof_formula(TPTPParser::Fof_formulaContext *ctx) = 0;

  virtual void enterFof_logic_formula(TPTPParser::Fof_logic_formulaContext *ctx) = 0;
  virtual void exitFof_logic_formula(TPTPParser::Fof_logic_formulaContext *ctx) = 0;

  virtual void enterFof_binary_formula(TPTPParser::Fof_binary_formulaContext *ctx) = 0;
  virtual void exitFof_binary_formula(TPTPParser::Fof_binary_formulaContext *ctx) = 0;

  virtual void enterFof_binary_nonassoc(TPTPParser::Fof_binary_nonassocContext *ctx) = 0;
  virtual void exitFof_binary_nonassoc(TPTPParser::Fof_binary_nonassocContext *ctx) = 0;

  virtual void enterFof_binary_assoc(TPTPParser::Fof_binary_assocContext *ctx) = 0;
  virtual void exitFof_binary_assoc(TPTPParser::Fof_binary_assocContext *ctx) = 0;

  virtual void enterFof_or_formula(TPTPParser::Fof_or_formulaContext *ctx) = 0;
  virtual void exitFof_or_formula(TPTPParser::Fof_or_formulaContext *ctx) = 0;

  virtual void enterFof_and_formula(TPTPParser::Fof_and_formulaContext *ctx) = 0;
  virtual void exitFof_and_formula(TPTPParser::Fof_and_formulaContext *ctx) = 0;

  virtual void enterFof_unary_formula(TPTPParser::Fof_unary_formulaContext *ctx) = 0;
  virtual void exitFof_unary_formula(TPTPParser::Fof_unary_formulaContext *ctx) = 0;

  virtual void enterFof_infix_unary(TPTPParser::Fof_infix_unaryContext *ctx) = 0;
  virtual void exitFof_infix_unary(TPTPParser::Fof_infix_unaryContext *ctx) = 0;

  virtual void enterFof_unit_formula(TPTPParser::Fof_unit_formulaContext *ctx) = 0;
  virtual void exitFof_unit_formula(TPTPParser::Fof_unit_formulaContext *ctx) = 0;

  virtual void enterFof_unitary_formula(TPTPParser::Fof_unitary_formulaContext *ctx) = 0;
  virtual void exitFof_unitary_formula(TPTPParser::Fof_unitary_formulaContext *ctx) = 0;

  virtual void enterFof_quantified_formula(TPTPParser::Fof_quantified_formulaContext *ctx) = 0;
  virtual void exitFof_quantified_formula(TPTPParser::Fof_quantified_formulaContext *ctx) = 0;

  virtual void enterFof_variable_list(TPTPParser::Fof_variable_listContext *ctx) = 0;
  virtual void exitFof_variable_list(TPTPParser::Fof_variable_listContext *ctx) = 0;

  virtual void enterFof_atomic_formula(TPTPParser::Fof_atomic_formulaContext *ctx) = 0;
  virtual void exitFof_atomic_formula(TPTPParser::Fof_atomic_formulaContext *ctx) = 0;

  virtual void enterFof_plain_atomic_formula(TPTPParser::Fof_plain_atomic_formulaContext *ctx) = 0;
  virtual void exitFof_plain_atomic_formula(TPTPParser::Fof_plain_atomic_formulaContext *ctx) = 0;

  virtual void enterFof_defined_atomic_formula(TPTPParser::Fof_defined_atomic_formulaContext *ctx) = 0;
  virtual void exitFof_defined_atomic_formula(TPTPParser::Fof_defined_atomic_formulaContext *ctx) = 0;

  virtual void enterFof_defined_plain_formula(TPTPParser::Fof_defined_plain_formulaContext *ctx) = 0;
  virtual void exitFof_defined_plain_formula(TPTPParser::Fof_defined_plain_formulaContext *ctx) = 0;

  virtual void enterFof_defined_infix_formula(TPTPParser::Fof_defined_infix_formulaContext *ctx) = 0;
  virtual void exitFof_defined_infix_formula(TPTPParser::Fof_defined_infix_formulaContext *ctx) = 0;

  virtual void enterFof_system_atomic_formula(TPTPParser::Fof_system_atomic_formulaContext *ctx) = 0;
  virtual void exitFof_system_atomic_formula(TPTPParser::Fof_system_atomic_formulaContext *ctx) = 0;

  virtual void enterFof_plain_term(TPTPParser::Fof_plain_termContext *ctx) = 0;
  virtual void exitFof_plain_term(TPTPParser::Fof_plain_termContext *ctx) = 0;

  virtual void enterFof_defined_term(TPTPParser::Fof_defined_termContext *ctx) = 0;
  virtual void exitFof_defined_term(TPTPParser::Fof_defined_termContext *ctx) = 0;

  virtual void enterFof_defined_atomic_term(TPTPParser::Fof_defined_atomic_termContext *ctx) = 0;
  virtual void exitFof_defined_atomic_term(TPTPParser::Fof_defined_atomic_termContext *ctx) = 0;

  virtual void enterFof_defined_plain_term(TPTPParser::Fof_defined_plain_termContext *ctx) = 0;
  virtual void exitFof_defined_plain_term(TPTPParser::Fof_defined_plain_termContext *ctx) = 0;

  virtual void enterFof_system_term(TPTPParser::Fof_system_termContext *ctx) = 0;
  virtual void exitFof_system_term(TPTPParser::Fof_system_termContext *ctx) = 0;

  virtual void enterFof_arguments(TPTPParser::Fof_argumentsContext *ctx) = 0;
  virtual void exitFof_arguments(TPTPParser::Fof_argumentsContext *ctx) = 0;

  virtual void enterFof_term(TPTPParser::Fof_termContext *ctx) = 0;
  virtual void exitFof_term(TPTPParser::Fof_termContext *ctx) = 0;

  virtual void enterFof_function_term(TPTPParser::Fof_function_termContext *ctx) = 0;
  virtual void exitFof_function_term(TPTPParser::Fof_function_termContext *ctx) = 0;

  virtual void enterFof_sequent(TPTPParser::Fof_sequentContext *ctx) = 0;
  virtual void exitFof_sequent(TPTPParser::Fof_sequentContext *ctx) = 0;

  virtual void enterFof_formula_tuple(TPTPParser::Fof_formula_tupleContext *ctx) = 0;
  virtual void exitFof_formula_tuple(TPTPParser::Fof_formula_tupleContext *ctx) = 0;

  virtual void enterFof_formula_tuple_list(TPTPParser::Fof_formula_tuple_listContext *ctx) = 0;
  virtual void exitFof_formula_tuple_list(TPTPParser::Fof_formula_tuple_listContext *ctx) = 0;

  virtual void enterComma_fof_logic_formula(TPTPParser::Comma_fof_logic_formulaContext *ctx) = 0;
  virtual void exitComma_fof_logic_formula(TPTPParser::Comma_fof_logic_formulaContext *ctx) = 0;

  virtual void enterCnf_formula(TPTPParser::Cnf_formulaContext *ctx) = 0;
  virtual void exitCnf_formula(TPTPParser::Cnf_formulaContext *ctx) = 0;

  virtual void enterCnf_disjunction(TPTPParser::Cnf_disjunctionContext *ctx) = 0;
  virtual void exitCnf_disjunction(TPTPParser::Cnf_disjunctionContext *ctx) = 0;

  virtual void enterCnf_literal(TPTPParser::Cnf_literalContext *ctx) = 0;
  virtual void exitCnf_literal(TPTPParser::Cnf_literalContext *ctx) = 0;

  virtual void enterThf_quantifier(TPTPParser::Thf_quantifierContext *ctx) = 0;
  virtual void exitThf_quantifier(TPTPParser::Thf_quantifierContext *ctx) = 0;

  virtual void enterThf_unary_connective(TPTPParser::Thf_unary_connectiveContext *ctx) = 0;
  virtual void exitThf_unary_connective(TPTPParser::Thf_unary_connectiveContext *ctx) = 0;

  virtual void enterTh1_quantifier(TPTPParser::Th1_quantifierContext *ctx) = 0;
  virtual void exitTh1_quantifier(TPTPParser::Th1_quantifierContext *ctx) = 0;

  virtual void enterTh0_quantifier(TPTPParser::Th0_quantifierContext *ctx) = 0;
  virtual void exitTh0_quantifier(TPTPParser::Th0_quantifierContext *ctx) = 0;

  virtual void enterSubtype_sign(TPTPParser::Subtype_signContext *ctx) = 0;
  virtual void exitSubtype_sign(TPTPParser::Subtype_signContext *ctx) = 0;

  virtual void enterTff_unary_connective(TPTPParser::Tff_unary_connectiveContext *ctx) = 0;
  virtual void exitTff_unary_connective(TPTPParser::Tff_unary_connectiveContext *ctx) = 0;

  virtual void enterTff_quantifier(TPTPParser::Tff_quantifierContext *ctx) = 0;
  virtual void exitTff_quantifier(TPTPParser::Tff_quantifierContext *ctx) = 0;

  virtual void enterFof_quantifier(TPTPParser::Fof_quantifierContext *ctx) = 0;
  virtual void exitFof_quantifier(TPTPParser::Fof_quantifierContext *ctx) = 0;

  virtual void enterNonassoc_connective(TPTPParser::Nonassoc_connectiveContext *ctx) = 0;
  virtual void exitNonassoc_connective(TPTPParser::Nonassoc_connectiveContext *ctx) = 0;

  virtual void enterAssoc_connective(TPTPParser::Assoc_connectiveContext *ctx) = 0;
  virtual void exitAssoc_connective(TPTPParser::Assoc_connectiveContext *ctx) = 0;

  virtual void enterUnary_connective(TPTPParser::Unary_connectiveContext *ctx) = 0;
  virtual void exitUnary_connective(TPTPParser::Unary_connectiveContext *ctx) = 0;

  virtual void enterGentzen_arrow(TPTPParser::Gentzen_arrowContext *ctx) = 0;
  virtual void exitGentzen_arrow(TPTPParser::Gentzen_arrowContext *ctx) = 0;

  virtual void enterAssignment(TPTPParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(TPTPParser::AssignmentContext *ctx) = 0;

  virtual void enterIdentical(TPTPParser::IdenticalContext *ctx) = 0;
  virtual void exitIdentical(TPTPParser::IdenticalContext *ctx) = 0;

  virtual void enterType_constant(TPTPParser::Type_constantContext *ctx) = 0;
  virtual void exitType_constant(TPTPParser::Type_constantContext *ctx) = 0;

  virtual void enterType_functor(TPTPParser::Type_functorContext *ctx) = 0;
  virtual void exitType_functor(TPTPParser::Type_functorContext *ctx) = 0;

  virtual void enterDefined_type(TPTPParser::Defined_typeContext *ctx) = 0;
  virtual void exitDefined_type(TPTPParser::Defined_typeContext *ctx) = 0;

  virtual void enterAtom(TPTPParser::AtomContext *ctx) = 0;
  virtual void exitAtom(TPTPParser::AtomContext *ctx) = 0;

  virtual void enterUntyped_atom(TPTPParser::Untyped_atomContext *ctx) = 0;
  virtual void exitUntyped_atom(TPTPParser::Untyped_atomContext *ctx) = 0;

  virtual void enterDefined_infix_pred(TPTPParser::Defined_infix_predContext *ctx) = 0;
  virtual void exitDefined_infix_pred(TPTPParser::Defined_infix_predContext *ctx) = 0;

  virtual void enterInfix_equality(TPTPParser::Infix_equalityContext *ctx) = 0;
  virtual void exitInfix_equality(TPTPParser::Infix_equalityContext *ctx) = 0;

  virtual void enterInfix_inequality(TPTPParser::Infix_inequalityContext *ctx) = 0;
  virtual void exitInfix_inequality(TPTPParser::Infix_inequalityContext *ctx) = 0;

  virtual void enterConstant(TPTPParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(TPTPParser::ConstantContext *ctx) = 0;

  virtual void enterFunctor(TPTPParser::FunctorContext *ctx) = 0;
  virtual void exitFunctor(TPTPParser::FunctorContext *ctx) = 0;

  virtual void enterDefined_constant(TPTPParser::Defined_constantContext *ctx) = 0;
  virtual void exitDefined_constant(TPTPParser::Defined_constantContext *ctx) = 0;

  virtual void enterDefined_functor(TPTPParser::Defined_functorContext *ctx) = 0;
  virtual void exitDefined_functor(TPTPParser::Defined_functorContext *ctx) = 0;

  virtual void enterSystem_constant(TPTPParser::System_constantContext *ctx) = 0;
  virtual void exitSystem_constant(TPTPParser::System_constantContext *ctx) = 0;

  virtual void enterSystem_functor(TPTPParser::System_functorContext *ctx) = 0;
  virtual void exitSystem_functor(TPTPParser::System_functorContext *ctx) = 0;

  virtual void enterDef_or_sys_constant(TPTPParser::Def_or_sys_constantContext *ctx) = 0;
  virtual void exitDef_or_sys_constant(TPTPParser::Def_or_sys_constantContext *ctx) = 0;

  virtual void enterTh1_defined_term(TPTPParser::Th1_defined_termContext *ctx) = 0;
  virtual void exitTh1_defined_term(TPTPParser::Th1_defined_termContext *ctx) = 0;

  virtual void enterDefined_term(TPTPParser::Defined_termContext *ctx) = 0;
  virtual void exitDefined_term(TPTPParser::Defined_termContext *ctx) = 0;

  virtual void enterVariable(TPTPParser::VariableContext *ctx) = 0;
  virtual void exitVariable(TPTPParser::VariableContext *ctx) = 0;

  virtual void enterSource(TPTPParser::SourceContext *ctx) = 0;
  virtual void exitSource(TPTPParser::SourceContext *ctx) = 0;

  virtual void enterSources(TPTPParser::SourcesContext *ctx) = 0;
  virtual void exitSources(TPTPParser::SourcesContext *ctx) = 0;

  virtual void enterDag_source(TPTPParser::Dag_sourceContext *ctx) = 0;
  virtual void exitDag_source(TPTPParser::Dag_sourceContext *ctx) = 0;

  virtual void enterInference_record(TPTPParser::Inference_recordContext *ctx) = 0;
  virtual void exitInference_record(TPTPParser::Inference_recordContext *ctx) = 0;

  virtual void enterInference_rule(TPTPParser::Inference_ruleContext *ctx) = 0;
  virtual void exitInference_rule(TPTPParser::Inference_ruleContext *ctx) = 0;

  virtual void enterInternal_source(TPTPParser::Internal_sourceContext *ctx) = 0;
  virtual void exitInternal_source(TPTPParser::Internal_sourceContext *ctx) = 0;

  virtual void enterIntro_type(TPTPParser::Intro_typeContext *ctx) = 0;
  virtual void exitIntro_type(TPTPParser::Intro_typeContext *ctx) = 0;

  virtual void enterExternal_source(TPTPParser::External_sourceContext *ctx) = 0;
  virtual void exitExternal_source(TPTPParser::External_sourceContext *ctx) = 0;

  virtual void enterFile_source(TPTPParser::File_sourceContext *ctx) = 0;
  virtual void exitFile_source(TPTPParser::File_sourceContext *ctx) = 0;

  virtual void enterFile_info(TPTPParser::File_infoContext *ctx) = 0;
  virtual void exitFile_info(TPTPParser::File_infoContext *ctx) = 0;

  virtual void enterTheory(TPTPParser::TheoryContext *ctx) = 0;
  virtual void exitTheory(TPTPParser::TheoryContext *ctx) = 0;

  virtual void enterTheory_name(TPTPParser::Theory_nameContext *ctx) = 0;
  virtual void exitTheory_name(TPTPParser::Theory_nameContext *ctx) = 0;

  virtual void enterCreator_source(TPTPParser::Creator_sourceContext *ctx) = 0;
  virtual void exitCreator_source(TPTPParser::Creator_sourceContext *ctx) = 0;

  virtual void enterCreator_name(TPTPParser::Creator_nameContext *ctx) = 0;
  virtual void exitCreator_name(TPTPParser::Creator_nameContext *ctx) = 0;

  virtual void enterParents(TPTPParser::ParentsContext *ctx) = 0;
  virtual void exitParents(TPTPParser::ParentsContext *ctx) = 0;

  virtual void enterParent_list(TPTPParser::Parent_listContext *ctx) = 0;
  virtual void exitParent_list(TPTPParser::Parent_listContext *ctx) = 0;

  virtual void enterComma_parent_info(TPTPParser::Comma_parent_infoContext *ctx) = 0;
  virtual void exitComma_parent_info(TPTPParser::Comma_parent_infoContext *ctx) = 0;

  virtual void enterParent_info(TPTPParser::Parent_infoContext *ctx) = 0;
  virtual void exitParent_info(TPTPParser::Parent_infoContext *ctx) = 0;

  virtual void enterParent_details(TPTPParser::Parent_detailsContext *ctx) = 0;
  virtual void exitParent_details(TPTPParser::Parent_detailsContext *ctx) = 0;

  virtual void enterOptional_info(TPTPParser::Optional_infoContext *ctx) = 0;
  virtual void exitOptional_info(TPTPParser::Optional_infoContext *ctx) = 0;

  virtual void enterUseful_info(TPTPParser::Useful_infoContext *ctx) = 0;
  virtual void exitUseful_info(TPTPParser::Useful_infoContext *ctx) = 0;

  virtual void enterInclude(TPTPParser::IncludeContext *ctx) = 0;
  virtual void exitInclude(TPTPParser::IncludeContext *ctx) = 0;

  virtual void enterInclude_optionals(TPTPParser::Include_optionalsContext *ctx) = 0;
  virtual void exitInclude_optionals(TPTPParser::Include_optionalsContext *ctx) = 0;

  virtual void enterFormula_selection(TPTPParser::Formula_selectionContext *ctx) = 0;
  virtual void exitFormula_selection(TPTPParser::Formula_selectionContext *ctx) = 0;

  virtual void enterName_list(TPTPParser::Name_listContext *ctx) = 0;
  virtual void exitName_list(TPTPParser::Name_listContext *ctx) = 0;

  virtual void enterSpace_name(TPTPParser::Space_nameContext *ctx) = 0;
  virtual void exitSpace_name(TPTPParser::Space_nameContext *ctx) = 0;

  virtual void enterGeneral_term(TPTPParser::General_termContext *ctx) = 0;
  virtual void exitGeneral_term(TPTPParser::General_termContext *ctx) = 0;

  virtual void enterGeneral_data(TPTPParser::General_dataContext *ctx) = 0;
  virtual void exitGeneral_data(TPTPParser::General_dataContext *ctx) = 0;

  virtual void enterGeneral_function(TPTPParser::General_functionContext *ctx) = 0;
  virtual void exitGeneral_function(TPTPParser::General_functionContext *ctx) = 0;

  virtual void enterFormula_data(TPTPParser::Formula_dataContext *ctx) = 0;
  virtual void exitFormula_data(TPTPParser::Formula_dataContext *ctx) = 0;

  virtual void enterGeneral_list(TPTPParser::General_listContext *ctx) = 0;
  virtual void exitGeneral_list(TPTPParser::General_listContext *ctx) = 0;

  virtual void enterGeneral_terms(TPTPParser::General_termsContext *ctx) = 0;
  virtual void exitGeneral_terms(TPTPParser::General_termsContext *ctx) = 0;

  virtual void enterComma_general_term(TPTPParser::Comma_general_termContext *ctx) = 0;
  virtual void exitComma_general_term(TPTPParser::Comma_general_termContext *ctx) = 0;

  virtual void enterName(TPTPParser::NameContext *ctx) = 0;
  virtual void exitName(TPTPParser::NameContext *ctx) = 0;

  virtual void enterAtomic_word(TPTPParser::Atomic_wordContext *ctx) = 0;
  virtual void exitAtomic_word(TPTPParser::Atomic_wordContext *ctx) = 0;

  virtual void enterAtomic_defined_word(TPTPParser::Atomic_defined_wordContext *ctx) = 0;
  virtual void exitAtomic_defined_word(TPTPParser::Atomic_defined_wordContext *ctx) = 0;

  virtual void enterAtomic_system_word(TPTPParser::Atomic_system_wordContext *ctx) = 0;
  virtual void exitAtomic_system_word(TPTPParser::Atomic_system_wordContext *ctx) = 0;

  virtual void enterNumber(TPTPParser::NumberContext *ctx) = 0;
  virtual void exitNumber(TPTPParser::NumberContext *ctx) = 0;

  virtual void enterFile_name(TPTPParser::File_nameContext *ctx) = 0;
  virtual void exitFile_name(TPTPParser::File_nameContext *ctx) = 0;

  virtual void enterNothing(TPTPParser::NothingContext *ctx) = 0;
  virtual void exitNothing(TPTPParser::NothingContext *ctx) = 0;


};

