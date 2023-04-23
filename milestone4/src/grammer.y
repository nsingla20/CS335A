%{

// field declaration added
// removed type arguments - generic not supported
// removed type parameters from method declaration
// assumption: classes declared before use
// assumption: array size is given as integer literal only
// assumption: {} are used for scope in loops and if else
// assumption: variable name is not t{number} or L{number}
// type check for expressions - done
// check method parameters dont have same name - done
// array access - tc done
// constructor - done
// return type check - done
// no. of arguments and type in method call - done
// scope of variables - done
// field access - tc done - partially
// support for this keyword - tc done
// if else tac - done
// while tac - done
// break continue - done
// array size - done
// assumption - a fn can have atmost 6 arguments

// TODO
// String support
// type casting when?
// type checking for switch
// no return statement in method - should be error
// constructor call
// class inheritence
// method overriding
// method overloading
// public private access
// instanceof
// support for super?
// +int/+float

/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;
#define YYDEBUG 1


// Data structures to store the symbol table
struct info {
  string type;
  string kind;
  int size;
  int offset;
  int line_no;
  unordered_set<string> modifier;
  int table_idx = -1;
  string val;
};

struct local_symbol_table {
  string name;
  int parent;
  int size = 0;
  map<string,info> table;
  int class_table = 0;
  string parent_class = "";
  int method_table = 0;
  string return_type = "";
  vector<pair<string,struct info>> parameters;
};

vector<local_symbol_table> symbol_table;

int cur_table_idx = -1;
unordered_set<string> modifiers;
string cur_type = "";
int cur_size = 0;
bool create_new_table = true;
string package_name = "";
vector<string> import_list;
int param_declaration = 0;
bool ignoreDeclaration = false;

vector<string> get_arrayVec(string s);

// Data structures to store the three address code
// <operator, arg1, arg2, result>
vector<pair<string,vector<vector<string>>>> tac_code;
vector<vector<string>> assembly;
stack<int> label_stack, loop_entry, loop_exit;
stack<vector<vector<string>>> temp_code;
int tmp_count = 1;
int label_count = 1;
int cur_method = -1;
bool addToTemp = false;
vector<pair<string,vector<struct expr*>>> methods;     //methods and there arguments

map<string,string> meth_and_ret;
vector<string> global_variables;

map<string,int> size_map = {
  {"byte", 8},
  {"short", 8},
  {"int", 8},
  {"long", 8},
  {"float", 8},
  {"double", 8},
  {"boolean", 8},
  {"char", 8},
  {"void", 0},
  {"reference", 0},
  {"null", 0},
  {"class", 0}
};

// Function declarations
void createTable(string name="", int class_table=0, string parent_class="", int method_table=0, bool link=false);
struct info createInfo(string, string, int, int, int, unordered_set<string>, int table_idx = -1);
unordered_set<string> split_modifiers(string);
void insertSymbol(string, struct info *);
int getCurSize();
void updateSize(int);
void checkDeclaration(string);
string lookupType(string);
int lookupOffset(string);
int getType(string);
string getFinalType(string, string);
void typeCheck(string, string);
void specificTypeCheck(string, string, string);
void checkReturnType(string);
int checkMethodArgs(string, string);
string getFieldVariableType(string);
int getArraySize(string);
void copyString(char **, string);
void copyData(struct expr **e, string s="", string type="", string v = "");
string storeTemp(string op, string arg1, string arg2="_");
string storeTempWithType(string, string, string, string, string);
void pushInstruction(string, string, string, string);
void pushInstructionWithType(string, string, string, string, string, string);
void popLastInstruction();
void checkAndPushInstruction(string, string, string, string, int mode=0);
void pushTempCode();
string call_procedure(struct expr*,struct expr*);
string find_type_expr(string meth);
string getCurClass();

void yyerror(char const *);

%}
%code provides {
void yyerror (char const*);
int yylex (YYSTYPE*);
}
%code requires {
  struct expr {
    char* s;
    char* type;
    char* v;
  };
}
/* BISON DECLARATIONS */
%union{
  char *s;
  struct expr* e;
  int i;
}

%verbose
%define parse.trace
%define api.pure
%token <e> TOK_IDENTIFIER
%token <e> TOK_INTEGERLITERAL
%token <e> TOK_FLOATLITERAL
%token <e> TOK_BOOLEANLITERAL
%token <e> TOK_CHARLITERAL
%token <e> TOK_STRINGLITERAL
%token <e> TOK_TEXTBLOCKLITERAL
%token <e> TOK_NULLLITERAL
%token <e> TOK_33 "!"
%token <e> TOK_3361 "!="
%token <e> TOK_37 "%"
%token <e> TOK_3761 "%="
%token <e> TOK_38 "&"
%token <e> TOK_3838 "&&"
%token <e> TOK_3861 "&="
%token <e> TOK_40 "("
%token <e> TOK_41 ")"
%token <e> TOK_42 "*"
%token <e> TOK_4261 "*="
%token <e> TOK_43 "+"
%token <e> TOK_4343 "++"
%token <e> TOK_4361 "+="
%token <e> TOK_44 ","
%token <e> TOK_45 "-"
%token <e> TOK_4545 "--"
%token <e> TOK_4561 "-="
%token <e> TOK_4562 "->"
%token <e> TOK_46 "."
%token <e> TOK_464646 "..."
%token <e> TOK_47 "/"
%token <e> TOK_4761 "/="
%token <e> TOK_58 ":"
%token <e> TOK_5858 "::"
%token <e> TOK_59 ";"
%token <e> TOK_60 "<"
%token <e> TOK_6060 "<<"
%token <e> TOK_606061 "<<="
%token <e> TOK_6061 "<="
%token <e> TOK_61 "="
%token <e> TOK_6161 "=="
%token <e> TOK_62 ">"
%token <e> TOK_6261 ">="
%token <e> TOK_6262 ">>"
%token <e> TOK_626261 ">>="
%token <e> TOK_626262 ">>>"
%token <e> TOK_62626261 ">>>="
%token <e> TOK_63 "?"
%token <e> TOK_91 "["
%token <e> TOK_93 "]"
%token <e> TOK_94 "^"
%token <e> TOK_9461 "^="
%token <e> TOK_abstract "abstract"
%token <e> TOK_assert "assert"
%token <e> TOK_boolean "boolean"
%token <e> TOK_break "break"
%token <e> TOK_byte "byte"
%token <e> TOK_case "case"
%token <e> TOK_catch "catch"
%token <e> TOK_char "char"
%token <e> TOK_class "class"
%token <e> TOK_continue "continue"
%token <e> TOK_default "default"
%token <e> TOK_do "do"
%token <e> TOK_double "double"
%token <e> TOK_else "else"
%token <e> TOK_enum "enum"
%token <e> TOK_extends "extends"
%token <e> TOK_final "final"
%token <e> TOK_finally "finally"
%token <e> TOK_float "float"
%token <e> TOK_for "for"
%token <e> TOK_if "if"
%token <e> TOK_implements "implements"
%token <e> TOK_import "import"
%token <e> TOK_instanceof "instanceof"
%token <e> TOK_int "int"
%token <e> TOK_interface "interface"
%token <e> TOK_long "long"
%token <e> TOK_new "new"
%token <e> TOK_package "package"
%token <e> TOK_permits "permits"
%token <e> TOK_private "private"
%token <e> TOK_protected "protected"
%token <e> TOK_public "public"
%token <e> TOK_record "record"
%token <e> TOK_return "return"
%token <e> TOK_sealed "sealed"
%token <e> TOK_short "short"
%token <e> TOK_static "static"
%token <e> TOK_strictfp "strictfp"
%token <e> TOK_super "super"
%token <e> TOK_switch "switch"
%token <e> TOK_synchronized "synchronized"
%token <e> TOK_this "this"
%token <e> TOK_throw "throw"
%token <e> TOK_throws "throws"
%token <e> TOK_transient "transient"
%token <e> TOK_transitive "transitive"
%token <e> TOK_try "try"
%token <e> TOK_var "var"
%token <e> TOK_void "void"
%token <e> TOK_volatile "volatile"
%token <e> TOK_while "while"
%token <e> TOK_yield "yield"
%token <e> TOK_123 "{"
%token <e> TOK_124 "|"
%token <e> TOK_12461 "|="
%token <e> TOK_124124 "||"
%token <e> TOK_125 "}"
%token <e> TOK_126 "~"
%type<e> IDENTIFIER.opt
%type<e> additional_bound
%type<e> additional_bound.multiopt
%type<e> additive_expression
%type<e> and_expression
%type<e> argument_list
%type<e> argument_list.opt
%type<e> array_access
%type<e> array_creation_expression
%type<e> array_initializer
%type<e> array_type
%type<e> assert_statement
%type<e> assignment
%type<e> assignment_expression
%type<e> assignment_operator
%type<e> basic_for_init
%type<e> basic_for_tail
%type<e> block
%type<e> block_statement
%type<e> block_statement.multiopt
%type<e> block_statements
%type<e> block_statements.opt
%type<e> break_statement
%type<e> case_constant
%type<e> cast_expression
%type<e> catch_clause
%type<e> catch_clause.multiopt
%type<e> catch_formal_parameter
%type<e> catch_type
%type<e> catches
%type<e> catches.opt
%type<e> class_body
%type<e> class_body.opt
%type<e> class_body_declaration
%type<e> class_body_declaration.multiopt
%type<e> class_declaration
%type<e> class_extends
%type<e> class_extends.opt
%type<e> class_implements
%type<e> class_implements.opt
%type<e> class_instance_creation_expression
%type<e> class_member_declaration
%type<e> class_or_interface_type
%type<e> class_permits
%type<e> class_permits.opt
%type<e> com.opt
%type<e> com_case_constant.multiopt
%type<e> com_enum_constant.multiopt
%type<e> com_exception_type.multiopt
%type<e> com_expression.multiopt
%type<e> com_formal_parameter.multiopt
%type<e> com_interface_type.multiopt
%type<e> com_record_component.multiopt
%type<e> com_statement_expression.multiopt
%type<e> com_type_name.multiopt
%type<e> com_type_parameter.multiopt
%type<e> com_variable_declarator.multiopt
%type<e> com_variable_initializer.multiopt
%type<e> compact_constructor_declaration
%type<e> compilation_unit
%type<e> conditional_and_expression
%type<e> conditional_expression
%type<e> conditional_or_expression
%type<e> constructor_body
%type<e> constructor_declaration
%type<e> constructor_declarator
%type<e> continue_statement
%type<e> dim_expr
%type<e> dim_expr.multiopt
%type<e> dim_exprs
%type<e> dims
%type<e> dims.opt
%type<e> do_statement
%type<e> dot_ind.multiopt
%type<e> empty_statement
%type<e> enhanced_for_tail
%type<e> enum_body
%type<e> enum_body_declarations
%type<e> enum_body_declarations.opt
%type<e> enum_constant
%type<e> enum_constant_list
%type<e> enum_constant_list.opt
%type<e> enum_declaration
%type<e> eq_variable_initializer.opt
%type<e> equality_expression
%type<e> exception_type
%type<e> exception_type_list
%type<e> exclusive_or_expression
%type<e> expression
%type<e> expression.opt
%type<e> expression_statement
%type<e> field_access
%type<e> field_declaration
%type<e> finally
%type<e> finally.opt
%type<e> floating_point_type
%type<e> for_statement
%type<e> for_update
%type<e> for_update.opt
%type<e> formal_parameter
%type<e> formal_parameter_list
%type<e> formal_parameter_list.opt
%type<e> hold_Literal
%type<e> if_condition
%type<e> if_then_else_statement
%type<e> if_then_statement
%type<e> import_declaration
%type<e> import_declaration.multiopt
%type<e> inclusive_or_expression
%type<e> input
%type<e> instance_initializer
%type<e> instanceof_expression
%type<e> integral_type
%type<e> interface_body
%type<e> interface_declaration
%type<e> interface_extends
%type<e> interface_extends.opt
%type<e> interface_member_declaration
%type<e> interface_member_declaration.multiopt
%type<e> interface_method_declaration
%type<e> interface_permits
%type<e> interface_permits.opt
%type<e> interface_type_list
%type<e> labeled_statement
%type<e> left_hand_side
%type<e> local_class_or_interface_declaration
%type<e> local_variable_declaration
%type<e> local_variable_declaration_statement
%type<e> local_variable_type
%type<e> method_body
%type<e> method_declaration
%type<e> method_parameters
%type<e> method_header
%type<e> method_invocation
%type<e> method_reference
%type<e> modifier
%type<e> modifier.multiopt
%type<e> multiplicative_expression
%type<e> normal_class_declaration
%type<e> normal_interface_declaration
%type<e> numeric_type
%type<e> ordinary_compilation_unit
%type<e> package_declaration
%type<e> package_declaration.opt
%type<e> pattern
%type<e> post_decrement_expression
%type<e> post_increment_expression
%type<e> postfix_expression
%type<e> pre_decrement_expression
%type<e> pre_increment_expression
%type<e> primary
%type<e> primary_no_new_array
%type<e> primitive_type
%type<e> record_body
%type<e> record_body_declaration
%type<e> record_body_declaration.multiopt
%type<e> record_component
%type<e> record_component_list
%type<e> record_component_list.opt
%type<e> record_declaration
%type<e> record_header
%type<e> reference_type
%type<e> relational_expression
%type<e> resource
%type<e> resource_list
%type<e> resource_specification
%type<e> return_statement
%type<e> semcol.opt
%type<e> semcol_resource.multiopt
%type<e> shift_expression
%type<e> simple_type_name
%type<e> single_static_import_declaration
%type<e> single_type_import_declaration
%type<e> statement
%type<e> statement_expression
%type<e> statement_expression_list
%type<e> statement_without_trailing_substatement
%type<e> static_import_on_demand_declaration
%type<e> switch_block
%type<e> switch_block_statement_group
%type<e> switch_block_statement_group.multiopt
%type<e> switch_expression
%type<e> switch_label
%type<e> switch_label_col.multiopt
%type<e> switch_rule
%type<e> switch_rule.multi
%type<e> switch_statement
%type<e> synchronized_statement
%type<e> throw_statement
%type<e> throws
%type<e> throws.opt
%type<e> top_level_class_or_interface_declaration
%type<e> top_level_class_or_interface_declaration.multiopt
%type<e> try_statement
%type<e> try_with_resources_statement
%type<e> type
%type<e> type_bound
%type<e> type_bound.opt
%type<e> type_import_on_demand_declaration
%type<e> type_parameter
%type<e> type_parameter_list
%type<e> type_parameters
%type<e> type_parameters.opt
%type<e> type_pattern
%type<e> un_name
%type<e> unary_expression
%type<e> unary_expression_not_plus_minus
%type<e> unqualified_class_instance_creation_expression
%type<e> variable_access
%type<e> variable_arity_parameter
%type<e> variable_arity_record_component
%type<e> variable_declarator
%type<e> variable_declarator_id
%type<e> variable_declarator_list
%type<e> variable_initializer
%type<e> variable_initializer_list
%type<e> variable_initializer_list.opt
%type<e> vt_class_type.multiopt
%type<e> while_statement
%type<e> yield_statement

%right '=' "+=" "-=" "*=" "/=" "%=" "&=" "|=" "^=" "<<=" ">>=" ">>>="
%right TERNARY
%left "||"
%left "&&"
%left "|" "^" "&"
%left "==" "!="
%left "<" "<=" ">" ">=" "instanceof"
%left "<<" ">>" ">>>"
%left "+" "-"
%left "*" "/" "%"
%right  "~" "!" UMINUS UPLUS PREINC PREDEC CAST SWITCH
%right POSTINC POSTDEC
%left '.' PARENTHESES ARRAY_ACCESS


%%

    /* GRAMMAR RULES */
input:
  compilation_unit
;
modifier.multiopt:
  modifier.multiopt modifier    { modifiers.insert($2->s); copyString(&($$->s), string($1->s) + " " + string($2->s)); }
| %empty {copyData(&$$);}
;
modifier:
  TOK_public
| TOK_protected
| TOK_private
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
  dot_ind.multiopt TOK_46 TOK_IDENTIFIER	    { copyString(&($$->s), string($1->s) + "." + string($3->s)); }
| %empty {copyData(&$$);}
;
	/* Types, Values and Variables */
type:
  primitive_type              { copyString(&($$->s), string($1->s)); cur_type = string($1->s); }
| reference_type              { copyString(&($$->s), string($1->s)); cur_type = string($1->s); }
;
primitive_type:
  numeric_type			          { copyString(&($$->s), string($1->s)); }
| TOK_boolean
;
numeric_type:
  integral_type			          { copyString(&($$->s), string($1->s)); }
| floating_point_type	        { copyString(&($$->s), string($1->s)); }
;
integral_type:
  TOK_byte            { cur_size = 8; }
| TOK_short           { cur_size = 8; }
| TOK_int             { cur_size = 8; }
| TOK_long            { cur_size = 8; }
| TOK_char            { cur_size = 8; }
;
floating_point_type:
  TOK_float           { cur_size = 8; }
| TOK_double          { cur_size = 8; }
;
reference_type:
  class_or_interface_type         { copyString(&($$->s), string($1->s)); }
| array_type			                { copyString(&($$->s), string($1->s)); }
;
class_or_interface_type:
  un_name                  { copyString(&($$->s), string($1->s)); }
;
array_type:
  class_or_interface_type dims    { copyString(&($$->s), string($1->s) + string($2->s)); }
;
dims:
  TOK_91 TOK_93			              { copyString(&($$->s), "[]"); }
| dims TOK_91 TOK_93              { copyString(&($$->s), string($1->s) + "[]"); }
;
type_parameter:
   TOK_IDENTIFIER type_bound.opt  { copyString(&($$->s), string($1->s) + string($2->s)); }
;
type_bound.opt:
  type_bound			                { copyString(&($$->s), string($1->s)); }
| %empty {copyData(&$$);}
;
type_bound:
  TOK_extends  class_or_interface_type additional_bound.multiopt	  { copyString(&($$->s), " extends " + string($2->s) + string($3->s)); }
;
additional_bound:
  TOK_38 class_or_interface_type			  { copyString(&($$->s), " & " + string($2->s)); }
;
additional_bound.multiopt:
  additional_bound.multiopt additional_bound
| %empty {copyData(&$$);}
;


  /* Names */
un_name:
  TOK_IDENTIFIER                    {
          checkDeclaration(string($1->s));
          string type = lookupType(string($1->s));
          if (type == "")
            type = string($1->s);
          int offset = lookupOffset(string($1->s));
          // string v1 = storeTemp("getOffset(" + string($1->s) + ")", "", "_");
          // string v2 = storeTemp("* rhs", "%rbp", v1);
          string v2 = storeTemp("* rhs", "(%rbp - "+to_string(offset)+")","_");
          copyData(&$$, string($1->s), type, v2);
        }
| un_name TOK_46 TOK_IDENTIFIER     {
          string s = string($1->s) + "." + string($3->s);
          string val = string($1->type) + "." + string($3->s);
          string type = val;
          string in($1->type);
          bool b=false;
          for(int i=0;!b&&i<symbol_table.size();i++){
            if(symbol_table[i].class_table&&symbol_table[i].name==in){
              for(auto &symbol:symbol_table[i].table){
                if(symbol.first==string($3->s)){
                  b=true;
                  type=symbol.second.type;
                  s=val;
                  break;
                }
              }
            }
          }
          copyData(&$$, s, type, val);
          // TODO: fix type, 3AC
        }
;

  /* Packages and Modules */
compilation_unit:
  ordinary_compilation_unit
;
ordinary_compilation_unit:
  package_declaration.opt { ignoreDeclaration = true; } import_declaration.multiopt { ignoreDeclaration = false; } top_level_class_or_interface_declaration.multiopt
;
package_declaration.opt:
  package_declaration
| %empty {copyData(&$$);}
;
package_declaration:
  TOK_package TOK_IDENTIFIER dot_ind.multiopt TOK_59  { package_name = string($2->s) + string($3->s); }
;
import_declaration.multiopt:
  import_declaration.multiopt import_declaration	    { import_list.push_back($2->s); }
| %empty {copyData(&$$);}
;
import_declaration:
  single_type_import_declaration
| type_import_on_demand_declaration
| single_static_import_declaration
| static_import_on_demand_declaration
;
single_type_import_declaration:
  TOK_import un_name TOK_59                                   { copyString(&($$->s), string($2->s)); }
;
type_import_on_demand_declaration:
  TOK_import un_name TOK_46 TOK_42 TOK_59		                  { copyString(&($$->s), string($2->s) + ".*"); }
;
single_static_import_declaration:
  TOK_import TOK_static un_name TOK_46 TOK_IDENTIFIER TOK_59  { copyString(&($$->s), "static " + string($3->s) + "." + string($5->s)); }
;
static_import_on_demand_declaration:
  TOK_import TOK_static un_name TOK_46 TOK_42 TOK_59	        { copyString(&($$->s), "static " + string($3->s) + ".*"); }
;
top_level_class_or_interface_declaration.multiopt:
  top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration
| %empty {copyData(&$$);}
;
top_level_class_or_interface_declaration:
  class_declaration
| interface_declaration
| TOK_59
;
com_type_name.multiopt:
  com_type_name.multiopt TOK_44 un_name       { copyString(&($$->s), string($1->s) + "," + string($3->s)); }
| %empty {copyData(&$$);}
;

  /* Classes */
class_declaration:
  normal_class_declaration
| enum_declaration
| record_declaration
;
normal_class_declaration:
  modifier.multiopt TOK_class TOK_IDENTIFIER type_parameters.opt class_extends.opt class_implements.opt class_permits.opt {
                          int offset = symbol_table[cur_table_idx].size;
                          struct info cur_info = createInfo($3->s, "class", 0, offset, yylineno, modifiers);
                          string name = string($3->s);
                          insertSymbol(name, &cur_info);
                          modifiers.clear();
                          if(cur_table_idx>-1 && symbol_table[cur_table_idx].name!="")name = symbol_table[cur_table_idx].name+"."+name;
                          createTable( name, 1, $5->s, 0, true);
                        } class_body {
                          int prev_index = cur_table_idx;
                          cur_table_idx = symbol_table[cur_table_idx].parent;
                          symbol_table[cur_table_idx].size += symbol_table[prev_index].size;
                          createTable();
                        }
;
type_parameters.opt:
  type_parameters			  { copyString(&($$->s), string($1->s)); }
| %empty {copyData(&$$);}
;
class_extends.opt:
  class_extends			    { copyString(&($$->s), string($1->s)); }
| %empty {copyData(&$$);}
;
class_implements.opt:
  class_implements			{ copyString(&($$->s), string($1->s)); }
| %empty {copyData(&$$);}
;
class_permits.opt:
  class_permits			    { copyString(&($$->s), string($1->s)); }
| %empty {copyData(&$$);}
;
type_parameters:
  TOK_60 type_parameter_list TOK_62		  { copyString(&($$->s), "<" + string($2->s) + ">"); }
;
type_parameter_list:
  type_parameter com_type_parameter.multiopt  { copyString(&($$->s), string($1->s) + string($2->s)); }
;
com_type_parameter.multiopt:
  com_type_parameter.multiopt TOK_44 type_parameter { copyString(&($$->s), string($1->s) + "," + string($3->s)); }
| %empty {copyData(&$$);}
;
class_extends:
  TOK_extends class_or_interface_type     { copyString(&($$->s), string($2->s)); }
;
class_implements:
  TOK_implements interface_type_list		  { copyString(&($$->s), string($2->s)); }
;
interface_type_list:
  class_or_interface_type com_interface_type.multiopt		  { copyString(&($$->s), string($1->s) + string($2->s)); }
;
com_interface_type.multiopt:
  com_interface_type.multiopt TOK_44 class_or_interface_type	  { copyString(&($$->s), string($1->s) + "," + string($3->s)); }
| %empty {copyData(&$$);}
;
class_permits:
  TOK_permits un_name com_type_name.multiopt	          { copyString(&($$->s), " permits " + string($2->s) + string($3->s)); }
;
class_body:
   TOK_123 class_body_declaration.multiopt TOK_125		  { copyString(&($$->s), "{" + string($2->s) + "}"); }
;
class_body_declaration.multiopt:
  class_body_declaration.multiopt class_body_declaration  { copyString(&($$->s), string($1->s) + string($2->s)); }
| %empty {copyData(&$$);}
;
class_body_declaration:
  class_member_declaration		    { copyString(&($$->s), string($1->s)); }
| instance_initializer			      { copyString(&($$->s), string($1->s)); }
| constructor_declaration			    { copyString(&($$->s), string($1->s)); }
;
class_member_declaration:
  field_declaration			          { copyString(&($$->s), string($1->s)); }
| method_declaration			        { copyString(&($$->s), string($1->s)); }
| class_declaration			          { copyString(&($$->s), string($1->s)); }
| interface_declaration			      { copyString(&($$->s), string($1->s)); }
;
field_declaration:
  modifier.multiopt type variable_declarator_list TOK_59 {
              modifiers.clear();
              cur_type = "";
              cur_size = 0;
            }
;
variable_declarator_list:
  variable_declarator com_variable_declarator.multiopt
;
com_variable_declarator.multiopt:
  com_variable_declarator.multiopt TOK_44 variable_declarator
| %empty {copyData(&$$);}
;
variable_declarator:
  variable_declarator_id eq_variable_initializer.opt  {
          copyData(&$$, $1->s, $1->type);
          string symbol = string($1->s);
          string type = lookupType(symbol);
          if (string($2->s) != "") {
            typeCheck(type, $2->type);
            string v($2->v);
            symbol_table[cur_table_idx].table[symbol].val=string($2->v);
            string dims = string($1->type);
            if (dims.size() >= 2 && dims[0] == '[' && dims[1] == ']') {
              int sz = getArraySize($2->v);
              int base_size = symbol_table[cur_table_idx].table[symbol].size;
              symbol_table[cur_table_idx].size -= base_size;
              symbol_table[cur_table_idx].table[symbol].offset -= base_size;
              symbol_table[cur_table_idx].table[symbol].size = sz*base_size;
              symbol_table[cur_table_idx].table[symbol].offset += sz*base_size;
              symbol_table[cur_table_idx].size += sz*base_size;
              updateSize(sz*base_size - base_size);
              if(v[0]=='['){
                v="";
              }else if(v[0]=='{'){
                vector<string> arr=get_arrayVec(v);
                int of = symbol_table[cur_table_idx].table[symbol].offset;
                for(int i=0;i<sz;i++){
                  pushInstruction("_", arr[i], "_", "-"+to_string(of-base_size*i)+"(%rbp)");
                }
                v="";
              }
            }
            if(v!="")pushInstruction("_", v, "_", $1->v);
          }
        }
;
eq_variable_initializer.opt:
  TOK_61 variable_initializer { copyData(&$$, $2->s, $2->type, $2->v); }
| %empty {copyData(&$$);}
;
variable_declarator_id:
  TOK_IDENTIFIER dims.opt   {
                int offset = getCurSize() + cur_size;
                if (param_declaration == 0) {
                  string type = cur_type + string($2->s);
                  struct info cur_info = createInfo(type, "variable", cur_size, offset, yylineno, modifiers);
                  updateSize(cur_size);
                  insertSymbol($1->s, &cur_info);
                  symbol_table[cur_table_idx].size += cur_size;
                  // pushInstruction("param", to_string(cur_size), "_", "");
                  // pushInstruction("call", "allocmem", "1", "_");
                  // pushInstruction("-", "%rsp", to_string(cur_size), "%rsp");
                }
                copyData(&$$, $1->s, $2->s, "*(%rbp - "+to_string(offset)+")");
              }
;
dims.opt:
  dims			    { copyString(&($$->s), string($1->s)); }
| %empty {copyData(&$$);}
;
variable_initializer:
  expression
| array_initializer
;
method_declaration:
  modifier.multiopt method_header method_body {
    int sz = symbol_table[cur_table_idx].size;
    sz = (sz/16+1)*16;
    vector<string> allocate_mem = {"-", "%rsp", to_string(sz), "%rsp"};
    tac_code[cur_method].second.insert(tac_code[cur_method].second.begin(), allocate_mem);
    cur_table_idx = symbol_table[cur_table_idx].parent;
    cur_method = -1;
  }
;
method_header:
  type TOK_IDENTIFIER {
              // symbol table entry
              int offset = symbol_table[cur_table_idx].size;
              struct info cur_info = createInfo($1->s, "method", 0, offset, yylineno, modifiers);
              string name = string($2->s);
              insertSymbol(name, &cur_info);
              modifiers.clear();
              string class_name = symbol_table[cur_table_idx].name;
              createTable(name, 0, "", 1, true);
              symbol_table[cur_table_idx].return_type = string($1->s);
              cur_size = 0;
              param_declaration = 1;
              // 3AC
              pair<string, vector<vector<string>>> p;
              p.first = class_name + "." + name;
              tac_code.push_back(p);
              cur_method = tac_code.size() - 1;
              methods.push_back({$1->s,vector<struct expr*>()});
              meth_and_ret.insert({$2->s,$1->s});
            } method_parameters throws.opt
| TOK_void TOK_IDENTIFIER {
              // symbol table entry
              int offset = symbol_table[cur_table_idx].size;
              struct info cur_info = createInfo("void", "method", 0, offset, yylineno, modifiers);
              string name = string($2->s);
              insertSymbol(name, &cur_info);
              modifiers.clear();
              string class_name = symbol_table[cur_table_idx].name;
              createTable(name, 0, "", 1, true);
              symbol_table[cur_table_idx].return_type = "void";
              cur_size = 0;
              // 3AC
              pair<string, vector<vector<string>>> p;
              p.first = class_name + "." + name;
              tac_code.push_back(p);
              cur_method = tac_code.size() - 1;
              methods.push_back({$1->s,vector<struct expr*>()});
              meth_and_ret.insert({$2->s,$1->s});
            } method_parameters throws.opt
;
throws.opt:
  throws
| %empty {copyData(&$$);}
;
method_parameters:
  TOK_40 { param_declaration = 1;} formal_parameter_list.opt TOK_41 dims.opt { param_declaration = 0;}
;
formal_parameter_list.opt:
  formal_parameter_list
| %empty {copyData(&$$);}
;
formal_parameter_list:
  formal_parameter com_formal_parameter.multiopt
;
com_formal_parameter.multiopt:
  TOK_44 formal_parameter com_formal_parameter.multiopt
| %empty {copyData(&$$);}
;
formal_parameter:
  modifier.multiopt type variable_declarator_id {
                string type = string($2->s) + string($3->type);
                int offset = getCurSize() + cur_size;
                struct info cur_info = createInfo(type, "parameter", cur_size, offset, yylineno, modifiers);
                updateSize(cur_size);
                for (auto itr = symbol_table[cur_table_idx].parameters.begin(); itr != symbol_table[cur_table_idx].parameters.end(); itr++) {
                  if (itr->first == $3->s) {
                    cout << "Error at line no " << yylineno << ": " << "Parameter with name " << string($3->s) << " already declared" << endl;
                  }
                }
                symbol_table[cur_table_idx].parameters.push_back({$3->s,cur_info});
                cur_size = 0;
                struct expr *ep=(struct expr*)malloc(sizeof(struct expr));
                ep->type=new char[type.length() + 1];
                strcpy(ep->type, type.c_str());
                ep->s=$3->s;
                methods[cur_method].second.push_back(ep);
              }
| variable_arity_parameter
;
variable_arity_parameter:
  modifier.multiopt type TOK_464646 TOK_IDENTIFIER	{
                string type = string($2->s) + "...";
                int offset = getCurSize();
                struct info cur_info = createInfo(type, "parameter", cur_size, offset, yylineno, modifiers);
                updateSize(cur_size);
                for (auto itr = symbol_table[cur_table_idx].parameters.begin(); itr != symbol_table[cur_table_idx].parameters.end(); itr++) {
                  if (itr->first == $4->s) {
                    cout << "Error at line no " << yylineno << ": " << "Parameter with name " << string($4->s) << " already declared" << endl;
                  }
                }
                symbol_table[cur_table_idx].parameters.push_back({$4->s,cur_info});
                struct expr *ep=(struct expr*)malloc(sizeof(struct expr));
                ep->type=type.data();
                ep->s=$4->s;
                methods[cur_method].second.push_back(ep);
              }
;
throws:
  TOK_throws exception_type_list
;
exception_type_list:
  exception_type com_exception_type.multiopt
;
com_exception_type.multiopt:
  com_exception_type.multiopt TOK_44 exception_type
| %empty {copyData(&$$);}
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
  modifier.multiopt constructor_declarator throws.opt constructor_body {
    int sz = symbol_table[cur_table_idx].size;
    sz = (sz/16+1)*16;
    vector<string> allocate_mem = {"-", "%rsp", to_string(sz), "%rsp"};
    tac_code[cur_method].second.insert(tac_code[cur_method].second.begin(), allocate_mem);
    cur_table_idx = symbol_table[cur_table_idx].parent;
    cur_method = -1;
    }
;
constructor_declarator:
  simple_type_name {
              // Symbol table entry
              symbol_table[cur_table_idx].return_type = string($1->s);
              int offset = symbol_table[cur_table_idx].size;
              struct info cur_info = createInfo($1->s, "constructor", 0, offset, yylineno, modifiers);
              string name = string($1->s);
              insertSymbol(name, &cur_info);
              modifiers.clear();
              string class_name = symbol_table[cur_table_idx].name;
              createTable(name, 0, "", 1, true);
              symbol_table[cur_table_idx].return_type = string($1->s);
              param_declaration = 1;
              // 3AC
              pair<string, vector<vector<string>>> p;
              p.first = class_name + ".ctor";
              tac_code.push_back(p);
              cur_method = tac_code.size() - 1;
              methods.push_back({$1->s,vector<struct expr*>()});
              meth_and_ret.insert({$1->s,"void"});
  } TOK_40 formal_parameter_list.opt TOK_41 { param_declaration = 0; }
;
simple_type_name:
  TOK_IDENTIFIER
;
constructor_body:
  TOK_123 block_statements.opt TOK_125
;
block_statements.opt:
  block_statements
| %empty {copyData(&$$);}
;
enum_declaration:
  modifier.multiopt TOK_enum TOK_IDENTIFIER class_implements.opt enum_body
;
enum_body:
  TOK_123 enum_constant_list.opt com.opt enum_body_declarations.opt TOK_125
;
com.opt:
  TOK_44			{ copyData(&$$, ",", ""); }
| %empty {copyData(&$$);}
;
enum_body_declarations.opt:
  enum_body_declarations
| %empty {copyData(&$$);}
;
enum_constant_list.opt:
  enum_constant_list
| %empty {copyData(&$$);}
;
enum_constant_list:
  enum_constant com_enum_constant.multiopt
;
com_enum_constant.multiopt:
  com_enum_constant.multiopt TOK_44 enum_constant
| %empty {copyData(&$$);}
;
enum_constant:
   TOK_IDENTIFIER TOK_91 TOK_40 argument_list.opt TOK_41 TOK_93 class_body.opt
;
class_body.opt:
  class_body
| %empty {copyData(&$$);}
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
| %empty {copyData(&$$);}
;
record_component_list:
  record_component com_record_component.multiopt
;
com_record_component.multiopt:
  com_record_component.multiopt TOK_44 record_component
| %empty {copyData(&$$);}
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
| %empty {copyData(&$$);}
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
| %empty {copyData(&$$);}
;
interface_permits.opt:
  interface_permits
| %empty {copyData(&$$);}
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
| %empty {copyData(&$$);}
;
interface_member_declaration:
  interface_method_declaration
| class_declaration
| interface_declaration
| TOK_59
;
interface_method_declaration:
  modifier.multiopt method_header method_body
;

	/* Arrays */

array_initializer:
  TOK_123 variable_initializer_list.opt com.opt TOK_125		{
          string s = string($1->s) + string($2->s) + string($4->s);
          copyData(&$$, s, "", s);
        }
;
variable_initializer_list.opt:
  variable_initializer_list
| %empty {copyData(&$$);}
;
variable_initializer_list:
  variable_initializer com_variable_initializer.multiopt	{
          string s = string($1->s) + string($2->s);
          copyData(&$$, s, "", s);
        }
;
com_variable_initializer.multiopt:
  com_variable_initializer.multiopt TOK_44 variable_initializer	{
          string s = string($1->s) + "," + string($3->s);
          copyData(&$$, s, "", s);
        }
| %empty {copyData(&$$);}
;

	/* Blocks, statements, and patterns */

block:
  TOK_123 { createTable(); } block_statements.opt { cur_table_idx = symbol_table[cur_table_idx].parent; } TOK_125
;
block_statements:
  block_statement block_statement.multiopt
;
block_statement.multiopt:
  block_statement.multiopt block_statement
| %empty {copyData(&$$);}
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
| while_statement
| for_statement
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
  if_condition statement {                  //if_condition statement
          int label = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label));
        }
;
if_then_else_statement:
  if_then_statement TOK_else {
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label_count), 1);
          label_stack.push(label_count++);
        } statement {       // statement
          int label = label_stack.top();
          label_stack.pop();
           checkAndPushInstruction("label", "_", "_", "L" + to_string(label));
        }
;
if_condition:
  TOK_if TOK_40 expression TOK_41 {
          specificTypeCheck($3->type, "boolean", "condition");
          string v = storeTemp("!", $3->v);
          checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        }
;
assert_statement:
  TOK_assert expression TOK_59
| TOK_assert expression TOK_58 expression TOK_59
;
switch_statement:
  TOK_switch TOK_40 expression TOK_41 switch_block
;
switch_block:
  TOK_123 switch_rule.multi TOK_125			{
          copyData(&$$, "{" + string($2->s) + "}", $2->type);
        }
| TOK_123 switch_block_statement_group.multiopt switch_label_col.multiopt TOK_125	 {
          copyData(&$$, "{" + string($2->s) + string($3->s) + "}", $2->type);
        }
;
switch_rule.multi:
  switch_rule
| switch_rule.multi switch_rule	 {
          copyData(&$$, string($1->s) + string($2->s), $1->type);
          typeCheck($1->type, $2->type);
        }
;
switch_block_statement_group.multiopt:
  switch_block_statement_group.multiopt switch_block_statement_group	 {
          copyData(&$$, string($1->s) + string($2->s), $2->type);
          typeCheck($1->type, $2->type);
        }
| %empty {copyData(&$$);}
;
switch_label_col.multiopt:
  switch_label_col.multiopt switch_label TOK_58	{
          copyData(&$$, string($1->s) + string($2->s) + ":", $2->type);
        }
| %empty {copyData(&$$);}
;
switch_rule:
  switch_label TOK_4562 expression TOK_59	 {
          copyData(&$$, string($1->s) + " -> " + string($3->s) + ";", $3->type);
        }
| switch_label TOK_4562 block	 {
          copyData(&$$, string($1->s) + " -> " + string($3->s), $3->type);
        }
| switch_label TOK_4562 throw_statement	 {
          copyData(&$$, string($1->s) + " -> " + string($3->s), $3->type);
        }
;
switch_block_statement_group:
  switch_label TOK_58 switch_label_col.multiopt block_statements	 {
          copyData(&$$, string($1->s) + ":" + string($3->s) + string($4->s), $3->type);
        }
;
switch_label:
  TOK_case case_constant com_case_constant.multiopt	 {
          copyData(&$$, "case " + string($2->s) + string($3->s), $2->type);
        }
| TOK_default	  {
          copyData(&$$, "default", "");
        }
;
com_case_constant.multiopt:
  com_case_constant.multiopt TOK_44 case_constant	  {
          copyData(&$$, string($1->s) + ", " + string($3->s), $3->type);
        }
| %empty {copyData(&$$);}
;
case_constant:
  conditional_expression
;
while_statement:
  TOK_while {
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count);
          label_stack.push(label_count++);
        } TOK_40 expression[expr] TOK_41 {
          specificTypeCheck($expr->type, "boolean", "condition");
          string v = storeTemp("!", $expr->v);
          checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          loop_exit.push(label_count);
          label_stack.push(label_count++);
        } statement {
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
        }
;
do_statement:
  TOK_do {
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count);
          label_stack.push(label_count++);
          loop_exit.push(label_count++);
        } statement TOK_while TOK_40 expression[expr] TOK_41 TOK_59 {
          specificTypeCheck($expr->type, "boolean", "condition");
          int label = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("if goto", $expr->v, "_", "L" + to_string(label));
          pushInstruction("goto", "_", "_", "L" + to_string(loop_exit.top()));
          loop_entry.pop();
          loop_exit.pop();
        }
;
for_statement:
  basic_for_init basic_for_tail
| basic_for_init enhanced_for_tail
| TOK_for TOK_40 TOK_59 {
          createTable();
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        } expression.opt[expr] {
          if (string($expr->s) != "") {
            specificTypeCheck($expr->type, "boolean", "condition");
            string v = storeTemp("!", $expr->v);
            checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          }
          loop_exit.push(label_count);
          label_stack.push(label_count++);
          addToTemp = true;
          vector<vector<string>> temp;
          temp_code.push(temp);
          pushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count++);
        } TOK_59 for_update.opt TOK_41 statement {
          pushTempCode();
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
| TOK_for TOK_40 statement_expression_list TOK_59 {
          createTable();
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        } expression.opt[expr] {
          if (string($expr->s) != "") {
            specificTypeCheck($expr->type, "boolean", "condition");
            string v = storeTemp("!", $expr->v);
            checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          }
          loop_exit.push(label_count);
          label_stack.push(label_count++);
          addToTemp = true;
          vector<vector<string>> temp;
          temp_code.push(temp);
          pushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count++);
        } TOK_59 for_update.opt TOK_41 statement {
          pushTempCode();
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
;
basic_for_init:
  TOK_for TOK_40 { createTable(); } local_variable_declaration {
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label_count));
          label_stack.push(label_count++);
        }
;
basic_for_tail:
  TOK_59 expression.opt[expr] {
          if (string($expr->s) != "") {
            specificTypeCheck($expr->type, "boolean", "condition");
            string v = storeTemp("!", $expr->v);
            checkAndPushInstruction("if goto", v, "_", "L" + to_string(label_count));
          }
          loop_exit.push(label_count);
          label_stack.push(label_count++);
          addToTemp = true;
          vector<vector<string>> temp;
          temp_code.push(temp);
          pushInstruction("label", "_", "_", "L" + to_string(label_count));
          loop_entry.push(label_count++);
        } TOK_59 for_update.opt TOK_41 statement {
          pushTempCode();
          int label1 = label_stack.top();
          label_stack.pop();
          int label2 = label_stack.top();
          label_stack.pop();
          checkAndPushInstruction("goto", "_", "_", "L" + to_string(label2));
          checkAndPushInstruction("label", "_", "_", "L" + to_string(label1));
          loop_entry.pop();
          loop_exit.pop();
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
;
enhanced_for_tail:
  TOK_58 expression TOK_41 statement {
          cur_table_idx = symbol_table[cur_table_idx].parent;
        }
;
expression.opt:
  expression
| %empty {copyData(&$$);}
;
for_update.opt:
  for_update		{ addToTemp = false; }
| %empty {copyData(&$$);addToTemp = false;}
;
for_update:
  statement_expression_list
;
statement_expression_list:
  statement_expression com_statement_expression.multiopt
;
com_statement_expression.multiopt:
  com_statement_expression.multiopt TOK_44 statement_expression
| %empty {copyData(&$$);}
;
break_statement:
  TOK_break IDENTIFIER.opt TOK_59	 {
          if (loop_exit.empty()) {
            cout << "Error in line no " << yylineno << ": break statement outside loop" << endl;
          }
          pushInstruction("goto", "_", "_", "L" + to_string(loop_exit.top()));
        }
;
IDENTIFIER.opt:
  TOK_IDENTIFIER
| %empty {copyData(&$$);}
;
yield_statement:
  TOK_yield expression TOK_59
;
continue_statement:
  TOK_continue IDENTIFIER.opt TOK_59 {
          if (loop_entry.empty()) {
            cout << "Error in line no " << yylineno << ": continue statement outside loop" << endl;
          }
          pushInstruction("goto", "_", "_", "L" + to_string(loop_entry.top()));
        }
;
return_statement:
  TOK_return expression.opt TOK_59 {
          pushInstruction("return", $2->v, "_", "_");
          checkReturnType($2->type);
        }
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
| %empty {copyData(&$$);}
;
catches:
  catch_clause catch_clause.multiopt
;
catch_clause.multiopt:
  catch_clause.multiopt catch_clause
| %empty {copyData(&$$);}
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
| %empty {copyData(&$$);}
;
finally:
  TOK_finally block
;
try_with_resources_statement:
  TOK_try resource_specification block catches.opt finally.opt
;
finally.opt:
  finally
| %empty {copyData(&$$);}
;
resource_specification:
  TOK_40 resource_list semcol.opt TOK_41
;
semcol.opt:
  TOK_59
| %empty {copyData(&$$);}
;
resource_list:
  resource semcol_resource.multiopt
;
semcol_resource.multiopt:
  semcol_resource.multiopt TOK_59 resource
| %empty {copyData(&$$);}
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
| TOK_this			                {
          string s=getCurClass();
          copyData(&$$, s, s, s);
          /* TODO: get type from class name */
        }
| un_name TOK_46 TOK_this			  {
  string s=getCurClass();
          copyData(&$$, string($1->s) + "." + s, string($1->s) + "." + s);
          /* TODO: get type from class name */
        }
| TOK_40 expression TOK_41    %prec PARENTHESES   {
          copyData(&$$, $2->s, $2->type, $2->v);
        }
| class_instance_creation_expression
| field_access
| array_access
| method_invocation
| method_reference
;
hold_Literal:
  TOK_INTEGERLITERAL      { copyData(&$$, $1->s, "int", $1->s); }
| TOK_FLOATLITERAL        { copyData(&$$, $1->s, "float", $1->s); }
| TOK_BOOLEANLITERAL      { copyData(&$$, $1->s, "boolean", $1->s); }
| TOK_CHARLITERAL         { copyData(&$$, $1->s, "char", $1->s); }
| TOK_STRINGLITERAL       { copyData(&$$, $1->s, "String", $1->s); }
| TOK_TEXTBLOCKLITERAL    { copyData(&$$, $1->s, "TextBlock", $1->s); }
| TOK_NULLLITERAL         { copyData(&$$, $1->s, "null", $1->s); }
;
class_instance_creation_expression:
  unqualified_class_instance_creation_expression
| un_name TOK_46 unqualified_class_instance_creation_expression	{
          copyData(&$$, string($1->s) + "." + string($3->s), $3->type);
          // TODO: get type from class name
        }
| primary TOK_46 unqualified_class_instance_creation_expression	{
          copyData(&$$, string($1->s) + "." + string($3->s), $3->type);
          // TODO: get type from class name
        }
;
unqualified_class_instance_creation_expression:
  TOK_new class_or_interface_type TOK_40 argument_list.opt TOK_41 class_body.opt {
          copyData(&$$, string($2->s) + "(" + string($4->s) + ")", $2->s);
        }
;
field_access:
  primary TOK_46 TOK_IDENTIFIER	{
          string s = string($1->s) + "." + string($3->s);
          string type = getFieldVariableType(s);
          s = string($1->type) + "." + string($3->s);
          copyData(&$$, s, type, s);
          // TODO: get type
        }
| TOK_super TOK_46 TOK_IDENTIFIER	{
          copyData(&$$, "super." + string($3->s), "");
          // TODO: get type
        }
| un_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER  {
          copyData(&$$, string($1->s) + ".super." + string($3->s), "");
          // TODO: get type
        }
;
array_access:
  un_name TOK_91 expression TOK_93    %prec ARRAY_ACCESS  {
          string type = $1->type;
          if (type.length() >= 2 && type.substr(type.length() - 2) == "[]" ) {
            type = type.substr(0, type.length() - 2);
          } else {
            cout << "Error at line no " << yylineno << ": Expected array for array access, found " << type << endl;
          }
          string s = string($1->s) + "[" + string($3->s) + "]";
          string v;
          int of = lookupOffset(string($1->s));
          if(($3->v)[0]>='0'&&($3->v)[0]<='9'){
            v="-"+to_string(of-8*(stoi($3->v)))+"(%rbp)";
          }else{
            v="-"+to_string(of)+"(%rbp,"+string($3->v)+",8)";
          }
          // pushInstruction("_",string($3->v),"_","%r14");

          copyData(&$$, s, type, v);
          specificTypeCheck($3->type, "int", "array index");
        }
| primary_no_new_array TOK_91 expression TOK_93   %prec ARRAY_ACCESS {
          string type = $1->type;
          if (type.length() >= 2 && type.substr(type.length() - 2) == "[]" ) {
            type = type.substr(0, type.length() - 2);
          } else {
            cout << "Error at line no " << yylineno << ": Expected array for array access, found " << type << endl;
          }
          string s = string($1->s);
          string v;
          s=s.substr(0,s.find('['));
          int of = lookupOffset(string($1->s));
          if(($3->v)[0]>='0'&&($3->v)[0]<='9'){
            v="-"+to_string(of-8*(stoi($3->v)))+"(%rbp)";
          }else{
            v="-"+to_string(of)+"(%rbp,"+string($3->v)+",8)";
          }
          s = string($1->s) + "[" + string($3->s) + "]";
          copyData(&$$, s, type, v);
          specificTypeCheck($3->type, "int", "array index");
        }
;
method_invocation:
  un_name TOK_40 argument_list.opt TOK_41	  {
          // check no. of arguments and their type
          // string s($1->type),t($1->s);
          // string ans=t;
          // if(t.find('.')!=string::npos){
          //   ans = s.substr(0,s.find_last_of('.'))+t.substr(t.find_last_of('.'));
          // }


          // copyString(&($1->s),ans);
          string v=call_procedure($1,$3);
          copyData(&$$, string($1->s) + "(" + string($3->s) + ")", $1->type, v);
        }
| primary TOK_46 TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
  // string nam = string($1->type)+"."+string($3);
  // copyString(&($3->s),nam);
          string v=call_procedure($3,$5);
          copyData(&$$, string($1->s) + "." + string($3->s) + "(" + string($5->s) + ")", v);

          // TODO: get type
        }
| TOK_super TOK_46  TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
          string v=call_procedure($3,$5);
          copyData(&$$, "super." + string($3->s) + "(" + string($5->s) + ")", "");

          // TODO: get type
        }
| un_name TOK_46 TOK_super TOK_46 TOK_IDENTIFIER TOK_40 argument_list.opt TOK_41 {
          copyData(&$$, string($1->s) + ".super." + string($5->s) + "(" + string($7->s) + ")", "");
          call_procedure($5,$7);
          // TODO: get type
        }
;
argument_list.opt:
  argument_list
| %empty {copyData(&$$);}
;
argument_list:
  expression com_expression.multiopt   {
          // pushInstruction("param", $1->v, "_", "_");
          copyData(&$$, string($1->s) + string($2->s), string($1->type) + string($2->type),string($1->v) + string($2->v));
        }
;
com_expression.multiopt:
  TOK_44 expression com_expression.multiopt 	{
          // pushInstruction("param", $2->v, "_", "_");
          copyData(&$$, "," + string($2->s) + string($3->s),  "," + string($2->type) + string($3->type), "," + string($2->v) + string($3->v));
        }
| %empty {copyData(&$$);}
;
method_reference:
  un_name TOK_5858 TOK_IDENTIFIER			              {
          copyData(&$$, string($1->s) + "::" + string($3->s), "");
        }
| primary TOK_5858 TOK_IDENTIFIER                   {
          copyData(&$$, string($1->s) + "::" + string($3->s), "");
        }
| TOK_super TOK_5858 TOK_IDENTIFIER 	              {
          copyData(&$$, "super::" + string($3->s), "");
        }
| un_name TOK_46 TOK_super TOK_5858 TOK_IDENTIFIER 	{
          copyData(&$$, string($1->s) + ".super::" + string($5->s), "");
        }
;
array_creation_expression:
  TOK_new primitive_type dim_exprs dims.opt               {
          string type = string($2->s) + string($3->type) + string($4->s);
          string s = "new " + string($2->s) + string($3->s) + string($4->s);
          copyData(&$$, s, type, $3->s);
        }
| TOK_new class_or_interface_type dim_exprs dims.opt      {
          string type = string($2->s) + string($3->type) + string($4->s);
          string s = "new " + string($2->s) + string($3->s) + string($4->s);
          copyData(&$$, s, type, $3->s);
        }
| TOK_new primitive_type dims array_initializer	          {
          string type = string($2->s) + string($3->s);
          string s = "new " + string($2->s) + string($3->s) + string($4->s);
          copyData(&$$, s, type, $4->s);
        }
| TOK_new class_or_interface_type dims array_initializer 	{
          string type = string($2->s) + string($3->s);
          string s = "new " + string($2->s) + string($3->s) + string($4->s);
          copyData(&$$, s, type, $4->s);
        }
;
dim_exprs:
  dim_expr dim_expr.multiopt {
          string s = string($1->s) + string($2->s);
          copyData(&$$, s, string($1->type) + string($2->type), s);
        }
;
dim_expr.multiopt:
  dim_expr.multiopt dim_expr  {
          string s = string($1->s) + string($2->s);
          copyData(&$$, s, string($1->type) + string($2->type), s);
        }
| %empty {copyData(&$$);}
;
dim_expr:
   TOK_91 expression TOK_93 {
          string s = "[" + string($2->s) + "]";
          copyData(&$$, s, "[]", s);
        }
;
expression:
  assignment_expression
;
assignment_expression:
  conditional_expression
| assignment
;
assignment:
  left_hand_side assignment_operator expression   {
          string op = string($2->s);
          if (op == "=") {
            pushInstructionWithType("_", $3->v, "_", $1->v, $1->type, $3->type);
          } else {
            string v = storeTempWithType(op.substr(0,op.size()-1), $1->v, $3->v, $1->type, $3->type);
            pushInstructionWithType("_", v, "_", $1->v, $3->type, $1->type);
          }
          copyData(&$$, string($1->s) + string($2->s) + string($3->s), $1->type, $1->v);
          typeCheck($1->type, $3->type);
        }
;
left_hand_side:
  un_name  {
    string s($1->s);
    if (s.find('.') == std::string::npos){
          string offset = to_string(lookupOffset(s));
          string v = "*(%rbp - " + offset + ")";
          copyData(&$$, s, $1->type, v);
          popLastInstruction();
    }else{
      copyData(&$$, s, $1->type, $1->v);
          popLastInstruction();
    }
  }
| field_access
| array_access		{
          // string s = string($1->s);
          // string a1 = "", a2 = "";
          // bool flag = false;
          // for (int i = 0; i < s.length(); i++) {
          //   if (s[i] == '[') {
          //     flag = true;
          //   } else if (s[i] == ']') {
          //     break;
          //   } else {
          //     if (flag) {
          //       a2 += s[i];
          //     } else {
          //       a1 += s[i];
          //     }
          //   }
          // }
          // copyData(&$$, string($1->s), $1->type, to_string(lookupOffset(a1)));
        }
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
| conditional_or_expression TOK_63 expression TOK_58 conditional_expression	 %prec TERNARY {
          // 3AC?
          copyData(&$$, string($1->s) + " ? " + string($3->s) + " : " + string($5->s), $3->type);
          typeCheck($3->type, $5->type);
          specificTypeCheck($1->type, "boolean", "?");
        }
;
conditional_or_expression:
  conditional_and_expression
| conditional_or_expression TOK_124124 conditional_and_expression {
          string v = storeTemp("||", $1->v, $3->v);
          copyData(&$$, string($1->s) + " || " + string($3->s), "boolean", v);
          specificTypeCheck($1->type, "boolean", "||");
          specificTypeCheck($3->type, "boolean", "||");
        }
;
conditional_and_expression:
  inclusive_or_expression
| conditional_and_expression TOK_3838 inclusive_or_expression	 {
          string v = storeTemp("&&", $1->v, $3->v);
          copyData(&$$, string($1->s) + " && " + string($3->s), "boolean", v);
          specificTypeCheck($1->type, "boolean", "&&");
          specificTypeCheck($3->type, "boolean", "&&");
        }
;
inclusive_or_expression:
  exclusive_or_expression
| inclusive_or_expression TOK_124 exclusive_or_expression	 {
          string v = storeTemp("|", $1->v, $3->v);
          copyData(&$$, string($1->s) + " | " + string($3->s), "int", v);
          specificTypeCheck($1->type, "int", "|");
          specificTypeCheck($3->type, "int", "|");
        }
;
exclusive_or_expression:
  and_expression
| exclusive_or_expression TOK_94 and_expression  {
          string v = storeTemp("^", $1->v, $3->v);
          copyData(&$$, string($1->s) + " ^ " + string($3->s), "int", v);
          specificTypeCheck($1->type, "int", "^");
          specificTypeCheck($3->type, "int", "^");
        }
;
and_expression:
  equality_expression
| and_expression TOK_38 equality_expression	  {
          string v = storeTemp("&", $1->v, $3->v);
          copyData(&$$, string($1->s) + " & " + string($3->s), "int", v);
          specificTypeCheck($1->type, "int", "&");
          specificTypeCheck($3->type, "int", "&");
        }
;
equality_expression:
  relational_expression
| equality_expression TOK_6161 relational_expression 	  {
          string v = storeTemp("==", $1->v, $3->v);
          copyData(&$$, string($1->s) + " == " + string($3->s), "boolean", v);
          typeCheck($1->type, $3->type);
        }
| equality_expression TOK_3361 relational_expression   {
          string v = storeTemp("!=", $1->v, $3->v);
          copyData(&$$, string($1->s) + " != " + string($3->s), "boolean", v);
          typeCheck($1->type, $3->type);
        }
;
relational_expression:
  shift_expression
| relational_expression TOK_60 shift_expression {
          string v = storeTemp("<", $1->v, $3->v);
          copyData(&$$, string($1->s) + " < " + string($3->s), "boolean", v);
          typeCheck($1->type, $3->type);
        }
| relational_expression TOK_62 shift_expression {
          string v = storeTemp(">", $1->v, $3->v);
          copyData(&$$, string($1->s) + " > " + string($3->s), "boolean", v);
          typeCheck($1->type, $3->type);
        }
| relational_expression TOK_6061 shift_expression {
          string v = storeTemp("<=", $1->v, $3->v);
          copyData(&$$, string($1->s) + " <= " + string($3->s), "boolean", v);
          typeCheck($1->type, $3->type);
        }
| relational_expression TOK_6261 shift_expression{
          string v = storeTemp(">=", $1->v, $3->v);
          copyData(&$$, string($1->s) + " >= " + string($3->s), "boolean", v);
          typeCheck($1->type, $3->type);
        }
| instanceof_expression
;
instanceof_expression:
  relational_expression TOK_instanceof reference_type	{
          string v = storeTemp("instanceof", $1->v, $3->s);
          copyData(&$$, string($1->s) + " instanceof " + string($3->s), "boolean", v);
          specificTypeCheck($1->type, "reference", "instanceof");
          specificTypeCheck($3->s, "class", "instanceof");
        }
| relational_expression TOK_instanceof pattern {
          string v = storeTemp("instanceof", $1->v, $3->v);
          copyData(&$$, string($1->s) + " instanceof " + string($3->s), "boolean", v);
          specificTypeCheck($1->type, "reference", "instanceof");
          specificTypeCheck($3->type, "class", "instanceof");
        }
;
shift_expression:
  additive_expression
| shift_expression TOK_6060 additive_expression	 {
          string v = storeTemp("<<", $1->v, $3->v);
          copyData(&$$, string($1->s) + " << " + string($3->s), "int", v);
          specificTypeCheck($1->type, "int", "<<");
          specificTypeCheck($3->type, "int", "<<");
        }
| shift_expression TOK_6262 additive_expression	 {
          string v = storeTemp(">>", $1->v, $3->v);
          copyData(&$$, string($1->s) + " >> " + string($3->s), "int", v);
          specificTypeCheck($1->type, "int", ">>");
          specificTypeCheck($3->type, "int", ">>");
        }
| shift_expression TOK_626262 additive_expression	 {
          string v = storeTemp(">>>", $1->v, $3->v);
          copyData(&$$, string($1->s) + " >>> " + string($3->s), "int", v);
          specificTypeCheck($1->type, "int", ">>>");
          specificTypeCheck($3->type, "int", ">>>");
        }
;
additive_expression:
  multiplicative_expression
| additive_expression TOK_43 multiplicative_expression {
          string v = storeTempWithType("+", $1->v, $3->v, $1->type, $3->type);
          // copyData(&$$, string($1->s) + " + " + string($3->s), getFinalType($1->type, $3->type), v);
          copyData(&$$, "addi " + string($1->s) + string($3->s), getFinalType($1->type, $3->type), v);
          specificTypeCheck($1->type, "Numeric", "+");
          specificTypeCheck($3->type, "Numeric", "+");
        }
| additive_expression TOK_45 multiplicative_expression {
          string v = storeTempWithType("-", $1->v, $3->v, $1->type, $3->type);
          copyData(&$$, string($1->s) + " - " + string($3->s), getFinalType($1->type, $3->type), v);
          specificTypeCheck($1->type, "Numeric", "-");
          specificTypeCheck($3->type, "Numeric", "-");
        }
;
multiplicative_expression:
  unary_expression
| multiplicative_expression TOK_42 unary_expression	{
          string v = storeTempWithType("*", $1->v, $3->v, $1->type, $3->type);
          copyData(&$$, string($1->s) + " * " + string($3->s), getFinalType($1->type, $3->type), v);
          specificTypeCheck($1->type, "Numeric", "*");
          specificTypeCheck($3->type, "Numeric", "*");
        }
| multiplicative_expression TOK_47 unary_expression	{
          string v = storeTempWithType("/", $1->v, $3->v, $1->type, $3->type);
          copyData(&$$, string($1->s) + " / " + string($3->s), getFinalType($1->type, $3->type), v);
          specificTypeCheck($1->type, "Numeric", "/");
          specificTypeCheck($3->type, "Numeric", "/");
        }
| multiplicative_expression TOK_37 unary_expression	{
          string v = storeTemp("%", $1->v, $3->v);
          copyData(&$$, string($1->s) + " % " + string($3->s), getFinalType($1->type, $3->type), v);
          specificTypeCheck($1->type, "int", "%");
          specificTypeCheck($3->type, "int", "%");
        }
;
unary_expression:
  pre_increment_expression
| pre_decrement_expression
| TOK_43 unary_expression	  %prec UPLUS     {
          string v = storeTemp("+", $2->v);
          copyData(&$$, " + " + string($2->s), $2->type, v);
          specificTypeCheck($2->type, "Numeric", "+");
        }
| TOK_45 unary_expression	  %prec UMINUS    {
          string v = storeTemp("-", $2->v);
          copyData(&$$, " + " + string($2->s), $2->type, v);
          specificTypeCheck($2->type, "Numeric", "-");
        }
| unary_expression_not_plus_minus
;
pre_increment_expression:
  TOK_4343 unary_expression   %prec PREINC  {
          string offset = to_string(lookupOffset(string($2->s)));
          string v1 = "*(%rbp - " + offset + ")";
          pushInstruction("inc", v1, "_", "_");
          string v2 = storeTemp("_", v1, "_");
          // pushInstructionWithType("+", $2->v, "1", $2->v, $2->type, $2->type);
          copyData(&$$, "++" + string($2->s), $2->type, v2);
          specificTypeCheck($2->type, "Numeric", "++");
        }
;
pre_decrement_expression:
  TOK_4545 unary_expression		%prec PREDEC {
          string offset = to_string(lookupOffset(string($2->s)));
          string v1 = "*(%rbp - " + offset + ")";
          pushInstruction("dec", v1, "_", "_");
          string v2 = storeTemp("_", v1, "_");
          // pushInstructionWithType("-", $2->v, "1", $2->v, $2->type, $2->type);
          copyData(&$$, "--" + string($2->s), $2->type, v2);
          specificTypeCheck($2->type, "Numeric", "++");
        }
;
unary_expression_not_plus_minus:
  postfix_expression
| TOK_126 unary_expression 	    {
          string v = storeTemp("~", $2->v);
          copyData(&$$, "~" + string($2->s), $2->type, v);
          specificTypeCheck($2->type, "boolean", "~");
        }
| TOK_33 unary_expression		    {
          string v = storeTemp("!", $2->v);
          copyData(&$$, "!" + string($2->s), $2->type, v);
          specificTypeCheck($2->type, "boolean", "!");
        }
| cast_expression
| switch_expression
;
postfix_expression:
  primary
| un_name
| post_increment_expression
| post_decrement_expression
;
post_increment_expression:
  postfix_expression TOK_4343	  %prec POSTINC {
          // string v = storeTemp("_", $1->v, "_");
          copyData(&$$, string($1->s) + "++", $1->type, $1->v);
          string offset = to_string(lookupOffset(string($1->s)));
          string v2 = "*(%rbp - " + offset + ")";
          pushInstruction("inc", v2, "_", "_");
          specificTypeCheck($1->type, "Numeric", "++");
        }
;
post_decrement_expression:
  postfix_expression TOK_4545		%prec POSTDEC {
          // string v = storeTemp("_", $1->v, "_");
          copyData(&$$, string($1->s) + "--", $1->type, $1->v);
          string offset = to_string(lookupOffset(string($1->s)));
          string v2 = "*(%rbp - " + offset + ")";
          pushInstruction("dec", v2, "_", "_");
          specificTypeCheck($1->type, "Numeric", "--");
        }
;
cast_expression:
  TOK_40 primitive_type TOK_41 unary_expression	  %prec CAST  {
          string v = storeTemp("(" + string($2->s) + ")", $4->v);
          copyData(&$$, "(" + string($2->s) + ")" + string($4->s), $2->s, v);
          if (string($2->s) == "boolean") {
            specificTypeCheck($4->type, "boolean", "cast");
          } else {
            specificTypeCheck($4->type, "Numeric", "cast");
          }
        }
;
switch_expression:
  TOK_switch TOK_40 expression TOK_41 switch_block  %prec SWITCH {
          copyData(&$$, "switch (" + string($3->s) + ") " + string($5->s), $5->type);
          // checkSwitch($3->type);
        }
;

%%


/* EPILOGUE */

void yyerror(char const *s){
	printf("Error in line %d: %s\n", yylineno, s);
}

void createTable(string name, int class_table, string parent_class, int method_table, bool link) {
  if (create_new_table) {
    struct local_symbol_table lst;
    lst.parent = cur_table_idx;
    lst.name = name;
    lst.class_table = class_table;
    lst.parent_class = parent_class;
    lst.method_table = method_table;
    if (link) {
      symbol_table[cur_table_idx].table[name].table_idx = symbol_table.size();
    }
    symbol_table.push_back(lst);
    cur_table_idx = symbol_table.size() - 1;
  }
  create_new_table = true;
}

void addLibrarySupport() {
  // add String class to symbol table
  struct info i1 = createInfo("", "class", 0, 0, 0, unordered_set<string>(), symbol_table.size());
  insertSymbol("String", &i1);
  struct info i2 = createInfo("", "class", 0, 0, 0, unordered_set<string>(), symbol_table.size());
  insertSymbol("System", &i2);
}

struct info createInfo(string type, string kind, int size, int offset, int line_no, unordered_set<string> modifier, int table_idx) {
  struct info i = {type, kind, size, offset, line_no, modifier, table_idx};
  return i;
}

void insertSymbol(string symbol, struct info *i) {
  if (symbol_table[cur_table_idx].table.find(symbol) == symbol_table[cur_table_idx].table.end()) {
    symbol_table[cur_table_idx].table[symbol] = *i;
  } else {
    cout << "Error at line no " << yylineno << ": " << symbol << " already declared in this scope\n";
  }
}
string getCurClass(){
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].class_table) {
      return symbol_table[i].name;
    }
    i = symbol_table[i].parent;
  }
  return symbol_table[cur_table_idx].name;
}
int getCurSize() {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      return symbol_table[i].size;
    }
    i = symbol_table[i].parent;
  }
  return symbol_table[cur_table_idx].size;
}

void updateSize(int sz) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      symbol_table[i].size += sz;
      return;
    }
    i = symbol_table[i].parent;
  }
  symbol_table[cur_table_idx].size += sz;
}

void checkDeclaration(string symbol) {
  int i = cur_table_idx;
  if (ignoreDeclaration) {
    return;
  }
  while (i != -1) {
    if (symbol_table[i].method_table) {
      for (int j = 0; j < symbol_table[i].parameters.size(); j++) {
        if (symbol_table[i].parameters[j].first == symbol) {
          return;
        }
      }
    }
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return;
    }
    i = symbol_table[i].parent;
  }
  cout << "Error at line no " << yylineno << ": Undeclared variable " << symbol << endl;
}

string lookupType(string symbol) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      for (int j = 0; j < symbol_table[i].parameters.size(); j++) {
        if (symbol_table[i].parameters[j].first == symbol) {
          return symbol_table[i].parameters[j].second.type;
        }
      }
    }
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return symbol_table[i].table[symbol].type;
    }
    i = symbol_table[i].parent;
  }
  return "";
}

int lookupOffset(string symbol) {
  int i = cur_table_idx;
  while (i != -1) {
    if (symbol_table[i].method_table) {
      for (int j = 0; j < symbol_table[i].parameters.size(); j++) {
        if (symbol_table[i].parameters[j].first == symbol) {
          return symbol_table[i].parameters[j].second.offset;
        }
      }
    }
    if (symbol_table[i].table.find(symbol) != symbol_table[i].table.end()) {
      return symbol_table[i].table[symbol].offset;
    }
    i = symbol_table[i].parent;
  }
  return 0;
}

int getType(string type) {
  if (type == "byte" || type == "short" || type == "int" || type == "long" || type == "char") {
    // Numeric type - type ok -> need casting if different types
    return 1;
  } else if (type == "float" || type == "double") {
    return 2;
  } else if (type == "boolean") {
    return 3;
  } else if (type == "String" || type == "TextBlock") {
    return 4;
  } else if (type == "void") {
    return 5;
  } else if (type == "reference") {
    return 6;
  } else if (type == "null") {
    return 7;
  } else if (type == "class") {
    return 8;
  } else {
    return 9;
  }
}

string getFinalType(string type1, string type2) {
  int t1 = getType(type1), t2 = getType(type2);
  if (t1 == 2 || t2 == 2) {
    return "double";
  }
  return "int";
}

void typeCheck(string type1, string type2) {
  if (type1.find('.') != string::npos)
    type1 = getFieldVariableType(type1);
  if (type2.find('.') != string::npos)
    type2 = getFieldVariableType(type2);
  int t1 = getType(type1), t2 = getType(type2);
  if ((t1 == 1 || t1 == 2) && (t2 == 1 || t2 == 2)) {
    return;
  }
  if (t1 != t2) {
    cout << "Error at line no " << yylineno << ": Type mismatch between " << type1 << " and " << type2 << endl;
  }
}

void specificTypeCheck(string type, string target, string op = "") {
  if (type.find('.') != string::npos)
    type = getFieldVariableType(type);
  int t1 = getType(type), t2 = getType(target);
  if (target == "Numeric") {
    if (t1 != 1 && t1 != 2) {
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  } else {
    if (t1 != t2) {
      if (op == "")
        cout << "Error at line no " << yylineno << ": Type mismatch between " << type << " and " << target << endl;
      else if (op == "array index")
        cout << "Error at line no " << yylineno << ": Array index must be of type int, found " << type << endl;
      else if (op == "condition")
        cout << "Error at line no " << yylineno << ": Condition must be of type boolean, found " << type << endl;
      else
        cout << "Error at line no " << yylineno << ": Incompatible operator " << op << " with operand of type " << type << endl;
    }
  }
}

void dump_table(string filename, vector<int> &table_ids, map<int,int> &scope) {
  ofstream fout(filename);
  if (symbol_table[table_ids[0]].class_table) {
    fout << "Class: " << symbol_table[table_ids[0]].name << endl;
    fout << "Parent Class: " << symbol_table[table_ids[0]].parent_class << endl << endl;
  } else if (symbol_table[table_ids[0]].method_table) {
    fout << "Method: " << symbol_table[table_ids[0]].name << endl;
    fout << "Return Type: " << symbol_table[table_ids[0]].return_type << endl;
    fout << "Parameters: ";
    for (auto it = symbol_table[table_ids[0]].parameters.begin(); it != symbol_table[table_ids[0]].parameters.end(); it++) {
      fout << it->first << " (type: " << it->second.type << "), ";
    }
    fout << endl << endl;
  } else {
    fout << "Global Symbol Table" << endl;
    fout << "Package Name: " << package_name << endl;
    fout << "Imports: ";
    for (auto it = import_list.begin(); it != import_list.end(); it++) {
      fout << '"' << *it << "\", ";
    }
    fout << endl << endl;
  }
  fout << "Symbol Name,Type,Kind,Size,Offset,Line Number,Modifier,Scope" << endl;
  for (int j = 0; j < table_ids.size(); j++) {
    for (auto it = symbol_table[table_ids[j]].table.begin(); it != symbol_table[table_ids[j]].table.end(); it++) {
      fout << it->first << "," << it->second.type << "," << it->second.kind << "," << it->second.size << "," << it->second.offset << "," << it->second.line_no <<  ",";
      for (auto it2 = it->second.modifier.begin(); it2 != it->second.modifier.end(); it2++) {
        fout << *it2 << " ";
      }
      fout << "," << scope[table_ids[j]] << endl;
    }
  }
  fout.close();
}

void print_symbol_table() {
  vector<int> global_st = {0};
  vector<int> class_st;
  vector<vector<int>> method_st;
  map<int,int> scope;
  int cur_scope = 1;
  for (int i = 1; i < symbol_table.size(); i++) {
    if (symbol_table[i].class_table == 1) {
      class_st.push_back(i);
    } else if (symbol_table[i].method_table == 1) {
      vector<int> temp;
      temp.push_back(i);
      method_st.push_back(temp);
    } else {
      method_st[method_st.size() - 1].push_back(i);
      scope[i] = cur_scope;
      cur_scope++;
    }
  }
  string filename = "symbol_tables\\st_global.csv";
  dump_table(filename, global_st, scope);
  for (int i = 0; i < class_st.size(); i++) {
    string filename = "symbol_tables\\st_class_" + symbol_table[class_st[i]].name + ".csv";
    vector<int> temp = {class_st[i]};
    dump_table(filename, temp, scope);
  }
  for (int i = 0; i < method_st.size(); i++) {
    string filename = "symbol_tables\\st_method_" + symbol_table[method_st[i][0]].name + ".csv";
    dump_table(filename, method_st[i], scope);
  }
  cout << "Symbol tables generated" << endl;
}

void copyString(char **c, string s) {
  // remove *c if already allocated
  *c = new char[s.length() + 1];
  strcpy(*c, s.c_str());
}

void copyData(struct expr **c, string s, string type, string v) {
  *c = new struct expr;
  copyString(&(*c)->s, s);
  copyString(&(*c)->type, type);
  copyString(&(*c)->v, v);
}

void checkReturnType(string type) {
  int i = cur_table_idx;
  string return_type = "";
  while (i != -1) {
    if (symbol_table[i].method_table) {
      return_type = symbol_table[i].return_type;
      break;
    }
    i = symbol_table[i].parent;
  }
  int t1 = getType(type), t2 = getType(return_type);
  if (t1 != t2) {
    cout << "Error at line no " << yylineno << ": Return type mismatch, expected " << return_type << " found " << type << endl;
  }
}

int get_index(string type){
  for(int i=0;i<symbol_table.size();i++){
    string tmp;
    if (symbol_table[i].method_table) {
      tmp = symbol_table[symbol_table[i].parent].name + "." + symbol_table[i].name;
    }else{
      tmp=symbol_table[i].name;
    }
    if(tmp == type)
      return i;
  }
  return -1;
}

int get_meth(string method_name){

  if (method_name == "System.out.println") {
    return -1;
  }
  int l=1;
  for(int i=0;i<method_name.length();i++){
    if(method_name[i]=='.'){
      l++;
    }
  }
  int i = cur_table_idx;
  // cout<<i;
  if(l==1){
    while(symbol_table[i].class_table ==0)i=symbol_table[i].parent;
    method_name = symbol_table[i].name + "." + method_name;
  }
  // while (i != -1) {
  //   if (symbol_table[i].method_table) {
  //     if (symbol_table[i].name == method_name) {
  //       return i;
  //     }
  //   } else if (symbol_table[i].class_table) {
  //     if (symbol_table[i].table.find(method_name) != symbol_table[i].table.end()) {
  //       i = symbol_table[i].table[method_name].table_idx;
  //       continue;
  //     }
  //   }
  //   i = symbol_table[i].parent;
  // }

  i=get_index(method_name);
  if (i == -1) {
    cout << "Error at line no " << yylineno << ": Method " << method_name << " not found" << endl;
    return -1;
  }
  return i;
}

int checkMethodArgs(string method_name, string args) {
  // cout<<args<<endl;
  vector<string> params_list;
  int i = get_meth(method_name);
  if (method_name == "System.out.println") {
    return 1;
  }
  if(i<0) return 0;
  for (auto it = symbol_table[i].parameters.begin(); it != symbol_table[i].parameters.end(); it++) {
    params_list.push_back(it->second.type);
  }

  vector<string> args_list;
  string temp = "";
  for (int i = 0; i < args.length(); i++) {
    if (args[i] == ',') {
      args_list.push_back(temp);
      temp = "";
    } else {
      temp += args[i];
    }
  }
  args_list.push_back(temp);
  if (params_list.size() != args_list.size()) {
    cout << "Error at line no " << yylineno << ": Number of arguments mismatch, expected " << params_list.size() << ", found " << args_list.size() << endl;
    return 0;
  }
  for (int i = 0; i < params_list.size(); i++) {
    int t1 = getType(params_list[i]), t2 = getType(args_list[i]);
    if (t1 != t2) {
      cout << "Error at line no " << yylineno << ": Argument type mismatch, expected argument " << i+1 << " to be of type " << params_list[i] << ", found " << args_list[i] << endl;
    }
  }
  return args_list.size();
}

string call_procedure(struct expr* method_name, struct expr* args){
  string meth = method_name->s;
  int arg_cnt = checkMethodArgs(meth, args->type);
  int ret_size=0;
  // int i =get_meth(method_name->type);
  // if(i<0){
  //   cout<<"unknown method "+lookupType(meth)<<endl;
  //   return "";
  // }
  int meth_i = get_meth(meth);
  string meth_ret_type = "";
  if(meth_i>-1){
    meth_ret_type = symbol_table[meth_i].return_type;
  }
  if(size_map.find(meth_ret_type)!=size_map.end()){
    ret_size=size_map[meth_ret_type];
  }
  // if(ret_size) pushInstruction("-", "%rsp", to_string(ret_size), "%rsp");
  string temp = "";
  string args_v(args->v);
  // vector<string> args_reg = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9"};
  // int reg_cnt = 0;
  string v = "";

  vector<string> callee_regs = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9", "%r10", "%r11"};
  for(int i=0;i<8;i++){
    pushInstruction("push", callee_regs[i], "_", "_");
  }
  int stk=0;
  if (meth == "System.out.println") {
    meth = "printf@PLT";
    pushInstruction("_", args_v, "_", "%rsi");
    pushInstruction("leaq", ".LC0(%rip)", "_", "%rdi");
    pushInstruction("_", "0", "_", "%rax");
  } else {
    // pushInstruction("_", temp, "_", args_reg[reg_cnt++]);
    if(args_v!=""){
      int pus_c = 1+count(args_v.begin(),args_v.end(),',');
      if(pus_c%2!=0){
        pushInstruction("-", "%rsp", "$8", "%rsp");
        stk+=8;
      }
      for (int i = 0; i < args_v.length(); i++) {
        if (args_v[i] == ',') {
          pushInstruction("push", temp, "_", "_");
          stk+=8;
          temp = "";
        } else {
          temp += args_v[i];
        }
      }
      stk+=8;
      pushInstruction("push", temp, "_", "_");
    }

    meth = symbol_table[symbol_table[meth_i].parent].name + "." + symbol_table[meth_i].name;
  }


  if (ret_size == 0)
    pushInstruction("call", meth, to_string(arg_cnt), "_");
  else{
    pushInstruction("call", meth, to_string(arg_cnt), "_");
    // pushInstruction("+", "%rsp", to_string(ret_size), "%rsp");
  }
  if(stk!=0){
    pushInstruction("+", "%rsp", to_string(stk), "%rsp");
  }
  for(int i=7;i>-1;i--){
    pushInstruction("pop", callee_regs[i], "_", "_");
  }
  if(ret_size!=0){
    v = "t" + to_string(tmp_count++);
    pushInstruction("_", "\%rax", "_", v);
  }
  return v;
}
vector<string> get_arrayVec(string s){
  int n=s.length();
  vector<string> ans;
  string temp="";
  for(int i=0;i<n;i++){
    if(s[i]==','&&temp!=""){
      ans.push_back(temp);
      temp="";
    }else if('0'<=s[i]&&s[i]<='9'){
      temp+=s[i];
    }
  }
  if(temp!="")ans.push_back(temp);
  return ans;
}
int getArraySize(string type) {
  int i = 0, sz = 1;
  if (type.size() == 0) {
    return 0;
  }
  if (type[type.size()-1] == '}') {
    for (int i = 0; i < type.length(); i++) {
      if (type[i] == ',') {
        sz++;
      }
    }
  }
  else {
    while (i < type.length()) {
      while (type[i] != '[') {
        i++;
      }
      string size = "";
      i++;
      while (type[i] != ']') {
        size += type[i];
        i++;
      }
      i++;
      sz *= (size.length()==0)?0:stoi(size);
    }
  }
  return sz;
}

string getFieldVariableType(string field) {
  vector<string> loc;
  string tmp = "";
  for (int i = 0; i < field.length(); i++) {
    if (field[i] == '.') {
      loc.push_back(tmp);
      tmp = "";
    } else {
      tmp += field[i];
    }
  }
  loc.push_back(tmp);
  if (loc[0] == "this") {
    int i = cur_table_idx;
    while (i != -1) {
      if (symbol_table[i].class_table) {
        loc[0] = symbol_table[i].name;
        break;
      }
      i = symbol_table[i].parent;
    }
  } else {
    loc[0] = lookupType(loc[0]);
  }
  int i = 0, j = 0;
  while (true) {
    if (symbol_table[i].table.find(loc[j]) != symbol_table[i].table.end()) {
      if (j == loc.size()-1) {
        return symbol_table[i].table[loc[j]].type;
      } else {
        i = symbol_table[i].table[loc[j]].table_idx;
        j++;
      }
    } else {
      cout << "Error at line no " << yylineno << ": " << field << " not found" << endl;
      break;
    }
  }
  return "unknown type";
}

string storeTemp(string op, string arg1, string arg2) {
  string temp_var = "t" + to_string(tmp_count++);
  pushInstruction(op, arg1, arg2, temp_var);
  return temp_var;
}

string storeTempWithType(string op, string arg1, string arg2, string type1, string type2) {
  string temp_var = "t" + to_string(tmp_count++);
  int t1 = getType(type1), t2 = getType(type2);
  if (t1 == 1 && t2 == 1) {
    pushInstruction(op + "int", arg1, arg2, temp_var);
  } else if (t1 == 2 && t2 == 2) {
    pushInstruction(op + "float", arg1, arg2, temp_var);
  } else if (t1 == 1 && t2 == 2) {
    string temp_var_1 = storeTemp("(float)", arg1, "_");
    pushInstruction(op + "float", temp_var_1, arg2, temp_var);
  } else if (t1 == 2 && t2 == 1) {
    string temp_var_1 = storeTemp("(float)", arg2, "_");
    pushInstruction(op + "float", arg1, temp_var_1, temp_var);
  } else {
    pushInstruction(op, arg1, arg2, temp_var);
  }
  return temp_var;
}

void pushInstruction(string op, string arg1, string arg2, string result) {
  vector<string> temp = {op, arg1, arg2, result};
  if (cur_method != -1) {
    if (!addToTemp) {
      tac_code[cur_method].second.push_back(temp);
    } else {
      temp_code.top().push_back(temp);
    }
  }
}

void pushInstructionWithType(string op, string arg1, string arg2, string result, string type1, string type2) {
  vector<string> temp = {op, arg1, arg2, result};
  if (cur_method == -1) {
    return;
  }
  if (op == "_" && arg2 == "_") {
    int t1 = getType(type1), t2 = getType(type2);
    if (t1 == 1 && t2 == 2) {
      string temp_var_1 = storeTemp("(int)", arg1, "_");
      temp[1] = temp_var_1;
    } else if (t1 == 2 && t2 == 1) {
      string temp_var_1 = storeTemp("(float)", arg1, "_");
      temp[1] = temp_var_1;
    }
  } else if (op == "+" || op == "-" || op == "*" || op == "/") {
    temp[0] = op + type1;
  }
  if (!addToTemp) {
    tac_code[cur_method].second.push_back(temp);
  } else {
    temp_code.top().push_back(temp);
  }
}

void checkAndPushInstruction(string op, string arg1, string arg2, string result, int mode) {
  vector<string> temp = {op, arg1, arg2, result};
  vector<string> temp2 = tac_code[cur_method].second[tac_code[cur_method].second.size()-1];
  if (mode == 1) {
    tac_code[cur_method].second.pop_back();
    tac_code[cur_method].second.push_back(temp);
    tac_code[cur_method].second.push_back(temp2);
  } else {
    tac_code[cur_method].second.push_back(temp);
  }
}

void popLastInstruction() {
  tac_code[cur_method].second.pop_back();
}

void pushTempCode() {
  vector<vector<string>> temp = temp_code.top();
  temp_code.pop();
  for (int i = 0; i < temp.size(); i++) {
    tac_code[cur_method].second.push_back(temp[i]);
  }
}

void optimizeTAC() {
  // remove redundant labels
  for (int i = 0; i < tac_code.size(); i++) {
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      // remove consecutive gotos
      if (tac_code[i].second[j][0] == "goto") {
        int k = j+1;
        if (k < tac_code[i].second.size() && tac_code[i].second[k][0] == "goto") {
          tac_code[i].second.erase(tac_code[i].second.begin()+k);
        }
      }
      if (tac_code[i].second[j][0] == "label") {
        int k = j+1;
        while (k < tac_code[i].second.size() && tac_code[i].second[k][0] == "label") {
          for (int l = 0; l < tac_code[i].second.size(); l++) {
            int sz = tac_code[i].second[l][0].size();
            if (sz >= 4) {
              string last4 = tac_code[i].second[l][0].substr(sz-4, sz);
              if (last4 == "goto" && tac_code[i].second[l][3] == tac_code[i].second[k][3])
                tac_code[i].second[l][3] = tac_code[i].second[j][3];
            }
          }
          tac_code[i].second.erase(tac_code[i].second.begin()+k);
        }
      }
    }

    unordered_set<string> used_labels;
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      // add used labels to set
      int sz = tac_code[i].second[j][0].size();
      if (sz >= 4) {
        string last4 = tac_code[i].second[j][0].substr(sz-4, sz);
        if (last4 == "goto") {
          used_labels.insert(tac_code[i].second[j][3]);
        }
      }
    }

    // remove labels that are not used
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      if (tac_code[i].second[j][0] == "label" && used_labels.find(tac_code[i].second[j][3]) == used_labels.end()) {
        tac_code[i].second.erase(tac_code[i].second.begin()+j);
        j--;
      }
    }

    // remove unused temporary variables
    unordered_set<string> usedTemp;
    for (int j = tac_code[i].second.size()-1; j >= 0; j--) {
      string var = tac_code[i].second[j][3];
      if (var.size() >= 2 && var[0] == 't' && var[1] <= '9' &&
          var[1] >= '0' && usedTemp.find(var) == usedTemp.end() &&
          tac_code[i].second[j][0] != "call") {
        tac_code[i].second.erase(tac_code[i].second.begin()+j);
        continue;
      }
      usedTemp.insert(tac_code[i].second[j][1]);
      usedTemp.insert(tac_code[i].second[j][2]);
    }
  }
}

// 3AC forms -
// 1d. x = y               => <_, y, _, x>
// 2d. x = op y            => <op, y, _, x>
// 3d. x = y op z          => <op, y, z, x>
// 4d. L:                  => <label, _, _, L>
// 5d. goto L              => <goto, _, _, L>
// 6d. if x goto L         => <if goto, x, _, L>
// 7n. if x relop y goto L => <if relop goto, x, y, L>
// 8n. parampush x         => <param, x, _, _>
// 9d. call p, n           => <call, p, n, _>
// 10d. y = call p, n      => <call, p, n, y>
// 11d. return y           => <return, y, _, _>
// 12n. x = y[i]           => <[] rhs, y, i, x>
// 13n. x[i] = y           => <[] lhs, y, i, x>
// 14n. x = &y             => <&, y, _, x>
// 15d. x = *y             => <* rhs, y, _, x>
// 16d. *x = y             => <* lhs, y, _, x>
// 17d. push r             => <push, r, _, _>
// 18d. ret                => <ret,_,_,_>
// 19.  pop                 => <pop, r, _, _>
// 19.  inc x              => <inc, x, _, _>

void dump3AC_pre(ofstream &fout, int i){
  // fout << "\tpush %rbp" << endl;
  // fout << "\t%rbp = %rsp" << endl;
  int cnt = 0;

  tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"push", "%rbp", "_", "_"});
  tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"_", "%rsp", "_", "%rbp"});
  cnt++;
  int of_d=8;
  int n = methods[i].second.size();
  int of_s = 8+8*n;
  for(int j=0;j<n;j++){
    // struct expr *ep=methods[i].second[j];
    // int x=of;
    // if(size_map.find(ep->type)!=size_map.end()){
    //   of+=size_map[ep->type];
      // tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"-", "%rsp", to_string(size_map[ep->type]), "%rsp"});
      // fout<<"\t%rsp -= "<<size_map[ep->type]<<endl;
    // }
    // fout<<"\t"<<ep->s<<" = +"<<of<<"(%rbp)"<<endl;
    // tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"* lhs", args_reg[j], "_", "(%rbp - " + to_string(x) + ")"});
    // tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"pop", "(%rbp - " + to_string(x) + ")", "_", "_"});

    tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"* rhs", "(%rbp + " + to_string(of_s-8*j) + ")", "_", "%rax"});
    tac_code[i].second.insert(tac_code[i].second.begin() + cnt++, {"* lhs", "%rax", "_", "(%rbp - " + to_string(of_d+8*j) + ")"});
    // fout<<"\t*(%rbp - "<<x-4<<") = *(%rbp + "<<of<<")"<<endl;
    // cout<<ep->type;
  }
  // vector<string> args_reg = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9"};
}

void dump3AC_post(ofstream &fout, int i,int j, string ret){
  int of=4;
  for(int j=methods[i].second.size()-1;j>-1;j--){
    struct expr *ep=methods[i].second[j];
    if(size_map.find(ep->type)!=size_map.end()){
      of+=size_map[ep->type];
    }
  }
  int tmp=of;
  string ret_type=methods[i].first;
  if(size_map.find(ret_type)!=size_map.end()){
    // cout<<ret_type;
    of+=size_map[ret_type];
  }
  tac_code[i].second.insert(tac_code[i].second.begin()+j+1,{"ret", "_", "_", "_"});
  if(ret!=""){
    tac_code[i].second.insert(tac_code[i].second.begin()+j+1,{"_", ret, "_", "%rax"});
    // fout<<"*(%rbp + "<<of<<") = "<<ret<<endl<<"\t";
  }
  // tac_code[i].second.push_back({"+", "%rbp", to_string(tmp), "%rsp"});
  // tac_code[i].second.push_back({"* rhs", "(%rbp + 4)", "_", "%rbp"});

  // fout<<"%rsp = %rbp + "<<tmp<<endl;
  // fout<<"\t%rbp = *(%rbp + 4)"<<endl;
  // fout<<"\tret"<<endl;

}

void dump3AC() {
  // optimizeTAC();
  ofstream fout("3AC.txt");

  for (int i = 0; i < tac_code.size(); i++) {
    string method = tac_code[i].first;
    fout << method << ":" << endl;
    fout << "\tbeginfunc" << endl;
    dump3AC_pre(fout,i);
    if (tac_code[i].second.size() == 0 || tac_code[i].second[tac_code[i].second.size()-1][0] != "return") {
      // dump3AC_post(fout,i,"");
      tac_code[i].second.push_back({"return","","_","_"});
    }
    for (int j = 0; j < tac_code[i].second.size(); j++) {
      vector<string> ins = tac_code[i].second[j];
      // if (ins[0] == "return") {
      //   continue;
      // }
      fout << "\t";
      if (ins[0] == "label")
        fout << ins[3] << ":";
      else if (ins[0] == "goto")
        fout << "goto " << ins[3];
      else if (ins[0] == "if goto")
        fout << "if " << ins[1] << " goto " << ins[3];
      else if (ins[0].size() > 7 && ins[0].substr(0, 1) == "if" && ins[0].substr(ins[0].size()-4, 4) == "goto")
        fout << "if " << ins[1] << " " << ins[0].substr(2, ins[0].size()-6) << " " << ins[2] << " goto " << ins[3];
      else if (ins[0] == "param")
        fout << "param " << ins[1];
      else if (ins[0] == "call") {
        if (ins[1] == "System.out.println") {
          ins[1] = "print";
        }
        if (ins[3] == "_")
          fout << "call " << ins[1] << " " << ins[2];
        else
          fout << ins[3] << " = call " << ins[1] << " " << ins[2];
      } else if(ins[0] == "push")
        fout << "push "<< ins[1];
      else if (ins[0] == "return")
        dump3AC_post(fout,i,j,ins[1]);
      else if (ins[0] == "[] rhs")
        fout << ins[3] << " = " << ins[1] << "[" << ins[2] << "]";
      else if (ins[0] == "[] lhs")
        fout << ins[3] << "[" << ins[2] << "] = " << ins[1];
      else if (ins[0] == "&")
        fout << ins[3] << " = &" << ins[1];
      else if (ins[0] == "inc")
        fout << ins[1] << " = " << ins[1] << " + 1";
      else if (ins[0] == "dec")
        fout << ins[1] << " = " << ins[1] << " - 1";
      else if (ins[0] == "* rhs") {
        if (ins[2] == "_")
          fout << ins[3] << " = *" << ins[1];
        else
          fout << ins[3] << " = *(" << ins[1] << " + " << ins[2] << ")";
      }
      else if (ins[0] == "* lhs") {
        if (ins[2] == "_")
          fout << "*" << ins[3] << " = " << ins[1];
        else
          fout << "*(" << ins[3] << " + " << ins[2] << ") = " << ins[1];
      }
      else if (ins[0] == "_")
        fout << ins[3] << " = " << ins[1];
      else if (ins[0] == "ret")
        fout << "ret";
      else {
        if (ins[2] == "_")
          fout << ins[3] << " = " << ins[0] << " " << ins[1];
        else
          fout << ins[3] << " = " << ins[1] << " " << ins[0] << " " << ins[2];
      }
      fout << endl;
    }
    fout << "\tendfunc\n" << endl;
  }
  fout.close();
  cout << "3AC generated" << endl;
}

void updateOperands(vector<string> &ins) {
  for (int i = 0; i < 4; i++) {
    if (ins[i].size() == 0 || ins[i] == "_")
      continue;
    if (ins[i][0] <= '9' && ins[i][0] >= '0') {
      // constant: 9 -> $9
      ins[i] = "$" + ins[i];
    }
    else if(ins[i]=="true"){
      ins[i]="$1";
    }else if(ins[i]=="false"){
      ins[i]="$0";
    }
    else if (ins[i][0] == '(' || (ins[i].size() >= 2 && ins[i].substr(0, 2) == "*(")) {
      // address: (a + 4) -> 4(a)
      string base_addr = "", offset = "";
      bool is_base_addr = true;
      int j = ins[i].find('(') + 1;
      for (; j < ins[i].size()-1; j++) {
        if (ins[i][j] == ' ')
          continue;
        if (ins[i][j] == '+' || ins[i][j] == '-') {
          is_base_addr = false;
          offset += ins[i][j];
          continue;
        }
        if (is_base_addr) {
          base_addr += ins[i][j];
        } else {
          offset += ins[i][j];
        }
      }
      ins[i] = offset + "(" + base_addr + ")";
    }else{
      for(auto s:global_variables){
        if(s==ins[i]){
          ins[i] = ins[i] + "(%rip)";
        }
      }
    }
  }
}
pair<string,string> par(string i){
  pair<string,string> p;
  string temp="";
  int e=0;
  int n=i.length();
  while(e<n&&i[e]!='('){
    temp+=i[e];
    e++;
  }
  p.first=temp;
  temp="";
  bool f=false;

  for(int e=0;e<n;e++){
    if(i[e]!=','&&f){
      temp+=i[e];
    }
    if(i[e]==','){
      f=!f;
    }
  }
  p.second=temp;
  return p;
}
void updateRegisters() {
  vector<string> regs={"%rsi","%rdi","%rdx","%rcx","%r8","%r9","%r10","%r11"};
  vector<string> occupied(8,"");
  map<string,string> m;
  for (auto &method : tac_code) {
    for (int i = 0; i < method.second.size(); i++) {
      vector<string> itr = method.second[i];
      for(int j=0;j<4;j++){
        string ib= itr[j];
        pair<string,string> p=par(ib);
        if(p.second!=""){
          itr[j]=p.second;
        }
        if(itr[j][0]=='t'&&itr[j]!="true"){
          if(m.find(itr[j])==m.end()){
            int k=0;
            while(occupied[k]!="")k++;
            occupied[k]=itr[j];
            m[itr[j]]=regs[k];
            method.second[i][j]=regs[k];
          }else{
            method.second[i][j]=m[itr[j]];
          }
          if(p.second!=""){
            method.second[i][j]=p.first+"(%rbp,"+method.second[i][j]+",8)";
          }
        }
      }
      for(int j=0;j<8;j++){
        if(occupied[j]=="")continue;
        bool f=false;
        for(int k=i+1;!f&&k<method.second.size();k++){
          vector<string> itr = method.second[k];
          for(int l=0;!f&&l<4;l++){
            string ib= itr[l];
            pair<string,string> p=par(ib);
            if(p.second!=""){
              itr[l]=p.second;
            }
            if(itr[l]==occupied[j]){
              f=true;
            }
          }
        }
        if(!f){
          occupied[j]="";
        }
      }

    }
  }

}

void allocate_regs(vector<vector<string>> &ins) {
  vector<string> callee_regs = {"%rdi", "%rsi", "%rdx", "%rcx", "%r8", "%r9", "%r10", "%r11"};
  map<string, int> reg_to_regid;
  set<int> avl_callee_regs;
  for (int i = 0; i < 8; i++) {
    avl_callee_regs.insert(i);
    reg_to_regid[callee_regs[i]] = i;
  }
  map<string, int> last_line_used, reg_map;
  map<int, string> reg_to_var;
  vector<int> last_used(8, -1);
  map<string, int> offset;
  vector<int> deallocate_regs, args_reg_used;
  int used_mem = 0;
  int ins_added = 0;

  // store the last line in which each temp variable was used
  for (int i = 0; i < ins.size(); i++) {
    for (int j = 0; j < 3; j++) {
      if (ins[i][j].size() > 0 && ins[i][j][0] == 't' && ins[i][j] != "true") {
        last_line_used[ins[i][j]] = i;
      }
    }
  }

  for (int i = 0; i < ins.size(); i++) {
    if (ins[i][0] == "call") {
      stack<string> saved_regs;
      // save used callee registers in the stack those are not presents in args
      // for (int j = 0; j < 8; j++) {
      //   if (avl_callee_regs.find(j) == avl_callee_regs.end()) {
      //     if (find(args_reg_used.begin(), args_reg_used.end(), j) == args_reg_used.end()) {
      //       ins.insert(ins.begin() + i++, {"pushq", callee_regs[j], "_", "_"});
      //       saved_regs.push(callee_regs[j]);
      //     }
      //   }
      // }
      // i++;
      // // load the saved registers
      // while (!saved_regs.empty()) {
      //   ins.insert(ins.begin() + i++, {"popq", saved_regs.top(), "_", "_"});
      //   saved_regs.pop();
      // }
      // i--;

      // clear the registers used as arguments
      for (auto reg : args_reg_used) {
        deallocate_regs.push_back(reg);
      }
      args_reg_used.clear();
    }

    // free registers that are not used anymore
    for (auto reg : deallocate_regs) {
      avl_callee_regs.insert(reg);
      reg_to_var.erase(reg);
      last_used[reg] = -1;
      // cout << "Freed " << callee_regs[reg] << endl;
    }
    deallocate_regs.clear();

    // print current instruction
    // for (int j = 0; j < 4; j++) {
    //   cout << ins[i][j] << ",";
    // }
    // cout << endl;

    // update temp variables with their registers
    for (int j = 3; j >= 1; j--) {
      if (ins[i][j] == "true" || (ins[i][j][0] != 't' && ins[i][j][0] != '%')) {
        continue;
      }
      if (ins[i][j][0] == '%') {
        if (ins[i][j] == "%rbp" || ins[i][j] == "%rsp" || ins[i][j] == "%rax") {
          continue;
        }
        // allocate new register for temp variable which was saved in
        // other register (other register now being used for passing args)
        int reg = reg_to_regid[ins[i][j]];
        args_reg_used.push_back(reg);
        if (avl_callee_regs.count(reg) == 0) {
          // save the reg value to new register
          int new_reg = *avl_callee_regs.begin();
          avl_callee_regs.erase(new_reg);
          ins.insert(ins.begin() + i++, {"_", callee_regs[reg], "_", callee_regs[new_reg]});
          ins_added++;
          string old_var = reg_to_var[reg];
          reg_map[old_var] = new_reg;
          reg_to_var[new_reg] = old_var;
          // cout << i << "," << j << ": Allocated " << callee_regs[new_reg] << " for " << old_var << endl;
        }
        continue;
      }

      // allocate new register for temp variable
      if (reg_map.find(ins[i][j]) == reg_map.end()) {
        // allocate a register
        if (avl_callee_regs.size() == 0) {
          cout << "Error: No registers available for storing " << ins[i][j] << endl;
          // save a register in the stack, and load it later
          // use the register that is not used for the longest time
          for (int k = 0; k < 8; k++) {
            cout << "Currently using reg " << callee_regs[k] << " for " << reg_to_var[k] << endl;
          }
          int reg = -1, max_last_used = 10000;
          for (int k = 0; k < 8; k++) {
            if (last_used[k] < max_last_used) {
              max_last_used = last_used[k];
              reg = k;
            }
          }
          // save the register in the stack
          cout << "Saving " << callee_regs[reg] << " in the stack" << endl;
          ins.insert(ins.begin() + i++, {"pushq", callee_regs[reg], "_", "_"});
          ins_added++;
          used_mem += 8;
          // make the register available
          avl_callee_regs.insert(reg);
          // update reg map
          reg_map[reg_to_var[reg]] = -1;
          for (auto it = offset.begin(); it != offset.end(); it++) {
            it->second += 8;
          }
          offset[reg_to_var[reg]] = 0;
        }
        int reg = *avl_callee_regs.begin();
        avl_callee_regs.erase(reg);
        reg_map[ins[i][j]] = reg;
        reg_to_var[reg] = ins[i][j];
        // cout << "Allocated " << callee_regs[reg] << " for " << ins[i][j] << endl;
      }
      else if (reg_map[ins[i][j]] == -1) {
        // register was allocated but later removed
        // load the value of temp var from the stack
        // and store it in a register
        cout << "Loading " << ins[i][j] << " from the stack" << endl;
        int reg = *avl_callee_regs.begin();
        avl_callee_regs.erase(reg);
        reg_map[ins[i][j]] = reg;
        reg_to_var[reg] = ins[i][j];

        // %reg := *(rsp + offset)
        ins.insert(ins.begin() + i++, {"_", "(%rsp + " + to_string(offset[ins[i][j]]) + ")", callee_regs[reg], "_"});
        ins_added++;
        offset.erase(ins[i][j]);

        if (offset.size() == 0) {
          // if no temp var is stored in stack
          ins.insert(ins.begin() + i++, {"+", to_string(used_mem), "%rsp", "%rsp"});
          ins_added++;
          used_mem = 0;
        }
      }

      // replace the temporary variable with the register
      string temp_var = ins[i][j];
      ins[i][j] = callee_regs[reg_map[ins[i][j]]];
      last_used[reg_map[temp_var]] = i;

      // add the register to deallocation list if it is not used later
      if (last_line_used[temp_var] + ins_added <= i) {
        int reg = reg_map[temp_var];
        deallocate_regs.push_back(reg);
      }
    }
  }
}

void gen_data(ofstream &fout){
  vector<int> class_st;
  int cur_scope = 1;
  for (int i = 1; i < symbol_table.size(); i++) {
    if (symbol_table[i].class_table == 1) {
      class_st.push_back(i);
    }
  }
  for(auto i:class_st){
    for(auto &symbol : symbol_table[i].table){
      string name = symbol_table[i].name + "." + symbol.first;
      struct info s_info = symbol.second;
      if(s_info.kind == "variable"){
        global_variables.push_back(name);
        fout << name << ":" << endl;
        fout << "\t.quad " << (s_info.val!=""?s_info.val:"0") <<endl;;
      }
    }
  }
}
void generateAssembly() {
  ofstream fout("out.s");
  // fout << "\t.section .rdata" << endl;
  // fout << "\t.text" << endl;
  fout << "\t.globl\tmain" << endl;
  fout << "\t.data" << endl;
  fout << ".LC0:" << endl;
  fout << "\t.string\t\"%d\\n\"" << endl;

  gen_data(fout);
  fout << "\t.text" << endl;
  updateRegisters();
  for (auto method : tac_code) {
    // process each method
    string method_name = method.first;

    int sz = method_name.size();
    if (method_name.size() >= 4 && method_name.substr(sz-4, 4) == "main") {
      method_name = "main";
    }
    fout << method_name << ":" << endl;

    // allocate_regs(method.second);
    for (int i = 0; i < method.second.size(); i++) {
      vector<string> itr = method.second[i];
      // process each instruction
      updateOperands(itr);

      // PROLOGUE and RETURN INSTRUCTIONS
      if (itr[0].size() >=4 && itr[0].substr(0,4) == "push") {
        // push to stack
        fout << "\tpushq\t" << itr[1] << endl;
      } else if (itr[0] == "pop") {
        // pop from stack
        fout << "\tpopq\t" << itr[1] << endl;
      } else if (itr[0] == "ret") {
        // return instruction
        fout << "\tleave" << endl;
        fout << "\tret" << endl;
      }

      // OPERATORS
      else if (itr[0] == "_" || itr[0] == "* lhs" || itr[0] == "* rhs") {
        // assignment - TODO: movq vs movl vs movb...
        fout << "\tmovq\t" << itr[1] << ", " << itr[3] << endl;
      } else if (itr[0][0] == '-' || itr[0][0] == '+') {
        // add or subtract
        string op = itr[0][0] == '-' ? "subq" : "addq";
        if (itr[2] == "_") {
          // x = +y or x = -y
          fout << "\tmovq\t" << itr[1] << ", " << itr[3] << endl;
          if (op == "subq")
            fout << "\tnegq\t" << itr[3] << endl;
        } else if (itr[1] == itr[3]) {
          // x = x + y or x = x - y
          fout << "\t" + op + "\t" << itr[2] << ", " << itr[3] << endl;
        } else {
          // x = y - z or x = y - z
          fout << "\tmovq\t" << itr[1] << ", " << itr[3] << endl;
          fout << "\t" + op + "\t" << itr[2] << ", " << itr[3] << endl;
        }
      } else if (itr[0][0] == '*' || itr[0][0] == '/') {
        // multiply or divide
        string op = itr[0][0] == '*' ? "imulq" : "idivq";
        string hold = "movq";
        fout<< "\t" << "movq"<< "\t" << itr[2] << ", \%r12" << endl;
        fout << "\t" << "movq"<< "\t" << itr[1] << ", \%rax" << endl;
        fout<< "\t" + op + "\t" << "\%r12" << endl;
        fout << "\t" << "movq" << "\t\%rax, " << itr[3] << endl;
      } else if (itr[0] == "<<" || itr[0] == ">>" || itr[0] == "&" || itr[0] == "|" || itr[0] == "&&" || itr[0] == "||" || itr[0] == "^") {
        // left/right shift, bitwise and/or/xor
        string op = "<<";
        if (itr[0] == ">>")
          op = "sarq";
        else if (itr[0][0] == '&')
          op = "andq";
        else if (itr[0][0] == '|')
          op = "orq\t";
        else if (itr[0] == "^")
          op = "xorq";
        fout << "\tmovq\t" << itr[1] << ", %rax" << endl;
        fout << "\tmovq\t" << itr[2] << ", %rcx" << endl;
        fout << "\t" + op + "\t%rcx, %rax" << endl;
        fout << "\tmovq\t%rax, " << itr[3] << endl;
      } else if (itr[0] == "inc") {
        // increment
        fout << "\tincq\t" << itr[1] << endl;
      } else if (itr[0] == "dec") {
        // decrement
        fout << "\tdecq\t" << itr[1] << endl;
      }
      // CONTROL FLOW
      else if (itr[0] == "label") {
        // label
        fout << "." << itr[3] << ":" << endl;
      }
      else if(itr[0] == "if goto"){
        fout << "\tmovq\t" << itr[1] << ", %rax" << endl;
        fout << "\tandq\t$1,%rax"<<endl;
        fout << "\tcmpq\t$1, %rax"<< endl;
        fout << "\tje\t." << itr[3] << endl;
      } else if (itr[0] == "goto") {
        // unconditional jump
        fout << "\tjmp\t" << "." << itr[3] << endl;
      } else if (itr[0][0] == '<' || itr[0][0] == '>' || itr[0] == "==" || itr[0] == "!=") {
        // conditional jump
        // ASSUMPTION: one comparison then not operator then jump
        //             comparison only used for jump
        // e.g.
        //    t12 = t10 > t11
        //    t13 = ! t12
        //    if t13 goto L1
        fout << "\tcmpq\t" << itr[2] << ", " << itr[1] << endl;
        string jumpop = "";
        if (itr[0] == "<") {
          jumpop = "setl";
        } else if (itr[0] == ">") {
          jumpop = "setg";
        } else if (itr[0] == "<=") {
          jumpop = "setle";
        } else if (itr[0] == ">=") {
          jumpop = "setge";
        } else if (itr[0] == "==") {
          jumpop = "sete";
        } else if (itr[0] == "!=") {
          jumpop = "setne";
        }
        // i += 2;
        // itr = method.second[i];
        // fout << "\t" + jumpop + "\t" << "." << itr[3] << endl;
        // setg	%al
        // movzbl	%al, %eax
        fout << "\t" + jumpop + "\t\%al"<< endl;
        fout<<"\tmovzbl\t\%al, \%eax"<<endl;
        fout << "\tmovq\t%rax, "<<itr[3]<<endl;
      }
      else if(itr[0]=="!"){
        fout << "\tmovq\t" << itr[1] << ", %rax" << endl;
        fout << "\tnot\t\t%rax" << endl;
        fout << "\tmovq\t%rax, " << itr[3] << endl;
      }
      // Procedure call
      else if (itr[0] == "call") {
        if (itr[1] == "System.out.println") {
          itr[1] = "print";
        }
        if (itr[3]=="_"){
          fout << "\tcall " <<itr[1]<<endl;
        }else{
          fout << "\tcall" <<itr[1]<<endl;
          fout << "\tmovq %rax "<<itr[2]<<endl;
        }
      } else if (itr[0] == "return") {
        continue;
      } else if (itr[0] == "leaq") {
        fout << "\tleaq\t" << itr[1] << ", " << itr[3] << endl;
      }

      else {
        cout << "ERROR: unknown instruction: " << itr[0] << endl;
      }
    }
  }
}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
//   yydebug=1;
  createTable();
  addLibrarySupport();
	yyparse();
	fclose(yyin);
  print_symbol_table();
  dump3AC();
  generateAssembly();
	return 0;
}
