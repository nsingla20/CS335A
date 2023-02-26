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
  {annotation} type_identifier type_arguments.opt
| package_name '.' {annotation} type_identifier type_arguments.opt
| class_or_interface_type '.' {annotation} type_identifier type_arguments.opt
;
interface_type:
  class_type
;
type_variable:
  {annotation} type_identifier
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
  type_parameter_modifier.multiopt type_identifier type_bound.opt
;
type_parameter_modifier.multiopt:
  type_parameter_modifier
| type_parameter_modifier.multiopt type_parameter_modifier
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
  type_identifier
| package_or_type_name '.' type_identifier
;
expression_name:
  IDENTIFIER
| ambiguous_name '.' IDENTIFIER
;
method_name:
  unqualified_method_identifier
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
  [package_declaration] {import_declaration} {top_level_class_or_interface_declaration}
;
modular_compilation_unit:
  {import_declaration} module_declaration
package_declaration:
  {package_modifier} "package" IDENTIFIER {. IDENTIFIER} ;
package_modifier:
  annotation
import_declaration:
  single_type_import_declaration
| type_import_on_demand_declaration
| single_static_import_declaration
| static_import_on_demand_declaration
single_type_import_declaration:
  "import" type_name ';'
type_import_on_demand_declaration:
  "import" package_or_type_name '.' '*' ';'
single_static_import_declaration:
| "import" "static" type_name '.' IDENTIFIER ';'
static_import_on_demand_declaration:
| "import" "static" type_name '.' '*' ';'
top_level_class_or_interface_declaration:
| class_declaration
| interface_declaration
| ';'
module_declaration:
  {annotation} ["open"] "module" IDENTIFIER {'.' IDENTIFIER} '{' {module_directive} '}'
module_directive:
  "requires" {requires_modifier} module_name ;
| "exports" package_name ["to" module_name {',' module_name}] ';'
| "opens" package_name ["to" module_name {',' module_name}] ';'
| "uses" type_name ';'
| "provides" type_name "with" type_name {',' type_name} ';'
requires_modifier:
  "transitive"
| "static"


  /* Classes */
class_declaration:
  normal_class_declaration
| enum_declaration
| record_declaration
normal_class_declaration:
  {class_modifier} "class" type_identifier [type_parameters] [class_extends] [class_implements] [class_permits] class_body
class_modifier:
  annotation | "public" | "protected" | "private" | "abstract" | "static" | "final" | "sealed" | "non-sealed" | "strictfp"
type_parameters:
  '<' type_parameter_list '>'
type_parameter_list:
  type_parameter {',' type_parameter}
class_extends:
  "extends" class_type
class_implements:
  "implements" interface_type_list
interface_type_list:
  interface_type {',' interface_type}
class_permits:
  "permits" type_name {',' type_name}
class_body:
  { {ClassBodyDeclaration} }
ClassBodyDeclaration:
  ClassMemberDeclaration
  InstanceInitializer
  StaticInitializer
  ConstructorDeclaration
ClassMemberDeclaration:
  FieldDeclaration
  MethodDeclaration
  ClassDeclaration
  InterfaceDeclaration
  ;
FieldDeclaration:
  {FieldModifier} UnannType VariableDeclaratorList ;
FieldModifier:
  (one of)
  Annotation public protected private
  static final transient volatile
VariableDeclaratorList:
  VariableDeclarator {, VariableDeclarator}
VariableDeclarator:
  VariableDeclaratorId [= VariableInitializer]
VariableDeclaratorId:
  Identifier [Dims]
VariableInitializer:
  Expression
  ArrayInitializer
UnannType:
  UnannPrimitiveType
  UnannReferenceType
UnannPrimitiveType:
  NumericType
  boolean
UnannReferenceType:
  UnannClassOrInterfaceType
  UnannTypeVariable
  UnannArrayType
UnannClassOrInterfaceType:
  UnannClassType
  UnannInterfaceType
UnannClassType:
  type_identifier [TypeArguments]
  PackageName . {Annotation} type_identifier [TypeArguments]
  UnannClassOrInterfaceType . {Annotation} type_identifier [TypeArguments]
UnannInterfaceType:
  UnannClassType
UnannTypeVariable:
  type_identifier
UnannArrayType:
  UnannPrimitiveType Dims
  UnannClassOrInterfaceType Dims
  UnannTypeVariable Dims
MethodDeclaration:
  {MethodModifier} MethodHeader MethodBody
MethodModifier:
  (one of)
  Annotation public protected private
  abstract static final synchronized native strictfp
MethodHeader:
  Result MethodDeclarator [Throws]
  type_parameters {Annotation} Result MethodDeclarator [Throws]
Result:
  UnannType
  void
MethodDeclarator:
  Identifier ( [ReceiverParameter ,] [FormalParameterList] ) [Dims]
ReceiverParameter:
  {Annotation} UnannType [Identifier .] this
FormalParameterList:
  FormalParameter {, FormalParameter}
FormalParameter:
  {VariableModifier} UnannType VariableDeclaratorId
  VariableArityParameter
VariableArityParameter:
  {VariableModifier} UnannType {Annotation} ... Identifier
VariableModifier:
  Annotation
  final
Throws:
  throws ExceptionTypeList
ExceptionTypeList:
  ExceptionType {, ExceptionType}
ExceptionType:
  class_type
  TypeVariable
MethodBody:
  Block
  ;
InstanceInitializer:
  Block
StaticInitializer:
  static Block
ConstructorDeclaration:
  {ConstructorModifier} ConstructorDeclarator [Throws] ConstructorBody
ConstructorModifier:
  (one of)
  Annotation public protected private
ConstructorDeclarator:
  [type_parameters] SimpleTypeName ( [ReceiverParameter ,] [FormalParameterList] )
SimpleTypeName:
  type_identifier
ConstructorBody:
  { [ExplicitConstructorInvocation] [BlockStatements] }
ExplicitConstructorInvocation:
  [TypeArguments] this ( [ArgumentList] ) ;
  [TypeArguments] super ( [ArgumentList] ) ;
  ExpressionName . [TypeArguments] super ( [ArgumentList] ) ;
  Primary . [TypeArguments] super ( [ArgumentList] ) ;
EnumDeclaration:
  {class_modifier} enum type_identifier [class_implements] EnumBody
EnumBody:
  { [EnumConstantList] [,] [EnumBodyDeclarations] }
EnumConstantList:
  EnumConstant {, EnumConstant}
EnumConstant:
  {EnumConstantModifier} Identifier [( [ArgumentList] )] [class_body]
EnumConstantModifier:
  Annotation
EnumBodyDeclarations:
  ; {ClassBodyDeclaration}
RecordDeclaration:
  {class_modifier} record type_identifier [type_parameters] RecordHeader [class_implements] RecordBody
RecordHeader:
  ( [RecordComponentList] )
RecordComponentList:
  RecordComponent {, RecordComponent}
RecordComponent:
  {RecordComponentModifier} UnannType Identifier
  VariableArityRecordComponent
VariableArityRecordComponent:
  {RecordComponentModifier} UnannType {Annotation} ... Identifier
RecordComponentModifier:
  Annotation
RecordBody:
  { {RecordBodyDeclaration} }
RecordBodyDeclaration:
  ClassBodyDeclaration
  CompactConstructorDeclaration
CompactConstructorDeclaration:
  {ConstructorModifier} SimpleTypeName ConstructorBody



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