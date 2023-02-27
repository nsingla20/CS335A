
%{
#include<bits/stdc++.h>
#include <fstream>
using namespace std;
ofstream fo;
vector<string> v;
%}

%option c++
%option noyywrap
Separator                   \(|\)|\{|\}|\[|\]|;|,|\.|\.\.\.|@|::
Operator                    =|>|<|!|~|\?|\->|==|>=|<=|!=|&&|\|\||\+\+|\-\-|\+|\-|\*|\/|&|\||\^|%|<<|>>|>>>|\+=|\-=|\*=|\/=|&=|\|=|\^=|%=|<<=|>>=|>>>=|:
word                        [A-Za-z]+
Insi                        {Separator}|{Operator}|{word}
%%
["']{word}['"]              {
    string s(yytext);
    s=s.substr(1,s.length()-2);
    fo<<"TOK_";
    fo<<s;
}
["']({Separator}|{Operator})['"]              {
    string s(yytext);
    s=s.substr(1,s.length()-2);
    fo<<"TOK_";
    for(char c:s){
        fo<<int(c);
    }
}

%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("trygra");
    fo.open("finalgra");
    lexer->switch_streams(fin,fo);
    lexer->yylex();
    return 0;
}

