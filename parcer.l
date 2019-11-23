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

"set" {/*std::cout << yytext <<" \n";*/ return yy::parser::make_SET((std::string) yytext);}

"time" {return yy::parser::make_TIME((std::string) yytext);}

([[:alnum:]]|\-)+ {/*std::cout << yytext <<" \n";*/ return yy::parser::make_STRING((std::string) yytext);}

\"([^""]|\\.)*\" {/*std::cout << yytext <<" \n"*/; std::string tmp(yytext); tmp.erase(tmp.begin()); tmp.erase(tmp.end()-1);
                   return yy::parser::make_STRING(tmp);}

(\/|\.|\*)(([[:alnum:]]|\*|\.|\/|\?))*  {/*std::cout << yytext <<" \n";*/ return yy::parser::make_PATH((std::string) yytext);}

\$([[:alnum:]])+ {return yy::parser::make_VAR((std::string) yytext);}

"<" {return yy::parser::make_IN((const char &)('<'));}

">" {return yy::parser::make_OUT((const char &)('>'));}

"=" {/*std::cout << yytext <<" \n";*/ return yy::parser::make_EQ((const char &)('='));}

[\n] {return yy::parser::make_LEND((const char &)('\n'));}

\| {/*std::cout << yytext <<" \n";*/ return yy::parser::make_OR((const char &)('|'));}

[ \t] {;}

. {std::cerr << "mistery simbol "<< yytext <<" \n";}

%%
