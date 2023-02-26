
%{
#include<bits/stdc++.h>
#include "parser.tab.hh"
#define YYSTYPE yy::parser::value_type
using namespace std;
extern bool nl;
extern int yylineno;
%}
letter      [A-Za-z]
digit       [0-9]
space       [ \t]+
number      ((-|+)?{digit}+(\.{digit}*)?
integer     [\-+]?{digit}+
decimal     [\-+]?{digit}+(\.{digit}+)
word        {letter}+
word_sep    {space}?[,;]{space}?
title       "Title"{space}?":"[^\n]+
chapter     "Chapter"{space}?{integer}{space}?":"[^\n]+
section     "Section"{space}?{decimal}{space}?":"[^\n]+

%option noyywrap
%option bison-bridge
%option yylineno

%%

{title}         {yylval->emplace<std::string>(yytext);return yy::parser::token::TITLE_K;}
{chapter}       {yylval->emplace<std::string>(yytext);return yy::parser::token::CHAPTER_K;}
{section}       {yylval->emplace<std::string>(yytext);return yy::parser::token::SECTION_K;}
{word}          {yylval->emplace<std::string>(yytext);return yy::parser::token::WORD;}
{word_sep}      {return yy::parser::token::WORD_SEP;}
{decimal}       {yylval->emplace<std::string>(yytext);return yy::parser::token::DECIMAL;}
{integer}       {yylval->emplace<std::string>(yytext);return yy::parser::token::INTEGER;}
[\n]+            ;
{space}         ;
[.?!]/(({space}?\n\n))        {nl=true;yylval->emplace<std::string>(yytext);return yy::parser::token::SENTENCE_E;}
[.?!]/({space})        {yylval->emplace<std::string>(yytext);return yy::parser::token::SENTENCE_E;}

.               {cout<<"Unrecognised lexeme:"<<yytext<<" at line:"<<yylineno<<endl;}
%%
