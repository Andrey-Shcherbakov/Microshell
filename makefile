all: ushell

parcer.tab.cpp parcer.tab.hpp: parcer.ypp
	bison -d parcer.ypp

lex.yy.c: parcer.l parcer.tab.hpp
	flex parcer.l

ushell: parcer.tab.cpp parcer.tab.hpp lex.yy.c
	c++ -o ushell parcer.tab.cpp lex.yy.c -g 
