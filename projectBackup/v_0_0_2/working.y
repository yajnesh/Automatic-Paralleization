%{
	#define MAX 10000
	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	#include<string.h>
	#include <stdarg.h>     /* va_list, va_start, va_arg, va_end */
	#include "extra.h"
	extern int yylex();
	extern int yyparse();
	extern int line;
	extern FILE *yyin;
	extern FILE *yyout;
	void yyerror(char *s);
	int for_count=-1;
	char *make_exp(int n,...);
	int parse_for_init(char *t,char *y);
	char * add_newline(char *str);
	int check_for_fun(char *str);
	int validate(char str[]);
	int isAlphaDigit( char c);
	char t[MAX];
	char for_init[MAX];
	char space[MAX];
	int step=0;
	int i;
	int flag_nested=0;
	int flag_buff=0;
	int flag_body=0;
	int tempIncr=0;
	FILE *fnested1;
	FILE *fnested0;
	FILE *fbody;
	int for_id1=0;
	int print_nested0=0;
	int print_nested1=0;
	int flag_interactive=0;
	int flag_add_omp_set=1;
	int fparallel_flag=0;
%}

%union
{
	char *str;
}

%token <str> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token <str> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <str> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <str> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <str> XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token <str> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <str> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <str> STRUCT UNION ENUM ELLIPSIS

/* '(' ')' '{' '}' '[' ']' */
%token <str> O_P C_P O_B C_B O_S C_S
/* ';' */
%token <str> LT GT XOR NOT TILDE OR AMPERSAND DIV DOT EQUAL MINUS MOD TERNARY MUL COMMA COLON PLUS
%token <str> SEMICOLON 

/* */
%token <str> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN
%type <str> translation_unit primary_expression postfix_expression argument_expression_list unary_expression unary_operator cast_expression multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression logical_and_expression logical_or_expression conditional_expression assignment_expression assignment_operator expression constant_expression declaration declaration_specifiers init_declarator_list init_declarator storage_class_specifier type_specifier struct_declaration_list struct_declaration specifier_qualifier_list struct_declarator_list struct_declarator enum_specifier enumerator_list enumerator type_qualifier declarator direct_declarator pointer type_qualifier_list struct_or_union_specifier struct_or_union parameter_type_list parameter_list parameter_declaration identifier_list type_name abstract_declarator direct_abstract_declarator initializer initializer_list statement labeled_statement compound_statement declaration_list statement_list expression_statement selection_statement iteration_statement jump_statement external_declaration function_definition

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE
%start translation_unit
%%



primary_expression
	: IDENTIFIER 	 	 { $$=make_exp(1,$1); }
	| CONSTANT 		 	 { $$=make_exp(1,$1); }
	| STRING_LITERAL 	 { $$=make_exp(1,$1); }
	| O_P expression C_P { $$=make_exp(3,$1,$2,$3);}
	;

postfix_expression
	: primary_expression 									{$$=make_exp(1,$1); }
	| postfix_expression O_S expression C_S 				{$$=make_exp(4,$1,$2,$3,$4);}
	| postfix_expression O_P C_P							{$$=make_exp(3,$1,$2,$3);}
	| postfix_expression O_P argument_expression_list C_P	{$$=make_exp(4,$1,$2,$3,$4);}
	| postfix_expression DOT IDENTIFIER 					{$$=make_exp(3,$1,$2,$3);}
	| postfix_expression PTR_OP IDENTIFIER 					{$$=make_exp(3,$1,$2,$3);}
	| postfix_expression INC_OP 							{$$=make_exp(2,$1,$2);}
	| postfix_expression DEC_OP								{$$=make_exp(2,$1,$2);}
	;

argument_expression_list
	: assignment_expression 								{ $$=make_exp(1,$1); }
	| argument_expression_list COMMA assignment_expression  { $$=make_exp(3,$1,$2,$3);}
	;

unary_expression 
	: postfix_expression 			{ $$=make_exp(1,$1); }
	| INC_OP unary_expression 		{$$=make_exp(2,$1,$2);}
	| DEC_OP unary_expression 		{ $$=make_exp(2,$1,$2);}
	| unary_operator cast_expression {$$=make_exp(2,$1,$2);}
	| SIZEOF unary_expression {$$=make_exp(2,$1,$2);}
	| SIZEOF O_P type_name C_P{$$=make_exp(4,$1,$2,$3,$4);}
	;

unary_operator
	: AMPERSAND { $$=make_exp(1,$1);}
	| MUL { $$=make_exp(1,$1);}
	| PLUS { $$=make_exp(1,$1);}
	| MINUS { $$=make_exp(1,$1);}
	| TILDE { $$=make_exp(1,$1);}
	| NOT { $$=make_exp(1,$1);}
	;

cast_expression
	: unary_expression { $$=make_exp(1,$1); }
	| O_P type_name C_P cast_expression { $$=make_exp(4,$1,$2,$3,$4);}
	;

multiplicative_expression
	: cast_expression { $$=make_exp(1,$1); }
	| multiplicative_expression MUL cast_expression {$$=make_exp(3,$1,$2,$3);}
	| multiplicative_expression DIV cast_expression {$$=make_exp(3,$1,$2,$3);}
	| multiplicative_expression MOD cast_expression {$$=make_exp(3,$1,$2,$3);}
	;

additive_expression
	: multiplicative_expression { $$=make_exp(1,$1); }
	| additive_expression PLUS multiplicative_expression {$$=make_exp(3,$1,$2,$3);}
	| additive_expression MINUS multiplicative_expression {$$=make_exp(3,$1,$2,$3);}
	;

shift_expression
	: additive_expression { $$=make_exp(1,$1); }
	| shift_expression LEFT_OP additive_expression {$$=make_exp(3,$1,$2,$3);}
	| shift_expression RIGHT_OP additive_expression {$$=make_exp(3,$1,$2,$3);}
	;

relational_expression
	: shift_expression { $$=make_exp(1,$1); }
	| relational_expression LT shift_expression {$$=make_exp(3,$1,$2,$3);}
	| relational_expression GT shift_expression {$$=make_exp(3,$1,$2,$3);}
	| relational_expression LE_OP shift_expression {$$=make_exp(3,$1,$2,$3);}
	| relational_expression GE_OP shift_expression {$$=make_exp(3,$1,$2,$3);}
	;

equality_expression
	: relational_expression { $$=make_exp(1,$1); }
	| equality_expression EQ_OP relational_expression {$$=make_exp(3,$1,$2,$3);}
	| equality_expression NE_OP relational_expression {$$=make_exp(3,$1,$2,$3);}
	;

and_expression
	: equality_expression { $$=make_exp(1,$1); }
	| and_expression AMPERSAND equality_expression {$$=make_exp(3,$1,$2,$3);}
	;

exclusive_or_expression
	: and_expression { $$=make_exp(1,$1); }
	| exclusive_or_expression XOR and_expression {$$=make_exp(3,$1,$2,$3);}
	;

inclusive_or_expression
	: exclusive_or_expression { $$=make_exp(1,$1); }
	| inclusive_or_expression OR exclusive_or_expression {$$=make_exp(3,$1,$2,$3);}
	;

logical_and_expression
	: inclusive_or_expression { $$=make_exp(1,$1); }
	| logical_and_expression AND_OP inclusive_or_expression {$$=make_exp(3,$1,$2,$3);}
	;

logical_or_expression
	: logical_and_expression { $$=make_exp(1,$1); }
	| logical_or_expression OR_OP logical_and_expression {$$=make_exp(3,$1,$2,$3);}
	;

conditional_expression
	: logical_or_expression { $$=make_exp(1,$1); }
	| logical_or_expression TERNARY expression COLON conditional_expression {$$=make_exp(5,$1,$2,$3,$4,$5);}
	;

assignment_expression
	: conditional_expression { $$=make_exp(1,$1); }
	| unary_expression assignment_operator assignment_expression {$$=make_exp(3,$1,$2,$3);}
	;

assignment_operator
	: EQUAL { $$=make_exp(1,$1);}
	| MUL_ASSIGN { $$=make_exp(1,$1); }
	| DIV_ASSIGN { $$=make_exp(1,$1); }
	| MOD_ASSIGN { $$=make_exp(1,$1); }
	| ADD_ASSIGN { $$=make_exp(1,$1); }
	| SUB_ASSIGN { $$=make_exp(1,$1); }
	| LEFT_ASSIGN{ $$=make_exp(1,$1); }
	| RIGHT_ASSIGN{ $$=make_exp(1,$1); }
	| AND_ASSIGN { $$=make_exp(1,$1); }
	| XOR_ASSIGN { $$=make_exp(1,$1); }
	| OR_ASSIGN { $$=make_exp(1,$1); }
	;

expression
	: assignment_expression { $$=make_exp(1,$1); }
	| expression COMMA assignment_expression {$$=make_exp(3,$1,$2,$3);}
	;

constant_expression
	: conditional_expression { $$=make_exp(1,$1); }
	;

declaration
	: declaration_specifiers SEMICOLON {$$=make_exp(2,$1,add_newline($2));}
	| declaration_specifiers init_declarator_list SEMICOLON { $$=make_exp(3,$1,$2,add_newline($3));}
	;

declaration_specifiers
	: storage_class_specifier { $$=make_exp(1,$1); }
	| storage_class_specifier declaration_specifiers {$$=make_exp(2,$1,$2);}
	| type_specifier { $$=make_exp(1,$1); }
	| type_specifier declaration_specifiers {$$=make_exp(2,$1,$2);}
	| type_qualifier { $$=make_exp(1,$1); }
	| type_qualifier declaration_specifiers { $$=make_exp(2,$1,$2); }
	;

init_declarator_list
	: init_declarator { $$=make_exp(1,$1); }
	| init_declarator_list COMMA init_declarator { $$=make_exp(3,$1,$2,$3); }
	;

init_declarator
	: declarator { $$=make_exp(1,$1); }
	| declarator EQUAL initializer { $$=make_exp(3,$1,$2,$3); }
	;

storage_class_specifier
	: TYPEDEF { $$=make_exp(1,$1); }
	| EXTERN { $$=make_exp(1,$1); }
	| STATIC { $$=make_exp(1,$1); }
	| AUTO { $$=make_exp(1,$1); }
	| REGISTER { $$=make_exp(1,$1); }
	;

type_specifier
	: VOID { $$=make_exp(1,$1); }
	| CHAR { $$=make_exp(1,$1); }
	| SHORT { $$=make_exp(1,$1); }
	| INT { $$=make_exp(1,$1); }
	| LONG { $$=make_exp(1,$1); }
	| FLOAT { $$=make_exp(1,$1); }
	| DOUBLE { $$=make_exp(1,$1); }
	| SIGNED { $$=make_exp(1,$1); }
	| UNSIGNED { $$=make_exp(1,$1); }
	| struct_or_union_specifier { $$=make_exp(1,$1); }
	| enum_specifier { $$=make_exp(1,$1); }
	| TYPE_NAME { $$=make_exp(1,$1); }
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER O_B struct_declaration_list C_B {$$=make_exp(5,$1,$2,add_newline($3),$4,$5);}
	| struct_or_union O_B struct_declaration_list C_B{ $$=make_exp(4,$1,add_newline($2),$3,$4);}
	| struct_or_union IDENTIFIER {$$=make_exp(2,$1,$2);}
	;

struct_or_union
	: STRUCT { $$=make_exp(1,$1); }
	| UNION { $$=make_exp(1,$1); }
	;

struct_declaration_list
	: struct_declaration { $$=make_exp(1,$1); }
	| struct_declaration_list struct_declaration {$$=make_exp(2,$1,$2);}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list SEMICOLON { $$=make_exp(3,$1,$2,add_newline($3));}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {$$=make_exp(2,$1,$2);}
	| type_specifier { $$=make_exp(1,$1); }
	| type_qualifier specifier_qualifier_list {$$=make_exp(2,$1,$2);}
	| type_qualifier { $$=make_exp(1,$1); }
	;

struct_declarator_list
	: struct_declarator { $$=make_exp(1,$1); }
	| struct_declarator_list COMMA struct_declarator {$$=make_exp(3,$1,$2,$3);}
	;

struct_declarator
	: declarator { $$=make_exp(1,$1); }
	| COLON constant_expression { $$=make_exp(2,$1,$2);}
	| declarator COLON constant_expression {$$=make_exp(3,$1,$2,$3);}
	;

enum_specifier
	: ENUM O_B enumerator_list C_B {$$=make_exp(4,$1,$2,$3,$4);}
	| ENUM IDENTIFIER O_B enumerator_list C_B{$$=make_exp(5,$1,$2,$3,$4,$5);}
	| ENUM IDENTIFIER {$$=make_exp(2,$1,$2);}
	;

enumerator_list
	: enumerator { $$=make_exp(1,$1); }
	| enumerator_list COMMA enumerator {$$=make_exp(3,$1,$2,$3);}
	;

enumerator
	: IDENTIFIER { $$=make_exp(1,$1); }
	| IDENTIFIER EQUAL constant_expression { $$=make_exp(3,$1,$2,$3); }
	;

type_qualifier
	: CONST { $$=make_exp(1,$1); }
	| VOLATILE { $$=make_exp(1,$1); }
	;

declarator
	: pointer direct_declarator { $$=make_exp(2,$1,$2);}
	| direct_declarator { $$=make_exp(1,$1);}
	;

direct_declarator
	: IDENTIFIER { $$=make_exp(1,$1); }
	| O_P declarator C_P {$$=make_exp(3,$1,$2,$3);}
	| direct_declarator O_S constant_expression C_S {$$=make_exp(4,$1,$2,$3,$4);}
	| direct_declarator O_S C_S {$$=make_exp(3,$1,$2,$3);}
	| direct_declarator O_P parameter_type_list C_P {$$=make_exp(4,$1,$2,$3,$4);}
	| direct_declarator O_P identifier_list C_P {$$=make_exp(4,$1,$2,$3,$4);}
	| direct_declarator O_P C_P {$$=make_exp(3,$1,$2,$3);}
	;

pointer
	: MUL { $$=make_exp(1,$1);}
	| MUL type_qualifier_list { $$=make_exp(2,$1,$2);}
	| MUL pointer { $$=make_exp(2,$1,$2);}
	| MUL type_qualifier_list pointer {$$=make_exp(3,$1,$2,$3);}
	;

type_qualifier_list
	: type_qualifier {$$=make_exp(1,$1); }
	| type_qualifier_list type_qualifier {$$=make_exp(2,$1,$2);}
	;


parameter_type_list
	: parameter_list { $$=make_exp(1,$1); }
	| parameter_list COMMA ELLIPSIS {$$=make_exp(3,$1,$2,$3);}
	;

parameter_list
	: parameter_declaration { $$=make_exp(1,$1); }
	| parameter_list COMMA parameter_declaration {$$=make_exp(3,$1,$2,$3);}
	;

parameter_declaration
	: declaration_specifiers declarator {$$=make_exp(2,$1,$2);}
	| declaration_specifiers abstract_declarator {$$=make_exp(2,$1,$2);}
	| declaration_specifiers {$$=make_exp(1,$1);}
	;

identifier_list
	: IDENTIFIER { $$=make_exp(1,$1); }
	| identifier_list COMMA IDENTIFIER {$$=make_exp(3,$1,$2,$3);}
	;

type_name
	: specifier_qualifier_list { $$=make_exp(1,$1); }
	| specifier_qualifier_list abstract_declarator {$$=make_exp(2,$1,$2);}
	;

abstract_declarator
	: pointer { $$=make_exp(1,$1); }
	| direct_abstract_declarator { $$=make_exp(1,$1); }
	| pointer direct_abstract_declarator {$$=make_exp(2,$1,$2);}
	;

direct_abstract_declarator
	: O_P abstract_declarator C_P {$$=make_exp(3,$1,$2,$3);}
	| O_S C_S {$$=make_exp(2,$1,$2);}
	| O_S constant_expression C_S {$$=make_exp(3,$1,$2,$3);}
	| direct_abstract_declarator O_S C_S{$$=make_exp(3,$1,$2,$3);}
	| direct_abstract_declarator O_S constant_expression C_S{$$=make_exp(4,$1,$2,$3,$4); }
	| O_P C_P {$$=make_exp(2,$1,$2);}
	| O_P parameter_type_list C_P { $$=make_exp(3,$1,$2,$3);}
	| direct_abstract_declarator O_P C_P {$$=make_exp(3,$1,$2,$3); }
	| direct_abstract_declarator O_P parameter_type_list C_P {$$=make_exp(4,$1,$2,$3,$4);}
	;

initializer
	: assignment_expression { $$=make_exp(1,$1); }
	| O_B initializer_list C_B {$$=make_exp(3,$1,$2,$3);}
	| O_B initializer_list COMMA C_B {$$=make_exp(4,$1,$2,$3,$4);}
	;

initializer_list
	: initializer { $$=make_exp(1,$1); }
	| initializer_list COMMA initializer { $$=make_exp(3,$1,$2,$3); }
	;

statement
	: labeled_statement { $$=make_exp(1,$1); }
	| compound_statement { $$=make_exp(1,$1); }
	| expression_statement { $$=make_exp(1,$1); }
	| selection_statement { $$=make_exp(1,$1); }
	| iteration_statement { $$=make_exp(1,$1); }
	| jump_statement { $$=make_exp(1,$1); }
	;

labeled_statement
	: IDENTIFIER COLON statement {$$=make_exp(3,$1,$2,$3); }
	| CASE constant_expression COLON statement {$$=make_exp(4,$1,$2,$3,$4);}
	| DEFAULT COLON statement {$$=make_exp(3,$1,$2,$3);}
	;

compound_statement
	: O_B C_B { $$=make_exp(2,$1,$2);}
	| O_B statement_list C_B { $$=make_exp(3,add_newline($1),add_newline($2),add_newline($3));}
	| O_B declaration_list C_B { $$=make_exp(3,add_newline($1),add_newline($2),add_newline($3));}
	| O_B declaration_list statement_list C_B {$$=make_exp(4,add_newline($1),$2,add_newline($3),add_newline($4));}
	;

declaration_list
	: declaration { $$=make_exp(1,$1); }
	| declaration_list declaration { $$=make_exp(2,$1,$2);}
	;

statement_list
	: statement { $$=make_exp(1,$1); }
	| statement_list statement { $$=make_exp(2,$1,$2); }
	;

expression_statement
	: SEMICOLON { $$=make_exp(1,$1);}
	| expression SEMICOLON {$$=make_exp(2,$1,$2); }
	;
selection_statement
	: IF O_P expression C_P statement  %prec LOWER_THAN_ELSE  { $$=make_exp(5,$1,$2,$3,$4,$5);}
	| IF O_P expression C_P statement ELSE statement { $$=make_exp(7,$1,$2,$3,$4,$5,$6,$7);}
	| SWITCH O_P expression C_P statement {$$=make_exp(5,$1,$2,$3,$4,$5);}
	;

iteration_statement
	: WHILE O_P expression C_P statement {$$=make_exp(5,$1,$2,$3,$4,$5);} 
	| DO statement WHILE O_P expression C_P SEMICOLON { $$=make_exp(7,$1,$2,$3,$4,$5,$6,$7);} 
	| FOR O_P expression_statement expression_statement C_P statement 
	{
		for_id1++;
		
		memset(t,0,sizeof(t));
		if(flag_buff) 
		{
			sprintf(t,"\n--%d,%d==\n ",for_count,for_id1);	
		}
		
		//if(!check_for_fun($4))
		{
			if(flag_nested && !check_for_fun($4))
			{
				//if(parse_for_init(t,$3)&& print_nested1)
				//	fprintf(fnested1,"\n--%d==\n%s\n",for_id1,t);
				if(parse_for_init(t,$3)&&flag_body)
					fprintf(fbody,"\n--%d==\n%s%s%s%s%s\n%s\n",for_id1,$1,$2,$3,$4,$5,$6);
				//printf("\n is not fun : %s \n", $4);
			}
			else
			{
		
		
				//printf("\n For Init: ##%s## \n",$3);
				strcat(for_init,$3);
				if(for_count==0 && !check_for_fun($4))
				{
					
					if(parse_for_init(t,for_init) && print_nested0 )
						fprintf(fnested0,"\n--%d==\n%s\n",for_id1,t);
				}
			}
		}
		char te[100];
		if(for_count==0 && flag_buff)
		{
			if(flag_add_omp_set)
			{
				//strcpy(te,"omp_set_num_threads(8);\n___START\n");
				//flag_add_omp_set=0;
				strcpy(te,"int num_of_threads=omp_get_num_threads();\nomp_set_num_threads(num_of_threads);\n___START\n");
				flag_add_omp_set=0;		
			}
			else
				strcpy(te,"___START\n");
		}
		else
				*te='\0';
			
		strcat(te,t);
		strcpy(t,te);
		
		strcat(t,$1);
		strcat(t,"(");
		strcat(t,$3);
		
		strcat(t,$4);
		strcat(t,")\n");
			
		strcat(t,$6);
		
		if(for_count==0)
		{
			strcat(t,"\n\n");
			memset(for_init,0,sizeof(for_init));
			
		}	
		
		$$=my_strdup(t); 
		for_count--;
		step-=1;
	}
	| FOR O_P expression_statement expression_statement expression C_P statement 
	{
		for_id1++;
		memset(t,0,sizeof(t));
		if(flag_buff) 
		{
			sprintf(t,"\n--%d,%d==\n ",for_count,for_id1);	
		}
		//if(!check_for_fun($4))
		{
			if(flag_nested && !check_for_fun($4) )
			{
				if(parse_for_init(t,$3)&& print_nested1)
					fprintf(fnested1,"\n--%d==\n%s\n",for_id1,t);
				
				//printf("\n is not fun : %s \n", $4);
				if(parse_for_init(t,$3)&&flag_body)
				{
					fprintf(fbody,"\n--%d==\n%s%s%s%s%s%s\n%s\n",for_id1,$1,$2,$3,$4,$5,$6,$7);
				}
			}
			else
			{
				strcat(for_init,$3);
				if(for_count==0 && !check_for_fun($4))
				{
					if(parse_for_init(t,for_init) && print_nested0 )
						fprintf(fnested0,"\n--%d==\n%s\n",for_id1,t);
				}
			}
		}
		
		char te[100];
		if(for_count==0 && flag_buff)
		{
		
			if(flag_add_omp_set)
			{
				strcat(te,"int num_of_threads=omp_get_num_threads();\nomp_set_num_threads(num_of_threads);\n___START\n");
				flag_add_omp_set=0;	
			}
			else
				strcpy(te,"___START\n");
		}
		else
				*te='\0';
				
		strcat(te,t);
		strcpy(t,te);		
				
		strcat(t,$1);
		strcat(t,"(");
		strcat(t,$3); 
		
		strcat(t,$4);
		strcat(t,$5);
		strcat(t,")\n");
		strcat(t,$7);
		if(for_count==0)
		{
			strcat(t,"\n\n");
			memset(for_init,0,sizeof(for_init));
			
		}	
		$$=my_strdup(t); 
		for_count--;
		step--;
	}
	;

jump_statement
	: GOTO IDENTIFIER SEMICOLON {$$=make_exp(3,$1,$2,add_newline($3)); }
	| CONTINUE SEMICOLON	{ $$=make_exp(2,$1,add_newline($2));}
	| BREAK SEMICOLON	{ $$=make_exp(2,$1,add_newline($2));}
	| RETURN SEMICOLON	{$$=make_exp(2,$1,add_newline($2));}
	| RETURN expression SEMICOLON {$$=make_exp(3,$1,$2,add_newline($3));}
	;

translation_unit
	: external_declaration {
						   		fprintf(yyout,"\n#include<omp.h>\n%s\n",$1);  
						   }
	| translation_unit external_declaration  
							{
								/* fprintf(yyout,"#2\n%s%s\n",$1,$2); */ /* OMIT $1, (reason?) */ 
								fprintf(yyout,"\n%s\n",$2);
							}
	;

external_declaration
	: function_definition { $$=make_exp(1,$1); }
	| declaration { $$=make_exp(1,$1); }
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement {$$=make_exp(4,$1,$2,$3,$4);}
	| declaration_specifiers declarator compound_statement { $$=make_exp(3,$1,$2,$3);}
	| declarator declaration_list compound_statement {$$=make_exp(3,$1,$2,$3);}
	| declarator compound_statement {$$=make_exp(2,$1,$2);}
	;

%%

#include <stdio.h>

extern char *yytext;
extern int column;

/* returns 1, if c is alphabet or digit... */
int 
isAlphaDigit( char c)
{
	if( (c>='a' && c <='z' )|| (c<='A' && c>='Z'))
		return  1;
	if( c>='0' && c<='9')
		return 1;
	return 0;		
}

/* check for function exsistnce of conditional statement in for loop */
int 
check_for_fun(char *str) 
{
	char prev;
	int i;
	prev=str[0];
	//for(i=0 ;str[i] ;i++)  
	//	printf("%c%d\t",str[i],str[i]);
	for(i=1 ;str[i] ;i++)  
	{
		//if(str[i]=='(' && ( isAlphaDigit(prev)) || isdigit(prev) || prev=='_' || prev=='$') ) 
		if(str[i]=='(' && ( isAlphaDigit(prev) || prev=='_' || prev=='$') ) 
				return 1;	
		prev=( (str[i]==' '||str[i]=='\t' || str[i]=='\n') ? prev : str[i]);		
	}							
	return 0;
}

/* Function adds '\n' to the end of the string */
char * 
add_newline(char *str)
{
	char *temp=(char *) malloc(sizeof(char)*(strlen(str)+3));
	if(!temp)
	{
		printf("\n Malloc failed, char * add_newline(char *str)\n");
		exit(0);
	}
	strcpy(temp,str);
	strcat(temp,"\n");
	free(str);
	return temp;
	
}
void
rev_str( char *str,char *ptr) 
{
	char temp;
	
	while(str<ptr) {
	
		temp=*str;
		*str=*ptr;
		*ptr=temp;
		str++;
		ptr--;
	}
}
void reverse_private_parameters(char * t)
{
	//printf("\n before private : %s \n",t);
	for(i=0;t[i];i++)
	{
		if(t[i]=='(')
		{
			rev_str(t+i,t+strlen(t)-1);
			break;
		}	
	}
	int begin=0;
	for(i=0;t[i];i++)
	{
		if(t[i]==')')
		{
			t[i]='(';
			i++;
			begin=i;
			//rev(t+i,t+strlen(t)-1);
			break;
		}	
	}
	for(;t[i];i++)
	{
		if(t[i]==',')
		{
			rev_str(t+begin,t+i-1);
			begin=i+1;
		}	
	}
	rev_str(t+begin,t+i-2);
	t[i-1]=')';
	t[i]='\0';
	//printf("\n after private : %s \n",t);
}
int 
parse_for_init(char *t,char *y)
{
	
	/* Function works only for strings like , "a=0;b=0;" for other cases like, "a+=0;b-=0;a>>=1;++a;" it wont work...*/	
	int i=0,j=0,pragma_added=0;
	char *temp=(char *) malloc(sizeof(char)*(strlen(y)+1));
	
	if(!temp)
	{
		printf("\n Malloc failed, void parse_for_init(char *t,char *y)\n");
		exit(0);
	}
	
	int flag_avoid_last_comma=1;
	
	if(validate(y))
	{
		pragma_added=1;
		if(flag_buff) 
		{
			sprintf(t,"\n--%d,%d==\n ",for_count,for_id1);	
		}
		else if(flag_body)
				*t='\0';
		else 
		{
		
			sprintf(t,"\n#pragma omp parallel for private(");
			for(i=0;y[i];) {
				while(y[i]!='=') 
				{
					if(y[i]!=' '&& y[i]!='\t')
						temp[j++]=y[i];
					i++;	
				}	 
				temp[j]='\0';
				if(!flag_avoid_last_comma) 
					strcat(t,","); 
				strcat(t,temp); 
			
				flag_avoid_last_comma=0;
				
				while(y[i] && y[i++]!=';') ;
				
				j=0;
			}
			strcat(t,")");
			reverse_private_parameters(t);
			strcat(t,"\n");
			
		}
		
		tempIncr++;
	}
	free(temp);	
	return pragma_added;
		
}
/* checks whether str contains a "for" loop init section which is allowed in openmp for parallelising.*/
int 
validate(char str[]){
	int flag=0,i,len=strlen(str);	
	for(i=0;i<len;i++){
		if(str[i]==',')
			return 0;
		if(str[i]=='\t'||str[i]==' ')
			continue;
		if(str[i]==';'){
			if(flag==0)
				return 0;
			else
				flag=0;
		}else
			flag=1;
	}
	return 1;
}

void 
yyerror(s)
char *s;
{
	fflush(stdout);
	//printf("\nLine: %d %*s\n%*s\n",line,column, "^", column, s);
	printf("\nLine: %d Col:%d\n %*s\n%*s \n",line,column,column, "^", column, s);
}

/* function concatenates all parameters and creates a new copy using strdup*/
char *
make_exp(int n,...)
{
	int i;
	char *ch;
	va_list vl;
	va_start(vl,n);
	memset(t,0,sizeof(t));
	ch=va_arg(vl,char*);
	if(ch)
		strcpy(t,ch);
	free(ch);
	
	if(n>1)
	{
		strcat(t," ");
		for(i=1;i<n;i++)
		{
			ch=va_arg(vl,char*);
			
			if(ch)
				strcat(t,ch);
			free(ch);
			//strcat(t," ");
		}
	}
		
	return my_strdup(t);
}
int main()
{
	//pass1:generate nested1.c with pragma added blindly,flag_nested=1
	//and adds nested pragma with id to buff_pragma_nested1.c
	flag_nested=1;
	yyin=fopen("hello.c","r");
	yyout=fopen("nested1.c","w");
	fnested1=fopen("buff_pragma_nested1.c","w");
	print_nested1=1;
	if(!yyin || !yyout)
	{
		printf("\nError in file operation\n");
		exit(0);
	}
	yyparse();
	fclose(yyout);
	fclose(fnested1);
	print_nested1=0;
	
	
	
	//pass2: generate buff.c with id's to all parallelisable for loops
	for_id1=0;
	tempIncr=0;
	flag_buff=1;
	rewind(yyin);
	yyout=fopen("buff.c","w");
	yyparse();
	fclose(yyout);
	
	//pass3:generates parallelisable for loop body with id's
	flag_buff=0;
	for_id1=0;
	tempIncr=0;	
	flag_body=1;//enable flag_body for next pass
	rewind(yyin);
	yyout=fopen("temp.c","w");//ignore
	fbody=fopen("buff_body.c","w");
	yyparse();
	fclose(yyout);
	fclose(fbody);
	
	
	//pass3:generate pragma with id to buff_pragma_nested0.c,flag_nested=0	
	flag_nested=0;
	print_nested0=1;
	flag_body=0;
	for_id1=0;
	tempIncr=0;
	rewind(yyin);
	yyout=fopen("nested0.c","w");
	fnested0=fopen("buff_pragma_nested0.c","w");
	yyparse();
	fclose(fnested0);
	fclose(yyout);
	fclose(yyin);
	system("astyle --style=allman buff.c");
	system("astyle --style=allman nested0.c");
	system("astyle --style=allman nested1.c");
	system("astyle --style=allman buff_body.c");
	if(flag_interactive)
		system("java -jar UserInteraction.jar");
	return 0;
}
