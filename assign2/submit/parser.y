%{
#include<bits/stdc++.h>
#include <fstream>
#include <sstream>
#define YYDEBUG 1
using namespace std;
extern bool nl;
extern int yylineno;
bool nl;
int nchap = 0, nsec = 0, npara = 0, nsen = 0, nword = 0, ndecl = 0, ninter = 0, nexcl = 0;
vector<string> content;
%}
%code provides{
    int yylex(yy::parser::value_type*);
}
%start document
%language "c++"
%define api.value.type variant
%define parse.error verbose

%token <std::string> TITLE_K
%token <std::string> CHAPTER_K
%token <std::string> SECTION_K
%token WORD_SEP
%token <std::string> WORD
%token <std::string>  INTEGER
%token <std::string>  DECIMAL
%token <std::string>  SENTENCE_E

%%
document    : title chapters
            ;
title       : TITLE_K
            ;
chapters    : chapters chapter
            | chapter
            ;
chapter     : chapter_h chapter_b               {nchap++;}
            ;
chapter_h   : CHAPTER_K                         {content.push_back($1);}
            ;
chapter_b   : sections
            | sentences
            | sentences sections
            ;
sections    : sections section
            | section
            ;
section     : section_h sentences              {nsec++;}
            ;
section_h   : SECTION_K                         {content.push_back($1);}
            ;

sentences   : sentences sentence
            | sentence
            ;
sentence    : sentence_b SENTENCE_E             {
                                                    nsen++;
                                                    if(nl){
                                                        npara++;
                                                        nl=false;
                                                    }
                                                    switch($2[0]){case '.':ndecl++;break;case '?':ninter++;break;case '!':nexcl++;break;}
}
            ;
sentence_b  : items
            ;
items       : items item_sep item
            | item
            ;
item_sep    : %empty
            | WORD_SEP
            ;
item        : WORD                              {nword++;}
            | INTEGER
            | DECIMAL
            ;
%%

int main(int argc,char **argv){

    ++argv, --argc;  /* skip over program name */
    yy::parser parse;
    // parse.set_debug_level(1);
    nl=false;
    parse ();
    cout<<"Number of Chapters: "<<nchap<<endl;
    cout<<"Number of Sections: "<<nsec<<endl;
    cout<<"Number of Paragraphs: "<<npara<<endl;
    cout<<"Number of Sentences: "<<nsen<<endl;
    cout<<"Number of Words: "<<nword<<endl;
    cout<<"Number of Declarative Sentences: "<<ndecl<<endl;
    cout<<"Number of Interrogative Sentences: "<<ninter<<endl;
    cout<<"Number of Exclamatory Sentences: "<<nexcl<<endl;

    cout<<"Table of Contents:"<<endl;
    for(auto s:content){
        if(s[0]=='C'){
            cout<<s<<endl;
        }else{
            cout<<'\t'<<s<<endl;
        }
    }
    return 0;
}
void yy::parser::error(const string& s){
    cout<<"Error occured at line :"<<yylineno<<"; "<<s<<endl;
}
