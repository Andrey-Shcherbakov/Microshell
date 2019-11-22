%{
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "parcer.tab.hpp"
#define YY_DECL yy::parser::symbol_type yylex ()
YY_DECL;

//extern "C" int yyparse ();
%}

%option noyywrap

%%

([[:alnum:]]|\-)+ {/*std::cout << yytext <<" \n";*/ return yy::parser::make_STRING((std::string) yytext);}
[\n] {return yy::parser::make_LEND((const char &)('\n'));}
\| {/*std::cout << yytext <<" \n";*/ return yy::parser::make_OR((const char &)('|'));}
[ \t] {;}
. {std::cerr << "mistery simbol\n";}

%%
