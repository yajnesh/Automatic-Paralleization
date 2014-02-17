D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*


%{
	#include <stdio.h>
	#include "y.tab.h"
	extern int for_count;
	extern int step;
	void count();
	int line=1;
	int check_type();
	void comment();
	extern char *my_strdup(char *str);
%}

%%
"#".*           { /*printf("\nMACRO: %s \n",yytext);*//*consume all macros */ 
					fprintf(yyout,"%s\n",yytext);  				
				}
"/*"			{ comment(); }
"//".*          { /* consume //-comment */ }
"auto"			{ count(); yylval.str = my_strdup(yytext);return(AUTO); }
"break"			{ count(); yylval.str = my_strdup(yytext);return(BREAK); }
"case"			{ count(); yylval.str = my_strdup(yytext);return(CASE); }
"char"			{ count(); yylval.str = my_strdup(yytext);return(CHAR); }
"const"			{ count(); yylval.str = my_strdup(yytext);return(CONST); }
"continue"		{ count(); yylval.str = my_strdup(yytext);return(CONTINUE); }
"default"		{ count(); yylval.str = my_strdup(yytext);return(DEFAULT); }
"do"			{ count(); yylval.str = my_strdup(yytext);return(DO); }
"double"		{ count(); yylval.str = my_strdup(yytext);return(DOUBLE); }
"else"			{ count(); yylval.str = my_strdup(yytext);return(ELSE); }
"enum"			{ count(); yylval.str = my_strdup(yytext);return(ENUM); }
"extern"		{ count(); yylval.str = my_strdup(yytext);return(EXTERN); }
"float"			{ count(); yylval.str = my_strdup(yytext);return(FLOAT); }
"for"			{ count(); for_count++;step+=1;yylval.str=my_strdup(yytext);return(FOR); }
"goto"			{ count(); yylval.str = my_strdup(yytext);return(GOTO); }
"if"			{ count(); yylval.str = my_strdup(yytext);return(IF); }
"int"			{ count(); yylval.str = my_strdup(yytext);return(INT); }
"long"			{ count(); yylval.str = my_strdup(yytext);return(LONG); }
"register"		{ count(); yylval.str = my_strdup(yytext);return(REGISTER); }
"return"		{ count(); yylval.str = my_strdup(yytext);return(RETURN); }
"short"			{ count(); yylval.str = my_strdup(yytext);return(SHORT); }
"signed"		{ count(); yylval.str = my_strdup(yytext);return(SIGNED); }
"sizeof"		{ count(); yylval.str = my_strdup(yytext);return(SIZEOF); }
"static"		{ count(); yylval.str = my_strdup(yytext);return(STATIC); }
"struct"		{ count(); yylval.str = my_strdup(yytext);return(STRUCT); }
"switch"		{ count(); yylval.str = my_strdup(yytext);return(SWITCH); }
"typedef"		{ count(); yylval.str = my_strdup(yytext);return(TYPEDEF); }
"union"			{ count(); yylval.str = my_strdup(yytext);return(UNION); }
"unsigned"		{ count(); yylval.str = my_strdup(yytext);return(UNSIGNED); }
"void"			{ count(); yylval.str = my_strdup(yytext);return(VOID); }
"volatile"		{ count(); yylval.str = my_strdup(yytext);return(VOLATILE); }
"while"			{ count(); yylval.str = my_strdup(yytext);return(WHILE); }

{L}({L}|{D})*	{ count(); yylval.str = my_strdup(yytext);return(check_type()); }

0[xX]{H}+{IS}?	{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }
0{D}+{IS}?		{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }
{D}+{IS}?		{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }

{D}+{E}{FS}?		{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); yylval.str = my_strdup(yytext);return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); yylval.str = my_strdup(yytext);return(STRING_LITERAL); }

"..."			{ count(); yylval.str = my_strdup(yytext);return(ELLIPSIS); }
">>="			{ count(); yylval.str = my_strdup(yytext);return(RIGHT_ASSIGN); }
"<<="			{ count(); yylval.str = my_strdup(yytext);return(LEFT_ASSIGN); }
"+="			{ count(); yylval.str = my_strdup(yytext);return(ADD_ASSIGN); }
"-="			{ count(); yylval.str = my_strdup(yytext);return(SUB_ASSIGN); }
"*="			{ count(); yylval.str = my_strdup(yytext);return(MUL_ASSIGN); }
"/="			{ count(); yylval.str = my_strdup(yytext);return(DIV_ASSIGN); }
"%="			{ count(); yylval.str = my_strdup(yytext);return(MOD_ASSIGN); }
"&="			{ count(); yylval.str = my_strdup(yytext);return(AND_ASSIGN); }
"^="			{ count(); yylval.str = my_strdup(yytext);return(XOR_ASSIGN); }
"|="			{ count(); yylval.str = my_strdup(yytext);return(OR_ASSIGN); }
">>"			{ count(); yylval.str = my_strdup(yytext);return(RIGHT_OP); }
"<<"			{ count(); yylval.str = my_strdup(yytext);return(LEFT_OP); }
"++"			{ count(); yylval.str = my_strdup(yytext);return(INC_OP); }
"--"			{ count(); yylval.str = my_strdup(yytext);return(DEC_OP); }
"->"			{ count(); yylval.str = my_strdup(yytext);return(PTR_OP); }
"&&"			{ count(); yylval.str = my_strdup(yytext);return(AND_OP); }
"||"			{ count(); yylval.str = my_strdup(yytext);return(OR_OP); }
"<="			{ count(); yylval.str = my_strdup(yytext);return(LE_OP); }
">="			{ count(); yylval.str = my_strdup(yytext);return(GE_OP); }
"=="			{ count(); yylval.str = my_strdup(yytext);return(EQ_OP); }
"!="			{ count(); yylval.str = my_strdup(yytext);return(NE_OP); }
";"			{ count(); yylval.str = my_strdup(yytext);return(SEMICOLON); }
("{"|"<%")		{ count(); yylval.str = my_strdup(yytext);return(O_B); }
("}"|"%>")		{ count(); yylval.str = my_strdup(yytext);return(C_B); }
","			{ count(); yylval.str = my_strdup(yytext);return(COMMA); }
":"			{ count(); yylval.str = my_strdup(yytext);return(COLON);}
"="			{ count(); yylval.str = my_strdup(yytext);return(EQUAL);}
"("			{ count(); yylval.str = my_strdup(yytext);return(O_P); }
")"			{ count(); yylval.str = my_strdup(yytext);return(C_P); }
("["|"<:")		{ count(); yylval.str = my_strdup(yytext);return(O_S); }
("]"|":>")		{ count(); yylval.str = my_strdup(yytext);return(C_S); }
"."			{ count(); yylval.str = my_strdup(yytext);return(DOT); }
"&"			{ count(); yylval.str = my_strdup(yytext);return(AMPERSAND);}
"!"			{ count(); yylval.str = my_strdup(yytext);return(NOT);}
"~"			{ count(); yylval.str = my_strdup(yytext);return(TILDE);}
"-"			{ count(); yylval.str = my_strdup(yytext);return(MINUS);}
"+"			{ count(); yylval.str = my_strdup(yytext);return(PLUS);}
"*"			{ count(); yylval.str = my_strdup(yytext);return(MUL);}
"/"			{ count(); yylval.str = my_strdup(yytext);return(DIV);}
"%"			{ count(); yylval.str = my_strdup(yytext);return(MOD);}
"<"			{ count(); yylval.str = my_strdup(yytext);return(LT);}
">"			{ count(); yylval.str = my_strdup(yytext);return(GT);}
"^"			{ count(); yylval.str = my_strdup(yytext);return(XOR);}
"|"			{ count(); yylval.str = my_strdup(yytext);return(OR);}
"?"			{ count(); yylval.str = my_strdup(yytext);return(TERNARY);}

[ \t\v\f]	{ count(); }
[\n]        { line++;count(); }
.			{ /* ignore bad characters */ }

%%

int 
yywrap()
{
	return(1);
}


void 
comment()
{
	char c, c1;
	//printf("\n I am a comment Line:%d\n",line);

loop:
	while ((c = input()) != '*' && c != 0);
	//	putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	
	/*
	if (c != 0)
		putchar(c1);
	*/
}


int column = 0;

void 
count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	//ECHO;
}


int 
check_type()
{
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return(TYPE_NAME);
*
*	return(IDENTIFIER);
*/

/*
*	it actually will only return IDENTIFIER
*/

	return(IDENTIFIER);
}

