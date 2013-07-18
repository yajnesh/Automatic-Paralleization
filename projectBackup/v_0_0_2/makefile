CCOMPILER = gcc
CCFLAGS = -ll

LEX = lex
YACC = yacc
YFLAGS= -d

myprogram: runYacc  runLex
	${CCOMPILER}  y.tab.c lex.yy.c ${CCFLAGS} -Wextra -Wall

runLex: 
	${LEX} working.l

runYacc: 
	${YACC} ${YFLAGS} working.y		 

clean: 
	rm y.tab.c lex.yy.c y.tab.h a.out
