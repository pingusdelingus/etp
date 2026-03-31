
// Generated from TPTP.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  TPTPParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, T__58 = 59, T__59 = 60, T__60 = 61, WS = 62, 
    Comment_line = 63, Comment_block = 64, Single_quoted = 65, Back_quoted = 66, 
    Distinct_object = 67, Dollar_word = 68, Dollar_dollar_word = 69, Upper_word = 70, 
    Lower_word = 71, Real = 72, Signed_real = 73, Unsigned_real = 74, Decimal_exponent = 75, 
    Decimal_fraction = 76, Exp_integer = 77, Signed_exp_integer = 78, Rational = 79, 
    Signed_rational = 80, Unsigned_rational = 81, Integer = 82, Signed_integer = 83, 
    Unsigned_integer = 84, Positive_integer = 85, Integer_digits = 86, Slash = 87, 
    Slosh = 88, Vline = 89, Star = 90, Plus = 91, Arrow = 92, Less_sign = 93, 
    Hash = 94, Not_star_slash = 95, Percentage_sign = 96, Double_quote = 97, 
    Single_quote = 98, Back_quote = 99, Dot = 100, Slash_char = 101, Slosh_char = 102, 
    Zero_numeric = 103, Underscore = 104, Alpha = 105, Dollar = 106, Printable_char = 107, 
    Viewable_char = 108
  };

  enum {
    RuleTptp_file = 0, RuleTptp_input = 1, RuleAnnotated_formula = 2, RuleTpi_annotated = 3, 
    RuleTpi_formula = 4, RuleThf_annotated = 5, RuleTff_annotated = 6, RuleTcf_annotated = 7, 
    RuleFof_annotated = 8, RuleCnf_annotated = 9, RuleAnnotations = 10, 
    RuleFormula_role = 11, RuleThf_formula = 12, RuleThf_logic_formula = 13, 
    RuleThf_binary_formula = 14, RuleThf_binary_nonassoc = 15, RuleThf_binary_assoc = 16, 
    RuleThf_or_formula = 17, RuleThf_and_formula = 18, RuleThf_apply_formula = 19, 
    RuleThf_unit_formula = 20, RuleThf_preunit_formula = 21, RuleThf_unitary_formula = 22, 
    RuleThf_quantified_formula = 23, RuleThf_quantification = 24, RuleThf_variable_list = 25, 
    RuleThf_typed_variable = 26, RuleThf_unary_formula = 27, RuleThf_prefix_unary = 28, 
    RuleThf_infix_unary = 29, RuleThf_atomic_formula = 30, RuleThf_plain_atomic = 31, 
    RuleThf_defined_atomic = 32, RuleThf_defined_term = 33, RuleThf_defined_infix = 34, 
    RuleThf_system_atomic = 35, RuleThf_let = 36, RuleThf_let_types = 37, 
    RuleThf_atom_typing_list = 38, RuleThf_let_defns = 39, RuleThf_let_defn = 40, 
    RuleThf_let_defn_list = 41, RuleThf_unitary_term = 42, RuleThf_conn_term = 43, 
    RuleThf_tuple = 44, RuleThf_fof_function = 45, RuleThf_arguments = 46, 
    RuleThf_formula_list = 47, RuleComma_thf_logic_formula = 48, RuleThf_atom_typing = 49, 
    RuleThf_top_level_type = 50, RuleThf_unitary_type = 51, RuleThf_apply_type = 52, 
    RuleThf_binary_type = 53, RuleThf_mapping_type = 54, RuleThf_xprod_type = 55, 
    RuleThf_union_type = 56, RuleThf_subtype = 57, RuleThf_definition = 58, 
    RuleThf_sequent = 59, RuleTff_formula = 60, RuleTff_logic_formula = 61, 
    RuleTff_binary_formula = 62, RuleTff_binary_nonassoc = 63, RuleTff_binary_assoc = 64, 
    RuleTff_or_formula = 65, RuleTff_and_formula = 66, RuleTff_unit_formula = 67, 
    RuleTff_preunit_formula = 68, RuleTff_unitary_formula = 69, RuleTxf_unitary_formula = 70, 
    RuleTff_quantified_formula = 71, RuleTff_variable_list = 72, RuleTff_variable = 73, 
    RuleTff_typed_variable = 74, RuleTff_unary_formula = 75, RuleTff_prefix_unary = 76, 
    RuleTff_infix_unary = 77, RuleTff_atomic_formula = 78, RuleTff_plain_atomic = 79, 
    RuleTff_defined_atomic = 80, RuleTff_defined_plain = 81, RuleTff_defined_infix = 82, 
    RuleTff_system_atomic = 83, RuleTxf_let = 84, RuleTxf_let_types = 85, 
    RuleTff_atom_typing_list = 86, RuleTxf_let_defns = 87, RuleTxf_let_defn = 88, 
    RuleTxf_let_LHS = 89, RuleTxf_let_defn_list = 90, RuleNxf_atom = 91, 
    RuleTff_term = 92, RuleTff_unitary_term = 93, RuleTxf_tuple = 94, RuleTff_arguments = 95, 
    RuleComma_tff_term = 96, RuleTff_atom_typing = 97, RuleTff_top_level_type = 98, 
    RuleTff_non_atomic_type = 99, RuleTf1_quantified_type = 100, RuleTff_monotype = 101, 
    RuleTff_unitary_type = 102, RuleTff_atomic_type = 103, RuleTff_type_arguments = 104, 
    RuleTff_mapping_type = 105, RuleTff_xprod_type = 106, RuleTxf_tuple_type = 107, 
    RuleTff_type_list = 108, RuleTff_subtype = 109, RuleTxf_definition = 110, 
    RuleTxf_sequent = 111, RuleNhf_long_connective = 112, RuleNhf_parameter_list = 113, 
    RuleNhf_parameter = 114, RuleNhf_key_pair = 115, RuleNxf_long_connective = 116, 
    RuleNxf_parameter_list = 117, RuleNxf_parameter = 118, RuleNxf_key_pair = 119, 
    RuleNtf_connective_name = 120, RuleNtf_index = 121, RuleNtf_short_connective = 122, 
    RuleTcf_formula = 123, RuleTcf_logic_formula = 124, RuleTcf_quantified_formula = 125, 
    RuleFof_formula = 126, RuleFof_logic_formula = 127, RuleFof_binary_formula = 128, 
    RuleFof_binary_nonassoc = 129, RuleFof_binary_assoc = 130, RuleFof_or_formula = 131, 
    RuleFof_and_formula = 132, RuleFof_unary_formula = 133, RuleFof_infix_unary = 134, 
    RuleFof_unit_formula = 135, RuleFof_unitary_formula = 136, RuleFof_quantified_formula = 137, 
    RuleFof_variable_list = 138, RuleFof_atomic_formula = 139, RuleFof_plain_atomic_formula = 140, 
    RuleFof_defined_atomic_formula = 141, RuleFof_defined_plain_formula = 142, 
    RuleFof_defined_infix_formula = 143, RuleFof_system_atomic_formula = 144, 
    RuleFof_plain_term = 145, RuleFof_defined_term = 146, RuleFof_defined_atomic_term = 147, 
    RuleFof_defined_plain_term = 148, RuleFof_system_term = 149, RuleFof_arguments = 150, 
    RuleFof_term = 151, RuleFof_function_term = 152, RuleFof_sequent = 153, 
    RuleFof_formula_tuple = 154, RuleFof_formula_tuple_list = 155, RuleComma_fof_logic_formula = 156, 
    RuleCnf_formula = 157, RuleCnf_disjunction = 158, RuleCnf_literal = 159, 
    RuleThf_quantifier = 160, RuleThf_unary_connective = 161, RuleTh1_quantifier = 162, 
    RuleTh0_quantifier = 163, RuleSubtype_sign = 164, RuleTff_unary_connective = 165, 
    RuleTff_quantifier = 166, RuleFof_quantifier = 167, RuleNonassoc_connective = 168, 
    RuleAssoc_connective = 169, RuleUnary_connective = 170, RuleGentzen_arrow = 171, 
    RuleAssignment = 172, RuleIdentical = 173, RuleType_constant = 174, 
    RuleType_functor = 175, RuleDefined_type = 176, RuleAtom = 177, RuleUntyped_atom = 178, 
    RuleDefined_infix_pred = 179, RuleInfix_equality = 180, RuleInfix_inequality = 181, 
    RuleConstant = 182, RuleFunctor = 183, RuleDefined_constant = 184, RuleDefined_functor = 185, 
    RuleSystem_constant = 186, RuleSystem_functor = 187, RuleDef_or_sys_constant = 188, 
    RuleTh1_defined_term = 189, RuleDefined_term = 190, RuleVariable = 191, 
    RuleSource = 192, RuleSources = 193, RuleDag_source = 194, RuleInference_record = 195, 
    RuleInference_rule = 196, RuleInternal_source = 197, RuleIntro_type = 198, 
    RuleExternal_source = 199, RuleFile_source = 200, RuleFile_info = 201, 
    RuleTheory = 202, RuleTheory_name = 203, RuleCreator_source = 204, RuleCreator_name = 205, 
    RuleParents = 206, RuleParent_list = 207, RuleComma_parent_info = 208, 
    RuleParent_info = 209, RuleParent_details = 210, RuleOptional_info = 211, 
    RuleUseful_info = 212, RuleInclude = 213, RuleInclude_optionals = 214, 
    RuleFormula_selection = 215, RuleName_list = 216, RuleSpace_name = 217, 
    RuleGeneral_term = 218, RuleGeneral_data = 219, RuleGeneral_function = 220, 
    RuleFormula_data = 221, RuleGeneral_list = 222, RuleGeneral_terms = 223, 
    RuleComma_general_term = 224, RuleName = 225, RuleAtomic_word = 226, 
    RuleAtomic_defined_word = 227, RuleAtomic_system_word = 228, RuleNumber = 229, 
    RuleFile_name = 230, RuleNothing = 231
  };

  explicit TPTPParser(antlr4::TokenStream *input);

  TPTPParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~TPTPParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Tptp_fileContext;
  class Tptp_inputContext;
  class Annotated_formulaContext;
  class Tpi_annotatedContext;
  class Tpi_formulaContext;
  class Thf_annotatedContext;
  class Tff_annotatedContext;
  class Tcf_annotatedContext;
  class Fof_annotatedContext;
  class Cnf_annotatedContext;
  class AnnotationsContext;
  class Formula_roleContext;
  class Thf_formulaContext;
  class Thf_logic_formulaContext;
  class Thf_binary_formulaContext;
  class Thf_binary_nonassocContext;
  class Thf_binary_assocContext;
  class Thf_or_formulaContext;
  class Thf_and_formulaContext;
  class Thf_apply_formulaContext;
  class Thf_unit_formulaContext;
  class Thf_preunit_formulaContext;
  class Thf_unitary_formulaContext;
  class Thf_quantified_formulaContext;
  class Thf_quantificationContext;
  class Thf_variable_listContext;
  class Thf_typed_variableContext;
  class Thf_unary_formulaContext;
  class Thf_prefix_unaryContext;
  class Thf_infix_unaryContext;
  class Thf_atomic_formulaContext;
  class Thf_plain_atomicContext;
  class Thf_defined_atomicContext;
  class Thf_defined_termContext;
  class Thf_defined_infixContext;
  class Thf_system_atomicContext;
  class Thf_letContext;
  class Thf_let_typesContext;
  class Thf_atom_typing_listContext;
  class Thf_let_defnsContext;
  class Thf_let_defnContext;
  class Thf_let_defn_listContext;
  class Thf_unitary_termContext;
  class Thf_conn_termContext;
  class Thf_tupleContext;
  class Thf_fof_functionContext;
  class Thf_argumentsContext;
  class Thf_formula_listContext;
  class Comma_thf_logic_formulaContext;
  class Thf_atom_typingContext;
  class Thf_top_level_typeContext;
  class Thf_unitary_typeContext;
  class Thf_apply_typeContext;
  class Thf_binary_typeContext;
  class Thf_mapping_typeContext;
  class Thf_xprod_typeContext;
  class Thf_union_typeContext;
  class Thf_subtypeContext;
  class Thf_definitionContext;
  class Thf_sequentContext;
  class Tff_formulaContext;
  class Tff_logic_formulaContext;
  class Tff_binary_formulaContext;
  class Tff_binary_nonassocContext;
  class Tff_binary_assocContext;
  class Tff_or_formulaContext;
  class Tff_and_formulaContext;
  class Tff_unit_formulaContext;
  class Tff_preunit_formulaContext;
  class Tff_unitary_formulaContext;
  class Txf_unitary_formulaContext;
  class Tff_quantified_formulaContext;
  class Tff_variable_listContext;
  class Tff_variableContext;
  class Tff_typed_variableContext;
  class Tff_unary_formulaContext;
  class Tff_prefix_unaryContext;
  class Tff_infix_unaryContext;
  class Tff_atomic_formulaContext;
  class Tff_plain_atomicContext;
  class Tff_defined_atomicContext;
  class Tff_defined_plainContext;
  class Tff_defined_infixContext;
  class Tff_system_atomicContext;
  class Txf_letContext;
  class Txf_let_typesContext;
  class Tff_atom_typing_listContext;
  class Txf_let_defnsContext;
  class Txf_let_defnContext;
  class Txf_let_LHSContext;
  class Txf_let_defn_listContext;
  class Nxf_atomContext;
  class Tff_termContext;
  class Tff_unitary_termContext;
  class Txf_tupleContext;
  class Tff_argumentsContext;
  class Comma_tff_termContext;
  class Tff_atom_typingContext;
  class Tff_top_level_typeContext;
  class Tff_non_atomic_typeContext;
  class Tf1_quantified_typeContext;
  class Tff_monotypeContext;
  class Tff_unitary_typeContext;
  class Tff_atomic_typeContext;
  class Tff_type_argumentsContext;
  class Tff_mapping_typeContext;
  class Tff_xprod_typeContext;
  class Txf_tuple_typeContext;
  class Tff_type_listContext;
  class Tff_subtypeContext;
  class Txf_definitionContext;
  class Txf_sequentContext;
  class Nhf_long_connectiveContext;
  class Nhf_parameter_listContext;
  class Nhf_parameterContext;
  class Nhf_key_pairContext;
  class Nxf_long_connectiveContext;
  class Nxf_parameter_listContext;
  class Nxf_parameterContext;
  class Nxf_key_pairContext;
  class Ntf_connective_nameContext;
  class Ntf_indexContext;
  class Ntf_short_connectiveContext;
  class Tcf_formulaContext;
  class Tcf_logic_formulaContext;
  class Tcf_quantified_formulaContext;
  class Fof_formulaContext;
  class Fof_logic_formulaContext;
  class Fof_binary_formulaContext;
  class Fof_binary_nonassocContext;
  class Fof_binary_assocContext;
  class Fof_or_formulaContext;
  class Fof_and_formulaContext;
  class Fof_unary_formulaContext;
  class Fof_infix_unaryContext;
  class Fof_unit_formulaContext;
  class Fof_unitary_formulaContext;
  class Fof_quantified_formulaContext;
  class Fof_variable_listContext;
  class Fof_atomic_formulaContext;
  class Fof_plain_atomic_formulaContext;
  class Fof_defined_atomic_formulaContext;
  class Fof_defined_plain_formulaContext;
  class Fof_defined_infix_formulaContext;
  class Fof_system_atomic_formulaContext;
  class Fof_plain_termContext;
  class Fof_defined_termContext;
  class Fof_defined_atomic_termContext;
  class Fof_defined_plain_termContext;
  class Fof_system_termContext;
  class Fof_argumentsContext;
  class Fof_termContext;
  class Fof_function_termContext;
  class Fof_sequentContext;
  class Fof_formula_tupleContext;
  class Fof_formula_tuple_listContext;
  class Comma_fof_logic_formulaContext;
  class Cnf_formulaContext;
  class Cnf_disjunctionContext;
  class Cnf_literalContext;
  class Thf_quantifierContext;
  class Thf_unary_connectiveContext;
  class Th1_quantifierContext;
  class Th0_quantifierContext;
  class Subtype_signContext;
  class Tff_unary_connectiveContext;
  class Tff_quantifierContext;
  class Fof_quantifierContext;
  class Nonassoc_connectiveContext;
  class Assoc_connectiveContext;
  class Unary_connectiveContext;
  class Gentzen_arrowContext;
  class AssignmentContext;
  class IdenticalContext;
  class Type_constantContext;
  class Type_functorContext;
  class Defined_typeContext;
  class AtomContext;
  class Untyped_atomContext;
  class Defined_infix_predContext;
  class Infix_equalityContext;
  class Infix_inequalityContext;
  class ConstantContext;
  class FunctorContext;
  class Defined_constantContext;
  class Defined_functorContext;
  class System_constantContext;
  class System_functorContext;
  class Def_or_sys_constantContext;
  class Th1_defined_termContext;
  class Defined_termContext;
  class VariableContext;
  class SourceContext;
  class SourcesContext;
  class Dag_sourceContext;
  class Inference_recordContext;
  class Inference_ruleContext;
  class Internal_sourceContext;
  class Intro_typeContext;
  class External_sourceContext;
  class File_sourceContext;
  class File_infoContext;
  class TheoryContext;
  class Theory_nameContext;
  class Creator_sourceContext;
  class Creator_nameContext;
  class ParentsContext;
  class Parent_listContext;
  class Comma_parent_infoContext;
  class Parent_infoContext;
  class Parent_detailsContext;
  class Optional_infoContext;
  class Useful_infoContext;
  class IncludeContext;
  class Include_optionalsContext;
  class Formula_selectionContext;
  class Name_listContext;
  class Space_nameContext;
  class General_termContext;
  class General_dataContext;
  class General_functionContext;
  class Formula_dataContext;
  class General_listContext;
  class General_termsContext;
  class Comma_general_termContext;
  class NameContext;
  class Atomic_wordContext;
  class Atomic_defined_wordContext;
  class Atomic_system_wordContext;
  class NumberContext;
  class File_nameContext;
  class NothingContext; 

  class  Tptp_fileContext : public antlr4::ParserRuleContext {
  public:
    Tptp_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Tptp_inputContext *> tptp_input();
    Tptp_inputContext* tptp_input(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tptp_fileContext* tptp_file();

  class  Tptp_inputContext : public antlr4::ParserRuleContext {
  public:
    Tptp_inputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Annotated_formulaContext *annotated_formula();
    IncludeContext *include();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tptp_inputContext* tptp_input();

  class  Annotated_formulaContext : public antlr4::ParserRuleContext {
  public:
    Annotated_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_annotatedContext *thf_annotated();
    Tff_annotatedContext *tff_annotated();
    Tcf_annotatedContext *tcf_annotated();
    Fof_annotatedContext *fof_annotated();
    Cnf_annotatedContext *cnf_annotated();
    Tpi_annotatedContext *tpi_annotated();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Annotated_formulaContext* annotated_formula();

  class  Tpi_annotatedContext : public antlr4::ParserRuleContext {
  public:
    Tpi_annotatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Formula_roleContext *formula_role();
    Tpi_formulaContext *tpi_formula();
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tpi_annotatedContext* tpi_annotated();

  class  Tpi_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tpi_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_formulaContext *fof_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tpi_formulaContext* tpi_formula();

  class  Thf_annotatedContext : public antlr4::ParserRuleContext {
  public:
    Thf_annotatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Formula_roleContext *formula_role();
    Thf_formulaContext *thf_formula();
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_annotatedContext* thf_annotated();

  class  Tff_annotatedContext : public antlr4::ParserRuleContext {
  public:
    Tff_annotatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Formula_roleContext *formula_role();
    Tff_formulaContext *tff_formula();
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_annotatedContext* tff_annotated();

  class  Tcf_annotatedContext : public antlr4::ParserRuleContext {
  public:
    Tcf_annotatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Formula_roleContext *formula_role();
    Tcf_formulaContext *tcf_formula();
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tcf_annotatedContext* tcf_annotated();

  class  Fof_annotatedContext : public antlr4::ParserRuleContext {
  public:
    Fof_annotatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Formula_roleContext *formula_role();
    Fof_formulaContext *fof_formula();
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_annotatedContext* fof_annotated();

  class  Cnf_annotatedContext : public antlr4::ParserRuleContext {
  public:
    Cnf_annotatedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Formula_roleContext *formula_role();
    Cnf_formulaContext *cnf_formula();
    AnnotationsContext *annotations();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cnf_annotatedContext* cnf_annotated();

  class  AnnotationsContext : public antlr4::ParserRuleContext {
  public:
    AnnotationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    Optional_infoContext *optional_info();
    NothingContext *nothing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationsContext* annotations();

  class  Formula_roleContext : public antlr4::ParserRuleContext {
  public:
    Formula_roleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lower_word();
    General_termContext *general_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formula_roleContext* formula_role();

  class  Thf_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_logic_formulaContext *thf_logic_formula();
    Thf_atom_typingContext *thf_atom_typing();
    Thf_subtypeContext *thf_subtype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_formulaContext* thf_formula();

  class  Thf_logic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_logic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_unitary_formulaContext *thf_unitary_formula();
    Thf_unary_formulaContext *thf_unary_formula();
    Thf_binary_formulaContext *thf_binary_formula();
    Thf_defined_infixContext *thf_defined_infix();
    Thf_definitionContext *thf_definition();
    Thf_sequentContext *thf_sequent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_logic_formulaContext* thf_logic_formula();

  class  Thf_binary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_binary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_binary_nonassocContext *thf_binary_nonassoc();
    Thf_binary_assocContext *thf_binary_assoc();
    Thf_binary_typeContext *thf_binary_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_binary_formulaContext* thf_binary_formula();

  class  Thf_binary_nonassocContext : public antlr4::ParserRuleContext {
  public:
    Thf_binary_nonassocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unit_formulaContext *> thf_unit_formula();
    Thf_unit_formulaContext* thf_unit_formula(size_t i);
    Nonassoc_connectiveContext *nonassoc_connective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_binary_nonassocContext* thf_binary_nonassoc();

  class  Thf_binary_assocContext : public antlr4::ParserRuleContext {
  public:
    Thf_binary_assocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_or_formulaContext *thf_or_formula();
    Thf_and_formulaContext *thf_and_formula();
    Thf_apply_formulaContext *thf_apply_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_binary_assocContext* thf_binary_assoc();

  class  Thf_or_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_or_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unit_formulaContext *> thf_unit_formula();
    Thf_unit_formulaContext* thf_unit_formula(size_t i);
    antlr4::tree::TerminalNode *Vline();
    Thf_or_formulaContext *thf_or_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_or_formulaContext* thf_or_formula();
  Thf_or_formulaContext* thf_or_formula(int precedence);
  class  Thf_and_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_and_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unit_formulaContext *> thf_unit_formula();
    Thf_unit_formulaContext* thf_unit_formula(size_t i);
    Thf_and_formulaContext *thf_and_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_and_formulaContext* thf_and_formula();
  Thf_and_formulaContext* thf_and_formula(int precedence);
  class  Thf_apply_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_apply_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unit_formulaContext *> thf_unit_formula();
    Thf_unit_formulaContext* thf_unit_formula(size_t i);
    Thf_apply_formulaContext *thf_apply_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_apply_formulaContext* thf_apply_formula();
  Thf_apply_formulaContext* thf_apply_formula(int precedence);
  class  Thf_unit_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_unit_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_unitary_formulaContext *thf_unitary_formula();
    Thf_unary_formulaContext *thf_unary_formula();
    Thf_defined_infixContext *thf_defined_infix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_unit_formulaContext* thf_unit_formula();

  class  Thf_preunit_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_preunit_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_unitary_formulaContext *thf_unitary_formula();
    Thf_prefix_unaryContext *thf_prefix_unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_preunit_formulaContext* thf_preunit_formula();

  class  Thf_unitary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_unitary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_quantified_formulaContext *thf_quantified_formula();
    Thf_atomic_formulaContext *thf_atomic_formula();
    VariableContext *variable();
    Thf_logic_formulaContext *thf_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_unitary_formulaContext* thf_unitary_formula();

  class  Thf_quantified_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_quantified_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_quantificationContext *thf_quantification();
    Thf_unit_formulaContext *thf_unit_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_quantified_formulaContext* thf_quantified_formula();

  class  Thf_quantificationContext : public antlr4::ParserRuleContext {
  public:
    Thf_quantificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_quantifierContext *thf_quantifier();
    Thf_variable_listContext *thf_variable_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_quantificationContext* thf_quantification();

  class  Thf_variable_listContext : public antlr4::ParserRuleContext {
  public:
    Thf_variable_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_typed_variableContext *thf_typed_variable();
    Thf_variable_listContext *thf_variable_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_variable_listContext* thf_variable_list();

  class  Thf_typed_variableContext : public antlr4::ParserRuleContext {
  public:
    Thf_typed_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    Thf_top_level_typeContext *thf_top_level_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_typed_variableContext* thf_typed_variable();

  class  Thf_unary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_unary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_prefix_unaryContext *thf_prefix_unary();
    Thf_infix_unaryContext *thf_infix_unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_unary_formulaContext* thf_unary_formula();

  class  Thf_prefix_unaryContext : public antlr4::ParserRuleContext {
  public:
    Thf_prefix_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_unary_connectiveContext *thf_unary_connective();
    Thf_preunit_formulaContext *thf_preunit_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_prefix_unaryContext* thf_prefix_unary();

  class  Thf_infix_unaryContext : public antlr4::ParserRuleContext {
  public:
    Thf_infix_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unitary_termContext *> thf_unitary_term();
    Thf_unitary_termContext* thf_unitary_term(size_t i);
    Infix_inequalityContext *infix_inequality();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_infix_unaryContext* thf_infix_unary();

  class  Thf_atomic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Thf_atomic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_plain_atomicContext *thf_plain_atomic();
    Thf_defined_atomicContext *thf_defined_atomic();
    Thf_system_atomicContext *thf_system_atomic();
    Thf_fof_functionContext *thf_fof_function();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_atomic_formulaContext* thf_atomic_formula();

  class  Thf_plain_atomicContext : public antlr4::ParserRuleContext {
  public:
    Thf_plain_atomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    Thf_tupleContext *thf_tuple();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_plain_atomicContext* thf_plain_atomic();

  class  Thf_defined_atomicContext : public antlr4::ParserRuleContext {
  public:
    Thf_defined_atomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_constantContext *defined_constant();
    Thf_defined_termContext *thf_defined_term();
    Thf_conn_termContext *thf_conn_term();
    Nhf_long_connectiveContext *nhf_long_connective();
    Thf_letContext *thf_let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_defined_atomicContext* thf_defined_atomic();

  class  Thf_defined_termContext : public antlr4::ParserRuleContext {
  public:
    Thf_defined_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_termContext *defined_term();
    Th1_defined_termContext *th1_defined_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_defined_termContext* thf_defined_term();

  class  Thf_defined_infixContext : public antlr4::ParserRuleContext {
  public:
    Thf_defined_infixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unitary_termContext *> thf_unitary_term();
    Thf_unitary_termContext* thf_unitary_term(size_t i);
    Defined_infix_predContext *defined_infix_pred();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_defined_infixContext* thf_defined_infix();

  class  Thf_system_atomicContext : public antlr4::ParserRuleContext {
  public:
    Thf_system_atomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_constantContext *system_constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_system_atomicContext* thf_system_atomic();

  class  Thf_letContext : public antlr4::ParserRuleContext {
  public:
    Thf_letContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_let_typesContext *thf_let_types();
    Thf_let_defnsContext *thf_let_defns();
    Thf_logic_formulaContext *thf_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_letContext* thf_let();

  class  Thf_let_typesContext : public antlr4::ParserRuleContext {
  public:
    Thf_let_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_atom_typingContext *thf_atom_typing();
    Thf_atom_typing_listContext *thf_atom_typing_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_let_typesContext* thf_let_types();

  class  Thf_atom_typing_listContext : public antlr4::ParserRuleContext {
  public:
    Thf_atom_typing_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_atom_typingContext *thf_atom_typing();
    Thf_atom_typing_listContext *thf_atom_typing_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_atom_typing_listContext* thf_atom_typing_list();

  class  Thf_let_defnsContext : public antlr4::ParserRuleContext {
  public:
    Thf_let_defnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_let_defnContext *thf_let_defn();
    Thf_let_defn_listContext *thf_let_defn_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_let_defnsContext* thf_let_defns();

  class  Thf_let_defnContext : public antlr4::ParserRuleContext {
  public:
    Thf_let_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_logic_formulaContext *> thf_logic_formula();
    Thf_logic_formulaContext* thf_logic_formula(size_t i);
    AssignmentContext *assignment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_let_defnContext* thf_let_defn();

  class  Thf_let_defn_listContext : public antlr4::ParserRuleContext {
  public:
    Thf_let_defn_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_let_defnContext *thf_let_defn();
    Thf_let_defn_listContext *thf_let_defn_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_let_defn_listContext* thf_let_defn_list();

  class  Thf_unitary_termContext : public antlr4::ParserRuleContext {
  public:
    Thf_unitary_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_atomic_formulaContext *thf_atomic_formula();
    VariableContext *variable();
    Thf_logic_formulaContext *thf_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_unitary_termContext* thf_unitary_term();

  class  Thf_conn_termContext : public antlr4::ParserRuleContext {
  public:
    Thf_conn_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nonassoc_connectiveContext *nonassoc_connective();
    Assoc_connectiveContext *assoc_connective();
    Infix_equalityContext *infix_equality();
    Infix_inequalityContext *infix_inequality();
    Thf_unary_connectiveContext *thf_unary_connective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_conn_termContext* thf_conn_term();

  class  Thf_tupleContext : public antlr4::ParserRuleContext {
  public:
    Thf_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_formula_listContext *thf_formula_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_tupleContext* thf_tuple();

  class  Thf_fof_functionContext : public antlr4::ParserRuleContext {
  public:
    Thf_fof_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctorContext *functor();
    Thf_argumentsContext *thf_arguments();
    Defined_functorContext *defined_functor();
    System_functorContext *system_functor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_fof_functionContext* thf_fof_function();

  class  Thf_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Thf_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_formula_listContext *thf_formula_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_argumentsContext* thf_arguments();

  class  Thf_formula_listContext : public antlr4::ParserRuleContext {
  public:
    Thf_formula_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_logic_formulaContext *thf_logic_formula();
    std::vector<Comma_thf_logic_formulaContext *> comma_thf_logic_formula();
    Comma_thf_logic_formulaContext* comma_thf_logic_formula(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_formula_listContext* thf_formula_list();

  class  Comma_thf_logic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Comma_thf_logic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_logic_formulaContext *thf_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comma_thf_logic_formulaContext* comma_thf_logic_formula();

  class  Thf_atom_typingContext : public antlr4::ParserRuleContext {
  public:
    Thf_atom_typingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Untyped_atomContext *untyped_atom();
    Thf_top_level_typeContext *thf_top_level_type();
    Thf_atom_typingContext *thf_atom_typing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_atom_typingContext* thf_atom_typing();

  class  Thf_top_level_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_top_level_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_unitary_typeContext *thf_unitary_type();
    Thf_mapping_typeContext *thf_mapping_type();
    Thf_apply_typeContext *thf_apply_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_top_level_typeContext* thf_top_level_type();

  class  Thf_unitary_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_unitary_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_unitary_formulaContext *thf_unitary_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_unitary_typeContext* thf_unitary_type();

  class  Thf_apply_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_apply_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_apply_formulaContext *thf_apply_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_apply_typeContext* thf_apply_type();

  class  Thf_binary_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_binary_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_mapping_typeContext *thf_mapping_type();
    Thf_xprod_typeContext *thf_xprod_type();
    Thf_union_typeContext *thf_union_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_binary_typeContext* thf_binary_type();

  class  Thf_mapping_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_mapping_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unitary_typeContext *> thf_unitary_type();
    Thf_unitary_typeContext* thf_unitary_type(size_t i);
    antlr4::tree::TerminalNode *Arrow();
    Thf_mapping_typeContext *thf_mapping_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_mapping_typeContext* thf_mapping_type();

  class  Thf_xprod_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_xprod_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unitary_typeContext *> thf_unitary_type();
    Thf_unitary_typeContext* thf_unitary_type(size_t i);
    antlr4::tree::TerminalNode *Star();
    Thf_xprod_typeContext *thf_xprod_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_xprod_typeContext* thf_xprod_type();
  Thf_xprod_typeContext* thf_xprod_type(int precedence);
  class  Thf_union_typeContext : public antlr4::ParserRuleContext {
  public:
    Thf_union_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_unitary_typeContext *> thf_unitary_type();
    Thf_unitary_typeContext* thf_unitary_type(size_t i);
    antlr4::tree::TerminalNode *Plus();
    Thf_union_typeContext *thf_union_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_union_typeContext* thf_union_type();
  Thf_union_typeContext* thf_union_type(int precedence);
  class  Thf_subtypeContext : public antlr4::ParserRuleContext {
  public:
    Thf_subtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Untyped_atomContext *untyped_atom();
    Subtype_signContext *subtype_sign();
    AtomContext *atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_subtypeContext* thf_subtype();

  class  Thf_definitionContext : public antlr4::ParserRuleContext {
  public:
    Thf_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_atomic_formulaContext *thf_atomic_formula();
    IdenticalContext *identical();
    Thf_logic_formulaContext *thf_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_definitionContext* thf_definition();

  class  Thf_sequentContext : public antlr4::ParserRuleContext {
  public:
    Thf_sequentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Thf_tupleContext *> thf_tuple();
    Thf_tupleContext* thf_tuple(size_t i);
    Gentzen_arrowContext *gentzen_arrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_sequentContext* thf_sequent();

  class  Tff_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_logic_formulaContext *tff_logic_formula();
    Tff_atom_typingContext *tff_atom_typing();
    Tff_subtypeContext *tff_subtype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_formulaContext* tff_formula();

  class  Tff_logic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_logic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_unitary_formulaContext *tff_unitary_formula();
    Tff_unary_formulaContext *tff_unary_formula();
    Tff_binary_formulaContext *tff_binary_formula();
    Tff_defined_infixContext *tff_defined_infix();
    Txf_definitionContext *txf_definition();
    Txf_sequentContext *txf_sequent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_logic_formulaContext* tff_logic_formula();

  class  Tff_binary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_binary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_binary_nonassocContext *tff_binary_nonassoc();
    Tff_binary_assocContext *tff_binary_assoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_binary_formulaContext* tff_binary_formula();

  class  Tff_binary_nonassocContext : public antlr4::ParserRuleContext {
  public:
    Tff_binary_nonassocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tff_unit_formulaContext *> tff_unit_formula();
    Tff_unit_formulaContext* tff_unit_formula(size_t i);
    Nonassoc_connectiveContext *nonassoc_connective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_binary_nonassocContext* tff_binary_nonassoc();

  class  Tff_binary_assocContext : public antlr4::ParserRuleContext {
  public:
    Tff_binary_assocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_or_formulaContext *tff_or_formula();
    Tff_and_formulaContext *tff_and_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_binary_assocContext* tff_binary_assoc();

  class  Tff_or_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_or_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tff_unit_formulaContext *> tff_unit_formula();
    Tff_unit_formulaContext* tff_unit_formula(size_t i);
    antlr4::tree::TerminalNode *Vline();
    Tff_or_formulaContext *tff_or_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_or_formulaContext* tff_or_formula();
  Tff_or_formulaContext* tff_or_formula(int precedence);
  class  Tff_and_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_and_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tff_unit_formulaContext *> tff_unit_formula();
    Tff_unit_formulaContext* tff_unit_formula(size_t i);
    Tff_and_formulaContext *tff_and_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_and_formulaContext* tff_and_formula();
  Tff_and_formulaContext* tff_and_formula(int precedence);
  class  Tff_unit_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_unit_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_unitary_formulaContext *tff_unitary_formula();
    Tff_unary_formulaContext *tff_unary_formula();
    Tff_defined_infixContext *tff_defined_infix();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_unit_formulaContext* tff_unit_formula();

  class  Tff_preunit_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_preunit_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_unitary_formulaContext *tff_unitary_formula();
    Tff_prefix_unaryContext *tff_prefix_unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_preunit_formulaContext* tff_preunit_formula();

  class  Tff_unitary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_unitary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_quantified_formulaContext *tff_quantified_formula();
    Tff_atomic_formulaContext *tff_atomic_formula();
    Txf_unitary_formulaContext *txf_unitary_formula();
    Tff_logic_formulaContext *tff_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_unitary_formulaContext* tff_unitary_formula();

  class  Txf_unitary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Txf_unitary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_unitary_formulaContext* txf_unitary_formula();

  class  Tff_quantified_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_quantified_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_quantifierContext *tff_quantifier();
    Tff_variable_listContext *tff_variable_list();
    Tff_unit_formulaContext *tff_unit_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_quantified_formulaContext* tff_quantified_formula();

  class  Tff_variable_listContext : public antlr4::ParserRuleContext {
  public:
    Tff_variable_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_variableContext *tff_variable();
    Tff_variable_listContext *tff_variable_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_variable_listContext* tff_variable_list();

  class  Tff_variableContext : public antlr4::ParserRuleContext {
  public:
    Tff_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_typed_variableContext *tff_typed_variable();
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_variableContext* tff_variable();

  class  Tff_typed_variableContext : public antlr4::ParserRuleContext {
  public:
    Tff_typed_variableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    Tff_atomic_typeContext *tff_atomic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_typed_variableContext* tff_typed_variable();

  class  Tff_unary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_unary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_prefix_unaryContext *tff_prefix_unary();
    Tff_infix_unaryContext *tff_infix_unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_unary_formulaContext* tff_unary_formula();

  class  Tff_prefix_unaryContext : public antlr4::ParserRuleContext {
  public:
    Tff_prefix_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_unary_connectiveContext *tff_unary_connective();
    Tff_preunit_formulaContext *tff_preunit_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_prefix_unaryContext* tff_prefix_unary();

  class  Tff_infix_unaryContext : public antlr4::ParserRuleContext {
  public:
    Tff_infix_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tff_unitary_termContext *> tff_unitary_term();
    Tff_unitary_termContext* tff_unitary_term(size_t i);
    Infix_inequalityContext *infix_inequality();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_infix_unaryContext* tff_infix_unary();

  class  Tff_atomic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tff_atomic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_plain_atomicContext *tff_plain_atomic();
    Tff_defined_atomicContext *tff_defined_atomic();
    Tff_system_atomicContext *tff_system_atomic();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_atomic_formulaContext* tff_atomic_formula();

  class  Tff_plain_atomicContext : public antlr4::ParserRuleContext {
  public:
    Tff_plain_atomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    FunctorContext *functor();
    Tff_argumentsContext *tff_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_plain_atomicContext* tff_plain_atomic();

  class  Tff_defined_atomicContext : public antlr4::ParserRuleContext {
  public:
    Tff_defined_atomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_defined_plainContext *tff_defined_plain();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_defined_atomicContext* tff_defined_atomic();

  class  Tff_defined_plainContext : public antlr4::ParserRuleContext {
  public:
    Tff_defined_plainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_constantContext *defined_constant();
    Defined_functorContext *defined_functor();
    Tff_argumentsContext *tff_arguments();
    Nxf_atomContext *nxf_atom();
    Txf_letContext *txf_let();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_defined_plainContext* tff_defined_plain();

  class  Tff_defined_infixContext : public antlr4::ParserRuleContext {
  public:
    Tff_defined_infixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Tff_unitary_termContext *> tff_unitary_term();
    Tff_unitary_termContext* tff_unitary_term(size_t i);
    Defined_infix_predContext *defined_infix_pred();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_defined_infixContext* tff_defined_infix();

  class  Tff_system_atomicContext : public antlr4::ParserRuleContext {
  public:
    Tff_system_atomicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_constantContext *system_constant();
    System_functorContext *system_functor();
    Tff_argumentsContext *tff_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_system_atomicContext* tff_system_atomic();

  class  Txf_letContext : public antlr4::ParserRuleContext {
  public:
    Txf_letContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Txf_let_typesContext *txf_let_types();
    Txf_let_defnsContext *txf_let_defns();
    Tff_termContext *tff_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_letContext* txf_let();

  class  Txf_let_typesContext : public antlr4::ParserRuleContext {
  public:
    Txf_let_typesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atom_typingContext *tff_atom_typing();
    Tff_atom_typing_listContext *tff_atom_typing_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_let_typesContext* txf_let_types();

  class  Tff_atom_typing_listContext : public antlr4::ParserRuleContext {
  public:
    Tff_atom_typing_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atom_typingContext *tff_atom_typing();
    Tff_atom_typing_listContext *tff_atom_typing_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_atom_typing_listContext* tff_atom_typing_list();

  class  Txf_let_defnsContext : public antlr4::ParserRuleContext {
  public:
    Txf_let_defnsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Txf_let_defnContext *txf_let_defn();
    Txf_let_defn_listContext *txf_let_defn_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_let_defnsContext* txf_let_defns();

  class  Txf_let_defnContext : public antlr4::ParserRuleContext {
  public:
    Txf_let_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Txf_let_LHSContext *txf_let_LHS();
    AssignmentContext *assignment();
    Tff_termContext *tff_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_let_defnContext* txf_let_defn();

  class  Txf_let_LHSContext : public antlr4::ParserRuleContext {
  public:
    Txf_let_LHSContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_plain_atomicContext *tff_plain_atomic();
    Txf_tupleContext *txf_tuple();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_let_LHSContext* txf_let_LHS();

  class  Txf_let_defn_listContext : public antlr4::ParserRuleContext {
  public:
    Txf_let_defn_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Txf_let_defnContext *txf_let_defn();
    Txf_let_defn_listContext *txf_let_defn_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_let_defn_listContext* txf_let_defn_list();

  class  Nxf_atomContext : public antlr4::ParserRuleContext {
  public:
    Nxf_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nxf_long_connectiveContext *nxf_long_connective();
    Tff_argumentsContext *tff_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nxf_atomContext* nxf_atom();

  class  Tff_termContext : public antlr4::ParserRuleContext {
  public:
    Tff_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_logic_formulaContext *tff_logic_formula();
    Defined_termContext *defined_term();
    Txf_tupleContext *txf_tuple();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_termContext* tff_term();

  class  Tff_unitary_termContext : public antlr4::ParserRuleContext {
  public:
    Tff_unitary_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atomic_formulaContext *tff_atomic_formula();
    Defined_termContext *defined_term();
    Txf_tupleContext *txf_tuple();
    VariableContext *variable();
    Tff_logic_formulaContext *tff_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_unitary_termContext* tff_unitary_term();

  class  Txf_tupleContext : public antlr4::ParserRuleContext {
  public:
    Txf_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_argumentsContext *tff_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_tupleContext* txf_tuple();

  class  Tff_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Tff_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_termContext *tff_term();
    std::vector<Comma_tff_termContext *> comma_tff_term();
    Comma_tff_termContext* comma_tff_term(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_argumentsContext* tff_arguments();

  class  Comma_tff_termContext : public antlr4::ParserRuleContext {
  public:
    Comma_tff_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_termContext *tff_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comma_tff_termContext* comma_tff_term();

  class  Tff_atom_typingContext : public antlr4::ParserRuleContext {
  public:
    Tff_atom_typingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Untyped_atomContext *untyped_atom();
    Tff_top_level_typeContext *tff_top_level_type();
    Tff_atom_typingContext *tff_atom_typing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_atom_typingContext* tff_atom_typing();

  class  Tff_top_level_typeContext : public antlr4::ParserRuleContext {
  public:
    Tff_top_level_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atomic_typeContext *tff_atomic_type();
    Tff_non_atomic_typeContext *tff_non_atomic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_top_level_typeContext* tff_top_level_type();

  class  Tff_non_atomic_typeContext : public antlr4::ParserRuleContext {
  public:
    Tff_non_atomic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_mapping_typeContext *tff_mapping_type();
    Tf1_quantified_typeContext *tf1_quantified_type();
    Tff_non_atomic_typeContext *tff_non_atomic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_non_atomic_typeContext* tff_non_atomic_type();

  class  Tf1_quantified_typeContext : public antlr4::ParserRuleContext {
  public:
    Tf1_quantified_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_variable_listContext *tff_variable_list();
    Tff_monotypeContext *tff_monotype();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tf1_quantified_typeContext* tf1_quantified_type();

  class  Tff_monotypeContext : public antlr4::ParserRuleContext {
  public:
    Tff_monotypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atomic_typeContext *tff_atomic_type();
    Tff_mapping_typeContext *tff_mapping_type();
    Tf1_quantified_typeContext *tf1_quantified_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_monotypeContext* tff_monotype();

  class  Tff_unitary_typeContext : public antlr4::ParserRuleContext {
  public:
    Tff_unitary_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atomic_typeContext *tff_atomic_type();
    Tff_xprod_typeContext *tff_xprod_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_unitary_typeContext* tff_unitary_type();

  class  Tff_atomic_typeContext : public antlr4::ParserRuleContext {
  public:
    Tff_atomic_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_constantContext *type_constant();
    Defined_typeContext *defined_type();
    VariableContext *variable();
    Type_functorContext *type_functor();
    Tff_type_argumentsContext *tff_type_arguments();
    Tff_atomic_typeContext *tff_atomic_type();
    Txf_tuple_typeContext *txf_tuple_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_atomic_typeContext* tff_atomic_type();

  class  Tff_type_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Tff_type_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atomic_typeContext *tff_atomic_type();
    Tff_type_argumentsContext *tff_type_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_type_argumentsContext* tff_type_arguments();

  class  Tff_mapping_typeContext : public antlr4::ParserRuleContext {
  public:
    Tff_mapping_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_unitary_typeContext *tff_unitary_type();
    antlr4::tree::TerminalNode *Arrow();
    Tff_atomic_typeContext *tff_atomic_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_mapping_typeContext* tff_mapping_type();

  class  Tff_xprod_typeContext : public antlr4::ParserRuleContext {
  public:
    Tff_xprod_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_unitary_typeContext *tff_unitary_type();
    antlr4::tree::TerminalNode *Star();
    Tff_atomic_typeContext *tff_atomic_type();
    Tff_xprod_typeContext *tff_xprod_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_xprod_typeContext* tff_xprod_type();
  Tff_xprod_typeContext* tff_xprod_type(int precedence);
  class  Txf_tuple_typeContext : public antlr4::ParserRuleContext {
  public:
    Txf_tuple_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_type_listContext *tff_type_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_tuple_typeContext* txf_tuple_type();

  class  Tff_type_listContext : public antlr4::ParserRuleContext {
  public:
    Tff_type_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_top_level_typeContext *tff_top_level_type();
    Tff_type_listContext *tff_type_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_type_listContext* tff_type_list();

  class  Tff_subtypeContext : public antlr4::ParserRuleContext {
  public:
    Tff_subtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Untyped_atomContext *untyped_atom();
    Subtype_signContext *subtype_sign();
    AtomContext *atom();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_subtypeContext* tff_subtype();

  class  Txf_definitionContext : public antlr4::ParserRuleContext {
  public:
    Txf_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_atomic_formulaContext *tff_atomic_formula();
    IdenticalContext *identical();
    Tff_termContext *tff_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_definitionContext* txf_definition();

  class  Txf_sequentContext : public antlr4::ParserRuleContext {
  public:
    Txf_sequentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Txf_tupleContext *> txf_tuple();
    Txf_tupleContext* txf_tuple(size_t i);
    Gentzen_arrowContext *gentzen_arrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Txf_sequentContext* txf_sequent();

  class  Nhf_long_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Nhf_long_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ntf_connective_nameContext *ntf_connective_name();
    Nhf_parameter_listContext *nhf_parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nhf_long_connectiveContext* nhf_long_connective();

  class  Nhf_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Nhf_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nhf_parameterContext *nhf_parameter();
    Nhf_parameter_listContext *nhf_parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nhf_parameter_listContext* nhf_parameter_list();

  class  Nhf_parameterContext : public antlr4::ParserRuleContext {
  public:
    Nhf_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ntf_indexContext *ntf_index();
    Nhf_key_pairContext *nhf_key_pair();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nhf_parameterContext* nhf_parameter();

  class  Nhf_key_pairContext : public antlr4::ParserRuleContext {
  public:
    Nhf_key_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_definitionContext *thf_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nhf_key_pairContext* nhf_key_pair();

  class  Nxf_long_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Nxf_long_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ntf_connective_nameContext *ntf_connective_name();
    Nxf_parameter_listContext *nxf_parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nxf_long_connectiveContext* nxf_long_connective();

  class  Nxf_parameter_listContext : public antlr4::ParserRuleContext {
  public:
    Nxf_parameter_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nxf_parameterContext *nxf_parameter();
    Nxf_parameter_listContext *nxf_parameter_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nxf_parameter_listContext* nxf_parameter_list();

  class  Nxf_parameterContext : public antlr4::ParserRuleContext {
  public:
    Nxf_parameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Ntf_indexContext *ntf_index();
    Nxf_key_pairContext *nxf_key_pair();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nxf_parameterContext* nxf_parameter();

  class  Nxf_key_pairContext : public antlr4::ParserRuleContext {
  public:
    Nxf_key_pairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Txf_definitionContext *txf_definition();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nxf_key_pairContext* nxf_key_pair();

  class  Ntf_connective_nameContext : public antlr4::ParserRuleContext {
  public:
    Ntf_connective_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Def_or_sys_constantContext *def_or_sys_constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ntf_connective_nameContext* ntf_connective_name();

  class  Ntf_indexContext : public antlr4::ParserRuleContext {
  public:
    Ntf_indexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Hash();
    Tff_unitary_termContext *tff_unitary_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ntf_indexContext* ntf_index();

  class  Ntf_short_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Ntf_short_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Less_sign();
    antlr4::tree::TerminalNode *Arrow();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ntf_short_connectiveContext* ntf_short_connective();

  class  Tcf_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tcf_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tcf_logic_formulaContext *tcf_logic_formula();
    Tff_atom_typingContext *tff_atom_typing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tcf_formulaContext* tcf_formula();

  class  Tcf_logic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tcf_logic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tcf_quantified_formulaContext *tcf_quantified_formula();
    Cnf_formulaContext *cnf_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tcf_logic_formulaContext* tcf_logic_formula();

  class  Tcf_quantified_formulaContext : public antlr4::ParserRuleContext {
  public:
    Tcf_quantified_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_variable_listContext *tff_variable_list();
    Tcf_logic_formulaContext *tcf_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tcf_quantified_formulaContext* tcf_quantified_formula();

  class  Fof_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_logic_formulaContext *fof_logic_formula();
    Fof_sequentContext *fof_sequent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_formulaContext* fof_formula();

  class  Fof_logic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_logic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_binary_formulaContext *fof_binary_formula();
    Fof_unary_formulaContext *fof_unary_formula();
    Fof_unitary_formulaContext *fof_unitary_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_logic_formulaContext* fof_logic_formula();

  class  Fof_binary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_binary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_binary_nonassocContext *fof_binary_nonassoc();
    Fof_binary_assocContext *fof_binary_assoc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_binary_formulaContext* fof_binary_formula();

  class  Fof_binary_nonassocContext : public antlr4::ParserRuleContext {
  public:
    Fof_binary_nonassocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fof_unit_formulaContext *> fof_unit_formula();
    Fof_unit_formulaContext* fof_unit_formula(size_t i);
    Nonassoc_connectiveContext *nonassoc_connective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_binary_nonassocContext* fof_binary_nonassoc();

  class  Fof_binary_assocContext : public antlr4::ParserRuleContext {
  public:
    Fof_binary_assocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_or_formulaContext *fof_or_formula();
    Fof_and_formulaContext *fof_and_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_binary_assocContext* fof_binary_assoc();

  class  Fof_or_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_or_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fof_unit_formulaContext *> fof_unit_formula();
    Fof_unit_formulaContext* fof_unit_formula(size_t i);
    antlr4::tree::TerminalNode *Vline();
    Fof_or_formulaContext *fof_or_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_or_formulaContext* fof_or_formula();
  Fof_or_formulaContext* fof_or_formula(int precedence);
  class  Fof_and_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_and_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fof_unit_formulaContext *> fof_unit_formula();
    Fof_unit_formulaContext* fof_unit_formula(size_t i);
    Fof_and_formulaContext *fof_and_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_and_formulaContext* fof_and_formula();
  Fof_and_formulaContext* fof_and_formula(int precedence);
  class  Fof_unary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_unary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_connectiveContext *unary_connective();
    Fof_unit_formulaContext *fof_unit_formula();
    Fof_infix_unaryContext *fof_infix_unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_unary_formulaContext* fof_unary_formula();

  class  Fof_infix_unaryContext : public antlr4::ParserRuleContext {
  public:
    Fof_infix_unaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fof_termContext *> fof_term();
    Fof_termContext* fof_term(size_t i);
    Infix_inequalityContext *infix_inequality();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_infix_unaryContext* fof_infix_unary();

  class  Fof_unit_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_unit_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_unitary_formulaContext *fof_unitary_formula();
    Fof_unary_formulaContext *fof_unary_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_unit_formulaContext* fof_unit_formula();

  class  Fof_unitary_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_unitary_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_quantified_formulaContext *fof_quantified_formula();
    Fof_atomic_formulaContext *fof_atomic_formula();
    Fof_logic_formulaContext *fof_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_unitary_formulaContext* fof_unitary_formula();

  class  Fof_quantified_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_quantified_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_quantifierContext *fof_quantifier();
    Fof_variable_listContext *fof_variable_list();
    Fof_unit_formulaContext *fof_unit_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_quantified_formulaContext* fof_quantified_formula();

  class  Fof_variable_listContext : public antlr4::ParserRuleContext {
  public:
    Fof_variable_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    Fof_variable_listContext *fof_variable_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_variable_listContext* fof_variable_list();

  class  Fof_atomic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_atomic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_plain_atomic_formulaContext *fof_plain_atomic_formula();
    Fof_defined_atomic_formulaContext *fof_defined_atomic_formula();
    Fof_system_atomic_formulaContext *fof_system_atomic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_atomic_formulaContext* fof_atomic_formula();

  class  Fof_plain_atomic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_plain_atomic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_plain_termContext *fof_plain_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_plain_atomic_formulaContext* fof_plain_atomic_formula();

  class  Fof_defined_atomic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_defined_atomic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_defined_plain_formulaContext *fof_defined_plain_formula();
    Fof_defined_infix_formulaContext *fof_defined_infix_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_defined_atomic_formulaContext* fof_defined_atomic_formula();

  class  Fof_defined_plain_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_defined_plain_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_defined_plain_termContext *fof_defined_plain_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_defined_plain_formulaContext* fof_defined_plain_formula();

  class  Fof_defined_infix_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_defined_infix_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fof_termContext *> fof_term();
    Fof_termContext* fof_term(size_t i);
    Defined_infix_predContext *defined_infix_pred();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_defined_infix_formulaContext* fof_defined_infix_formula();

  class  Fof_system_atomic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Fof_system_atomic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_system_termContext *fof_system_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_system_atomic_formulaContext* fof_system_atomic_formula();

  class  Fof_plain_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_plain_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    FunctorContext *functor();
    Fof_argumentsContext *fof_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_plain_termContext* fof_plain_term();

  class  Fof_defined_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_defined_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_termContext *defined_term();
    Fof_defined_atomic_termContext *fof_defined_atomic_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_defined_termContext* fof_defined_term();

  class  Fof_defined_atomic_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_defined_atomic_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_defined_plain_termContext *fof_defined_plain_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_defined_atomic_termContext* fof_defined_atomic_term();

  class  Fof_defined_plain_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_defined_plain_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_constantContext *defined_constant();
    Defined_functorContext *defined_functor();
    Fof_argumentsContext *fof_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_defined_plain_termContext* fof_defined_plain_term();

  class  Fof_system_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_system_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_constantContext *system_constant();
    System_functorContext *system_functor();
    Fof_argumentsContext *fof_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_system_termContext* fof_system_term();

  class  Fof_argumentsContext : public antlr4::ParserRuleContext {
  public:
    Fof_argumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_termContext *fof_term();
    Fof_argumentsContext *fof_arguments();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_argumentsContext* fof_arguments();

  class  Fof_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_function_termContext *fof_function_term();
    VariableContext *variable();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_termContext* fof_term();

  class  Fof_function_termContext : public antlr4::ParserRuleContext {
  public:
    Fof_function_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_plain_termContext *fof_plain_term();
    Fof_defined_termContext *fof_defined_term();
    Fof_system_termContext *fof_system_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_function_termContext* fof_function_term();

  class  Fof_sequentContext : public antlr4::ParserRuleContext {
  public:
    Fof_sequentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Fof_formula_tupleContext *> fof_formula_tuple();
    Fof_formula_tupleContext* fof_formula_tuple(size_t i);
    Gentzen_arrowContext *gentzen_arrow();
    Fof_sequentContext *fof_sequent();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_sequentContext* fof_sequent();

  class  Fof_formula_tupleContext : public antlr4::ParserRuleContext {
  public:
    Fof_formula_tupleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_formula_tuple_listContext *fof_formula_tuple_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_formula_tupleContext* fof_formula_tuple();

  class  Fof_formula_tuple_listContext : public antlr4::ParserRuleContext {
  public:
    Fof_formula_tuple_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_logic_formulaContext *fof_logic_formula();
    std::vector<Comma_fof_logic_formulaContext *> comma_fof_logic_formula();
    Comma_fof_logic_formulaContext* comma_fof_logic_formula(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_formula_tuple_listContext* fof_formula_tuple_list();

  class  Comma_fof_logic_formulaContext : public antlr4::ParserRuleContext {
  public:
    Comma_fof_logic_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_logic_formulaContext *fof_logic_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comma_fof_logic_formulaContext* comma_fof_logic_formula();

  class  Cnf_formulaContext : public antlr4::ParserRuleContext {
  public:
    Cnf_formulaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cnf_disjunctionContext *cnf_disjunction();
    Cnf_formulaContext *cnf_formula();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cnf_formulaContext* cnf_formula();

  class  Cnf_disjunctionContext : public antlr4::ParserRuleContext {
  public:
    Cnf_disjunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Cnf_literalContext *cnf_literal();
    Cnf_disjunctionContext *cnf_disjunction();
    antlr4::tree::TerminalNode *Vline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cnf_disjunctionContext* cnf_disjunction();
  Cnf_disjunctionContext* cnf_disjunction(int precedence);
  class  Cnf_literalContext : public antlr4::ParserRuleContext {
  public:
    Cnf_literalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_atomic_formulaContext *fof_atomic_formula();
    Fof_infix_unaryContext *fof_infix_unary();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Cnf_literalContext* cnf_literal();

  class  Thf_quantifierContext : public antlr4::ParserRuleContext {
  public:
    Thf_quantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Tff_quantifierContext *tff_quantifier();
    Th0_quantifierContext *th0_quantifier();
    Th1_quantifierContext *th1_quantifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_quantifierContext* thf_quantifier();

  class  Thf_unary_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Thf_unary_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_connectiveContext *unary_connective();
    Ntf_short_connectiveContext *ntf_short_connective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Thf_unary_connectiveContext* thf_unary_connective();

  class  Th1_quantifierContext : public antlr4::ParserRuleContext {
  public:
    Th1_quantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Th1_quantifierContext* th1_quantifier();

  class  Th0_quantifierContext : public antlr4::ParserRuleContext {
  public:
    Th0_quantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Th0_quantifierContext* th0_quantifier();

  class  Subtype_signContext : public antlr4::ParserRuleContext {
  public:
    Subtype_signContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Subtype_signContext* subtype_sign();

  class  Tff_unary_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Tff_unary_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Unary_connectiveContext *unary_connective();
    Ntf_short_connectiveContext *ntf_short_connective();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_unary_connectiveContext* tff_unary_connective();

  class  Tff_quantifierContext : public antlr4::ParserRuleContext {
  public:
    Tff_quantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fof_quantifierContext *fof_quantifier();
    antlr4::tree::TerminalNode *Hash();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Tff_quantifierContext* tff_quantifier();

  class  Fof_quantifierContext : public antlr4::ParserRuleContext {
  public:
    Fof_quantifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Fof_quantifierContext* fof_quantifier();

  class  Nonassoc_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Nonassoc_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Vline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nonassoc_connectiveContext* nonassoc_connective();

  class  Assoc_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Assoc_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Vline();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assoc_connectiveContext* assoc_connective();

  class  Unary_connectiveContext : public antlr4::ParserRuleContext {
  public:
    Unary_connectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unary_connectiveContext* unary_connective();

  class  Gentzen_arrowContext : public antlr4::ParserRuleContext {
  public:
    Gentzen_arrowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Gentzen_arrowContext* gentzen_arrow();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  IdenticalContext : public antlr4::ParserRuleContext {
  public:
    IdenticalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdenticalContext* identical();

  class  Type_constantContext : public antlr4::ParserRuleContext {
  public:
    Type_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_functorContext *type_functor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_constantContext* type_constant();

  class  Type_functorContext : public antlr4::ParserRuleContext {
  public:
    Type_functorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_functorContext* type_functor();

  class  Defined_typeContext : public antlr4::ParserRuleContext {
  public:
    Defined_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_defined_wordContext *atomic_defined_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defined_typeContext* defined_type();

  class  AtomContext : public antlr4::ParserRuleContext {
  public:
    AtomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Untyped_atomContext *untyped_atom();
    Defined_constantContext *defined_constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AtomContext* atom();

  class  Untyped_atomContext : public antlr4::ParserRuleContext {
  public:
    Untyped_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantContext *constant();
    System_constantContext *system_constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Untyped_atomContext* untyped_atom();

  class  Defined_infix_predContext : public antlr4::ParserRuleContext {
  public:
    Defined_infix_predContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Infix_equalityContext *infix_equality();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defined_infix_predContext* defined_infix_pred();

  class  Infix_equalityContext : public antlr4::ParserRuleContext {
  public:
    Infix_equalityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Infix_equalityContext* infix_equality();

  class  Infix_inequalityContext : public antlr4::ParserRuleContext {
  public:
    Infix_inequalityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Infix_inequalityContext* infix_inequality();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctorContext *functor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();

  class  FunctorContext : public antlr4::ParserRuleContext {
  public:
    FunctorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctorContext* functor();

  class  Defined_constantContext : public antlr4::ParserRuleContext {
  public:
    Defined_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_functorContext *defined_functor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defined_constantContext* defined_constant();

  class  Defined_functorContext : public antlr4::ParserRuleContext {
  public:
    Defined_functorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_defined_wordContext *atomic_defined_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defined_functorContext* defined_functor();

  class  System_constantContext : public antlr4::ParserRuleContext {
  public:
    System_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    System_functorContext *system_functor();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_constantContext* system_constant();

  class  System_functorContext : public antlr4::ParserRuleContext {
  public:
    System_functorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_system_wordContext *atomic_system_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  System_functorContext* system_functor();

  class  Def_or_sys_constantContext : public antlr4::ParserRuleContext {
  public:
    Def_or_sys_constantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Defined_constantContext *defined_constant();
    System_constantContext *system_constant();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Def_or_sys_constantContext* def_or_sys_constant();

  class  Th1_defined_termContext : public antlr4::ParserRuleContext {
  public:
    Th1_defined_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Th1_defined_termContext* th1_defined_term();

  class  Defined_termContext : public antlr4::ParserRuleContext {
  public:
    Defined_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberContext *number();
    antlr4::tree::TerminalNode *Distinct_object();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Defined_termContext* defined_term();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Upper_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  SourceContext : public antlr4::ParserRuleContext {
  public:
    SourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Dag_sourceContext *dag_source();
    Internal_sourceContext *internal_source();
    External_sourceContext *external_source();
    SourcesContext *sources();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourceContext* source();

  class  SourcesContext : public antlr4::ParserRuleContext {
  public:
    SourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    SourcesContext *sources();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SourcesContext* sources();

  class  Dag_sourceContext : public antlr4::ParserRuleContext {
  public:
    Dag_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Inference_recordContext *inference_record();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Dag_sourceContext* dag_source();

  class  Inference_recordContext : public antlr4::ParserRuleContext {
  public:
    Inference_recordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Inference_ruleContext *inference_rule();
    Useful_infoContext *useful_info();
    ParentsContext *parents();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inference_recordContext* inference_record();

  class  Inference_ruleContext : public antlr4::ParserRuleContext {
  public:
    Inference_ruleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Inference_ruleContext* inference_rule();

  class  Internal_sourceContext : public antlr4::ParserRuleContext {
  public:
    Internal_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Intro_typeContext *intro_type();
    Useful_infoContext *useful_info();
    ParentsContext *parents();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Internal_sourceContext* internal_source();

  class  Intro_typeContext : public antlr4::ParserRuleContext {
  public:
    Intro_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Intro_typeContext* intro_type();

  class  External_sourceContext : public antlr4::ParserRuleContext {
  public:
    External_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_sourceContext *file_source();
    TheoryContext *theory();
    Creator_sourceContext *creator_source();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  External_sourceContext* external_source();

  class  File_sourceContext : public antlr4::ParserRuleContext {
  public:
    File_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_nameContext *file_name();
    File_infoContext *file_info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_sourceContext* file_source();

  class  File_infoContext : public antlr4::ParserRuleContext {
  public:
    File_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    NothingContext *nothing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_infoContext* file_info();

  class  TheoryContext : public antlr4::ParserRuleContext {
  public:
    TheoryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Theory_nameContext *theory_name();
    Optional_infoContext *optional_info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheoryContext* theory();

  class  Theory_nameContext : public antlr4::ParserRuleContext {
  public:
    Theory_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Theory_nameContext* theory_name();

  class  Creator_sourceContext : public antlr4::ParserRuleContext {
  public:
    Creator_sourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Creator_nameContext *creator_name();
    Useful_infoContext *useful_info();
    ParentsContext *parents();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Creator_sourceContext* creator_source();

  class  Creator_nameContext : public antlr4::ParserRuleContext {
  public:
    Creator_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Creator_nameContext* creator_name();

  class  ParentsContext : public antlr4::ParserRuleContext {
  public:
    ParentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parent_listContext *parent_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParentsContext* parents();

  class  Parent_listContext : public antlr4::ParserRuleContext {
  public:
    Parent_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parent_infoContext *parent_info();
    std::vector<Comma_parent_infoContext *> comma_parent_info();
    Comma_parent_infoContext* comma_parent_info(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parent_listContext* parent_list();

  class  Comma_parent_infoContext : public antlr4::ParserRuleContext {
  public:
    Comma_parent_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Parent_infoContext *parent_info();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comma_parent_infoContext* comma_parent_info();

  class  Parent_infoContext : public antlr4::ParserRuleContext {
  public:
    Parent_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceContext *source();
    Parent_detailsContext *parent_details();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parent_infoContext* parent_info();

  class  Parent_detailsContext : public antlr4::ParserRuleContext {
  public:
    Parent_detailsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_termContext *general_term();
    NothingContext *nothing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Parent_detailsContext* parent_details();

  class  Optional_infoContext : public antlr4::ParserRuleContext {
  public:
    Optional_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Useful_infoContext *useful_info();
    NothingContext *nothing();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Optional_infoContext* optional_info();

  class  Useful_infoContext : public antlr4::ParserRuleContext {
  public:
    Useful_infoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_listContext *general_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Useful_infoContext* useful_info();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    File_nameContext *file_name();
    Include_optionalsContext *include_optionals();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncludeContext* include();

  class  Include_optionalsContext : public antlr4::ParserRuleContext {
  public:
    Include_optionalsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NothingContext *nothing();
    Formula_selectionContext *formula_selection();
    Space_nameContext *space_name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Include_optionalsContext* include_optionals();

  class  Formula_selectionContext : public antlr4::ParserRuleContext {
  public:
    Formula_selectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Name_listContext *name_list();
    antlr4::tree::TerminalNode *Star();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formula_selectionContext* formula_selection();

  class  Name_listContext : public antlr4::ParserRuleContext {
  public:
    Name_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();
    Name_listContext *name_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Name_listContext* name_list();

  class  Space_nameContext : public antlr4::ParserRuleContext {
  public:
    Space_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Space_nameContext* space_name();

  class  General_termContext : public antlr4::ParserRuleContext {
  public:
    General_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_dataContext *general_data();
    General_termContext *general_term();
    General_listContext *general_list();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_termContext* general_term();

  class  General_dataContext : public antlr4::ParserRuleContext {
  public:
    General_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();
    General_functionContext *general_function();
    VariableContext *variable();
    NumberContext *number();
    antlr4::tree::TerminalNode *Distinct_object();
    Formula_dataContext *formula_data();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_dataContext* general_data();

  class  General_functionContext : public antlr4::ParserRuleContext {
  public:
    General_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();
    General_termsContext *general_terms();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_functionContext* general_function();

  class  Formula_dataContext : public antlr4::ParserRuleContext {
  public:
    Formula_dataContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Thf_formulaContext *thf_formula();
    Tff_formulaContext *tff_formula();
    Fof_formulaContext *fof_formula();
    Cnf_formulaContext *cnf_formula();
    Fof_termContext *fof_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Formula_dataContext* formula_data();

  class  General_listContext : public antlr4::ParserRuleContext {
  public:
    General_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_termsContext *general_terms();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_listContext* general_list();

  class  General_termsContext : public antlr4::ParserRuleContext {
  public:
    General_termsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_termContext *general_term();
    std::vector<Comma_general_termContext *> comma_general_term();
    Comma_general_termContext* comma_general_term(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  General_termsContext* general_terms();

  class  Comma_general_termContext : public antlr4::ParserRuleContext {
  public:
    Comma_general_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    General_termContext *general_term();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Comma_general_termContext* comma_general_term();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();
    antlr4::tree::TerminalNode *Integer();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  Atomic_wordContext : public antlr4::ParserRuleContext {
  public:
    Atomic_wordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lower_word();
    antlr4::tree::TerminalNode *Single_quoted();
    antlr4::tree::TerminalNode *Back_quoted();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atomic_wordContext* atomic_word();

  class  Atomic_defined_wordContext : public antlr4::ParserRuleContext {
  public:
    Atomic_defined_wordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dollar_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atomic_defined_wordContext* atomic_defined_word();

  class  Atomic_system_wordContext : public antlr4::ParserRuleContext {
  public:
    Atomic_system_wordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Dollar_dollar_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Atomic_system_wordContext* atomic_system_word();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Rational();
    antlr4::tree::TerminalNode *Real();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  File_nameContext : public antlr4::ParserRuleContext {
  public:
    File_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Atomic_wordContext *atomic_word();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  File_nameContext* file_name();

  class  NothingContext : public antlr4::ParserRuleContext {
  public:
    NothingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NothingContext* nothing();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool thf_or_formulaSempred(Thf_or_formulaContext *_localctx, size_t predicateIndex);
  bool thf_and_formulaSempred(Thf_and_formulaContext *_localctx, size_t predicateIndex);
  bool thf_apply_formulaSempred(Thf_apply_formulaContext *_localctx, size_t predicateIndex);
  bool thf_xprod_typeSempred(Thf_xprod_typeContext *_localctx, size_t predicateIndex);
  bool thf_union_typeSempred(Thf_union_typeContext *_localctx, size_t predicateIndex);
  bool tff_or_formulaSempred(Tff_or_formulaContext *_localctx, size_t predicateIndex);
  bool tff_and_formulaSempred(Tff_and_formulaContext *_localctx, size_t predicateIndex);
  bool tff_xprod_typeSempred(Tff_xprod_typeContext *_localctx, size_t predicateIndex);
  bool fof_or_formulaSempred(Fof_or_formulaContext *_localctx, size_t predicateIndex);
  bool fof_and_formulaSempred(Fof_and_formulaContext *_localctx, size_t predicateIndex);
  bool cnf_disjunctionSempred(Cnf_disjunctionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

