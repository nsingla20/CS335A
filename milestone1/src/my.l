
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
["']{Insi}['"]              {
    string s(yytext);
    s=s.substr(1,s.length()-2);
    v.push_back(s);
}
%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    FlexLexer* lexer = new yyFlexLexer;
    ifstream fin;
    fin.open("trygra");
    fo.open("tokens");
    lexer->switch_streams(fin,cout);
    lexer->yylex();
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    for(auto i:v){
        fo<<i<<endl;
    }
    return 0;
}

