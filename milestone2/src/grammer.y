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

// Symbol Table
vector<map<string,string>> block_table(10);
vector<map<string,string>> cum_table;
map<string,string> symbol_table;
int current_stack = 0;
string curr_type;
string modifier = "public";
string parent_class = "";
int class_dec_flag = 0;
int method_dec_flag = 0;

vector<string> mod_list;
string lhs_type = "";
string rhs_type = "";
int lhs_record = 1;
int rhs_record = 1;
int halt_type_check = 0;
string pre_var = "";

struct var_info{
  string name;
  int size;
  int offset;
  string type;
};

vector<var_info> database;
struct var_info* filler;


void yyerror(char const *);
int createNode(string);
string probe_type(string);
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
%token <s> TOK_NUMERICLITERAL
%token <s> TOK_NONNUMERICLITERAL
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
%token <s> TOK_new "new"
%token <s> TOK_package "package"
%token <s> TOK_permits "permits"
%token <s> TOK_private "private"
%token <s> TOK_protected "protected"
%token <s> TOK_public "public"
%token <s> TOK_record "record"
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
%token <s> TOK_transient "transient"
%token <s> TOK_transitive "transitive"
%token <s> TOK_try "try"
%token <s> TOK_var "var"
%token <s> TOK_void "void"
%token <s> TOK_volatile "volatile"
%token <s> TOK_while "while"
%token <s> TOK_yield "yield"
%token <s> TOK_123 "{"
%token <s> TOK_124 "|"
%token <s> TOK_12461 "|="
%token <s> TOK_124124 "||"
%token <s> TOK_125 "}"
%token <s> TOK_126 "~"
%type<s> hold_Literal
%type<s> IDENTIFIER.opt
%type<s> additional_bound
%type<s> additional_bound.multiopt
%type<s> additive_expression
%type<s> and_expression
%type<s> argument_list
%type<s> argument_list.opt
%type<s> array_access
%type<s> array_creation_expression
%type<s> array_initializer
%type<s> array_type
%type<s> assert_statement
%type<s> assignment
%type<s> assignment_expression
%type<s> assignment_operator
%type<s> basic_for_statement
%type<s> basic_for_statement_no_short_if
%type<s> block
%type<s> block_statement
%type<s> block_statement.multiopt
%type<s> block_statements
%type<s> block_statements.opt
%type<s> break_statement
%type<s> case_constant
%type<s> cast_expression
%type<s> catch_clause
%type<s> catch_clause.multiopt
%type<s> catch_formal_parameter
%type<s> catch_type
%type<s> catches
%type<s> catches.opt
%type<s> class_body
%type<s> class_body.opt
%type<s> class_body_declaration
%type<s> class_body_declaration.multiopt
%type<s> class_declaration
%type<s> class_extends
%type<s> class_extends.opt
%type<s> class_implements
%type<s> class_implements.opt
%type<s> class_instance_creation_expression
%type<s> class_member_declaration
%type<s> class_or_interface_type
%type<s> class_permits
%type<s> class_permits.opt
%type<s> com.opt
%type<s> com_case_constant.multiopt
%type<s> com_enum_constant.multiopt
%type<s> com_exception_type.multiopt
%type<s> com_expression.multiopt
%type<s> com_formal_parameter.multiopt
%type<s> com_interface_type.multiopt
%type<s> com_record_component.multiopt
%type<s> com_statement_expression.multiopt
%type<s> com_type_name.multiopt
%type<s> com_type_parameter.multiopt
%type<s> com_variable_declarator.multiopt
%type<s> com_variable_initializer.multiopt
%type<s> compact_constructor_declaration
%type<s> compilation_unit
%type<s> conditional_and_expression
%type<s> conditional_expression
%type<s> conditional_or_expression
%type<s> constant_declaration
%type<s> constructor_body
%type<s> constructor_declaration
%type<s> constructor_declarator
%type<s> continue_statement
%type<s> dim_expr
%type<s> dim_expr.multiopt
%type<s> dim_exprs
%type<s> dims
%type<s> dims.opt
%type<s> do_statement
%type<s> dot_ind.multiopt
%type<s> empty_statement
%type<s> enhanced_for_statement
%type<s> enhanced_for_statement_no_short_if
%type<s> enum_body
%type<s> enum_body_declarations
%type<s> enum_body_declarations.opt
%type<s> enum_constant
%type<s> enum_constant_list
%type<s> enum_constant_list.opt
%type<s> enum_declaration
%type<s> eq_variable_initializer.opt
%type<s> equality_expression
%type<s> exception_type
%type<s> exception_type_list
%type<s> exclusive_or_expression
%type<s> expression
%type<s> expression.opt
%type<s> expression_statement
%type<s> field_access
%type<s> finally
%type<s> finally.opt
%type<s> floating_point_type
%type<s> for_init
%type<s> for_init.opt
%type<s> for_statement
%type<s> for_statement_no_short_if
%type<s> for_update
%type<s> for_update.opt
%type<s> formal_parameter
%type<s> formal_parameter_list
%type<s> formal_parameter_list.opt
%type<s> if_then_else_statement
%type<s> if_then_else_statement_no_short_if
%type<s> if_then_statement
%type<s> import_declaration
%type<s> import_declaration.multiopt
%type<s> inclusive_or_expression
%type<s> input
%type<s> instance_initializer
%type<s> instanceof_expression
%type<s> integral_type
%type<s> interface_body
%type<s> interface_declaration
%type<s> interface_extends
%type<s> interface_extends.opt
%type<s> interface_member_declaration
%type<s> interface_member_declaration.multiopt
%type<s> interface_method_declaration
%type<s> interface_permits
%type<s> interface_permits.opt
%type<s> interface_type_list
%type<s> labeled_statement
%type<s> labeled_statement_no_short_if
%type<s> left_hand_side
%type<s> local_class_or_interface_declaration
%type<s> local_variable_declaration
%type<s> local_variable_declaration_statement
%type<s> local_variable_type
%type<s> method_body
%type<s> method_declaration
%type<s> method_declarator
%type<s> method_header
%type<s> method_invocation
%type<s> method_reference
%type<s> modifier
%type<s> modifier.multiopt
%type<s> multiplicative_expression
%type<s> normal_class_declaration
%type<s> normal_interface_declaration
%type<s> numeric_type
%type<s> ordinary_compilation_unit
%type<s> package_declaration
%type<s> package_declaration.opt
%type<s> pattern
%type<s> post_decrement_expression
%type<s> post_increment_expression
%type<s> postfix_expression
%type<s> pre_decrement_expression
%type<s> pre_increment_expression
%type<s> primary
%type<s> primary_no_new_array
%type<s> primitive_type
%type<s> record_body
%type<s> record_body_declaration
%type<s> record_body_declaration.multiopt
%type<s> record_component
%type<s> record_component_list
%type<s> record_component_list.opt
%type<s> record_declaration
%type<s> record_header
%type<s> reference_type
%type<s> relational_expression
%type<s> resource
%type<s> resource_list
%type<s> resource_specification
%type<s> result
%type<s> return_statement
%type<s> semcol.opt
%type<s> semcol_resource.multiopt
%type<s> shift_expression
%type<s> simple_type_name
%type<s> single_static_import_declaration
%type<s> single_type_import_declaration
%type<s> statement
%type<s> statement_expression
%type<s> statement_expression_list
%type<s> statement_no_short_if
%type<s> statement_without_trailing_substatement
%type<s> static_import_on_demand_declaration
%type<s> switch_block
%type<s> switch_block_statement_group
%type<s> switch_block_statement_group.multiopt
%type<s> switch_expression
%type<s> switch_label
%type<s> switch_label_col.multiopt
%type<s> switch_rule
%type<s> switch_rule.multiopt
%type<s> switch_statement
%type<s> synchronized_statement
%type<s> throw_statement
%type<s> throws
%type<s> throws.opt
%type<s> top_level_class_or_interface_declaration
%type<s> top_level_class_or_interface_declaration.multiopt
%type<s> try_statement
%type<s> try_with_resources_statement
%type<s> type
%type<s> type_argument
%type<s> type_argument.multiopt
%type<s> type_argument_list
%type<s> type_arguments
%type<s> type_arguments.opt
%type<s> type_bound
%type<s> type_bound.opt
%type<s> type_import_on_demand_declaration
%type<s> type_parameter
%type<s> type_parameter_list
%type<s> type_parameters
%type<s> type_parameters.opt
%type<s> type_pattern
%type<s> un_name
%type<s> unary_expression
%type<s> unary_expression_not_plus_minus
%type<s> unqualified_class_instance_creation_expression
%type<s> variable_access
%type<s> variable_arity_parameter
%type<s> variable_arity_record_component
%type<s> variable_declarator
%type<s> variable_declarator_id
%type<s> variable_declarator_list
%type<s> variable_initializer
%type<s> variable_initializer_list
%type<s> variable_initializer_list.opt
%type<s> vt_class_type.multiopt
%type<s> while_statement
%type<s> while_statement_no_short_if
%type<s> wildcard
%type<s> wildcard_bounds
%type<s> wildcard_bounds.opt
%type<s> yield_statement
%%

    /* GRAMMAR RULES */
input:
  compilation_unit			
;
modifier.multiopt:
  modifier.multiopt modifier			
| /*empty*/			
;
modifier:
  TOK_public			{modifier = "public";}
| TOK_protected		{modifier = "protected";}	
| TOK_private			{modifier = "private";}	
| TOK_abstract			
| TOK_static			
| TOK_final			
| TOK_sealed			
| TOK_strictfp			
| TOK_transitive			
| TOK_transient			
| TOK_volatile			
;
dot_ind.multiopt:
  dot_ind.multiopt TOK_46 TOK_IDENTIFIER			
| /*empty*/			
;
	/* Types, Values and Variables */
type:
  primitive_type			
| reference_type			
;
primitive_type:
  numeric_type			
| TOK_boolean			
;
numeric_type:
  integral_type			
| floating_point_type			
;
integral_type:
  TOK_byte			{ curr_type = "Numeric";}
| TOK_short			{ curr_type = "Numeric";}
| TOK_int			{ curr_type = "Numeric";}
| TOK_long			{ curr_type = "Numeric";}
| TOK_char			{ curr_type = "Numeric";}
;
floating_point_type:
  TOK_float			{curr_type = "Numeric";}
| TOK_double			{curr_type = "Numeric";}
;
reference_type:
  class_or_interface_type			
| array_type			
;
class_or_interface_type:
  TOK_IDENTIFIER type_arguments.opt			
| class_or_interface_type TOK_46 TOK_IDENTIFIER type_arguments.opt			
| un_name	
;
array_type:
  class_or_interface_type dims			
;
dims:
  TOK_91 TOK_93			
| dims TOK_91 TOK_93			
;
type_parameter:
   TOK_IDENTIFIER type_bound.opt			
;
type_bound.opt:
  type_bound			
| /* empty */			
;
type_bound:
  TOK_extends  class_or_interface_type additional_bound.multiopt			
;
additional_bound:
  TOK_38 class_or_interface_type			
;
type_arguments:
  TOK_60 type_argument_list TOK_62			
;
type_argument_list:
  type_argument.multiopt type_argument			
| /*empty*/			
;
type_argument.multiopt:
  type_argument.multiopt TOK_44 type_argument			
| /* empty */			
;
type_argument:
  reference_type			
| wildcard			
;
wildcard:
   TOK_63 wildcard_bounds.opt			
;
wildcard_bounds.opt:
  wildcard_bounds			
| /* empty */			
;
wildcard_bounds:
   TOK_extends  reference_type			
|  TOK_super  reference_type			


  /* Names */
un_name:
  TOK_IDENTIFIER			{ curr_type = string($1);
                        string iden_type = probe_type(curr_type);

                        if(iden_type == ""){
                          cout<<"Error at line no "<<yylineno<<": Undefined reference "<<$1<<"\n";
                        }
                        cout<<string($1)<<" "<<lhs_type<<" "<<rhs_type<<" "<<halt_type_check<<"\n";
                        if(halt_type_check == 0){
                          if(lhs_record == 1){
                            lhs_type = iden_type;
                            cout<<lhs_type<<" -- "<<$$<<"\n";
                          }
                          if(rhs_record == 1){
                            rhs_type = iden_type;
                          }
                        }else{
                          lhs_type = "";
                          rhs_type = "";
                        }
                        cout<<string($1)<<" "<<lhs_type<<" "<<rhs_type<<" "<<halt_type_check<<"\n";
                        pre_var = string($1);
                      }
| un_name TOK_46 TOK_IDENTIFIER			{curr_type = curr_type + '.' + string($3);}
;


  /* Packages and Modules */
compilation_unit:
  ordinary_compilation_unit			
;
ordinary_compilation_unit:
  package_declaration.opt import_declaration.multiopt top_level_class_or_interface_declaration.multiopt			
;
package_declaration.opt:
  package_declaration			
| /* empty */			
;
package_declaration:
    TOK_package  TOK_IDENTIFIER dot_ind.multiopt TOK_59			
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
   TOK_import  un_name  TOK_59			
;
type_import_on_demand_declaration:
   TOK_import  un_name TOK_46 TOK_42 TOK_59			
;
single_static_import_declaration:
   TOK_import  TOK_static un_name TOK_46 TOK_IDENTIFIER TOK_59			
;
static_import_on_demand_declaration:
   TOK_import  TOK_static un_name TOK_46 TOK_42 TOK_59			
;
top_level_class_or_interface_declaration.multiopt:
  top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration			
| /* empty */			
;
top_level_class_or_interface_declaration:
  class_declaration			
| interface_declaration			
| TOK_59			
;
com_type_name.multiopt:
  com_type_name.multiopt TOK_44 un_name			
| /*empty*/			
;

  /* Classes */
class_declaration:
  normal_class_declaration			{cum_table.push_back(block_table[current_stack]);
                                block_table[current_stack].clear();
                                current_stack--;
                                // cout<<parent_class<<"1\n";
                                int i = parent_class.size() - 1;
                                while(i>=0 && parent_class[i]!='.') i--;
                                if(i != -1)
                                parent_class = parent_class.substr(0,i);
                                else parent_class = "";
                                // cout<<i<<" "<<parent_class<<"2\n";
                                }

| enum_declaration			
| record_declaration			
;
normal_class_declaration:
  modifier.multiopt TOK_class {curr_type = "class";class_dec_flag = 1;} hold_TOK_IDENTIFIER {current_stack++;} type_parameters.opt class_extends.opt class_implements.opt class_permits.opt class_body			
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
  TOK_extends class_or_interface_type			
;
class_implements:
  TOK_implements interface_type_list			
;
interface_type_list:
  class_or_interface_type com_interface_type.multiopt			
;
com_interface_type.multiopt:
  com_interface_type.multiopt TOK_44 class_or_interface_type			
| /*empty*/			
;
class_permits:
  TOK_permits un_name com_type_name.multiopt			
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
| constructor_declaration			
;
class_member_declaration:
  method_declaration			
| class_declaration			
| interface_declaration			
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
  TOK_IDENTIFIER dims.opt			{block_table[current_stack][$1] = curr_type;
                                filler = new var_info;
                                filler->name = string($1);
                                filler->type = curr_type;
                                
                               }
;
dims.opt:
  dims			
| /*empty*/			
;
variable_initializer:
  expression			
| array_initializer			
;
type_arguments.opt:
  type_arguments			
| /*empty*/			
;
method_declaration:
  modifier.multiopt method_header method_body			{cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
;
method_header:
  result method_declarator throws.opt			
| type_parameters  result method_declarator throws.opt			
;
throws.opt:
  throws			
| /*empty*/			
;
result:
  type			
| TOK_void			{curr_type = "void";}
;
method_declarator:
  {method_dec_flag = 1;}hold_TOK_IDENTIFIER TOK_40 {method_dec_flag = 0; current_stack++;halt_type_check = 1;}formal_parameter_list.opt TOK_41 dims.opt	 {halt_type_check = 0;}	
;
hold_TOK_IDENTIFIER:
  TOK_IDENTIFIER  { if(class_dec_flag){
                      string hold = string($1);
                      if(parent_class!=""){
                        hold = parent_class + '.' + hold;
                      }
                      parent_class = hold;

                      // can improve by making an array of class modifiers
                      if(modifier == "public" && current_stack>0){
                        block_table[current_stack-1][hold] = curr_type;
                      }
                      else{
                        block_table[current_stack][hold] = curr_type;
                      }
                      class_dec_flag = 0;
                    }
                    else if(method_dec_flag){
                      curr_type = parent_class + '.' + string($1);
                      if(modifier == "public" && current_stack>0){
                        block_table[current_stack-1][curr_type] = "method";
                      }
                      else{
                        block_table[current_stack][curr_type] = "method";
                      }
                    }
                    else
                    block_table[current_stack][$1] = curr_type;}
;
formal_parameter_list.opt:
  formal_parameter_list			
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
  modifier.multiopt type variable_declarator_id			
| variable_arity_parameter			
;
variable_arity_parameter:
  modifier.multiopt type  TOK_464646 TOK_IDENTIFIER			
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
  class_or_interface_type			
;
method_body:
  block			
| TOK_59			
;
instance_initializer:
  block			
;
constructor_declaration:
  modifier.multiopt constructor_declarator throws.opt constructor_body			
;
constructor_declarator:
  simple_type_name TOK_40 formal_parameter_list.opt TOK_41			
;
simple_type_name:
  TOK_IDENTIFIER			
;
constructor_body:
  TOK_123 block_statements.opt TOK_125			
;
block_statements.opt:
  block_statements			
| /*empty*/			
;
argument_list.opt:
  {halt_type_check = 1;}argument_list			{halt_type_check = 0; }
| /*empty*/			
;
enum_declaration:
  modifier.multiopt TOK_enum TOK_IDENTIFIER class_implements.opt enum_body			
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
   TOK_IDENTIFIER TOK_91 TOK_40 argument_list.opt TOK_41 TOK_93 class_body.opt			
;

class_body.opt:
  class_body			
| /*empty*/			
;

enum_body_declarations:
  TOK_59 class_body_declaration.multiopt			
;
record_declaration:
  modifier.multiopt TOK_record TOK_IDENTIFIER type_parameters.opt record_header class_implements.opt record_body			
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
  type TOK_IDENTIFIER			
| variable_arity_record_component			
;

variable_arity_record_component:
  type  TOK_464646 TOK_IDENTIFIER			
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
  modifier.multiopt simple_type_name constructor_body			
;

	/* Interfaces */

interface_declaration:
  normal_interface_declaration			
;
normal_interface_declaration:
  modifier.multiopt TOK_interface TOK_IDENTIFIER type_parameters.opt interface_extends.opt interface_permits.opt interface_body			
;
interface_extends.opt:
  interface_extends			
| /*empty*/			
;
interface_permits.opt:
  interface_permits			
| /*empty*/			
;
interface_extends:
  TOK_extends interface_type_list			
;
interface_permits:
  TOK_permits un_name com_type_name.multiopt			
;
interface_body:
  TOK_123 interface_member_declaration.multiopt TOK_125			
;
interface_member_declaration.multiopt:
  interface_member_declaration.multiopt interface_member_declaration			
| /*empty*/			
;
interface_member_declaration:
  interface_method_declaration			
| class_declaration			
| interface_declaration			
| TOK_59			
;
constant_declaration:
  modifier.multiopt type variable_declarator_list TOK_59			
;
interface_method_declaration:
  modifier.multiopt method_header method_body			
;

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
|  local_variable_declaration_statement			
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
  local_variable_type variable_declarator_list			
;
local_variable_type:
  type			
| TOK_var			
;
statement:
  statement_without_trailing_substatement			
| labeled_statement			
| if_then_statement			
| if_then_else_statement			
| while_statement			{cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
| for_statement			{cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
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
  TOK_IDENTIFIER TOK_58 statement			
;
labeled_statement_no_short_if:
  TOK_IDENTIFIER TOK_58 statement_no_short_if			
;
expression_statement:
  statement_expression TOK_59			{
                                  if(halt_type_check == 0){
                                    if(lhs_type!=rhs_type){
                                      cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be assigned "<<rhs_type<<" type\n";
                                    }
                                    else{
                                      cout<<"Correct :"<<yylineno<<" "<<lhs_type<<" "<<rhs_type<<"\n";
                                    }
                                  }
                                  lhs_record = 1;
                                  rhs_record = 1;
                                  }
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
  hold_TOK_if TOK_40 expression TOK_41 statement		{cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}	
;
hold_TOK_if:
  TOK_if      {current_stack++;}
;
if_then_else_statement:
  hold_TOK_if TOK_40 expression TOK_41 statement_no_short_if {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;current_stack++;} TOK_else statement			{cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
;
if_then_else_statement_no_short_if:
  hold_TOK_if TOK_40 expression TOK_41 statement_no_short_if {cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;current_stack++;} TOK_else statement_no_short_if			{cum_table.push_back(block_table[current_stack]);block_table[current_stack].clear();current_stack--;}
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
| TOK_default			
;
com_case_constant.multiopt:
  com_case_constant.multiopt TOK_44 case_constant			
| /*empty*/			
;
case_constant:
  conditional_expression			
;
while_statement:
  hold_TOK_while TOK_40 expression TOK_41 statement			
;
hold_TOK_while:
  TOK_while        {current_stack++;}
while_statement_no_short_if:
  hold_TOK_while TOK_40 expression TOK_41 statement_no_short_if			
;
do_statement:
  TOK_do statement hold_TOK_while TOK_40 expression TOK_41 TOK_59			
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
  hold_TOK_for TOK_40 for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement			
;
hold_TOK_for:
  TOK_for     {current_stack++;}
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
  hold_TOK_for TOK_40 for_init.opt TOK_59 expression.opt TOK_59 for_update.opt TOK_41 statement_no_short_if			
;
for_init:
  statement_expression_list			
| local_variable_declaration			
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
  hold_TOK_for TOK_40 local_variable_declaration TOK_58 expression TOK_41 statement			
;
enhanced_for_statement_no_short_if:
  hold_TOK_for TOK_40 local_variable_declaration TOK_58 expression TOK_41 statement_no_short_if			
;
break_statement:
  TOK_break IDENTIFIER.opt TOK_59			
;
IDENTIFIER.opt:
  TOK_IDENTIFIER			
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
| TOK_try block catches.opt finally			
| try_with_resources_statement			
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
  modifier.multiopt catch_type variable_declarator_id			
;
catch_type:
  class_or_interface_type vt_class_type.multiopt			
;
vt_class_type.multiopt:
  vt_class_type.multiopt TOK_124 class_or_interface_type			
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
  un_name			
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
  hold_Literal		
| TOK_this			
| un_name TOK_46 TOK_this			
| TOK_40 expression TOK_41			
| class_instance_creation_expression			
| field_access			
| array_access		
| method_invocation			
| method_reference			
;

hold_Literal:
  TOK_NUMERICLITERAL    {if(halt_type_check == 0)rhs_type = "Numeric";
                          else rhs_type = "";}
| TOK_NONNUMERICLITERAL      {if(halt_type_check == 0)rhs_type = "String";
                              else rhs_type = "";
                              cout<<rhs_type<<" "<<halt_type_check<<" ====\n";}
;

class_instance_creation_expression:
  unqualified_class_instance_creation_expression			
| un_name TOK_46 unqualified_class_instance_creation_expression			
| primary TOK_46 unqualified_class_instance_creation_expression			
;
unqualified_class_instance_creation_expression:
  TOK_new class_or_interface_type TOK_40 argument_list.opt TOK_41 class_body.opt			
;
field_access:
  primary TOK_46 TOK_IDENTIFIER			
| TOK_super TOK_46 TOK_IDENTIFIER			
| un_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER			
;
array_access:
  un_name TOK_91 expression TOK_93		  {if(halt_type_check == 0){
                                          rhs_type = probe_type(pre_var);
                                        }
                                        else rhs_type = "";}
| primary_no_new_array TOK_91 expression TOK_93			
;
method_invocation:
  un_name TOK_40 argument_list.opt TOK_41			
| un_name TOK_46  TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			
| primary TOK_46 TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			
| TOK_super TOK_46  TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			
| un_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41			
;
argument_list:
  expression com_expression.multiopt			
;
com_expression.multiopt:
  com_expression.multiopt TOK_44 expression			
| /*empty*/			
;
method_reference:
  un_name TOK_5858 type_arguments.opt TOK_IDENTIFIER			
| primary TOK_5858 type_arguments.opt TOK_IDENTIFIER			
| TOK_super TOK_5858 type_arguments.opt TOK_IDENTIFIER			
| un_name TOK_46 TOK_super TOK_5858 type_arguments.opt TOK_IDENTIFIER			
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
   TOK_91 expression TOK_93			
;
expression:
  assignment_expression			
;
assignment_expression:
  conditional_expression			
| assignment			
;
assignment:
  left_hand_side assignment_operator expression			{rhs_record = 1;lhs_record = 1;}
;
left_hand_side:
  un_name	{lhs_record = 0;}		
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
| relational_expression TOK_60 shift_expression			{cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
| relational_expression TOK_62 shift_expression			{cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
| relational_expression TOK_6061 shift_expression		{cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
| relational_expression TOK_6261 shift_expression		{cout<<"testing: "<<lhs_type<<" "<<rhs_type<<"\n";
                                                      if(lhs_type != rhs_type){
                                                        cout<<"Error at line no "<<yylineno<<": "<<lhs_type<<" type cannot be compared with "<<rhs_type<<" type\n";
                                                      }
                                                    }
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
  unary_expression			{cout<<lhs_type<<" "<<rhs_type<<" ++++\n";}
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
| un_name	{rhs_record = 0;}		
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
;
additional_bound.multiopt:
  additional_bound.multiopt additional_bound			
| /*empty*/			
;
switch_expression:
  TOK_switch TOK_40 expression TOK_41 switch_block			
;

%%


/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

void print_stack(){
  for(int i = block_table.size() -1; i>=0; i--){
    for(auto itr = block_table[i].begin(); itr != block_table[i].end(); itr++){
      cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"--------------------------------\n";
  }
  return;
}

string probe_type(string var){
  for(int i = block_table.size() -1; i>=0; i--){
    if(block_table[i][var]!=""){
      return block_table[i][var];
    }
  }
  // if(var!="String")
  // print_stack();
  // cout<<yylineno<<" "<<var<<"\n";
  return "";
}

void print_symbol_table(){
  freopen("symbole_table.txt", "w", stdout);
  cout<<"Symbol      Type\n";
  cum_table.push_back(block_table[0]);
  for(int i = 0; i < cum_table.size(); i++) {
    for(auto itr = cum_table[i].begin(); itr != cum_table[i].end(); itr++) {
      cout<< itr->first <<" "<<itr->second<<"\n";
    }
    cout<< "--------------------------------\n";
  }
  fclose(stdout);
  return;
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
	yyparse();
	fclose(yyin);
  print_symbol_table();
	return 0;
}
