
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
vector<string> lexs;
vector<string> v = {"Keyword","Separator","Literal","Operator","Identifier"};
map<string,pair<int,int>> m;
void add(int i,string value){
    if(find(lexs.begin(),lexs.end(),value)==lexs.end()){
        lexs.push_back(value);
        m[value]={i,1};
    }else{
        m[value]={i,m[value].second+1};
    }
}
%}
delim       [ \t\n]
ws	        {delim}+
letter      [A-Za-z]
digit       [0-9]
seprator    ,|;|:|\(|\)|\[|\]|\.\.
keyword     array|begin|case|const|do|downto|else|end|file|for|function|goto|if|label|nil|of|packed|procedure|program|record|repeat|set|then|to|type|until|var|while|with
op          and|or|not|div|mod|in|\+|-|\*|\/|\.|:=|=|<>|<|<=|>=|>|\^
id	        {letter}({letter}|{digit})*
number      ((-)?{digit}+(\.{digit}*)?([Ee][+\-]?{digit}+)?)
string      \"[^"]*\"
literal     ({number})|({string})
comment     \{[^}]*\}
%option c++
%option noyywrap
%option yylineno

%%

{ws}            ;
{comment}       ;
{keyword}       {add(0,yytext);}
{seprator}      {add(1,yytext);}
{literal}       {add(2,yytext);}
{op}            {add(3,yytext);}
{id}            {add(4,yytext);}
.               {cout<<"Unrecognised lexeme:"<<yytext<<" at line:"<<yylineno<<endl;return 1;}
%%

void csv_writer(){
    ofstream f;
    f.open("ans.csv");
    f<<"Lexeme,Token,Count"<<endl;
    f.close();
    f.open("ans.csv",ios::app);
    for(auto l:lexs){
        f<<l<<","<<v[m[l].first]<<","<<m[l].second<<"\n";
    }
    f.close();
}

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    if ( argc > 0 ){
        fin.open(argv[0]);
        lexer->switch_streams(fin,cout);
    }
    lexer->yylex();
    csv_writer();
    return 0;
}
