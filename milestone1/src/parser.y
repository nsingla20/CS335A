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
%token <s> IDENTIFIER
%token <s> LITERAL
%token <i> TOK_33
%token <i> TOK_3361
%token <i> TOK_37
%token <i> TOK_3761
%token <i> TOK_38
%token <i> TOK_3838
%token <i> TOK_3861
%token <i> TOK_40
%token <i> TOK_41
%token <i> TOK_42
%token <i> TOK_4261
%token <i> TOK_43
%token <i> TOK_4343
%token <i> TOK_4361
%token <i> TOK_44
%token <i> TOK_45
%token <i> TOK_4545
%token <i> TOK_4561
%token <i> TOK_4562
%token <i> TOK_46
%token <i> TOK_464646
%token <i> TOK_47
%token <i> TOK_4761
%token <i> TOK_58
%token <i> TOK_5858
%token <i> TOK_59
%token <i> TOK_60
%token <i> TOK_6060
%token <i> TOK_606061
%token <i> TOK_6061
%token <i> TOK_61
%token <i> TOK_6161
%token <i> TOK_62
%token <i> TOK_6261
%token <i> TOK_6262
%token <i> TOK_626261
%token <i> TOK_626262
%token <i> TOK_62626261
%token <i> TOK_63
%token <i> TOK_64
%token <i> TOK_91
%token <i> TOK_93
%token <i> TOK_94
%token <i> TOK_9461
%token <i> TOK_abstract
%token <i> TOK_assert
%token <i> TOK_boolean
%token <i> TOK_break
%token <i> TOK_byte
%token <i> TOK_case
%token <i> TOK_catch
%token <i> TOK_char
%token <i> TOK_class
%token <i> TOK_continue
%token <i> TOK_default
%token <i> TOK_do
%token <i> TOK_double
%token <i> TOK_else
%token <i> TOK_enum
%token <i> TOK_exports
%token <i> TOK_extends
%token <i> TOK_final
%token <i> TOK_finally
%token <i> TOK_float
%token <i> TOK_for
%token <i> TOK_if
%token <i> TOK_implements
%token <i> TOK_import
%token <i> TOK_instanceof
%token <i> TOK_int
%token <i> TOK_interface
%token <i> TOK_long
%token <i> TOK_module
%token <i> TOK_native
%token <i> TOK_new
%token <i> TOK_open
%token <i> TOK_opens
%token <i> TOK_package
%token <i> TOK_permits
%token <i> TOK_private
%token <i> TOK_protected
%token <i> TOK_provides
%token <i> TOK_public
%token <i> TOK_record
%token <i> TOK_requires
%token <i> TOK_return
%token <i> TOK_sealed
%token <i> TOK_short
%token <i> TOK_static
%token <i> TOK_strictfp
%token <i> TOK_super
%token <i> TOK_switch
%token <i> TOK_synchronized
%token <i> TOK_this
%token <i> TOK_throw
%token <i> TOK_throws
%token <i> TOK_to
%token <i> TOK_transient
%token <i> TOK_transitive
%token <i> TOK_try
%token <i> TOK_uses
%token <i> TOK_var
%token <i> TOK_void
%token <i> TOK_volatile
%token <i> TOK_while
%token <i> TOK_with
%token <i> TOK_yield
%token <i> TOK_123
%token <i> TOK_124
%token <i> TOK_12461
%token <i> TOK_124124
%token <i> TOK_125
%token <i> TOK_126


/* Type Definition Daddys Love*/

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
%type<i> annotation_interface_element_modifier
%type<i> annotation_interface_element_modifier.multiopt
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
%type<i> class_modifier
%type<i> class_modifier.multiopt
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
%type<i> constant_modifier
%type<i> constant_modifier.multiopt
%type<i> constructor_body
%type<i> constructor_declaration
%type<i> constructor_declarator
%type<i> constructor_modifier
%type<i> constructor_modifier.multiopt
%type<i> continue_statement
%type<i> default_value
%type<i> default_value.opt
%type<i> dim_expr
%type<i> dim_expr.multiopt
%type<i> dim_exprs
%type<i> dims
%type<i> dims.opt
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
%type<i> enum_constant_modifier
%type<i> enum_constant_modifier.multiopt
%type<i> enum_declaration
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
%type<i> field_modifier
%type<i> field_modifier.multiopt
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
%type<i> interface_method_modifier
%type<i> interface_method_modifier.multiopt
%type<i> interface_modifier
%type<i> interface_modifier.multiopt
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
%type<i> method_modifier
%type<i> method_modifier.multiopt
%type<i> method_name
%type<i> method_reference
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
%type<i> requires_modifier
%type<i> requires_modifier.multiopt
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
%type<i> space.opt
%type<i> space.opt.multiopt
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
  compilation_unit
;
dot_ind.multiopt:
  dot_ind.multiopt TOK_46 IDENTIFIER
| /*empty*/
;
type_IDENTIFIER:
  IDENTIFIER
;
unqualified_method_IDENTIFIER:
  IDENTIFIER
;
	/* Types, Values and Variables */
type:
  primitive_type
| reference_type
;
primitive_type:
  annotation.multiopt numeric_type
| annotation.multiopt TOK_boolean
;
numeric_type:
  integral_type
| floating_point_type
;
integral_type:
  TOK_byte
| TOK_short
| TOK_int
| TOK_long
| TOK_char
;
floating_point_type:
  TOK_float
| TOK_double
;
reference_type:
  class_or_interface_type
| type_variable
| array_type
;
class_or_interface_type:
  class_type
| interface_type
;
class_type:
  annotation.multiopt type_IDENTIFIER type_arguments.opt
| package_name TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt
| class_or_interface_type TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt
;
interface_type:
  class_type
;
type_variable:
  annotation.multiopt type_IDENTIFIER
;
array_type:
  primitive_type dims
| class_or_interface_type dims
| type_variable dims
;
dims:
  annotation.multiopt an_sp.multiopt
;
an_sp.multiopt:
  an_sp.multiopt annotation.multiopt
| /*empty*/
type_parameter:
  type_parameter_modifier.multiopt type_IDENTIFIER type_bound.opt
;
type_parameter_modifier.multiopt:
  type_parameter_modifier
| type_parameter_modifier.multiopt type_parameter_modifier
| /* empty */
type_parameter_modifier:
  annotation
;
type_bound.opt:
  type_bound
| /* empty */
;
type_bound:
   TOK_extends  type_variable
|  TOK_extends  class_or_interface_type additional_bound.multiopt
;
additional_bound:
  TOK_38 interface_type
;
type_arguments:
  TOK_60 type_argument_list TOK_62
;
type_argument_list:
  type_argument type_argument.multiopt
;
type_argument.multiopt:
  TOK_44 type_argument
| type_argument.multiopt TOK_44 type_argument
| /* empty */
type_argument:
  reference_type
| wildcard
;
wildcard:
  annotation.multiopt TOK_63 wildcard_bounds.opt
;
wildcard_bounds.opt:
  wildcard_bounds
| /* empty */
;
wildcard_bounds:
   TOK_extends  reference_type
|  TOK_super  reference_type


  /* Names */
module_name:
  IDENTIFIER
| module_name TOK_46 IDENTIFIER
;
package_name:
  IDENTIFIER
| package_name TOK_46 IDENTIFIER
;
type_name:
  type_IDENTIFIER
| package_or_type_name TOK_46 type_IDENTIFIER
;
expression_name:
  IDENTIFIER
| ambiguous_name TOK_46 IDENTIFIER
;
method_name:
  unqualified_method_IDENTIFIER
;
package_or_type_name:
  IDENTIFIER
| package_or_type_name TOK_46 IDENTIFIER
;
ambiguous_name:
  IDENTIFIER
| ambiguous_name TOK_46 IDENTIFIER
;


  /* Packages and Modules */
compilation_unit:
  ordinary_compilation_unit
| modular_compilation_unit
;
ordinary_compilation_unit:
  package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt
;
modular_compilation_unit:
  import_declaration.multiopt module_declaration
;
package_declaration.opt:
  package_declaration
| /* empty */
;
package_declaration:
  package_modifier.multiopt  TOK_package  IDENTIFIER dot_ind.multiopt TOK_59
;
package_modifier.multiopt:
  package_modifier.multiopt package_modifier
| /* empty */
;
package_modifier:
  annotation
;
import_declaration.multiopt:
  import_declaration.multiopt import_declaration
| /* empty */
;
import_declaration:
  single_type_import_declaration
| type_import_on_demand_declaration
| single_static_import_declaration
| static_import_on_demand_declaration
;
single_type_import_declaration:
   TOK_import  type_name  TOK_59
;
type_import_on_demand_declaration:
   TOK_import  package_or_type_name TOK_46 TOK_42 TOK_59
;
single_static_import_declaration:
   TOK_import  TOK_static type_name TOK_46 IDENTIFIER TOK_59
;
static_import_on_demand_declaration:
   TOK_import  TOK_static type_name TOK_46 TOK_42 TOK_59
;
top_level_class_or_interface_declaration.multiopt:
  top_level_class_or_interface_declaration
| top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration
| /* empty */
;
top_level_class_or_interface_declaration:
  class_declaration
| interface_declaration
| TOK_59
;
module_declaration:
  annotation.multiopt open.opt  TOK_module  IDENTIFIER dot_ind.multiopt TOK_123 module_directive.multiopt TOK_125
;
open.opt:
  TOK_open
| /*empty*/
;
module_directive.multiopt:
  module_directive
| module_directive.multiopt module_directive
| /* empty */
;
module_directive:
  TOK_requires requires_modifier.multiopt module_name ;
| TOK_exports package_name to_module_names.opt TOK_59
| TOK_opens package_name to_module_names.opt TOK_59
| TOK_uses type_name TOK_59
| TOK_provides type_name TOK_with type_name com_type_name.multiopt TOK_59
;
com_type_name.multiopt:
  com_type_name.multiopt TOK_44 type_name
| /*empty*/
;
to_module_names.opt:
  TOK_to module_name com_module_name.multiopt
| to_module_names.opt TOK_to module_name com_module_name.multiopt
| /* empty */
com_module_name.multiopt:
  com_module_name.multiopt TOK_44 module_name
| /*empty*/
;
requires_modifier.multiopt:
  requires_modifier
| requires_modifier.multiopt requires_modifier
| /* empty */
requires_modifier:
  TOK_transitive
| TOK_static
;

  /* Classes */
class_declaration:
  normal_class_declaration
| enum_declaration
| record_declaration
;
normal_class_declaration:
  class_modifier.multiopt  TOK_class  type_IDENTIFIER  type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body
;
class_modifier.multiopt:
  class_modifier.multiopt class_modifier
| /*empty*/
;
type_parameters.opt:
  type_parameters
| /*empty*/
;
class_extends.opt:
  class_extends
| /*empty*/
;
class_implements.opt:
  class_implements
| /*empty*/
;
class_permits.opt:
  class_permits
| /*empty*/
;
class_modifier:
  annotation
|  TOK_public
|  TOK_protected
|  TOK_private
|  TOK_abstract
|  TOK_static
|  TOK_final
|  TOK_sealed
|  "non-sealed"
|  TOK_strictfp
;
type_parameters:
  TOK_60 type_parameter_list TOK_62
;
type_parameter_list:
  type_parameter com_type_parameter.multiopt
;
com_type_parameter.multiopt:
  com_type_parameter.multiopt TOK_44 type_parameter
| /*empty*/
;
class_extends:
  TOK_extends class_type
;
class_implements:
  TOK_implements interface_type_list
;
interface_type_list:
  interface_type com_interface_type.multiopt
;
com_interface_type.multiopt:
  com_interface_type.multiopt TOK_44 interface_type
| /*empty*/
;
class_permits:
  TOK_permits type_name com_type_name.multiopt
;
class_body:
   TOK_123  class_body_declaration.multiopt  TOK_125
;
class_body_declaration.multiopt:
  class_body_declaration.multiopt class_body_declaration
| /*empty*/
;
class_body_declaration:
  class_member_declaration
| instance_initializer
| static_initializer
| constructor_declaration
;
class_member_declaration:
  field_declaration
| method_declaration
| class_declaration
| interface_declaration
;
field_declaration:
  field_modifier.multiopt unann_type variable_declarator_list TOK_59
;
field_modifier.multiopt:
  field_modifier.multiopt field_modifier
| /*empty*/
;
field_modifier:
  annotation
| TOK_public
| TOK_protected
| TOK_private
| TOK_static
| TOK_final
| TOK_transient
| TOK_volatile
;
variable_declarator_list:
  variable_declarator com_variable_declarator.multiopt
;
com_variable_declarator.multiopt:
  com_variable_declarator.multiopt TOK_44 variable_declarator
| /*empty*/
;
variable_declarator:
  variable_declarator_id eq_variable_initializer.opt
;
eq_variable_initializer.opt:
  TOK_61 variable_initializer
| /*empty*/
;
variable_declarator_id:
  IDENTIFIER dims.opt
;
dims.opt:
  dims
| /*empty*/
;
variable_initializer:
  expression
| array_initializer
;
unann_type:
  unann_primitive_type
| unann_reference_type
;
unann_primitive_type:
  numeric_type
| TOK_boolean
;
unann_reference_type:
  unann_class_or_interface_type
| unann_type_variable
| unann_array_type
;
unann_class_or_interface_type:
  unann_class_type
| unann_interface_type
;
unann_class_type:
  type_IDENTIFIER type_arguments.opt
| package_name TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt
| unann_class_or_interface_type TOK_46 annotation.multiopt type_IDENTIFIER type_arguments.opt
;
type_arguments.opt:
  type_arguments
| /*empty*/
;
unann_interface_type:
  unann_class_type
;
unann_type_variable:
  type_IDENTIFIER
;
unann_array_type:
  unann_primitive_type dims
| unann_class_or_interface_type dims
| unann_type_variable dims
;
method_declaration:
  method_modifier.multiopt method_header method_body
;
method_modifier.multiopt:
  method_modifier.multiopt method_modifier
| /*empty*/
;
method_modifier:
  annotation
| TOK_public
| TOK_protected
| TOK_private
|TOK_abstract
| TOK_static
| TOK_final
| TOK_synchronized
| TOK_native
| TOK_strictfp
;
method_header:
  result method_declarator throws.opt
| type_parameters annotation.multiopt result method_declarator throws.opt
;
throws.opt:
  throws
| /*empty*/
;
result:
  unann_type
| TOK_void
;
method_declarator:
  IDENTIFIER TOK_40 receiver_parameter_com.opt formal_parameter_list.opt TOK_41 dims.opt
;
receiver_parameter_com.opt:
  receiver_parameter TOK_44
| /*empty*/
;
formal_parameter_list.opt:
  formal_parameter_list
| /*empty*/
;
receiver_parameter:
  annotation.multiopt unann_type IDENTIFIER_dot.opt TOK_this
;
IDENTIFIER_dot.opt:
  IDENTIFIER TOK_46
| /*empty*/
;
formal_parameter_list:
  formal_parameter com_formal_parameter.multiopt
;
com_formal_parameter.multiopt:
  com_formal_parameter.multiopt TOK_44 formal_parameter
| /*empty*/
;
formal_parameter:
  variable_modifier.multiopt unann_type variable_declarator_id
| variable_arity_parameter
;
variable_modifier.multiopt:
  variable_modifier.multiopt variable_modifier
| /*empty*/
;
variable_arity_parameter:
  variable_modifier.multiopt unann_type annotation.multiopt TOK_464646 IDENTIFIER
;
variable_modifier:
  annotation
| TOK_final
;
throws:
  TOK_throws exception_type_list
;
exception_type_list:
  exception_type com_exception_type.multiopt
;
com_exception_type.multiopt:
  com_exception_type.multiopt TOK_44 exception_type
| /*empty*/
;
exception_type:
  class_type
| type_variable
;
method_body:
  block
| TOK_59
;
instance_initializer:
  block
;
static_initializer:
  TOK_static block
;
constructor_declaration:
  constructor_modifier.multiopt constructor_declarator throws.opt constructor_body
;
constructor_modifier.multiopt:
  constructor_modifier.multiopt constructor_modifier
| /*empty*/
;
constructor_modifier:
  annotation
| TOK_public
| TOK_protected
| TOK_private
;
constructor_declarator:
  type_parameters.opt simple_type_name TOK_40 receiver_parameter_com.opt formal_parameter_list.opt TOK_41
;
simple_type_name:
  type_IDENTIFIER
;
constructor_body:
  TOK_123 explicit_constructor_invocation.opt block_statements.opt TOK_125
;
explicit_constructor_invocation.opt:
  explicit_constructor_invocation
| /*empty*/
;
block_statements.opt:
  block_statements
| /*empty*/
;
explicit_constructor_invocation:
  type_arguments.opt TOK_this TOK_40 argument_list.opt TOK_41 TOK_59
| type_arguments.opt TOK_super TOK_40 argument_list.opt TOK_41 TOK_59
| expression_name TOK_46 type_arguments.opt TOK_super TOK_40 argument_list.opt TOK_41 TOK_59
| primary TOK_46 type_arguments.opt TOK_super TOK_40 argument_list.opt TOK_41 TOK_59
;
argument_list.opt:
  argument_list
| /*empty*/
;
enum_declaration:
  class_modifier.multiopt TOK_enum type_IDENTIFIER class_implements.opt enum_body
;
enum_body:
  TOK_123 enum_constant_list.opt com.opt enum_body_declarations.opt TOK_125
;
com.opt:
  TOK_44
| /*empty*/
;
enum_body_declarations.opt:
  enum_body_declarations
| /*empty*/
;
enum_constant_list.opt:
  enum_constant_list
| /*empty*/
;
enum_constant_list:
  enum_constant com_enum_constant.multiopt
;
com_enum_constant.multiopt:
  com_enum_constant.multiopt TOK_44 enum_constant
| /*empty*/
;
enum_constant:
  enum_constant_modifier.multiopt IDENTIFIER "[(" argument_list.opt ")]" class_body.opt
;
enum_constant_modifier.multiopt:
  enum_constant_modifier.multiopt enum_constant_modifier
| /*empty*/
;
class_body.opt:
  class_body
| /*empty*/
;
enum_constant_modifier:
  annotation
;
enum_body_declarations:
  TOK_59 class_body_declaration.multiopt
;
record_declaration:
  class_modifier.multiopt TOK_record type_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body
;
record_header:
  TOK_40 record_component_list.opt TOK_41
;
record_component_list.opt:
  record_component_list
| /*empty*/
;
record_component_list:
  record_component com_record_component.multiopt
;
com_record_component.multiopt:
  com_record_component.multiopt TOK_44 record_component
| /*empty*/
;

record_component:
  record_component_modifier.multiopt unann_type IDENTIFIER
| variable_arity_record_component
;
record_component_modifier.multiopt:
  record_component_modifier.multiopt record_component_modifier
| /*empty*/
;
variable_arity_record_component:
  record_component_modifier.multiopt unann_type annotation.multiopt TOK_464646 IDENTIFIER
;
record_component_modifier:
  annotation
;
record_body:
  TOK_123 record_body_declaration.multiopt TOK_125
;
record_body_declaration.multiopt:
  record_body_declaration.multiopt record_body_declaration
| /*empty*/
;
record_body_declaration:
  class_body_declaration
| compact_constructor_declaration
;
compact_constructor_declaration:
  constructor_modifier.multiopt simple_type_name constructor_body
;

	/* Interfaces */

interface_declaration:
  normal_interface_declaration
| annotation_interface_declaration
;
normal_interface_declaration:
  interface_modifier.multiopt TOK_interface type_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body
;
interface_modifier.multiopt:
  interface_modifier.multiopt interface_modifier
| /*empty*/
;
interface_extends.opt:
  interface_extends
| /*empty*/
;
interface_permits.opt:
  interface_permits
| /*empty*/
;
interface_modifier:
  annotation
| TOK_public
| TOK_protected
| TOK_private
| TOK_abstract
| TOK_static
| TOK_sealed
| "non-sealed"
| TOK_strictfp
;
interface_extends:
  TOK_extends interface_type_list
;
interface_permits:
  TOK_permits type_name com_type_name.multiopt
;
interface_body:
  TOK_123 interface_member_declaration.multiopt TOK_125
;
interface_member_declaration.multiopt:
  interface_member_declaration.multiopt interface_member_declaration
| /*empty*/
;
interface_member_declaration:
  constant_declaration
| interface_method_declaration
| class_declaration
| interface_declaration
| TOK_59
;
constant_declaration:
  constant_modifier.multiopt unann_type variable_declarator_list TOK_59
;
constant_modifier.multiopt:
  constant_modifier.multiopt constant_modifier
| /*empty*/
;
constant_modifier:
  annotation
| TOK_public
| TOK_static
| TOK_final
;
interface_method_declaration:
  interface_method_modifier.multiopt method_header method_body
;
interface_method_modifier.multiopt:
  interface_method_modifier.multiopt interface_method_modifier
| /*empty*/
;
interface_method_modifier:
  annotation
| TOK_public
| TOK_private
| TOK_abstract
| TOK_default
| TOK_static
| TOK_strictfp
;
annotation_interface_declaration:
  interface_modifier.multiopt TOK_64 TOK_interface type_IDENTIFIER annotation_interface_body
;
annotation_interface_body:
  TOK_123 annotation_interface_member_declaration.multiopt TOK_125
;
annotation_interface_member_declaration.multiopt:
  annotation_interface_member_declaration.multiopt annotation_interface_member_declaration
| /*empty*/
;
annotation_interface_member_declaration:
  annotation_interface_element_declaration
| constant_declaration
| class_declaration
| interface_declaration
| TOK_59
;
annotation_interface_element_declaration:
  annotation_interface_element_modifier.multiopt unann_type IDENTIFIER TOK_40 TOK_41 dims.opt default_value.opt TOK_59
;
annotation_interface_element_modifier.multiopt:
  annotation_interface_element_modifier.multiopt annotation_interface_element_modifier
| /*empty*/
;
default_value.opt:
  default_value
| /*empty*/
;
annotation_interface_element_modifier:
  annotation
| TOK_public
| TOK_abstract
;
default_value:
  TOK_default element_value
;
annotation:
  normal_annotation
| marker_annotation
| single_element_annotation
;
normal_annotation:
  TOK_64 type_name TOK_40 element_value_pair_list.opt TOK_41
;
element_value_pair_list.opt:
  element_value_pair_list
| /*empty*/
;
element_value_pair_list:
  element_value_pair com_element_value_pair.multiopt
;
com_element_value_pair.multiopt:
  com_element_value_pair.multiopt TOK_44 element_value_pair
| /*empty*/
;
element_value_pair:
  IDENTIFIER TOK_61 element_value
;
element_value:
  conditional_expression
| element_value_array_initializer
| annotation
;
element_value_array_initializer:
  TOK_123 element_valueList.opt com.opt TOK_125
;
element_valueList.opt:
  element_valueList
| /*empty*/
;
element_valueList:
  element_value com_element_value.multiopt
;
com_element_value.multiopt:
  com_element_value.multiopt TOK_44 element_value
| /*empty*/
;
marker_annotation:
  TOK_64 type_name
;
single_element_annotation:
  TOK_64 type_name TOK_40 element_value TOK_41
;
annotation.multiopt:
  annotation.multiopt annotation
| /*empty*/
	/* Arrays */

array_initializer:
  TOK_123 variable_initializer_list.opt com.opt TOK_125
;
variable_initializer_list.opt:
  variable_initializer_list
| /*empty*/
;
variable_initializer_list:
  variable_initializer com_variable_initializer.multiopt
;
com_variable_initializer.multiopt:
  com_variable_initializer.multiopt TOK_44 variable_initializer
| /*empty*/
;
	/* blocks, statements, and patterns */

block:
  TOK_123 block_statements.opt TOK_125
;
block_statements:
  block_statement block_statement.multiopt
;
block_statement.multiopt:
  block_statement.multiopt block_statement
| /*empty*/
;
block_statement:
  local_class_or_interface_declaration
| local_variable_declaration_statement
| statement
;
local_class_or_interface_declaration:
  class_declaration
| normal_interface_declaration
;
local_variable_declaration_statement:
  local_variable_declaration TOK_59
;
local_variable_declaration:
  variable_modifier.multiopt local_variable_type variable_declarator_list
;
local_variable_type:
  unann_type
| TOK_var
;
statement:
  statement_without_trailing_substatement
| labeled_statement
| if_then_statement
| if_then_else_statement
| while_statement
| for_statement
;
statement_no_short_if:
  statement_without_trailing_substatement
| labeled_statement_no_short_if
| if_then_else_statement_no_short_if
| while_statement_no_short_if
| for_statement_no_short_if
;
statement_without_trailing_substatement:
  block
| empty_statement
| expression_statement
| assert_statement
| switch_statement
| do_statement
| break_statement
| continue_statement
| return_statement
| synchronized_statement
| throw_statement
| try_statement
| yield_statement
;
empty_statement:
  TOK_59
;
labeled_statement:
  IDENTIFIER TOK_58 statement
;
labeled_statement_no_short_if:
  IDENTIFIER TOK_58 statement_no_short_if
;
expression_statement:
  statement_expression TOK_59
;
statement_expression:
  assignment
| pre_increment_expression
| pre_decrement_expression
| post_increment_expression
| post_decrement_expression
| method_invocation
| class_instance_creation_expression
;
if_then_statement:
  TOK_if TOK_40 expression TOK_41 statement
;
if_then_else_statement:
  TOK_if TOK_40 expression TOK_41 statement_no_short_if TOK_else statement
;
if_then_else_statement_no_short_if:
  TOK_if TOK_40 expression TOK_41 statement_no_short_if TOK_else statement_no_short_if
;
assert_statement:
  TOK_assert expression TOK_59
| TOK_assert expression TOK_58 expression TOK_59
;
switch_statement:
  TOK_switch TOK_40 expression TOK_41 switch_block
;
switch_block:
  TOK_123 switch_rule switch_rule.multiopt TOK_59
| TOK_123 switch_block_statement_group.multiopt switch_label_col.multiopt TOK_125
;
switch_rule.multiopt:
  switch_rule.multiopt switch_rule
| /*empty*/
;
switch_block_statement_group.multiopt:
  switch_block_statement_group.multiopt switch_block_statement_group
| /*empty*/
;
switch_label_col.multiopt:
  switch_label_col.multiopt switch_label TOK_58
| /*empty*/
;
switch_rule:
  switch_label TOK_4562 expression TOK_59
| switch_label TOK_4562 block
| switch_label TOK_4562 throw_statement
;
switch_block_statement_group:
  switch_label TOK_58 switch_label_col.multiopt block_statements
;
switch_label:
  TOK_case case_constant com_case_constant.multiopt
  TOK_default
;
com_case_constant.multiopt:
  com_case_constant.multiopt TOK_44 case_constant
| /*empty*/
;
case_constant:
  conditional_expression
;
while_statement:
  TOK_while TOK_40 expression TOK_41 statement
;
while_statement_no_short_if:
  TOK_while TOK_40 expression TOK_41 statement_no_short_if
;
do_statement:
  TOK_do statement TOK_while TOK_40 expression TOK_41 TOK_59
;
for_statement:
  basic_for_statement
| enhanced_for_statement
;
for_statement_no_short_if:
  basic_for_statement_no_short_if
| enhanced_for_statement_no_short_if
;
basic_for_statement:
  TOK_for TOK_40 for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement
;
for_init.opt:
  for_init
| /*empty*/
;
expression.opt:
  expression
| /*empty*/
;
for_update.opt:
  for_update
| /*empty*/
;
basic_for_statement_no_short_if:
  TOK_for TOK_40 for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement_no_short_if
;
for_init:
  statement_expression_list
  local_variable_declaration
;
for_update:
  statement_expression_list
;
statement_expression_list:
  statement_expression com_statement_expression.multiopt
;
com_statement_expression.multiopt:
  com_statement_expression.multiopt TOK_44 statement_expression
| /*empty*/
;
enhanced_for_statement:
  TOK_for TOK_40 local_variable_declaration TOK_58 expression TOK_41 statement
;
enhanced_for_statement_no_short_if:
  TOK_for TOK_40 local_variable_declaration TOK_58 expression TOK_41 statement_no_short_if
;
break_statement:
  TOK_break IDENTIFIER.opt TOK_59
;
IDENTIFIER.opt:
  IDENTIFIER
| /*empty*/
;
yield_statement:
  TOK_yield expression TOK_59
;
continue_statement:
  TOK_continue IDENTIFIER.opt TOK_59
;
return_statement:
  TOK_return expression.opt TOK_59
;
throw_statement:
  TOK_throw expression TOK_59
;
synchronized_statement:
  TOK_synchronized TOK_40 expression TOK_41 block
;
try_statement:
  TOK_try block catches
  TOK_try block catches.opt finally
  try_with_resources_statement
;
catches.opt:
  catches
| /*empty*/
;
catches:
  catch_clause catch_clause.multiopt
;
catch_clause.multiopt:
  catch_clause.multiopt catch_clause
| /*empty*/
;
catch_clause:
  TOK_catch TOK_40 catch_formal_parameter TOK_41 block
;
catch_formal_parameter:
  variable_modifier.multiopt catch_type variable_declarator_id
;
catch_type:
  unann_class_type vt_class_type.multiopt
;
vt_class_type.multiopt:
  vt_class_type.multiopt TOK_124 class_type
| /*empty*/
;
finally:
  TOK_finally block
;
try_with_resources_statement:
  TOK_try resource_specification block catches.opt finally.opt
;
finally.opt:
  finally
| /*empty*/
;
resource_specification:
  TOK_40 resource_list semcol.opt TOK_41
;
semcol.opt:
  TOK_59
| /*empty*/
;
resource_list:
  resource semcol_resource.multiopt
;
semcol_resource.multiopt:
  semcol_resource.multiopt TOK_59 resource
| /*empty*/
;
resource:
  local_variable_declaration
| variable_access
;
variable_access:
  expression_name
| field_access
;
pattern:
  type_pattern
;
type_pattern:
  local_variable_declaration

	/* expressions */

primary:
  primary_no_new_array
| array_creation_expression
;
primary_no_new_array:
  LITERAL
| class_literal
| TOK_this
| type_name TOK_46 TOK_this
| TOK_40 expression TOK_41
| class_instance_creation_expression
| field_access
| array_access
| method_invocation
| method_reference
;
class_literal:
  type_name TOK_46 TOK_class
| numeric_type TOK_46 TOK_class
| TOK_boolean TOK_46 TOK_class
| TOK_void TOK_46 TOK_class
;
class_instance_creation_expression:
  unqualified_class_instance_creation_expression
| expression_name TOK_46 unqualified_class_instance_creation_expression
| primary TOK_46 unqualified_class_instance_creation_expression
;
unqualified_class_instance_creation_expression:
  TOK_new type_arguments.opt class_or_interface_type_to_instantiate TOK_40 argument_list.opt TOK_41 class_body.opt
;
class_or_interface_type_to_instantiate:
  annotation.multiopt IDENTIFIER dot_annotation.multiopt_IDENTIFIER.multiopt type_arguments_or_diamond.opt
;
dot_annotation.multiopt_IDENTIFIER.multiopt:
  dot_annotation.multiopt_IDENTIFIER.multiopt TOK_46 annotation.multiopt IDENTIFIER
| /*empty*/
;
type_arguments_or_diamond.opt:
  type_arguments_or_diamond
| /*empty*/
;
type_arguments_or_diamond:
  type_arguments
| "<>"
;
field_access:
  primary TOK_46 IDENTIFIER
| TOK_super TOK_46 IDENTIFIER
| type_name TOK_46 TOK_super TOK_46 IDENTIFIER
;
array_access:
  expression_name TOK_91 expression TOK_93
| primary_no_new_array TOK_91 expression TOK_93
;
method_invocation:
  method_name TOK_40 argument_list.opt TOK_41
| type_name TOK_46 type_arguments.opt IDENTIFIER TOK_40 argument_list.opt TOK_41
| expression_name TOK_46 type_arguments.opt IDENTIFIER TOK_40 argument_list.opt TOK_41
| primary TOK_46 type_arguments.opt IDENTIFIER TOK_40 argument_list.opt TOK_41
| TOK_super TOK_46 type_arguments.opt IDENTIFIER TOK_40 argument_list.opt TOK_41
| type_name TOK_46 TOK_super TOK_46 type_arguments.opt IDENTIFIER TOK_40 argument_list.opt TOK_41
;
argument_list:
  expression com_expression.multiopt
;
com_expression.multiopt:
  com_expression.multiopt TOK_44 expression
| /*empty*/
;
method_reference:
  expression_name TOK_5858 type_arguments.opt IDENTIFIER
| primary TOK_5858 type_arguments.opt IDENTIFIER
| reference_type TOK_5858 type_arguments.opt IDENTIFIER
| TOK_super TOK_5858 type_arguments.opt IDENTIFIER
| type_name TOK_46 TOK_super TOK_5858 type_arguments.opt IDENTIFIER
| class_type TOK_5858 type_arguments.opt TOK_new
| array_type TOK_5858 TOK_new
;
array_creation_expression:
  TOK_new primitive_type dim_exprs dims.opt
| TOK_new class_or_interface_type dim_exprs dims.opt
| TOK_new primitive_type dims array_initializer
| TOK_new class_or_interface_type dims array_initializer
;
dim_exprs:
  dim_expr dim_expr.multiopt
;
dim_expr.multiopt:
  dim_expr.multiopt dim_expr
| /*empty*/
;
dim_expr:
  annotation.multiopt TOK_91 expression TOK_93
;
expression:
  lambda_expression
| assignment_expression
;
lambda_expression:
  lambda_parameters TOK_4562 lambda_body
;
lambda_parameters:
  TOK_40 lambda_parameter_list.opt TOK_41
| IDENTIFIER
;
lambda_parameter_list.opt:
  lambda_parameter_list
| /*empty*/
;
lambda_parameter_list:
  lambda_parameter com_lambda_parameter.multiopt
| IDENTIFIER com_IDENTIFIER.multiopt
;
com_IDENTIFIER.multiopt:
  com_IDENTIFIER.multiopt TOK_44 IDENTIFIER
| /*empty*/
;
com_lambda_parameter.multiopt:
  com_lambda_parameter.multiopt TOK_44 lambda_parameter
| /*empty*/
;
lambda_parameter:
  variable_modifier.multiopt lambda_parameter_type variable_declarator_id
| variable_arity_parameter
;
lambda_parameter_type:
  unann_type
| TOK_var
;
lambda_body:
  expression
| block
;
assignment_expression:
  conditional_expression
| assignment
;
assignment:
  left_hand_side assignment_operator expression
;
left_hand_side:
  expression_name
| field_access
| array_access
;
assignment_operator:
  TOK_61
| TOK_4261
| TOK_4761
| TOK_3761
| TOK_4361
| TOK_4561
| TOK_606061
| TOK_626261
| TOK_62626261
| TOK_3861
| TOK_9461
| TOK_12461
;
conditional_expression:
  conditional_or_expression
| conditional_or_expression TOK_63 expression TOK_58 conditional_expression
| conditional_or_expression TOK_63 expression TOK_58 lambda_expression
;
conditional_or_expression:
  conditional_and_expression
| conditional_or_expression TOK_124124 conditional_and_expression
;
conditional_and_expression:
  inclusive_or_expression
| conditional_and_expression TOK_3838 inclusive_or_expression
;
inclusive_or_expression:
  exclusive_or_expression
| inclusive_or_expression TOK_124 exclusive_or_expression
;
exclusive_or_expression:
  and_expression
| exclusive_or_expression TOK_94 and_expression
;
and_expression:
  equality_expression
| and_expression TOK_38 equality_expression
;
equality_expression:
  relational_expression
| equality_expression TOK_6161 relational_expression
| equality_expression TOK_3361 relational_expression
;
relational_expression:
  shift_expression
| relational_expression TOK_60 shift_expression
| relational_expression TOK_62 shift_expression
| relational_expression TOK_6061 shift_expression
| relational_expression TOK_6261 shift_expression
| instanceof_expression
;
instanceof_expression:
  relational_expression TOK_instanceof reference_type
| relational_expression TOK_instanceof pattern
;
shift_expression:
  additive_expression
| shift_expression TOK_6060 additive_expression
| shift_expression TOK_6262 additive_expression
| shift_expression TOK_626262 additive_expression
;
additive_expression:
  multiplicative_expression
| additive_expression TOK_43 multiplicative_expression
| additive_expression TOK_45 multiplicative_expression
;
multiplicative_expression:
  unary_expression
| multiplicative_expression TOK_42 unary_expression
| multiplicative_expression TOK_47 unary_expression
| multiplicative_expression TOK_37 unary_expression
;
unary_expression:
  pre_increment_expression
| pre_decrement_expression
| TOK_43 unary_expression
| TOK_45 unary_expression
| unary_expression_not_plus_minus
;
pre_increment_expression:
  TOK_4343 unary_expression
pre_decrement_expression:
  TOK_4545 unary_expression
unary_expression_not_plus_minus:
  postfix_expression
| TOK_126 unary_expression
| TOK_33 unary_expression
| cast_expression
| switch_expression
;
postfix_expression:
  primary
| expression_name
| post_increment_expression
| post_decrement_expression
;
post_increment_expression:
  postfix_expression TOK_4343
;
post_decrement_expression:
  postfix_expression TOK_4545
;
cast_expression:
  TOK_40 primitive_type TOK_41 unary_expression
| TOK_40 reference_type additional_bound.multiopt TOK_41 unary_expression_not_plus_minus
| TOK_40 reference_type additional_bound.multiopt TOK_41 lambda_expression
;
additional_bound.multiopt:
  additional_bound.multiopt additional_bound
| /*empty*/
;
switch_expression:
  TOK_switch TOK_40 expression TOK_41 switch_block
;
constant_expression:
  expression
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
	// build_graph();
	return 0;
}
