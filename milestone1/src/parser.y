%{

/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1
// Data structures to store the tree
vector<pair<string,vector<int>>> nodes;
int startNode;


void yyerror(char const *);
int createNode(string);
void addChild(int, int);

%}
%code provides {
void yyerror (char const*);
int yylex (YYSTYPE*);
}
/* BISON DECLARATIONS */
%union{
  char* s;
  int i;
}

%verbose
%define parse.trace
%define api.pure
%token <s> TOK_IDENTIFIER
%token <s> TOK_LITERAL


%token <s> TOK_33 "!"
%token <s> TOK_3361 "!="
%token <s> TOK_37 "%"
%token <s> TOK_3761 "%="
%token <s> TOK_38 "&"
%token <s> TOK_3838 "&&"
%token <s> TOK_3861 "&="
%token <s> TOK_40 "("
%token <s> TOK_41 ")"
%token <s> TOK_42 "*"
%token <s> TOK_4261 "*="
%token <s> TOK_43 "+"
%token <s> TOK_4343 "++"
%token <s> TOK_4361 "+="
%token <s> TOK_44 ","
%token <s> TOK_45 "-"
%token <s> TOK_4545 "--"
%token <s> TOK_4561 "-="
%token <s> TOK_4562 "->"
%token <s> TOK_46 "."
%token <s> TOK_464646 "..."
%token <s> TOK_47 "/"
%token <s> TOK_4761 "/="
%token <s> TOK_58 ":"
%token <s> TOK_5858 "::"
%token <s> TOK_59 ";"
%token <s> TOK_60 "<"
%token <s> TOK_6060 "<<"
%token <s> TOK_606061 "<<="
%token <s> TOK_6061 "<="
%token <s> TOK_61 "="
%token <s> TOK_6161 "=="
%token <s> TOK_62 ">"
%token <s> TOK_6261 ">="
%token <s> TOK_6262 ">>"
%token <s> TOK_626261 ">>="
%token <s> TOK_626262 ">>>"
%token <s> TOK_62626261 ">>>="
%token <s> TOK_63 "?"
%token <s> TOK_64 "@"
%token <s> TOK_91 "["
%token <s> TOK_93 "]"
%token <s> TOK_94 "^"
%token <s> TOK_9461 "^="
%token <s> TOK_abstract "abstract"
%token <s> TOK_assert "assert"
%token <s> TOK_boolean "boolean"
%token <s> TOK_break "break"
%token <s> TOK_byte "byte"
%token <s> TOK_case "case"
%token <s> TOK_catch "catch"
%token <s> TOK_char "char"
%token <s> TOK_class "class"
%token <s> TOK_continue "continue"
%token <s> TOK_default "default"
%token <s> TOK_do "do"
%token <s> TOK_double "double"
%token <s> TOK_else "else"
%token <s> TOK_enum "enum"
%token <s> TOK_exports "exports"
%token <s> TOK_extends "extends"
%token <s> TOK_final "final"
%token <s> TOK_finally "finally"
%token <s> TOK_float "float"
%token <s> TOK_for "for"
%token <s> TOK_if "if"
%token <s> TOK_implements "implements"
%token <s> TOK_import "import"
%token <s> TOK_instanceof "instanceof"
%token <s> TOK_int "int"
%token <s> TOK_interface "interface"
%token <s> TOK_long "long"
%token <s> TOK_module "module"
%token <s> TOK_new "new"
%token <s> TOK_open "open"
%token <s> TOK_opens "opens"
%token <s> TOK_package "package"
%token <s> TOK_permits "permits"
%token <s> TOK_private "private"
%token <s> TOK_protected "protected"
%token <s> TOK_provides "provides"
%token <s> TOK_public "public"
%token <s> TOK_record "record"
%token <s> TOK_requires "requires"
%token <s> TOK_return "return"
%token <s> TOK_sealed "sealed"
%token <s> TOK_short "short"
%token <s> TOK_static "static"
%token <s> TOK_strictfp "strictfp"
%token <s> TOK_super "super"
%token <s> TOK_switch "switch"
%token <s> TOK_synchronized "synchronized"
%token <s> TOK_this "this"
%token <s> TOK_throw "throw"
%token <s> TOK_throws "throws"
%token <s> TOK_to "to"
%token <s> TOK_transient "transient"
%token <s> TOK_transitive "transitive"
%token <s> TOK_try "try"
%token <s> TOK_uses "uses"
%token <s> TOK_var "var"
%token <s> TOK_void "void"
%token <s> TOK_volatile "volatile"
%token <s> TOK_while "while"
%token <s> TOK_with "with"
%token <s> TOK_yield "yield"
%token <s> TOK_123 "{"
%token <s> TOK_124 "|"
%token <s> TOK_12461 "|="
%token <s> TOK_124124 "||"
%token <s> TOK_125 "}"
%token <s> TOK_126 "~"
%type<i> IDENTIFIER.opt
%type<i> IDENTIFIER_dot.opt
%type<i> additional_bound
%type<i> additional_bound.multiopt
%type<i> additive_expression
%type<i> ambiguous_name
%type<i> an_sp.multiopt
%type<i> and_expression
%type<i> annotation
%type<i> annotation.multiopt
%type<i> annotation_interface_body
%type<i> annotation_interface_declaration
%type<i> annotation_interface_element_declaration
%type<i> annotation_interface_member_declaration
%type<i> annotation_interface_member_declaration.multiopt
%type<i> argument_list
%type<i> argument_list.opt
%type<i> array_access
%type<i> array_creation_expression
%type<i> array_initializer
%type<i> array_type
%type<i> assert_statement
%type<i> assignment
%type<i> assignment_expression
%type<i> assignment_operator
%type<i> basic_for_statement
%type<i> basic_for_statement_no_short_if
%type<i> block
%type<i> block_statement
%type<i> block_statement.multiopt
%type<i> block_statements
%type<i> block_statements.opt
%type<i> break_statement
%type<i> case_constant
%type<i> cast_expression
%type<i> catch_clause
%type<i> catch_clause.multiopt
%type<i> catch_formal_parameter
%type<i> catch_type
%type<i> catches
%type<i> catches.opt
%type<i> class_body
%type<i> class_body.opt
%type<i> class_body_declaration
%type<i> class_body_declaration.multiopt
%type<i> class_declaration
%type<i> class_extends
%type<i> class_extends.opt
%type<i> class_implements
%type<i> class_implements.opt
%type<i> class_instance_creation_expression
%type<i> class_literal
%type<i> class_member_declaration
%type<i> class_or_interface_type
%type<i> class_or_interface_type_to_instantiate
%type<i> class_permits
%type<i> class_permits.opt
%type<i> class_type
%type<i> com.opt
%type<i> com_IDENTIFIER.multiopt
%type<i> com_case_constant.multiopt
%type<i> com_element_value.multiopt
%type<i> com_element_value_pair.multiopt
%type<i> com_enum_constant.multiopt
%type<i> com_exception_type.multiopt
%type<i> com_expression.multiopt
%type<i> com_formal_parameter.multiopt
%type<i> com_interface_type.multiopt
%type<i> com_lambda_parameter.multiopt
%type<i> com_module_name.multiopt
%type<i> com_record_component.multiopt
%type<i> com_statement_expression.multiopt
%type<i> com_type_name.multiopt
%type<i> com_type_parameter.multiopt
%type<i> com_variable_declarator.multiopt
%type<i> com_variable_initializer.multiopt
%type<i> compact_constructor_declaration
%type<i> compilation_unit
%type<i> conditional_and_expression
%type<i> conditional_expression
%type<i> conditional_or_expression
%type<i> constant_declaration
%type<i> constant_expression
%type<i> constructor_body
%type<i> constructor_declaration
%type<i> constructor_declarator
%type<i> continue_statement
%type<i> default_value
%type<i> default_value.opt
%type<i> dim_expr
%type<i> dim_expr.multiopt
%type<i> dim_exprs
%type<i> dims
%type<i> dims.opt
%type<i> dm.multiopt
%type<i> do_statement
%type<i> dot_annotation.multiopt_IDENTIFIER.multiopt
%type<i> dot_ind.multiopt
%type<i> element_value
%type<i> element_valueList
%type<i> element_valueList.opt
%type<i> element_value_array_initializer
%type<i> element_value_pair
%type<i> element_value_pair_list
%type<i> element_value_pair_list.opt
%type<i> empty_statement
%type<i> enhanced_for_statement
%type<i> enhanced_for_statement_no_short_if
%type<i> enum_body
%type<i> enum_body_declarations
%type<i> enum_body_declarations.opt
%type<i> enum_constant
%type<i> enum_constant_list
%type<i> enum_constant_list.opt
%type<i> enum_declaration
%type<i> enum_modifier
%type<i> enum_modifier.multiopt
%type<i> eq_variable_initializer.opt
%type<i> equality_expression
%type<i> exception_type
%type<i> exception_type_list
%type<i> exclusive_or_expression
%type<i> explicit_constructor_invocation
%type<i> explicit_constructor_invocation.opt
%type<i> expression
%type<i> expression.opt
%type<i> expression_name
%type<i> expression_statement
%type<i> field_access
%type<i> field_declaration
%type<i> finally
%type<i> finally.opt
%type<i> floating_point_type
%type<i> for_init
%type<i> for_init.opt
%type<i> for_statement
%type<i> for_statement_no_short_if
%type<i> for_update
%type<i> for_update.opt
%type<i> formal_parameter
%type<i> formal_parameter_list
%type<i> formal_parameter_list.opt
%type<i> if_then_else_statement
%type<i> if_then_else_statement_no_short_if
%type<i> if_then_statement
%type<i> import_declaration
%type<i> import_declaration.multiopt
%type<i> inclusive_or_expression
%type<i> input
%type<i> instance_initializer
%type<i> instanceof_expression
%type<i> integral_type
%type<i> interface_body
%type<i> interface_declaration
%type<i> interface_extends
%type<i> interface_extends.opt
%type<i> interface_member_declaration
%type<i> interface_member_declaration.multiopt
%type<i> interface_method_declaration
%type<i> interface_permits
%type<i> interface_permits.opt
%type<i> interface_type
%type<i> interface_type_list
%type<i> labeled_statement
%type<i> labeled_statement_no_short_if
%type<i> lambda_body
%type<i> lambda_expression
%type<i> lambda_parameter
%type<i> lambda_parameter_list
%type<i> lambda_parameter_list.opt
%type<i> lambda_parameter_type
%type<i> lambda_parameters
%type<i> left_hand_side
%type<i> local_class_or_interface_declaration
%type<i> local_variable_declaration
%type<i> local_variable_declaration_statement
%type<i> local_variable_type
%type<i> marker_annotation
%type<i> method_body
%type<i> method_declaration
%type<i> method_declarator
%type<i> method_header
%type<i> method_invocation
%type<i> method_name
%type<i> method_reference
%type<i> modifier
%type<i> modifier.multiopt
%type<i> modular_compilation_unit
%type<i> module_declaration
%type<i> module_directive
%type<i> module_directive.multiopt
%type<i> module_name
%type<i> multiplicative_expression
%type<i> normal_annotation
%type<i> normal_class_declaration
%type<i> normal_interface_declaration
%type<i> numeric_type
%type<i> open.opt
%type<i> ordinary_compilation_unit
%type<i> package_declaration
%type<i> package_declaration.opt
%type<i> package_modifier
%type<i> package_modifier.multiopt
%type<i> package_name
%type<i> package_or_type_name
%type<i> pattern
%type<i> post_decrement_expression
%type<i> post_increment_expression
%type<i> postfix_expression
%type<i> pre_decrement_expression
%type<i> pre_increment_expression
%type<i> primary
%type<i> primary_no_new_array
%type<i> primitive_type
%type<i> receiver_parameter
%type<i> receiver_parameter_com.opt
%type<i> record_body
%type<i> record_body_declaration
%type<i> record_body_declaration.multiopt
%type<i> record_component
%type<i> record_component_list
%type<i> record_component_list.opt
%type<i> record_component_modifier
%type<i> record_component_modifier.multiopt
%type<i> record_declaration
%type<i> record_header
%type<i> reference_type
%type<i> relational_expression
%type<i> resource
%type<i> resource_list
%type<i> resource_specification
%type<i> result
%type<i> return_statement
%type<i> semcol.opt
%type<i> semcol_resource.multiopt
%type<i> shift_expression
%type<i> simple_type_name
%type<i> single_element_annotation
%type<i> single_static_import_declaration
%type<i> single_type_import_declaration
%type<i> statement
%type<i> statement_expression
%type<i> statement_expression_list
%type<i> statement_no_short_if
%type<i> statement_without_trailing_substatement
%type<i> static_import_on_demand_declaration
%type<i> static_initializer
%type<i> switch_block
%type<i> switch_block_statement_group
%type<i> switch_block_statement_group.multiopt
%type<i> switch_expression
%type<i> switch_label
%type<i> switch_label_col.multiopt
%type<i> switch_rule
%type<i> switch_rule.multiopt
%type<i> switch_statement
%type<i> synchronized_statement
%type<i> throw_statement
%type<i> throws
%type<i> throws.opt
%type<i> to_module_names.opt
%type<i> top_level_class_or_interface_declaration
%type<i> top_level_class_or_interface_declaration.multiopt
%type<i> try_statement
%type<i> try_with_resources_statement
%type<i> type
%type<i> type_IDENTIFIER
%type<i> type_argument
%type<i> type_argument.multiopt
%type<i> type_argument_list
%type<i> type_arguments
%type<i> type_arguments.opt
%type<i> type_arguments_or_diamond
%type<i> type_arguments_or_diamond.opt
%type<i> type_bound
%type<i> type_bound.opt
%type<i> type_import_on_demand_declaration
%type<i> type_name
%type<i> type_parameter
%type<i> type_parameter_list
%type<i> type_parameter_modifier
%type<i> type_parameter_modifier.multiopt
%type<i> type_parameters
%type<i> type_parameters.opt
%type<i> type_pattern
%type<i> type_variable
%type<i> unann_array_type
%type<i> unann_class_or_interface_type
%type<i> unann_class_type
%type<i> unann_interface_type
%type<i> unann_primitive_type
%type<i> unann_reference_type
%type<i> unann_type
%type<i> unann_type_variable
%type<i> unary_expression
%type<i> unary_expression_not_plus_minus
%type<i> unqualified_class_instance_creation_expression
%type<i> unqualified_method_IDENTIFIER
%type<i> variable_access
%type<i> variable_arity_parameter
%type<i> variable_arity_record_component
%type<i> variable_declarator
%type<i> variable_declarator_id
%type<i> variable_declarator_list
%type<i> variable_initializer
%type<i> variable_initializer_list
%type<i> variable_initializer_list.opt
%type<i> variable_modifier
%type<i> variable_modifier.multiopt
%type<i> vt_class_type.multiopt
%type<i> while_statement
%type<i> while_statement_no_short_if
%type<i> wildcard
%type<i> wildcard_bounds
%type<i> wildcard_bounds.opt
%type<i> yield_statement
%%


    /* GRAMMAR RULES */
input:
  compilation_unit			{$$=createNode("input");if($1 !=-1)addChild($$,$1);}
;
modifier.multiopt:
  modifier.multiopt modifier			{$$=createNode("modifier.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
modifier:
  annotation			{$$=createNode("modifier");if($1 !=-1)addChild($$,$1);}
| TOK_public			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_protected			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_private			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_abstract			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_static			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_final			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_sealed			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_strictfp			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_transitive			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_transient			{$$=createNode("modifier");addChild($$,createNode($1));}
| TOK_volatile			{$$=createNode("modifier");addChild($$,createNode($1));}
;
dot_ind.multiopt:
  dot_ind.multiopt TOK_46 TOK_IDENTIFIER			{$$=createNode("dot_ind.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
| /*empty*/			{$$=-1;}
;
type_IDENTIFIER:
  TOK_IDENTIFIER			{$$=createNode("type_IDENTIFIER");addChild($$,createNode($1));}
;
unqualified_method_IDENTIFIER:
  TOK_IDENTIFIER			{$$=createNode("unqualified_method_IDENTIFIER");addChild($$,createNode($1));}
;
	/* Types, Values and Variables */
type:
  primitive_type			{$$=createNode("type");if($1 !=-1)addChild($$,$1);}
| reference_type			{$$=createNode("type");if($1 !=-1)addChild($$,$1);}
;
primitive_type:
  annotation.multiopt numeric_type			{$$=createNode("primitive_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| annotation.multiopt TOK_boolean			{$$=createNode("primitive_type");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));}
;
numeric_type:
  integral_type			{$$=createNode("numeric_type");if($1 !=-1)addChild($$,$1);}
| floating_point_type			{$$=createNode("numeric_type");if($1 !=-1)addChild($$,$1);}
;
integral_type:
  TOK_byte			{$$=createNode("integral_type");addChild($$,createNode($1));}
| TOK_short			{$$=createNode("integral_type");addChild($$,createNode($1));}
| TOK_int			{$$=createNode("integral_type");addChild($$,createNode($1));}
| TOK_long			{$$=createNode("integral_type");addChild($$,createNode($1));}
| TOK_char			{$$=createNode("integral_type");addChild($$,createNode($1));}
;
floating_point_type:
  TOK_float			{$$=createNode("floating_point_type");addChild($$,createNode($1));}
| TOK_double			{$$=createNode("floating_point_type");addChild($$,createNode($1));}
;
reference_type:
  class_or_interface_type			{$$=createNode("reference_type");if($1 !=-1)addChild($$,$1);}
| type_variable			{$$=createNode("reference_type");if($1 !=-1)addChild($$,$1);}
| array_type			{$$=createNode("reference_type");if($1 !=-1)addChild($$,$1);}
;
class_or_interface_type:
  class_type			{$$=createNode("class_or_interface_type");if($1 !=-1)addChild($$,$1);}
| interface_type			{$$=createNode("class_or_interface_type");if($1 !=-1)addChild($$,$1);}
;
class_type:
  annotation.multiopt type_IDENTIFIER type_arguments.opt			{$$=createNode("class_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| package_name TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt			{$$=createNode("class_type");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
| class_or_interface_type TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt			{$$=createNode("class_type");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
;
interface_type:
  class_type			{$$=createNode("interface_type");if($1 !=-1)addChild($$,$1);}
;
type_variable:
  annotation.multiopt type_IDENTIFIER			{$$=createNode("type_variable");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
array_type:
  primitive_type dims			{$$=createNode("array_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| class_or_interface_type dims			{$$=createNode("array_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| type_variable dims			{$$=createNode("array_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
dims:
  annotation.multiopt TOK_91 TOK_93 an_sp.multiopt			{$$=createNode("dims");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);}
;
an_sp.multiopt:
  an_sp.multiopt annotation.multiopt TOK_91 TOK_93			{$$=createNode("an_sp.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));}
| /*empty*/			{$$=-1;}
;
type_parameter:
  type_parameter_modifier.multiopt type_IDENTIFIER type_bound.opt			{$$=createNode("type_parameter");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
type_parameter_modifier.multiopt:
  type_parameter_modifier			{$$=createNode("type_parameter_modifier.multiopt");if($1 !=-1)addChild($$,$1);}
| type_parameter_modifier.multiopt type_parameter_modifier			{$$=createNode("type_parameter_modifier.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /* empty */			{$$=-1;}
type_parameter_modifier:
  annotation			{$$=createNode("type_parameter_modifier");if($1 !=-1)addChild($$,$1);}
;
type_bound.opt:
  type_bound			{$$=createNode("type_bound.opt");if($1 !=-1)addChild($$,$1);}
| /* empty */			{$$=-1;}
;
type_bound:
   TOK_extends  type_variable			{$$=createNode("type_bound");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
|  TOK_extends  class_or_interface_type additional_bound.multiopt			{$$=createNode("type_bound");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
additional_bound:
  TOK_38 interface_type			{$$=createNode("additional_bound");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
type_arguments:
  TOK_60 type_argument_list TOK_62			{$$=createNode("type_arguments");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
type_argument_list:
  type_argument type_argument.multiopt			{$$=createNode("type_argument_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
type_argument.multiopt:
  TOK_44 type_argument			{$$=createNode("type_argument.multiopt");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
| type_argument.multiopt TOK_44 type_argument			{$$=createNode("type_argument.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /* empty */			{$$=-1;}
type_argument:
  reference_type			{$$=createNode("type_argument");if($1 !=-1)addChild($$,$1);}
| wildcard			{$$=createNode("type_argument");if($1 !=-1)addChild($$,$1);}
;
wildcard:
  annotation.multiopt TOK_63 wildcard_bounds.opt			{$$=createNode("wildcard");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
wildcard_bounds.opt:
  wildcard_bounds			{$$=createNode("wildcard_bounds.opt");if($1 !=-1)addChild($$,$1);}
| /* empty */			{$$=-1;}
;
wildcard_bounds:
   TOK_extends  reference_type			{$$=createNode("wildcard_bounds");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
|  TOK_super  reference_type			{$$=createNode("wildcard_bounds");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}


  /* Names */
module_name:
  TOK_IDENTIFIER			{$$=createNode("module_name");addChild($$,createNode($1));}
| module_name TOK_46 TOK_IDENTIFIER			{$$=createNode("module_name");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
;
package_name:
  TOK_IDENTIFIER			{$$=createNode("package_name");addChild($$,createNode($1));}
| package_name TOK_46 TOK_IDENTIFIER			{$$=createNode("package_name");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
;
type_name:
  type_IDENTIFIER			{$$=createNode("type_name");if($1 !=-1)addChild($$,$1);}
| package_or_type_name TOK_46 type_IDENTIFIER			{$$=createNode("type_name");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
expression_name:
  TOK_IDENTIFIER			{$$=createNode("expression_name");addChild($$,createNode($1));}
| ambiguous_name TOK_46 TOK_IDENTIFIER			{$$=createNode("expression_name");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
;
method_name:
  unqualified_method_IDENTIFIER			{$$=createNode("method_name");if($1 !=-1)addChild($$,$1);}
;
package_or_type_name:
  TOK_IDENTIFIER			{$$=createNode("package_or_type_name");addChild($$,createNode($1));}
| package_or_type_name TOK_46 TOK_IDENTIFIER			{$$=createNode("package_or_type_name");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
;
ambiguous_name:
  TOK_IDENTIFIER			{$$=createNode("ambiguous_name");addChild($$,createNode($1));}
| ambiguous_name TOK_46 TOK_IDENTIFIER			{$$=createNode("ambiguous_name");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
;


  /* Packages and Modules */
compilation_unit:
  ordinary_compilation_unit			{$$=createNode("compilation_unit");if($1 !=-1)addChild($$,$1);}
| modular_compilation_unit			{$$=createNode("compilation_unit");if($1 !=-1)addChild($$,$1);}
;
ordinary_compilation_unit:
  package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt			{$$=createNode("ordinary_compilation_unit");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
modular_compilation_unit:
  import_declaration.multiopt module_declaration			{$$=createNode("modular_compilation_unit");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
package_declaration.opt:
  package_declaration			{$$=createNode("package_declaration.opt");if($1 !=-1)addChild($$,$1);}
| /* empty */			{$$=-1;}
;
package_declaration:
  package_modifier.multiopt  TOK_package  TOK_IDENTIFIER dot_ind.multiopt TOK_59			{$$=createNode("package_declaration");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));}
;
package_modifier.multiopt:
  package_modifier.multiopt package_modifier			{$$=createNode("package_modifier.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /* empty */			{$$=-1;}
;
package_modifier:
  annotation			{$$=createNode("package_modifier");if($1 !=-1)addChild($$,$1);}
;
import_declaration.multiopt:
  import_declaration.multiopt import_declaration			{$$=createNode("import_declaration.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /* empty */			{$$=-1;}
;
import_declaration:
  single_type_import_declaration			{$$=createNode("import_declaration");if($1 !=-1)addChild($$,$1);}
| type_import_on_demand_declaration			{$$=createNode("import_declaration");if($1 !=-1)addChild($$,$1);}
| single_static_import_declaration			{$$=createNode("import_declaration");if($1 !=-1)addChild($$,$1);}
| static_import_on_demand_declaration			{$$=createNode("import_declaration");if($1 !=-1)addChild($$,$1);}
;
single_type_import_declaration:
   TOK_import  type_name  TOK_59			{$$=createNode("single_type_import_declaration");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
type_import_on_demand_declaration:
   TOK_import  package_or_type_name TOK_46 TOK_42 TOK_59			{$$=createNode("type_import_on_demand_declaration");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));addChild($$,createNode($5));}
;
single_static_import_declaration:
   TOK_import  TOK_static type_name TOK_46 TOK_IDENTIFIER TOK_59			{$$=createNode("single_static_import_declaration");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));addChild($$,createNode($6));}
;
static_import_on_demand_declaration:
   TOK_import  TOK_static type_name TOK_46 TOK_42 TOK_59			{$$=createNode("static_import_on_demand_declaration");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));addChild($$,createNode($6));}
;
top_level_class_or_interface_declaration.multiopt:
  top_level_class_or_interface_declaration			{$$=createNode("top_level_class_or_interface_declaration.multiopt");if($1 !=-1)addChild($$,$1);}
| top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration			{$$=createNode("top_level_class_or_interface_declaration.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /* empty */			{$$=-1;}
;
top_level_class_or_interface_declaration:
  class_declaration			{$$=createNode("top_level_class_or_interface_declaration");if($1 !=-1)addChild($$,$1);}
| interface_declaration			{$$=createNode("top_level_class_or_interface_declaration");if($1 !=-1)addChild($$,$1);}
| TOK_59			{$$=createNode("top_level_class_or_interface_declaration");addChild($$,createNode($1));}
;
module_declaration:
  annotation.multiopt open.opt  TOK_module  TOK_IDENTIFIER dot_ind.multiopt TOK_123 module_directive.multiopt TOK_125			{$$=createNode("module_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);addChild($$,createNode($8));}
;
open.opt:
  TOK_open			{$$=createNode("open.opt");addChild($$,createNode($1));}
| /*empty*/			{$$=-1;}
;
module_directive.multiopt:
  module_directive			{$$=createNode("module_directive.multiopt");if($1 !=-1)addChild($$,$1);}
| module_directive.multiopt module_directive			{$$=createNode("module_directive.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /* empty */			{$$=-1;}
;
module_directive:
  TOK_requires modifier.multiopt module_name ;
| TOK_exports package_name to_module_names.opt TOK_59			{$$=createNode("module_directive");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| TOK_opens package_name to_module_names.opt TOK_59			{$$=createNode("module_directive");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| TOK_uses type_name TOK_59			{$$=createNode("module_directive");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
| TOK_provides type_name TOK_with type_name com_type_name.multiopt TOK_59			{$$=createNode("module_directive");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));}
;
com_type_name.multiopt:
  com_type_name.multiopt TOK_44 type_name			{$$=createNode("com_type_name.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
to_module_names.opt:
  TOK_to module_name com_module_name.multiopt			{$$=createNode("to_module_names.opt");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| to_module_names.opt TOK_to module_name com_module_name.multiopt			{$$=createNode("to_module_names.opt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
| /* empty */			{$$=-1;}
com_module_name.multiopt:
  com_module_name.multiopt TOK_44 module_name			{$$=createNode("com_module_name.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;

  /* Classes */
class_declaration:
  normal_class_declaration			{$$=createNode("class_declaration");if($1 !=-1)addChild($$,$1);}
| enum_declaration			{$$=createNode("class_declaration");if($1 !=-1)addChild($$,$1);}
| record_declaration			{$$=createNode("class_declaration");if($1 !=-1)addChild($$,$1);}
;
normal_class_declaration:
  modifier.multiopt  TOK_class  type_IDENTIFIER  type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body			{$$=createNode("normal_class_declaration");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);if($6 !=-1)addChild($$,$6);if($7 !=-1)addChild($$,$7);if($8 !=-1)addChild($$,$8);}
;
type_parameters.opt:
  type_parameters			{$$=createNode("type_parameters.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
class_extends.opt:
  class_extends			{$$=createNode("class_extends.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
class_implements.opt:
  class_implements			{$$=createNode("class_implements.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
class_permits.opt:
  class_permits			{$$=createNode("class_permits.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
type_parameters:
  TOK_60 type_parameter_list TOK_62			{$$=createNode("type_parameters");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
type_parameter_list:
  type_parameter com_type_parameter.multiopt			{$$=createNode("type_parameter_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_type_parameter.multiopt:
  com_type_parameter.multiopt TOK_44 type_parameter			{$$=createNode("com_type_parameter.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
class_extends:
  TOK_extends class_type			{$$=createNode("class_extends");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
class_implements:
  TOK_implements interface_type_list			{$$=createNode("class_implements");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
interface_type_list:
  interface_type com_interface_type.multiopt			{$$=createNode("interface_type_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_interface_type.multiopt:
  com_interface_type.multiopt TOK_44 interface_type			{$$=createNode("com_interface_type.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
class_permits:
  TOK_permits type_name com_type_name.multiopt			{$$=createNode("class_permits");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
class_body:
   TOK_123  class_body_declaration.multiopt  TOK_125			{$$=createNode("class_body");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
class_body_declaration.multiopt:
  class_body_declaration.multiopt class_body_declaration			{$$=createNode("class_body_declaration.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
class_body_declaration:
  class_member_declaration			{$$=createNode("class_body_declaration");if($1 !=-1)addChild($$,$1);}
| instance_initializer			{$$=createNode("class_body_declaration");if($1 !=-1)addChild($$,$1);}
| static_initializer			{$$=createNode("class_body_declaration");if($1 !=-1)addChild($$,$1);}
| constructor_declaration			{$$=createNode("class_body_declaration");if($1 !=-1)addChild($$,$1);}
;
class_member_declaration:
  field_declaration			{$$=createNode("class_member_declaration");if($1 !=-1)addChild($$,$1);}
| method_declaration			{$$=createNode("class_member_declaration");if($1 !=-1)addChild($$,$1);}
| class_declaration			{$$=createNode("class_member_declaration");if($1 !=-1)addChild($$,$1);}
| interface_declaration			{$$=createNode("class_member_declaration");if($1 !=-1)addChild($$,$1);}
;
field_declaration:
  modifier.multiopt unann_type variable_declarator_list TOK_59			{$$=createNode("field_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
variable_declarator_list:
  variable_declarator com_variable_declarator.multiopt			{$$=createNode("variable_declarator_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_variable_declarator.multiopt:
  com_variable_declarator.multiopt TOK_44 variable_declarator			{$$=createNode("com_variable_declarator.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
variable_declarator:
  variable_declarator_id eq_variable_initializer.opt			{$$=createNode("variable_declarator");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
eq_variable_initializer.opt:
  TOK_61 variable_initializer			{$$=createNode("eq_variable_initializer.opt");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
variable_declarator_id:
  TOK_IDENTIFIER dims.opt			{$$=createNode("variable_declarator_id");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
dims.opt:
  dims			{$$=createNode("dims.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
variable_initializer:
  expression			{$$=createNode("variable_initializer");if($1 !=-1)addChild($$,$1);}
| array_initializer			{$$=createNode("variable_initializer");if($1 !=-1)addChild($$,$1);}
;
unann_type:
  unann_primitive_type			{$$=createNode("unann_type");if($1 !=-1)addChild($$,$1);}
| unann_reference_type			{$$=createNode("unann_type");if($1 !=-1)addChild($$,$1);}
;
unann_primitive_type:
  numeric_type			{$$=createNode("unann_primitive_type");if($1 !=-1)addChild($$,$1);}
| TOK_boolean			{$$=createNode("unann_primitive_type");addChild($$,createNode($1));}
;
unann_reference_type:
  unann_class_or_interface_type			{$$=createNode("unann_reference_type");if($1 !=-1)addChild($$,$1);}
| unann_type_variable			{$$=createNode("unann_reference_type");if($1 !=-1)addChild($$,$1);}
| unann_array_type			{$$=createNode("unann_reference_type");if($1 !=-1)addChild($$,$1);}
;
unann_class_or_interface_type:
  unann_class_type			{$$=createNode("unann_class_or_interface_type");if($1 !=-1)addChild($$,$1);}
| unann_interface_type			{$$=createNode("unann_class_or_interface_type");if($1 !=-1)addChild($$,$1);}
;
unann_class_type:
  type_IDENTIFIER type_arguments.opt			{$$=createNode("unann_class_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| package_name TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt			{$$=createNode("unann_class_type");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
| unann_class_or_interface_type TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt			{$$=createNode("unann_class_type");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
;
type_arguments.opt:
  type_arguments			{$$=createNode("type_arguments.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
unann_interface_type:
  unann_class_type			{$$=createNode("unann_interface_type");if($1 !=-1)addChild($$,$1);}
;
unann_type_variable:
  type_IDENTIFIER			{$$=createNode("unann_type_variable");if($1 !=-1)addChild($$,$1);}
;
unann_array_type:
  unann_primitive_type dims			{$$=createNode("unann_array_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| unann_class_or_interface_type dims			{$$=createNode("unann_array_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| unann_type_variable dims			{$$=createNode("unann_array_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
method_declaration:
  modifier.multiopt method_header method_body			{$$=createNode("method_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
method_header:
  result method_declarator throws.opt			{$$=createNode("method_header");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| type_parameters annotation.multiopt result method_declarator throws.opt			{$$=createNode("method_header");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
;
throws.opt:
  throws			{$$=createNode("throws.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
result:
  unann_type			{$$=createNode("result");if($1 !=-1)addChild($$,$1);}
| TOK_void			{$$=createNode("result");addChild($$,createNode($1));}
;
method_declarator:
  TOK_IDENTIFIER TOK_40 receiver_parameter_com.opt formal_parameter_list.opt TOK_41 dims.opt			{$$=createNode("method_declarator");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);}
;
receiver_parameter_com.opt:
  receiver_parameter TOK_44			{$$=createNode("receiver_parameter_com.opt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));}
| /*empty*/			{$$=-1;}
;
formal_parameter_list.opt:
  formal_parameter_list			{$$=createNode("formal_parameter_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
receiver_parameter:
  annotation.multiopt unann_type IDENTIFIER_dot.opt TOK_this			{$$=createNode("receiver_parameter");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
IDENTIFIER_dot.opt:
  TOK_IDENTIFIER TOK_46			{$$=createNode("IDENTIFIER_dot.opt");addChild($$,createNode($1));addChild($$,createNode($2));}
| /*empty*/			{$$=-1;}
;
formal_parameter_list:
  formal_parameter com_formal_parameter.multiopt			{$$=createNode("formal_parameter_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_formal_parameter.multiopt:
  com_formal_parameter.multiopt TOK_44 formal_parameter			{$$=createNode("com_formal_parameter.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
formal_parameter:
  variable_modifier.multiopt unann_type variable_declarator_id			{$$=createNode("formal_parameter");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| variable_arity_parameter			{$$=createNode("formal_parameter");if($1 !=-1)addChild($$,$1);}
;
variable_modifier.multiopt:
  variable_modifier.multiopt variable_modifier			{$$=createNode("variable_modifier.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
variable_arity_parameter:
  variable_modifier.multiopt unann_type annotation.multiopt TOK_464646 TOK_IDENTIFIER			{$$=createNode("variable_arity_parameter");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));}
;
variable_modifier:
  annotation			{$$=createNode("variable_modifier");if($1 !=-1)addChild($$,$1);}
| TOK_final			{$$=createNode("variable_modifier");addChild($$,createNode($1));}
;
throws:
  TOK_throws exception_type_list			{$$=createNode("throws");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
exception_type_list:
  exception_type com_exception_type.multiopt			{$$=createNode("exception_type_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_exception_type.multiopt:
  com_exception_type.multiopt TOK_44 exception_type			{$$=createNode("com_exception_type.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
exception_type:
  class_type			{$$=createNode("exception_type");if($1 !=-1)addChild($$,$1);}
| type_variable			{$$=createNode("exception_type");if($1 !=-1)addChild($$,$1);}
;
method_body:
  block			{$$=createNode("method_body");if($1 !=-1)addChild($$,$1);}
| TOK_59			{$$=createNode("method_body");addChild($$,createNode($1));}
;
instance_initializer:
  block			{$$=createNode("instance_initializer");if($1 !=-1)addChild($$,$1);}
;
static_initializer:
  TOK_static block			{$$=createNode("static_initializer");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
constructor_declaration:
  modifier.multiopt constructor_declarator throws.opt constructor_body			{$$=createNode("constructor_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
;
constructor_declarator:
  type_parameters.opt simple_type_name TOK_40 receiver_parameter_com.opt formal_parameter_list.opt TOK_41			{$$=createNode("constructor_declarator");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));}
;
simple_type_name:
  type_IDENTIFIER			{$$=createNode("simple_type_name");if($1 !=-1)addChild($$,$1);}
;
constructor_body:
  TOK_123 explicit_constructor_invocation.opt block_statements.opt TOK_125			{$$=createNode("constructor_body");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
explicit_constructor_invocation.opt:
  explicit_constructor_invocation			{$$=createNode("explicit_constructor_invocation.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
block_statements.opt:
  block_statements			{$$=createNode("block_statements.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
explicit_constructor_invocation:
  type_arguments.opt TOK_this TOK_40 argument_list.opt TOK_41 TOK_59			{$$=createNode("explicit_constructor_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));addChild($$,createNode($6));}
| type_arguments.opt TOK_super TOK_40 argument_list.opt TOK_41 TOK_59			{$$=createNode("explicit_constructor_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));addChild($$,createNode($6));}
| expression_name TOK_46 type_arguments.opt TOK_super TOK_40 argument_list.opt TOK_41 TOK_59			{$$=createNode("explicit_constructor_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);addChild($$,createNode($7));addChild($$,createNode($8));}
| primary TOK_46 type_arguments.opt TOK_super TOK_40 argument_list.opt TOK_41 TOK_59			{$$=createNode("explicit_constructor_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);addChild($$,createNode($7));addChild($$,createNode($8));}
;
argument_list.opt:
  argument_list			{$$=createNode("argument_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
enum_declaration:
  modifier.multiopt TOK_enum type_IDENTIFIER class_implements.opt enum_body			{$$=createNode("enum_declaration");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
;
enum_body:
  TOK_123 enum_constant_list.opt com.opt enum_body_declarations.opt TOK_125			{$$=createNode("enum_body");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));}
;
com.opt:
  TOK_44			{$$=createNode("com.opt");addChild($$,createNode($1));}
| /*empty*/			{$$=-1;}
;
enum_body_declarations.opt:
  enum_body_declarations			{$$=createNode("enum_body_declarations.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
enum_constant_list.opt:
  enum_constant_list			{$$=createNode("enum_constant_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
enum_constant_list:
  enum_constant com_enum_constant.multiopt			{$$=createNode("enum_constant_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_enum_constant.multiopt:
  com_enum_constant.multiopt TOK_44 enum_constant			{$$=createNode("com_enum_constant.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
enum_constant:
  enum_modifier.multiopt TOK_IDENTIFIER TOK_91 TOK_40 argument_list.opt TOK_41 TOK_93 class_body.opt			{$$=createNode("enum_constant");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));addChild($$,createNode($7));if($8 !=-1)addChild($$,$8);}
;
enum_modifier.multiopt:
  enum_modifier.multiopt enum_modifier			{$$=createNode("enum_modifier.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
class_body.opt:
  class_body			{$$=createNode("class_body.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
enum_modifier:
  annotation			{$$=createNode("enum_modifier");if($1 !=-1)addChild($$,$1);}
;
enum_body_declarations:
  TOK_59 class_body_declaration.multiopt			{$$=createNode("enum_body_declarations");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
record_declaration:
  modifier.multiopt TOK_record type_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body			{$$=createNode("record_declaration");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);if($6 !=-1)addChild($$,$6);if($7 !=-1)addChild($$,$7);}
;
record_header:
  TOK_40 record_component_list.opt TOK_41			{$$=createNode("record_header");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
record_component_list.opt:
  record_component_list			{$$=createNode("record_component_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
record_component_list:
  record_component com_record_component.multiopt			{$$=createNode("record_component_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_record_component.multiopt:
  com_record_component.multiopt TOK_44 record_component			{$$=createNode("com_record_component.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;

record_component:
  record_component_modifier.multiopt unann_type TOK_IDENTIFIER			{$$=createNode("record_component");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
| variable_arity_record_component			{$$=createNode("record_component");if($1 !=-1)addChild($$,$1);}
;
record_component_modifier.multiopt:
  record_component_modifier.multiopt record_component_modifier			{$$=createNode("record_component_modifier.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
variable_arity_record_component:
  record_component_modifier.multiopt unann_type annotation.multiopt TOK_464646 TOK_IDENTIFIER			{$$=createNode("variable_arity_record_component");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));}
;
record_component_modifier:
  annotation			{$$=createNode("record_component_modifier");if($1 !=-1)addChild($$,$1);}
;
record_body:
  TOK_123 record_body_declaration.multiopt TOK_125			{$$=createNode("record_body");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
record_body_declaration.multiopt:
  record_body_declaration.multiopt record_body_declaration			{$$=createNode("record_body_declaration.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
record_body_declaration:
  class_body_declaration			{$$=createNode("record_body_declaration");if($1 !=-1)addChild($$,$1);}
| compact_constructor_declaration			{$$=createNode("record_body_declaration");if($1 !=-1)addChild($$,$1);}
;
compact_constructor_declaration:
  modifier.multiopt simple_type_name constructor_body			{$$=createNode("compact_constructor_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;

	/* Interfaces */

interface_declaration:
  normal_interface_declaration			{$$=createNode("interface_declaration");if($1 !=-1)addChild($$,$1);}
| annotation_interface_declaration			{$$=createNode("interface_declaration");if($1 !=-1)addChild($$,$1);}
;
normal_interface_declaration:
  modifier.multiopt TOK_interface type_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body			{$$=createNode("normal_interface_declaration");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);if($6 !=-1)addChild($$,$6);if($7 !=-1)addChild($$,$7);}
;
interface_extends.opt:
  interface_extends			{$$=createNode("interface_extends.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
interface_permits.opt:
  interface_permits			{$$=createNode("interface_permits.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
interface_extends:
  TOK_extends interface_type_list			{$$=createNode("interface_extends");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
interface_permits:
  TOK_permits type_name com_type_name.multiopt			{$$=createNode("interface_permits");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
interface_body:
  TOK_123 interface_member_declaration.multiopt TOK_125			{$$=createNode("interface_body");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
interface_member_declaration.multiopt:
  interface_member_declaration.multiopt interface_member_declaration			{$$=createNode("interface_member_declaration.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
interface_member_declaration:
  constant_declaration			{$$=createNode("interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| interface_method_declaration			{$$=createNode("interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| class_declaration			{$$=createNode("interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| interface_declaration			{$$=createNode("interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| TOK_59			{$$=createNode("interface_member_declaration");addChild($$,createNode($1));}
;
constant_declaration:
  modifier.multiopt unann_type variable_declarator_list TOK_59			{$$=createNode("constant_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
interface_method_declaration:
  modifier.multiopt method_header method_body			{$$=createNode("interface_method_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
annotation_interface_declaration:
  modifier.multiopt TOK_64 TOK_interface type_IDENTIFIER annotation_interface_body			{$$=createNode("annotation_interface_declaration");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
;
annotation_interface_body:
  TOK_123 annotation_interface_member_declaration.multiopt TOK_125			{$$=createNode("annotation_interface_body");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
annotation_interface_member_declaration.multiopt:
  annotation_interface_member_declaration.multiopt annotation_interface_member_declaration			{$$=createNode("annotation_interface_member_declaration.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
annotation_interface_member_declaration:
  annotation_interface_element_declaration			{$$=createNode("annotation_interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| constant_declaration			{$$=createNode("annotation_interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| class_declaration			{$$=createNode("annotation_interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| interface_declaration			{$$=createNode("annotation_interface_member_declaration");if($1 !=-1)addChild($$,$1);}
| TOK_59			{$$=createNode("annotation_interface_member_declaration");addChild($$,createNode($1));}
;
annotation_interface_element_declaration:
  modifier.multiopt unann_type TOK_IDENTIFIER TOK_40 TOK_41 dims.opt default_value.opt TOK_59			{$$=createNode("annotation_interface_element_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);if($7 !=-1)addChild($$,$7);addChild($$,createNode($8));}
;
default_value.opt:
  default_value			{$$=createNode("default_value.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
default_value:
  TOK_default element_value			{$$=createNode("default_value");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
annotation:
  normal_annotation			{$$=createNode("annotation");if($1 !=-1)addChild($$,$1);}
| marker_annotation			{$$=createNode("annotation");if($1 !=-1)addChild($$,$1);}
| single_element_annotation			{$$=createNode("annotation");if($1 !=-1)addChild($$,$1);}
;
normal_annotation:
  TOK_64 type_name TOK_40 element_value_pair_list.opt TOK_41			{$$=createNode("normal_annotation");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));}
;
element_value_pair_list.opt:
  element_value_pair_list			{$$=createNode("element_value_pair_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
element_value_pair_list:
  element_value_pair com_element_value_pair.multiopt			{$$=createNode("element_value_pair_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_element_value_pair.multiopt:
  com_element_value_pair.multiopt TOK_44 element_value_pair			{$$=createNode("com_element_value_pair.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
element_value_pair:
  TOK_IDENTIFIER TOK_61 element_value			{$$=createNode("element_value_pair");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
element_value:
  conditional_expression			{$$=createNode("element_value");if($1 !=-1)addChild($$,$1);}
| element_value_array_initializer			{$$=createNode("element_value");if($1 !=-1)addChild($$,$1);}
| annotation			{$$=createNode("element_value");if($1 !=-1)addChild($$,$1);}
;
element_value_array_initializer:
  TOK_123 element_valueList.opt com.opt TOK_125			{$$=createNode("element_value_array_initializer");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
element_valueList.opt:
  element_valueList			{$$=createNode("element_valueList.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
element_valueList:
  element_value com_element_value.multiopt			{$$=createNode("element_valueList");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_element_value.multiopt:
  com_element_value.multiopt TOK_44 element_value			{$$=createNode("com_element_value.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
marker_annotation:
  TOK_64 type_name			{$$=createNode("marker_annotation");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
single_element_annotation:
  TOK_64 type_name TOK_40 element_value TOK_41			{$$=createNode("single_element_annotation");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));}
;
annotation.multiopt:
  annotation.multiopt annotation			{$$=createNode("annotation.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
	/* Arrays */

array_initializer:
  TOK_123 variable_initializer_list.opt com.opt TOK_125			{$$=createNode("array_initializer");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
variable_initializer_list.opt:
  variable_initializer_list			{$$=createNode("variable_initializer_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
variable_initializer_list:
  variable_initializer com_variable_initializer.multiopt			{$$=createNode("variable_initializer_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_variable_initializer.multiopt:
  com_variable_initializer.multiopt TOK_44 variable_initializer			{$$=createNode("com_variable_initializer.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
	/* blocks, statements, and patterns */

block:
  TOK_123 block_statements.opt TOK_125			{$$=createNode("block");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
block_statements:
  block_statement block_statement.multiopt			{$$=createNode("block_statements");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
block_statement.multiopt:
  block_statement.multiopt block_statement			{$$=createNode("block_statement.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
block_statement:
  local_class_or_interface_declaration			{$$=createNode("block_statement");if($1 !=-1)addChild($$,$1);}
| local_variable_declaration_statement			{$$=createNode("block_statement");if($1 !=-1)addChild($$,$1);}
| statement			{$$=createNode("block_statement");if($1 !=-1)addChild($$,$1);}
;
local_class_or_interface_declaration:
  class_declaration			{$$=createNode("local_class_or_interface_declaration");if($1 !=-1)addChild($$,$1);}
| normal_interface_declaration			{$$=createNode("local_class_or_interface_declaration");if($1 !=-1)addChild($$,$1);}
;
local_variable_declaration_statement:
  local_variable_declaration TOK_59			{$$=createNode("local_variable_declaration_statement");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));}
;
local_variable_declaration:
  variable_modifier.multiopt local_variable_type variable_declarator_list			{$$=createNode("local_variable_declaration");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
local_variable_type:
  unann_type			{$$=createNode("local_variable_type");if($1 !=-1)addChild($$,$1);}
| TOK_var			{$$=createNode("local_variable_type");addChild($$,createNode($1));}
;
statement:
  statement_without_trailing_substatement			{$$=createNode("statement");if($1 !=-1)addChild($$,$1);}
| labeled_statement			{$$=createNode("statement");if($1 !=-1)addChild($$,$1);}
| if_then_statement			{$$=createNode("statement");if($1 !=-1)addChild($$,$1);}
| if_then_else_statement			{$$=createNode("statement");if($1 !=-1)addChild($$,$1);}
| while_statement			{$$=createNode("statement");if($1 !=-1)addChild($$,$1);}
| for_statement			{$$=createNode("statement");if($1 !=-1)addChild($$,$1);}
;
statement_no_short_if:
  statement_without_trailing_substatement			{$$=createNode("statement_no_short_if");if($1 !=-1)addChild($$,$1);}
| labeled_statement_no_short_if			{$$=createNode("statement_no_short_if");if($1 !=-1)addChild($$,$1);}
| if_then_else_statement_no_short_if			{$$=createNode("statement_no_short_if");if($1 !=-1)addChild($$,$1);}
| while_statement_no_short_if			{$$=createNode("statement_no_short_if");if($1 !=-1)addChild($$,$1);}
| for_statement_no_short_if			{$$=createNode("statement_no_short_if");if($1 !=-1)addChild($$,$1);}
;
statement_without_trailing_substatement:
  block			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| empty_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| expression_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| assert_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| switch_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| do_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| break_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| continue_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| return_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| synchronized_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| throw_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| try_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
| yield_statement			{$$=createNode("statement_without_trailing_substatement");if($1 !=-1)addChild($$,$1);}
;
empty_statement:
  TOK_59			{$$=createNode("empty_statement");addChild($$,createNode($1));}
;
labeled_statement:
  TOK_IDENTIFIER TOK_58 statement			{$$=createNode("labeled_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
labeled_statement_no_short_if:
  TOK_IDENTIFIER TOK_58 statement_no_short_if			{$$=createNode("labeled_statement_no_short_if");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
expression_statement:
  statement_expression TOK_59			{$$=createNode("expression_statement");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));}
;
statement_expression:
  assignment			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
| pre_increment_expression			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
| pre_decrement_expression			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
| post_increment_expression			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
| post_decrement_expression			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
| method_invocation			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
| class_instance_creation_expression			{$$=createNode("statement_expression");if($1 !=-1)addChild($$,$1);}
;
if_then_statement:
  TOK_if TOK_40 expression TOK_41 statement			{$$=createNode("if_then_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
if_then_else_statement:
  TOK_if TOK_40 expression TOK_41 statement_no_short_if TOK_else statement			{$$=createNode("if_then_else_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);}
;
if_then_else_statement_no_short_if:
  TOK_if TOK_40 expression TOK_41 statement_no_short_if TOK_else statement_no_short_if			{$$=createNode("if_then_else_statement_no_short_if");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);}
;
assert_statement:
  TOK_assert expression TOK_59			{$$=createNode("assert_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
| TOK_assert expression TOK_58 expression TOK_59			{$$=createNode("assert_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);addChild($$,createNode($5));}
;
switch_statement:
  TOK_switch TOK_40 expression TOK_41 switch_block			{$$=createNode("switch_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
switch_block:
  TOK_123 switch_rule switch_rule.multiopt TOK_59			{$$=createNode("switch_block");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| TOK_123 switch_block_statement_group.multiopt switch_label_col.multiopt TOK_125			{$$=createNode("switch_block");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
switch_rule.multiopt:
  switch_rule.multiopt switch_rule			{$$=createNode("switch_rule.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
switch_block_statement_group.multiopt:
  switch_block_statement_group.multiopt switch_block_statement_group			{$$=createNode("switch_block_statement_group.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
switch_label_col.multiopt:
  switch_label_col.multiopt switch_label TOK_58			{$$=createNode("switch_label_col.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
| /*empty*/			{$$=-1;}
;
switch_rule:
  switch_label TOK_4562 expression TOK_59			{$$=createNode("switch_rule");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| switch_label TOK_4562 block			{$$=createNode("switch_rule");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| switch_label TOK_4562 throw_statement			{$$=createNode("switch_rule");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
switch_block_statement_group:
  switch_label TOK_58 switch_label_col.multiopt block_statements			{$$=createNode("switch_block_statement_group");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
;
switch_label:
  TOK_case case_constant com_case_constant.multiopt			{$$=createNode("switch_label");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| TOK_default			{$$=createNode("switch_label");addChild($$,createNode($1));}
;
com_case_constant.multiopt:
  com_case_constant.multiopt TOK_44 case_constant			{$$=createNode("com_case_constant.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
case_constant:
  conditional_expression			{$$=createNode("case_constant");if($1 !=-1)addChild($$,$1);}
;
while_statement:
  TOK_while TOK_40 expression TOK_41 statement			{$$=createNode("while_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
while_statement_no_short_if:
  TOK_while TOK_40 expression TOK_41 statement_no_short_if			{$$=createNode("while_statement_no_short_if");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
do_statement:
  TOK_do statement TOK_while TOK_40 expression TOK_41 TOK_59			{$$=createNode("do_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));addChild($$,createNode($7));}
;
for_statement:
  basic_for_statement			{$$=createNode("for_statement");if($1 !=-1)addChild($$,$1);}
| enhanced_for_statement			{$$=createNode("for_statement");if($1 !=-1)addChild($$,$1);}
;
for_statement_no_short_if:
  basic_for_statement_no_short_if			{$$=createNode("for_statement_no_short_if");if($1 !=-1)addChild($$,$1);}
| enhanced_for_statement_no_short_if			{$$=createNode("for_statement_no_short_if");if($1 !=-1)addChild($$,$1);}
;
basic_for_statement:
  TOK_for TOK_40 for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement			{$$=createNode("basic_for_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);addChild($$,createNode($8));if($9 !=-1)addChild($$,$9);}
;
for_init.opt:
  for_init			{$$=createNode("for_init.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
expression.opt:
  expression			{$$=createNode("expression.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
for_update.opt:
  for_update			{$$=createNode("for_update.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
basic_for_statement_no_short_if:
  TOK_for TOK_40 for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement_no_short_if			{$$=createNode("basic_for_statement_no_short_if");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);addChild($$,createNode($8));if($9 !=-1)addChild($$,$9);}
;
for_init:
  statement_expression_list			{$$=createNode("for_init");if($1 !=-1)addChild($$,$1);}
| local_variable_declaration			{$$=createNode("for_init");if($1 !=-1)addChild($$,$1);}
;
for_update:
  statement_expression_list			{$$=createNode("for_update");if($1 !=-1)addChild($$,$1);}
;
statement_expression_list:
  statement_expression com_statement_expression.multiopt			{$$=createNode("statement_expression_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_statement_expression.multiopt:
  com_statement_expression.multiopt TOK_44 statement_expression			{$$=createNode("com_statement_expression.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
enhanced_for_statement:
  TOK_for TOK_40 local_variable_declaration TOK_58 expression TOK_41 statement			{$$=createNode("enhanced_for_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);}
;
enhanced_for_statement_no_short_if:
  TOK_for TOK_40 local_variable_declaration TOK_58 expression TOK_41 statement_no_short_if			{$$=createNode("enhanced_for_statement_no_short_if");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);}
;
break_statement:
  TOK_break IDENTIFIER.opt TOK_59			{$$=createNode("break_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
IDENTIFIER.opt:
  TOK_IDENTIFIER			{$$=createNode("IDENTIFIER.opt");addChild($$,createNode($1));}
| /*empty*/			{$$=-1;}
;
yield_statement:
  TOK_yield expression TOK_59			{$$=createNode("yield_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
continue_statement:
  TOK_continue IDENTIFIER.opt TOK_59			{$$=createNode("continue_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
return_statement:
  TOK_return expression.opt TOK_59			{$$=createNode("return_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
throw_statement:
  TOK_throw expression TOK_59			{$$=createNode("throw_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
;
synchronized_statement:
  TOK_synchronized TOK_40 expression TOK_41 block			{$$=createNode("synchronized_statement");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
try_statement:
  TOK_try block catches			{$$=createNode("try_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| TOK_try block catches.opt finally			{$$=createNode("try_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
| try_with_resources_statement			{$$=createNode("try_statement");if($1 !=-1)addChild($$,$1);}
;
catches.opt:
  catches			{$$=createNode("catches.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
catches:
  catch_clause catch_clause.multiopt			{$$=createNode("catches");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
catch_clause.multiopt:
  catch_clause.multiopt catch_clause			{$$=createNode("catch_clause.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
catch_clause:
  TOK_catch TOK_40 catch_formal_parameter TOK_41 block			{$$=createNode("catch_clause");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
catch_formal_parameter:
  variable_modifier.multiopt catch_type variable_declarator_id			{$$=createNode("catch_formal_parameter");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
catch_type:
  unann_class_type vt_class_type.multiopt			{$$=createNode("catch_type");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
vt_class_type.multiopt:
  vt_class_type.multiopt TOK_124 class_type			{$$=createNode("vt_class_type.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
finally:
  TOK_finally block			{$$=createNode("finally");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
try_with_resources_statement:
  TOK_try resource_specification block catches.opt finally.opt			{$$=createNode("try_with_resources_statement");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);if($5 !=-1)addChild($$,$5);}
;
finally.opt:
  finally			{$$=createNode("finally.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
resource_specification:
  TOK_40 resource_list semcol.opt TOK_41			{$$=createNode("resource_specification");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
semcol.opt:
  TOK_59			{$$=createNode("semcol.opt");addChild($$,createNode($1));}
| /*empty*/			{$$=-1;}
;
resource_list:
  resource semcol_resource.multiopt			{$$=createNode("resource_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
semcol_resource.multiopt:
  semcol_resource.multiopt TOK_59 resource			{$$=createNode("semcol_resource.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
resource:
  local_variable_declaration			{$$=createNode("resource");if($1 !=-1)addChild($$,$1);}
| variable_access			{$$=createNode("resource");if($1 !=-1)addChild($$,$1);}
;
variable_access:
  expression_name			{$$=createNode("variable_access");if($1 !=-1)addChild($$,$1);}
| field_access			{$$=createNode("variable_access");if($1 !=-1)addChild($$,$1);}
;
pattern:
  type_pattern			{$$=createNode("pattern");if($1 !=-1)addChild($$,$1);}
;
type_pattern:
  local_variable_declaration			{$$=createNode("type_pattern");if($1 !=-1)addChild($$,$1);}

	/* expressions */

primary:
  primary_no_new_array			{$$=createNode("primary");if($1 !=-1)addChild($$,$1);}
| array_creation_expression			{$$=createNode("primary");if($1 !=-1)addChild($$,$1);}
;
primary_no_new_array:
  TOK_LITERAL			{$$=createNode("primary_no_new_array");addChild($$,createNode($1));}
| class_literal			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);}
| TOK_this			{$$=createNode("primary_no_new_array");addChild($$,createNode($1));}
| type_name TOK_46 TOK_this			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
| TOK_40 expression TOK_41			{$$=createNode("primary_no_new_array");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
| class_instance_creation_expression			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);}
| field_access			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);}
| array_access			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);}
| method_invocation			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);}
| method_reference			{$$=createNode("primary_no_new_array");if($1 !=-1)addChild($$,$1);}
;
class_literal:
  type_name dm.multiopt TOK_46 TOK_class			{$$=createNode("class_literal");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));}
| numeric_type dm.multiopt TOK_46 TOK_class			{$$=createNode("class_literal");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));}
| TOK_boolean dm.multiopt TOK_46 TOK_class			{$$=createNode("class_literal");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));addChild($$,createNode($4));}
| TOK_void TOK_46 TOK_class			{$$=createNode("class_literal");addChild($$,createNode($1));addChild($$,createNode($2));addChild($$,createNode($3));}
;
dm.multiopt:
  dm.multiopt TOK_91 TOK_93			{$$=createNode("dm.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
| /*empty*/			{$$=-1;}
;
class_instance_creation_expression:
  unqualified_class_instance_creation_expression			{$$=createNode("class_instance_creation_expression");if($1 !=-1)addChild($$,$1);}
| expression_name TOK_46 unqualified_class_instance_creation_expression			{$$=createNode("class_instance_creation_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| primary TOK_46 unqualified_class_instance_creation_expression			{$$=createNode("class_instance_creation_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
unqualified_class_instance_creation_expression:
  TOK_new type_arguments.opt class_or_interface_type_to_instantiate TOK_40 argument_list.opt TOK_41 class_body.opt			{$$=createNode("unqualified_class_instance_creation_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));if($7 !=-1)addChild($$,$7);}
;
class_or_interface_type_to_instantiate:
  annotation.multiopt TOK_IDENTIFIER dot_annotation.multiopt_IDENTIFIER.multiopt type_arguments_or_diamond.opt			{$$=createNode("class_or_interface_type_to_instantiate");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
;
dot_annotation.multiopt_IDENTIFIER.multiopt:
  dot_annotation.multiopt_IDENTIFIER.multiopt TOK_46 annotation.multiopt TOK_IDENTIFIER			{$$=createNode("dot_annotation.multiopt_IDENTIFIER.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| /*empty*/			{$$=-1;}
;
type_arguments_or_diamond.opt:
  type_arguments_or_diamond			{$$=createNode("type_arguments_or_diamond.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
type_arguments_or_diamond:
  type_arguments			{$$=createNode("type_arguments_or_diamond");if($1 !=-1)addChild($$,$1);}
;
field_access:
  primary TOK_46 TOK_IDENTIFIER			{$$=createNode("field_access");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
| TOK_super TOK_46 TOK_IDENTIFIER			{$$=createNode("field_access");addChild($$,createNode($1));addChild($$,createNode($2));addChild($$,createNode($3));}
| type_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER			{$$=createNode("field_access");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));addChild($$,createNode($4));addChild($$,createNode($5));}
;
array_access:
  expression_name TOK_91 expression TOK_93			{$$=createNode("array_access");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| primary_no_new_array TOK_91 expression TOK_93			{$$=createNode("array_access");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
method_invocation:
  method_name TOK_40 argument_list.opt TOK_41			{$$=createNode("method_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| type_name TOK_46 type_arguments.opt TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			{$$=createNode("method_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);addChild($$,createNode($7));}
| expression_name TOK_46 type_arguments.opt TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			{$$=createNode("method_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);addChild($$,createNode($7));}
| primary TOK_46 type_arguments.opt TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			{$$=createNode("method_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);addChild($$,createNode($7));}
| TOK_super TOK_46 type_arguments.opt TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			{$$=createNode("method_invocation");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));addChild($$,createNode($5));if($6 !=-1)addChild($$,$6);addChild($$,createNode($7));}
| type_name TOK_46 TOK_super TOK_46 type_arguments.opt TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			{$$=createNode("method_invocation");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));addChild($$,createNode($7));if($8 !=-1)addChild($$,$8);addChild($$,createNode($9));}
;
argument_list:
  expression com_expression.multiopt			{$$=createNode("argument_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
com_expression.multiopt:
  com_expression.multiopt TOK_44 expression			{$$=createNode("com_expression.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
method_reference:
  expression_name TOK_5858 type_arguments.opt TOK_IDENTIFIER			{$$=createNode("method_reference");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| primary TOK_5858 type_arguments.opt TOK_IDENTIFIER			{$$=createNode("method_reference");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| reference_type TOK_5858 type_arguments.opt TOK_IDENTIFIER			{$$=createNode("method_reference");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| TOK_super TOK_5858 type_arguments.opt TOK_IDENTIFIER			{$$=createNode("method_reference");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| type_name TOK_46 TOK_super TOK_5858 type_arguments.opt TOK_IDENTIFIER			{$$=createNode("method_reference");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);addChild($$,createNode($6));}
| class_type TOK_5858 type_arguments.opt TOK_new			{$$=createNode("method_reference");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
| array_type TOK_5858 TOK_new			{$$=createNode("method_reference");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
;
array_creation_expression:
  TOK_new primitive_type dim_exprs dims.opt			{$$=createNode("array_creation_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
| TOK_new class_or_interface_type dim_exprs dims.opt			{$$=createNode("array_creation_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
| TOK_new primitive_type dims array_initializer			{$$=createNode("array_creation_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
| TOK_new class_or_interface_type dims array_initializer			{$$=createNode("array_creation_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);if($4 !=-1)addChild($$,$4);}
;
dim_exprs:
  dim_expr dim_expr.multiopt			{$$=createNode("dim_exprs");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
;
dim_expr.multiopt:
  dim_expr.multiopt dim_expr			{$$=createNode("dim_expr.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
dim_expr:
  annotation.multiopt TOK_91 expression TOK_93			{$$=createNode("dim_expr");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));}
;
expression:
  lambda_expression			{$$=createNode("expression");if($1 !=-1)addChild($$,$1);}
| assignment_expression			{$$=createNode("expression");if($1 !=-1)addChild($$,$1);}
;
lambda_expression:
  lambda_parameters TOK_4562 lambda_body			{$$=createNode("lambda_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
lambda_parameters:
  TOK_40 lambda_parameter_list.opt TOK_41			{$$=createNode("lambda_parameters");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));}
| TOK_IDENTIFIER			{$$=createNode("lambda_parameters");addChild($$,createNode($1));}
;
lambda_parameter_list.opt:
  lambda_parameter_list			{$$=createNode("lambda_parameter_list.opt");if($1 !=-1)addChild($$,$1);}
| /*empty*/			{$$=-1;}
;
lambda_parameter_list:
  lambda_parameter com_lambda_parameter.multiopt			{$$=createNode("lambda_parameter_list");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| TOK_IDENTIFIER com_IDENTIFIER.multiopt			{$$=createNode("lambda_parameter_list");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
;
com_IDENTIFIER.multiopt:
  com_IDENTIFIER.multiopt TOK_44 TOK_IDENTIFIER			{$$=createNode("com_IDENTIFIER.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));addChild($$,createNode($3));}
| /*empty*/			{$$=-1;}
;
com_lambda_parameter.multiopt:
  com_lambda_parameter.multiopt TOK_44 lambda_parameter			{$$=createNode("com_lambda_parameter.multiopt");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| /*empty*/			{$$=-1;}
;
lambda_parameter:
  variable_modifier.multiopt lambda_parameter_type variable_declarator_id			{$$=createNode("lambda_parameter");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
| variable_arity_parameter			{$$=createNode("lambda_parameter");if($1 !=-1)addChild($$,$1);}
;
lambda_parameter_type:
  unann_type			{$$=createNode("lambda_parameter_type");if($1 !=-1)addChild($$,$1);}
| TOK_var			{$$=createNode("lambda_parameter_type");addChild($$,createNode($1));}
;
lambda_body:
  expression			{$$=createNode("lambda_body");if($1 !=-1)addChild($$,$1);}
| block			{$$=createNode("lambda_body");if($1 !=-1)addChild($$,$1);}
;
assignment_expression:
  conditional_expression			{$$=createNode("assignment_expression");if($1 !=-1)addChild($$,$1);}
| assignment			{$$=createNode("assignment_expression");if($1 !=-1)addChild($$,$1);}
;
assignment:
  left_hand_side assignment_operator expression			{$$=createNode("assignment");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);}
;
left_hand_side:
  expression_name			{$$=createNode("left_hand_side");if($1 !=-1)addChild($$,$1);}
| field_access			{$$=createNode("left_hand_side");if($1 !=-1)addChild($$,$1);}
| array_access			{$$=createNode("left_hand_side");if($1 !=-1)addChild($$,$1);}
;
assignment_operator:
  TOK_61			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_4261			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_4761			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_3761			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_4361			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_4561			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_606061			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_626261			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_62626261			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_3861			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_9461			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
| TOK_12461			{$$=createNode("assignment_operator");addChild($$,createNode($1));}
;
conditional_expression:
  conditional_or_expression			{$$=createNode("conditional_expression");if($1 !=-1)addChild($$,$1);}
| conditional_or_expression TOK_63 expression TOK_58 conditional_expression			{$$=createNode("conditional_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
| conditional_or_expression TOK_63 expression TOK_58 lambda_expression			{$$=createNode("conditional_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
conditional_or_expression:
  conditional_and_expression			{$$=createNode("conditional_or_expression");if($1 !=-1)addChild($$,$1);}
| conditional_or_expression TOK_124124 conditional_and_expression			{$$=createNode("conditional_or_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
conditional_and_expression:
  inclusive_or_expression			{$$=createNode("conditional_and_expression");if($1 !=-1)addChild($$,$1);}
| conditional_and_expression TOK_3838 inclusive_or_expression			{$$=createNode("conditional_and_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
inclusive_or_expression:
  exclusive_or_expression			{$$=createNode("inclusive_or_expression");if($1 !=-1)addChild($$,$1);}
| inclusive_or_expression TOK_124 exclusive_or_expression			{$$=createNode("inclusive_or_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
exclusive_or_expression:
  and_expression			{$$=createNode("exclusive_or_expression");if($1 !=-1)addChild($$,$1);}
| exclusive_or_expression TOK_94 and_expression			{$$=createNode("exclusive_or_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
and_expression:
  equality_expression			{$$=createNode("and_expression");if($1 !=-1)addChild($$,$1);}
| and_expression TOK_38 equality_expression			{$$=createNode("and_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
equality_expression:
  relational_expression			{$$=createNode("equality_expression");if($1 !=-1)addChild($$,$1);}
| equality_expression TOK_6161 relational_expression			{$$=createNode("equality_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| equality_expression TOK_3361 relational_expression			{$$=createNode("equality_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
relational_expression:
  shift_expression			{$$=createNode("relational_expression");if($1 !=-1)addChild($$,$1);}
| relational_expression TOK_60 shift_expression			{$$=createNode("relational_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| relational_expression TOK_62 shift_expression			{$$=createNode("relational_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| relational_expression TOK_6061 shift_expression			{$$=createNode("relational_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| relational_expression TOK_6261 shift_expression			{$$=createNode("relational_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| instanceof_expression			{$$=createNode("relational_expression");if($1 !=-1)addChild($$,$1);}
;
instanceof_expression:
  relational_expression TOK_instanceof reference_type			{$$=createNode("instanceof_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| relational_expression TOK_instanceof pattern			{$$=createNode("instanceof_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
shift_expression:
  additive_expression			{$$=createNode("shift_expression");if($1 !=-1)addChild($$,$1);}
| shift_expression TOK_6060 additive_expression			{$$=createNode("shift_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| shift_expression TOK_6262 additive_expression			{$$=createNode("shift_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| shift_expression TOK_626262 additive_expression			{$$=createNode("shift_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
additive_expression:
  multiplicative_expression			{$$=createNode("additive_expression");if($1 !=-1)addChild($$,$1);}
| additive_expression TOK_43 multiplicative_expression			{$$=createNode("additive_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| additive_expression TOK_45 multiplicative_expression			{$$=createNode("additive_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
multiplicative_expression:
  unary_expression			{$$=createNode("multiplicative_expression");if($1 !=-1)addChild($$,$1);}
| multiplicative_expression TOK_42 unary_expression			{$$=createNode("multiplicative_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| multiplicative_expression TOK_47 unary_expression			{$$=createNode("multiplicative_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
| multiplicative_expression TOK_37 unary_expression			{$$=createNode("multiplicative_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);}
;
unary_expression:
  pre_increment_expression			{$$=createNode("unary_expression");if($1 !=-1)addChild($$,$1);}
| pre_decrement_expression			{$$=createNode("unary_expression");if($1 !=-1)addChild($$,$1);}
| TOK_43 unary_expression			{$$=createNode("unary_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
| TOK_45 unary_expression			{$$=createNode("unary_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
| unary_expression_not_plus_minus			{$$=createNode("unary_expression");if($1 !=-1)addChild($$,$1);}
;
pre_increment_expression:
  TOK_4343 unary_expression			{$$=createNode("pre_increment_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
pre_decrement_expression:
  TOK_4545 unary_expression			{$$=createNode("pre_decrement_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
unary_expression_not_plus_minus:
  postfix_expression			{$$=createNode("unary_expression_not_plus_minus");if($1 !=-1)addChild($$,$1);}
| TOK_126 unary_expression			{$$=createNode("unary_expression_not_plus_minus");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
| TOK_33 unary_expression			{$$=createNode("unary_expression_not_plus_minus");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);}
| cast_expression			{$$=createNode("unary_expression_not_plus_minus");if($1 !=-1)addChild($$,$1);}
| switch_expression			{$$=createNode("unary_expression_not_plus_minus");if($1 !=-1)addChild($$,$1);}
;
postfix_expression:
  primary			{$$=createNode("postfix_expression");if($1 !=-1)addChild($$,$1);}
| expression_name			{$$=createNode("postfix_expression");if($1 !=-1)addChild($$,$1);}
| post_increment_expression			{$$=createNode("postfix_expression");if($1 !=-1)addChild($$,$1);}
| post_decrement_expression			{$$=createNode("postfix_expression");if($1 !=-1)addChild($$,$1);}
;
post_increment_expression:
  postfix_expression TOK_4343			{$$=createNode("post_increment_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));}
;
post_decrement_expression:
  postfix_expression TOK_4545			{$$=createNode("post_decrement_expression");if($1 !=-1)addChild($$,$1);addChild($$,createNode($2));}
;
cast_expression:
  TOK_40 primitive_type TOK_41 unary_expression			{$$=createNode("cast_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);addChild($$,createNode($3));if($4 !=-1)addChild($$,$4);}
| TOK_40 reference_type additional_bound.multiopt TOK_41 unary_expression_not_plus_minus			{$$=createNode("cast_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
| TOK_40 reference_type additional_bound.multiopt TOK_41 lambda_expression			{$$=createNode("cast_expression");addChild($$,createNode($1));if($2 !=-1)addChild($$,$2);if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
additional_bound.multiopt:
  additional_bound.multiopt additional_bound			{$$=createNode("additional_bound.multiopt");if($1 !=-1)addChild($$,$1);if($2 !=-1)addChild($$,$2);}
| /*empty*/			{$$=-1;}
;
switch_expression:
  TOK_switch TOK_40 expression TOK_41 switch_block			{$$=createNode("switch_expression");addChild($$,createNode($1));addChild($$,createNode($2));if($3 !=-1)addChild($$,$3);addChild($$,createNode($4));if($5 !=-1)addChild($$,$5);}
;
constant_expression:
  expression			{$$=createNode("constant_expression");if($1 !=-1)addChild($$,$1);}
;

%%



/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

int createNode(string lbl) {
	vector<int> v;
	nodes.push_back({lbl, v});
	// cout << "Node Created - " << lbl << endl;
	return nodes.size()-1;
}

void addChild(int parent, int child) {
	nodes[parent].second.push_back(child);
	// cout << "Added Child - " << label[parent] << "->" << label[child] << endl;
}

void build_graph() {
	freopen("out.dot", "w", stdout);
	cout << "// dot -Tps out.dot -o out.ps\n\n"
		 << "graph \"Abstract Syntax Tree\"\n"
		 << "{\n"
    	 << "\tfontname=\"Helvetica,Arial,sans-serif\"\n"
    	 << "\tnode [fontsize=10, width=\".2\", height=\".2\", margin=0]\n"
		 << "\tedge [fontsize=6]\n"
    	 << "\tgraph[fontsize=8];\n\n"
    	 << "\tlabel=\"Abstract Syntax Tree\"\n\n";

	queue<int> nodesQueue;
	nodesQueue.push(startNode);
	while (!nodesQueue.empty()) {
		int node = nodesQueue.front();
		nodesQueue.pop();
		cout << "\tn" << node << " ;\n";
		cout << "\tn" << node << " [label=\"" << nodes[node].first << "\"] ;\n";
		for (int child: nodes[node].second) {
			cout << "\tn" << node << " -- " << 'n' << child << " ;\n";
			nodesQueue.push(child);
		}
		cout << endl;
	}

	cout << "}" << endl;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
  yydebug=1;
	yyparse();
	fclose(yyin);
	build_graph();
	return 0;
}
