%{

/* PROLOGUE */

#include <bits/stdc++.h>
using namespace std;

extern FILE *yyin;
extern int yylineno;

// Data structures to store the tree
vector<pair<string,vector<int>>> nodes;
int startNode;

int yylex(void);
void yyerror(char const *);
int createNode(string);
void addChild(int, int);

%}

/* BISON DECLARATIONS */


%token KEYWORD
%token IDENTIFIER
%token LITERAL
%token ASSIGN
%token OPERATOR
%token SEP
%token TERM


%%


    /* GRAMMAR RULES */
input:
  expr ';'					{ $$ = createNode("Start"); $2 = createNode(";");
  							  addChild($$, $1); addChild($$, $2); startNode = $$; }
;

	/* Types, Values and Variables */
type:
  primitive_type
| reference_type
;
primitive_type:
  {annotation} numeric_type
| {annotation} "boolean"
;
numeric_type:
  integral_type
| floating_point_type
;
integral_type:
  "byte"
| "short"
| "int"
| "long"
| "char"
;
floating_point_type:
  "float"
| "double"
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
  {annotation} type_IDENTIFIER type_arguments.opt
| package_name '.' {annotation} type_IDENTIFIER type_arguments.opt
| class_or_interface_type '.' {annotation} type_IDENTIFIER type_arguments.opt
;
interface_type:
  class_type
;
type_variable:
  {annotation} type_IDENTIFIER
;
array_type:
  primitive_type dims
| class_or_interface_type dims
| type_variable dims
;
dims:
  {annotation} ' ' {{annotation} [ ]}
;
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
  "extends" type_variable
| "extends" class_or_interface_type additional_bound.multiopt
;
additional_bound.multiopt:
  additional_bound
| additional_bound.multiopt additional_bound
| /* empty */
additional_bound:
  '&' interface_type
;
type_arguments.opt:
  type_arguments
| /* empty */
type_arguments:
  '<' type_argument_list '>'
;
type_argument_list:
  type_argument type_argument.multiopt
;
type_argument.multiopt:
  ',' type_argument
| type_argument.multiopt ',' type_argument
| /* empty */
type_argument:
  reference_type
| wildcard
;
wildcard:
  {annotation} '?' wildcard_bounds.opt
;
wildcard_bounds.opt:
  wildcard_bounds
| /* empty */
;
wildcard_bounds:
  "extends" reference_type
| "super" reference_type


  /* Names */
module_name:
  IDENTIFIER
| module_name '.' IDENTIFIER
;
package_name:
  IDENTIFIER
| package_name '.' IDENTIFIER
;
type_name:
  type_IDENTIFIER
| package_or_type_name '.' type_IDENTIFIER
;
expression_name:
  IDENTIFIER
| ambiguous_name '.' IDENTIFIER
;
method_name:
  unqualified_method_IDENTIFIER
;
package_or_type_name:
  IDENTIFIER
| package_or_type_name '.' IDENTIFIER
;
ambiguous_name:
  IDENTIFIER
| ambiguous_name '.' IDENTIFIER
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
  package_modifier.multiopt "package" IDENTIFIER {'.' IDENTIFIER} ';'
;
package_modifier.multiopt:
  package_modifier
| package_modifier.multiopt package_modifier
| /* empty */
;
package_modifier:
  annotation
;
import_declaration.multiopt:
  import_declaration
| import_declaration.multiopt import_declaration
| /* empty */
;
import_declaration:
  single_type_import_declaration
| type_import_on_demand_declaration
| single_static_import_declaration
| static_import_on_demand_declaration
;
single_type_import_declaration:
  "import" type_name ';'
;
type_import_on_demand_declaration:
  "import" package_or_type_name '.' '*' ';'
;
single_static_import_declaration:
| "import" "static" type_name '.' IDENTIFIER ';'
;
static_import_on_demand_declaration:
| "import" "static" type_name '.' '*' ';'
;
top_level_class_or_interface_declaration.multiopt:
  top_level_class_or_interface_declaration
| top_level_class_or_interface_declaration.multiopt top_level_class_or_interface_declaration
| /* empty */
;
top_level_class_or_interface_declaration:
| class_declaration
| interface_declaration
| ';'
;
module_declaration:
  {annotation} ["open"] "module" IDENTIFIER {'.' IDENTIFIER} '{' module_directive.multiopt '}'
;
module_directive.multiopt:
  module_directive
| module_directive.multiopt module_directive
| /* empty */
;
module_directive:
  "requires" requires_modifier.multiopt module_name ;
| "exports" package_name to_module_names.opt ';'
| "opens" package_name to_module_names.opt ';'
| "uses" type_name ';'
| "provides" type_name "with" type_name {',' type_name} ';'
;
to_module_names.opt
  "to" module_name {',' module_name}
| to_module_names.opt "to" module_name {',' module_name}
| /* empty */
requires_modifier.multiopt:
  requires_modifier
| requires_modifier.multiopt requires_modifier
| /* empty */
requires_modifier:
  "transitive"
| "static"
;

  /* Classes */
class_declaration:
  normal_class_declaration
| enum_declaration
| record_declaration
;
normal_class_declaration:
  {class_modifier} "class" type_IDENTIFIER [type_parameters] [class_extends] [class_implements] [class_permits] class_body
;
class_modifier:
  annotation | "public" | "protected" | "private" | "abstract" | "static" | "final" | "sealed" | "non-sealed" | "strictfp"
;
type_parameters:
  '<' type_parameter_list '>'
;
type_parameter_list:
  type_parameter {',' type_parameter}
;
class_extends:
  "extends" class_type
;
class_implements:
  "implements" interface_type_list
;
interface_type_list:
  interface_type {',' interface_type}
;
class_permits:
  "permits" type_name {',' type_name}
;
class_body:
  { {class_body_declaration} }
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
  {field_modifier} unann_type variable_declarator_list ';'
;
field_modifier:
  annotation | "public" | "protected" | "private"
| "static" | "final" | "transient" | "volatile"
;
variable_declarator_list:
  variable_declarator {',' variable_declarator}
;
variable_declarator:
  variable_declarator_id ['=' variable_initializer]
;
variable_declarator_id:
  IDENTIFIER [dims]
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
| "boolean"
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
  type_IDENTIFIER [type_arguments]
| package_name . {annotation} type_IDENTIFIER [type_arguments]
| unann_class_or_interface_type . {annotation} type_IDENTIFIER [type_arguments]
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
  {method_modifier} method_header method_body
;
method_modifier:
  annotation | "public" | "protected" | "private"
  "abstract" | "static" | "final" | "synchronized" | "native" | "strictfp"
;
method_header:
  result method_declarator [throws]
| type_parameters {annotation} result method_declarator [throws]
;
result:
  unann_type
| "void"
;
method_declarator:
  IDENTIFIER ( [receiver_parameter ','] [formal_parameter_list] ) [dims]
;
receiver_parameter:
  {annotation} unann_type [IDENTIFIER '.'] "this"
;
formal_parameter_list:
  formal_parameter {',' formal_parameter}
;
formal_parameter:
  {variable_modifier} unann_type variable_declarator_id
| variable_arity_parameter
;
variable_arity_parameter:
  {variable_modifier} unann_type {annotation} "..." IDENTIFIER
;
variable_modifier:
  annotation
| "final"
;
throws:
  "throws" exception_type_list
;
exception_type_list:
  exception_type {',' exception_type}
;
exception_type:
  class_type
| type_variable
;
method_body:
  block
| ';'
;
instance_initializer:
  block
;
static_initializer:
  "static" block
;
constructor_declaration:
  {constructor_modifier} constructor_declarator [throws] constructor_body
;
constructor_modifier:
  annotation | "public" | "protected" | "private"
;
constructor_declarator:
  [type_parameters] simple_type_name '(' [receiver_parameter ','] [formal_parameter_list] ')'
;
simple_type_name:
  type_IDENTIFIER
;
constructor_body:
  '{' [explicit_constructor_invocation] [block_statements] '}'
;
explicit_constructor_invocation:
  [type_arguments] "this" '(' [argument_list] ')' ';'
| [type_arguments] "super" '(' [argument_list] ')' ';'
| expression_name '.' [type_arguments] "super" '(' [argument_list] ')' ';'
| primary '.' [type_arguments] "super" '(' [argument_list] ')' ';'
;
enum_declaration:
  {class_modifier} "enum" type_IDENTIFIER [class_implements] enum_body
;
enum_body:
  '{' [enum_constant_list] [','] [enum_body_declarations] '}'
;
enum_constant_list:
  enum_constant {',' enum_constant}
;
enum_constant:
  {enum_constant_modifier} IDENTIFIER "[(" [argument_list] ")]" [class_body]
;
enum_constant_modifier:
  annotation
;
enum_body_declarations:
  ';' {class_body_declaration}
;
record_declaration:
  {class_modifier} record type_IDENTIFIER [type_parameters] record_header [class_implements] record_body
;
record_header:
  '(' [record_component_list] ')'
;
record_component_list:
  record_component {',' record_component}
;
record_component:
  {record_component_modifier} unann_type IDENTIFIER
  variable_arity_record_component
;
variable_arity_record_component:
  {record_component_modifier} unann_type {annotation} "..." IDENTIFIER
;
record_component_modifier:
  annotation
;
record_body:
  '{' {record_body_declaration} '}'
;
record_body_declaration:
  class_body_declaration
| compact_constructor_declaration
;
compact_constructor_declaration:
  {constructor_modifier} simple_type_name constructor_body
;

	/* Interfaces */

interface_declaration:
  normal_interface_declaration
| annotation_interface_declaration
;
normal_interface_declaration:
  {interface_modifier} "interface" type_identifier [type_parameters] [interface_extends] [interface_permits] interface_body
;
interface_modifier:
  annotation | "public" | "protected" | "private"
| "abstract" | "static" | "sealed" | "non-sealed" | "strictfp"
;
interface_extends:
  "extends" interface_type_list
;
interface_permits:
  "permits" type_name {',' type_name}
;
interface_body:
  '{' {interface_member_declaration} '}'
;
interface_member_declaration:
  constant_declaration
| interface_method_declaration
| class_declaration
| interface_declaration
| ';'
;
constant_declaration:
  {constant_modifier} unann_type variable_declarator_list ';'
;
constant_modifier:
  annotation | "public"
| "static" | "final"
;
interface_method_declaration:
  {interface_method_modifier} method_header method_body
;
interface_method_modifier:
  annotation | "public" | "private"
| "abstract" | "default" | "static" | "strictfp"
;
annotation_interface_declaration:
  {interface_modifier} '@' "interface" type_identifier annotation_interface_body
;
annotation_interface_body:
  '{' {annotation_interface_member_declaration} '}'
;
annotation_interface_member_declaration:
  annotation_interface_element_declaration
| constant_declaration
| class_declaration
| interface_declaration
| ';'
;
annotation_interface_element_declaration:
  {annotation_interface_element_modifier} unann_type IDENTIFIER '(' ')' [dims] [default_value] ';'
;
annotation_interface_element_modifier:
  annotation | "public"
| "abstract"
;
default_value:
  "default" element_value
;
annotation:
  normal_annotation
| marker_annotation
| single_element_annotation
;
normal_annotation:
  '@' type_name '(' [element_value_pair_list] ')'
;
element_value_pair_list:
  element_value_pair {',' element_value_pair}
;
element_value_pair:
  IDENTIFIER '=' element_value
;
element_value:
  conditional_expression
| element_value_array_initializer
| annotation
;
element_value_array_initializer:
  '{' [element_valueList] [','] '}'
;
element_valueList:
  element_value {',' element_value}
;
marker_annotation:
  '@' type_name
;
single_element_annotation:
  '@' type_name '(' element_value ')'
;

	/* Arrays */

array_initializer:
  '{' [variable_initializer_list] [','] '}'
variable_initializer_list:
  variable_initializer {',' variable_initializer}

	/* blocks, statements, and patterns */

block:
  '{' [block_statements] '}'
;
block_statements:
  block_statement {block_statement}
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
  local_variable_declaration ';'
;
local_variable_declaration:
  {variable_modifier} local_variable_type variable_declarator_list
;
local_variable_type:
  unann_type
| "var"
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
  ';'
;
labeled_statement:
  IDENTIFIER ':' statement
;
labeled_statement_no_short_if:
  IDENTIFIER ':' statement_no_short_if
;
expression_statement:
  statement_expression ';'
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
  "if" '(' expression ')' statement
;
if_then_else_statement:
  "if" '(' expression ')' statement_no_short_if "else" statement
;
if_then_else_statement_no_short_if:
  "if" '(' expression ')' statement_no_short_if "else" statement_no_short_if
;
assert_statement:
  "assert" expression ';'
| "assert" expression ':' expression ';'
;
switch_statement:
  "switch" '(' expression ')' switch_block
;
switch_block:
  '{' switch_rule {switch_rule} ';'
| '{' {switch_block_statement_group} {switch_label ':'} '}'
;
switch_rule:
  switch_label "->" expression ';'
| switch_label "->" block
| switch_label "->" throw_statement
;
switch_block_statement_group:
  switch_label ':' {switch_label ':'} block_statements
;
switch_label:
  "case" case_constant {, case_constant}
  "default"
;
case_constant:
  conditional_expression
;
while_statement:
  "while" '(' expression ')' statement
;
while_statement_no_short_if:
  "while" '(' expression ')' statement_no_short_if
;
do_statement:
  "do" statement "while" '(' expression ')' ';'
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
  "for" '(' [for_init] ';' [expression] ';' [for_update] ')' statement
;
basic_for_statement_no_short_if:
  "for" '(' [for_init] ';' [expression] ';' [for_update] ')' statement_no_short_if
;
for_init:
  statement_expression_list
  local_variable_declaration
;
for_update:
  statement_expression_list
;
statement_expression_list:
  statement_expression {',' statement_expression}
;
enhanced_for_statement:
  "for" '(' local_variable_declaration ':' expression ')' statement
;
enhanced_for_statement_no_short_if:
  "for" '(' local_variable_declaration ':' expression ')' statement_no_short_if
;
break_statement:
  "break" [IDENTIFIER] ';'
;
yield_statement:
  "yield" expression ';'
;
continue_statement:
  "continue" [IDENTIFIER] ';'
;
return_statement:
  "return" [expression] ';'
;
throw_statement:
  "throw" expression ';'
;
synchronized_statement:
  "synchronized" '(' expression ')' block
;
try_statement:
  "try" block catches
  "try" block [catches] finally
  try_with_resources_statement
;
catches:
  catch_clause {catch_clause}
;
catch_clause:
  "catch" '(' catch_formal_parameter ')' block
;
catch_formal_parameter:
  {variable_modifier} catch_type variable_declarator_id
;
catch_type:
  unann_class_type {'|' class_type}
;
finally:
  "finally" block
;
try_with_resources_statement:
  "try" resource_specification block [catches] [finally]
;
resource_specification:
  '(' resource_list [';'] ')'
;
resource_list:
  resource {';' resource}
;
resource:
  local_variable_declaration
  variable_access
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
| "this"
| type_name '.' "this"
| '(' expression ')'
| class_instance_creation_expression
| field_access
| array_access
| method_invocation
| method_reference
;
class_literal:
  type_name {[ ]} '.' 'class'
| numeric_type {[ ]} '.' 'class'
| "boolean" {[ ]} "." "class"
| "void" "." "class"
;
class_instance_creation_expression:
  unqualified_class_instance_creation_expression
| expression_name '.' unqualified_class_instance_creation_expression
| primary '.' unqualified_class_instance_creation_expression
;
unqualified_class_instance_creation_expression:
  "new" [type_arguments] class_or_interface_type_to_instantiate '(' [argument_list] ')' [class_body]
;
class_or_interface_type_to_instantiate:
  {annotation} IDENTIFIER {'.' {annotation} IDENTIFIER} [type_arguments_or_diamond]
;
type_arguments_or_diamond:
  type_arguments
| "<>"
;
field_access:
  primary '.' IDENTIFIER
| "super" '.' IDENTIFIER
| type_name '.' "super" '.' IDENTIFIER
;
array_access:
  expression_name '[' expression ']'
| primary_no_new_array '[' expression ']'
;
method_invocation:
  method_name '(' [argument_list] ')'
| type_name '.' [type_arguments] IDENTIFIER '(' [argument_list] ')'
| expression_name '.' [type_arguments] IDENTIFIER '(' [argument_list] ')'
| primary '.' [type_arguments] IDENTIFIER '(' [argument_list] ')'
| "super" '.' [type_arguments] IDENTIFIER '(' [argument_list] ')'
| type_name '.' "super" '.' [type_arguments] IDENTIFIER '(' [argument_list] ')'
;
argument_list:
  expression {',' expression}
;
method_reference:
  expression_name "::" [type_arguments] IDENTIFIER
| primary "::" [type_arguments] IDENTIFIER
| reference_type "::" [type_arguments] IDENTIFIER
| "super" "::" [type_arguments] IDENTIFIER
| type_name '.' "super" "::" [type_arguments] IDENTIFIER
| class_type "::" [type_arguments] "new"
| array_type "::" "new"
;
array_creation_expression:
  "new" primitive_type dim_exprs [dims]
| "new" class_or_interface_type dim_exprs [dims]
| "new" primitive_type dims array_initializer
| "new" class_or_interface_type dims array_initializer
;
dim_exprs:
  dim_expr {dim_expr}
;
dim_expr:
  {annotation} '[' expression ']'
;
expression:
  lambda_expression
| assignment_expression
;
lambda_expression:
  lambda_parameters "->" lambda_body
;
lambda_parameters:
  '(' [lambda_parameter_list] ')'
| IDENTIFIER
;
lambda_parameter_list:
  lambda_parameter {',' lambda_parameter}
| IDENTIFIER {, IDENTIFIER}
;
lambda_parameter:
  {variable_modifier} lambda_parameter_type variable_declarator_id
| variable_arity_parameter
;
lambda_parameter_type:
  unann_type
| "var"
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
  '=' | "*=" | "/=" | "%=" | "+=" | "-=" | "<<=" | ">>=" | ">>>=" | "&=" | "^=" | "|="
;
conditional_expression:
  conditional_or_expression
| conditional_or_expression "?" expression ':' conditional_expression
| conditional_or_expression "?" expression ":" lambda_expression
;
conditional_or_expression:
  conditional_and_expression
| conditional_or_expression "||" conditional_and_expression
;
conditional_and_expression:
  inclusive_or_expression
| conditional_and_expression "&&" inclusive_or_expression
;
inclusive_or_expression:
  exclusive_or_expression
| inclusive_or_expression '|' exclusive_or_expression
;
exclusive_or_expression:
  and_expression
| exclusive_or_expression '^' and_expression
;
and_expression:
  equality_expression
| and_expression '&' equality_expression
;
equality_expression:
  relational_expression
| equality_expression "==" relational_expression
| equality_expression "!=" relational_expression
;
relational_expression:
  shift_expression
| relational_expression "<" shift_expression
| relational_expression ">" shift_expression
| relational_expression "<=" shift_expression
| relational_expression ">=" shift_expression
| instanceof_expression
;
instanceof_expression:
  relational_expression "instanceof" reference_type
| relational_expression "instanceof" pattern
;
shift_expression:
  additive_expression
| shift_expression "<<" additive_expression
| shift_expression ">>" additive_expression
| shift_expression ">>>" additive_expression
;
additive_expression:
  multiplicative_expression
| additive_expression '+' multiplicative_expression
| additive_expression '-' multiplicative_expression
;
multiplicative_expression:
  unary_expression
| multiplicative_expression '*' unary_expression
| multiplicative_expression '/' unary_expression
| multiplicative_expression '%' unary_expression
;
unary_expression:
  pre_increment_expression
| pre_decrement_expression
| '+' unary_expression
| '-' unary_expression
| unary_expression_not_plus_minus
;
pre_increment_expression:
  "++" unary_expression
pre_decrement_expression:
  "--" unary_expression
unary_expression_not_plus_minus:
  postfix_expression
| '~' unary_expression
| '!' unary_expression
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
  postfix_expression "++"
;
post_decrement_expression:
  postfix_expression "--"
;
cast_expression:
  '(' primitive_type ')' unary_expression
  '(' reference_type {additional_bound} ')' unary_expression_not_plus_minus
  '(' reference_type {additional_bound} ')' lambda_expression
;
switch_expression:
  "switch" '(' expression ')' switch_block
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
	yyparse();
	fclose(yyin);
	build_graph();
	return 0;
}