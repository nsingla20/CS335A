
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
ofstream fo;
map<char,int> m;
%}

%option c++
%option noyywrap
Separator                   \(|\)|\{|\}|\[|\]|;|,|\.|\.\.\.|@|::
Operator                    =|>|<|!|~|\?|\->|==|>=|<=|!=|&&|\|\||\+\+|\-\-|\+|\-|\*|\/|&|\||\^|%|<<|>>|>>>|\+=|\-=|\*=|\/=|&=|\|=|\^=|%=|<<=|>>=|>>>=|:
word                        [A-Za-z]+
Insi                        {Separator}|{Operator}|{word}
%%
\n                          {}
({Separator}|{Operator})/\n                     {
    fo<<"%token <i> TOK_";
    for(int i=0;i<yyleng;i++){
        fo<<int(yytext[i]);
    }
    fo<<endl;
}
{word}/\n                     {
    fo<<"%token <i> TOK_";
    fo<<yytext;
    fo<<endl;
}
%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("tokens");
    fo.open("tokenreppar");
    lexer->switch_streams(fin,cout);
    lexer->yylex();
    fin.close();
    fo.close();
    return 0;
}

