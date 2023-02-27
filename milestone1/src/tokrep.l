
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
    fo<<'\"';
    fo<<yytext;
    fo<<'\"';
    fo<<"\t\t\t{yylval->s=strdup(yytext);return TOK_";
    for(int i=0;i<yyleng;i++){
        fo<<int(yytext[i]);
    }
    fo<<";}";
    fo<<endl;
}
{word}/\n                     {
    fo<<'\"';
    fo<<yytext;
    fo<<'\"';
    fo<<"\t\t\t{yylval->s=strdup(yytext);return TOK_";
    fo<<yytext;
    fo<<";}";
    fo<<endl;
}
%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("tokens");
    fo.open("tokenrep");
    lexer->switch_streams(fin,cout);
    lexer->yylex();
    fin.close();
    fo.close();
    return 0;
}

