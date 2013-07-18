/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "working.y"

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


/* Line 268 of yacc.c  */
#line 113 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     TYPEDEF = 284,
     EXTERN = 285,
     STATIC = 286,
     AUTO = 287,
     REGISTER = 288,
     CHAR = 289,
     SHORT = 290,
     INT = 291,
     LONG = 292,
     SIGNED = 293,
     UNSIGNED = 294,
     FLOAT = 295,
     DOUBLE = 296,
     CONST = 297,
     VOLATILE = 298,
     VOID = 299,
     STRUCT = 300,
     UNION = 301,
     ENUM = 302,
     ELLIPSIS = 303,
     O_P = 304,
     C_P = 305,
     O_B = 306,
     C_B = 307,
     O_S = 308,
     C_S = 309,
     LT = 310,
     GT = 311,
     XOR = 312,
     NOT = 313,
     TILDE = 314,
     OR = 315,
     AMPERSAND = 316,
     DIV = 317,
     DOT = 318,
     EQUAL = 319,
     MINUS = 320,
     MOD = 321,
     TERNARY = 322,
     MUL = 323,
     COMMA = 324,
     COLON = 325,
     PLUS = 326,
     SEMICOLON = 327,
     CASE = 328,
     DEFAULT = 329,
     IF = 330,
     ELSE = 331,
     SWITCH = 332,
     WHILE = 333,
     DO = 334,
     FOR = 335,
     GOTO = 336,
     CONTINUE = 337,
     BREAK = 338,
     RETURN = 339,
     LOWER_THAN_ELSE = 340
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define TYPEDEF 284
#define EXTERN 285
#define STATIC 286
#define AUTO 287
#define REGISTER 288
#define CHAR 289
#define SHORT 290
#define INT 291
#define LONG 292
#define SIGNED 293
#define UNSIGNED 294
#define FLOAT 295
#define DOUBLE 296
#define CONST 297
#define VOLATILE 298
#define VOID 299
#define STRUCT 300
#define UNION 301
#define ENUM 302
#define ELLIPSIS 303
#define O_P 304
#define C_P 305
#define O_B 306
#define C_B 307
#define O_S 308
#define C_S 309
#define LT 310
#define GT 311
#define XOR 312
#define NOT 313
#define TILDE 314
#define OR 315
#define AMPERSAND 316
#define DIV 317
#define DOT 318
#define EQUAL 319
#define MINUS 320
#define MOD 321
#define TERNARY 322
#define MUL 323
#define COMMA 324
#define COLON 325
#define PLUS 326
#define SEMICOLON 327
#define CASE 328
#define DEFAULT 329
#define IF 330
#define ELSE 331
#define SWITCH 332
#define WHILE 333
#define DO 334
#define FOR 335
#define GOTO 336
#define CONTINUE 337
#define BREAK 338
#define RETURN 339
#define LOWER_THAN_ELSE 340




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 43 "working.y"

	char *str;



/* Line 293 of yacc.c  */
#line 325 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 337 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined xmalloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC xmalloc
#   if ! defined xmalloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  212
/* YYNRULES -- Number of states.  */
#define YYNSTATES  350

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   139,   141,   145,   149,   151,
     155,   157,   161,   163,   167,   169,   173,   175,   179,   181,
     187,   189,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   221,   223,   226,   230,   232,
     235,   237,   240,   242,   245,   247,   251,   253,   257,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   297,   302,   305,   307,
     309,   311,   314,   318,   321,   323,   326,   328,   330,   334,
     336,   339,   343,   348,   354,   357,   359,   363,   365,   369,
     371,   373,   376,   378,   380,   384,   389,   393,   398,   403,
     407,   409,   412,   415,   419,   421,   424,   426,   430,   432,
     436,   439,   442,   444,   446,   450,   452,   455,   457,   459,
     462,   466,   469,   473,   477,   482,   485,   489,   493,   498,
     500,   504,   509,   511,   515,   517,   519,   521,   523,   525,
     527,   531,   536,   540,   543,   547,   551,   556,   558,   561,
     563,   566,   568,   571,   577,   585,   591,   597,   605,   612,
     620,   624,   627,   630,   633,   637,   639,   642,   644,   646,
     651,   655,   659
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     147,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    49,
     106,    50,    -1,    87,    -1,    88,    53,   106,    54,    -1,
      88,    49,    50,    -1,    88,    49,    89,    50,    -1,    88,
      63,     3,    -1,    88,     7,     3,    -1,    88,     8,    -1,
      88,     9,    -1,   104,    -1,    89,    69,   104,    -1,    88,
      -1,     8,    90,    -1,     9,    90,    -1,    91,    92,    -1,
       6,    90,    -1,     6,    49,   133,    50,    -1,    61,    -1,
      68,    -1,    71,    -1,    65,    -1,    59,    -1,    58,    -1,
      90,    -1,    49,   133,    50,    92,    -1,    92,    -1,    93,
      68,    92,    -1,    93,    62,    92,    -1,    93,    66,    92,
      -1,    93,    -1,    94,    71,    93,    -1,    94,    65,    93,
      -1,    94,    -1,    95,    10,    94,    -1,    95,    11,    94,
      -1,    95,    -1,    96,    55,    95,    -1,    96,    56,    95,
      -1,    96,    12,    95,    -1,    96,    13,    95,    -1,    96,
      -1,    97,    14,    96,    -1,    97,    15,    96,    -1,    97,
      -1,    98,    61,    97,    -1,    98,    -1,    99,    57,    98,
      -1,    99,    -1,   100,    60,    99,    -1,   100,    -1,   101,
      16,   100,    -1,   101,    -1,   102,    17,   101,    -1,   102,
      -1,   102,    67,   106,    70,   103,    -1,   103,    -1,    90,
     105,   104,    -1,    64,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    27,    -1,   104,    -1,   106,    69,   104,
      -1,   103,    -1,   109,    72,    -1,   109,   110,    72,    -1,
     112,    -1,   112,   109,    -1,   113,    -1,   113,   109,    -1,
     124,    -1,   124,   109,    -1,   111,    -1,   110,    69,   111,
      -1,   125,    -1,   125,    64,   136,    -1,    29,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    44,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,    40,    -1,    41,
      -1,    38,    -1,    39,    -1,   114,    -1,   121,    -1,    28,
      -1,   115,     3,    51,   116,    52,    -1,   115,    51,   116,
      52,    -1,   115,     3,    -1,    45,    -1,    46,    -1,   117,
      -1,   116,   117,    -1,   118,   119,    72,    -1,   113,   118,
      -1,   113,    -1,   124,   118,    -1,   124,    -1,   120,    -1,
     119,    69,   120,    -1,   125,    -1,    70,   107,    -1,   125,
      70,   107,    -1,    47,    51,   122,    52,    -1,    47,     3,
      51,   122,    52,    -1,    47,     3,    -1,   123,    -1,   122,
      69,   123,    -1,     3,    -1,     3,    64,   107,    -1,    42,
      -1,    43,    -1,   127,   126,    -1,   126,    -1,     3,    -1,
      49,   125,    50,    -1,   126,    53,   107,    54,    -1,   126,
      53,    54,    -1,   126,    49,   129,    50,    -1,   126,    49,
     132,    50,    -1,   126,    49,    50,    -1,    68,    -1,    68,
     128,    -1,    68,   127,    -1,    68,   128,   127,    -1,   124,
      -1,   128,   124,    -1,   130,    -1,   130,    69,    48,    -1,
     131,    -1,   130,    69,   131,    -1,   109,   125,    -1,   109,
     134,    -1,   109,    -1,     3,    -1,   132,    69,     3,    -1,
     118,    -1,   118,   134,    -1,   127,    -1,   135,    -1,   127,
     135,    -1,    49,   134,    50,    -1,    53,    54,    -1,    53,
     107,    54,    -1,   135,    53,    54,    -1,   135,    53,   107,
      54,    -1,    49,    50,    -1,    49,   129,    50,    -1,   135,
      49,    50,    -1,   135,    49,   129,    50,    -1,   104,    -1,
      51,   137,    52,    -1,    51,   137,    69,    52,    -1,   136,
      -1,   137,    69,   136,    -1,   139,    -1,   140,    -1,   143,
      -1,   144,    -1,   145,    -1,   146,    -1,     3,    70,   138,
      -1,    73,   107,    70,   138,    -1,    74,    70,   138,    -1,
      51,    52,    -1,    51,   142,    52,    -1,    51,   141,    52,
      -1,    51,   141,   142,    52,    -1,   108,    -1,   141,   108,
      -1,   138,    -1,   142,   138,    -1,    72,    -1,   106,    72,
      -1,    75,    49,   106,    50,   138,    -1,    75,    49,   106,
      50,   138,    76,   138,    -1,    77,    49,   106,    50,   138,
      -1,    78,    49,   106,    50,   138,    -1,    79,   138,    78,
      49,   106,    50,    72,    -1,    80,    49,   143,   143,    50,
     138,    -1,    80,    49,   143,   143,   106,    50,   138,    -1,
      81,     3,    72,    -1,    82,    72,    -1,    83,    72,    -1,
      84,    72,    -1,    84,   106,    72,    -1,   148,    -1,   147,
     148,    -1,   149,    -1,   108,    -1,   109,   125,   141,   140,
      -1,   109,   125,   140,    -1,   125,   141,   140,    -1,   125,
     140,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    75,    75,    76,    77,    78,    82,    83,    84,    85,
      86,    87,    88,    89,    93,    94,    98,    99,   100,   101,
     102,   103,   107,   108,   109,   110,   111,   112,   116,   117,
     121,   122,   123,   124,   128,   129,   130,   134,   135,   136,
     140,   141,   142,   143,   144,   148,   149,   150,   154,   155,
     159,   160,   164,   165,   169,   170,   174,   175,   179,   180,
     184,   185,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   203,   204,   208,   212,   213,   217,   218,
     219,   220,   221,   222,   226,   227,   231,   232,   236,   237,
     238,   239,   240,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   259,   260,   261,   265,   266,
     270,   271,   275,   279,   280,   281,   282,   286,   287,   291,
     292,   293,   297,   298,   299,   303,   304,   308,   309,   313,
     314,   318,   319,   323,   324,   325,   326,   327,   328,   329,
     333,   334,   335,   336,   340,   341,   346,   347,   351,   352,
     356,   357,   358,   362,   363,   367,   368,   372,   373,   374,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   390,
     391,   392,   396,   397,   401,   402,   403,   404,   405,   406,
     410,   411,   412,   416,   417,   418,   419,   423,   424,   428,
     429,   433,   434,   437,   438,   439,   443,   444,   445,   518,
     589,   590,   591,   592,   593,   597,   600,   608,   609,   613,
     614,   615,   616
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "O_P", "C_P",
  "O_B", "C_B", "O_S", "C_S", "LT", "GT", "XOR", "NOT", "TILDE", "OR",
  "AMPERSAND", "DIV", "DOT", "EQUAL", "MINUS", "MOD", "TERNARY", "MUL",
  "COMMA", "COLON", "PLUS", "SEMICOLON", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "LOWER_THAN_ELSE", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    95,    95,    95,
      96,    96,    96,    96,    96,    97,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   117,   118,   118,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   136,
     136,   136,   137,   137,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   144,   145,   145,   145,   145,
     146,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,     0,   140,   208,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   124,     0,
       0,   144,   142,   141,    76,     0,    84,    86,    79,    81,
     107,     0,    83,     0,   187,     0,   212,     0,     0,     0,
     131,     1,   206,     0,   127,     0,   125,   134,   145,   143,
       0,    77,     0,   210,     0,     0,   114,     0,   110,     0,
     116,     2,     3,     4,     0,     0,     0,     0,   183,    27,
      26,    22,    25,    23,    24,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     6,    16,    28,
       0,    30,    34,    37,    40,    45,    48,    50,    52,    54,
      56,    58,    60,    73,     0,   189,   174,   175,     0,     0,
     176,   177,   178,   179,    86,   188,   211,   153,   139,   152,
       0,   146,   148,     0,     2,   136,    28,    75,     0,     0,
       0,   122,     0,    85,     0,   169,    87,   209,     0,   113,
     106,   111,     0,     0,   117,   119,   115,     0,     0,    20,
       0,    17,    18,     0,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,   203,     0,     0,    12,
      13,     0,     0,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    62,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   192,   185,     0,
     184,   190,     0,     0,   150,   157,   151,   158,   137,     0,
     138,     0,   135,   123,   128,   126,   172,     0,   105,   120,
       0,   112,     0,   180,     0,     5,     0,   157,   156,     0,
       0,   182,     0,     0,     0,     0,     0,   200,   204,    11,
       8,     0,    14,     0,    10,    61,    32,    33,    31,    36,
      35,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   186,   165,     0,     0,
     161,     0,   159,     0,     0,   147,   149,   154,   170,     0,
     118,   121,    21,    29,   181,     0,     0,     0,     0,     0,
       9,     0,     7,     0,   166,   160,   162,   167,     0,   163,
       0,   171,   173,   193,   195,   196,     0,     0,     0,    15,
      59,   168,   164,     0,     0,   198,     0,   194,   197,   199
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   271,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   205,
     124,   148,    54,    55,    45,    46,    26,    27,    28,    29,
      77,    78,    79,   163,   164,    30,    65,    66,    31,    32,
      33,    34,    43,   298,   141,   142,   143,   175,   299,   237,
     156,   247,   125,   126,   127,    57,   129,   130,   131,   132,
     133,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -212
static const yytype_int16 yypact[] =
{
     669,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,     5,    20,     7,  -212,     6,  1239,  1239,  -212,    19,
    -212,  1239,  1171,   -10,    11,   447,  -212,  -212,    -4,    80,
      46,  -212,  -212,     7,  -212,   118,  -212,  1134,  -212,  -212,
      56,   362,  -212,   301,  -212,     6,  -212,  1171,  1070,   727,
     -10,  -212,  -212,    80,   -12,    66,  -212,  -212,  -212,  -212,
      20,  -212,   796,  -212,  1171,   362,   362,   565,  -212,    17,
     362,    70,  -212,  -212,   912,   942,   942,   719,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,   981,   100,    98,   129,
     137,   583,   144,   195,   130,   132,   610,  -212,   136,   260,
     981,  -212,    43,    49,   211,    60,   209,   175,   160,   183,
     231,     1,  -212,  -212,   119,  -212,  -212,  -212,   383,   465,
    -212,  -212,  -212,  -212,   187,  -212,  -212,  -212,  -212,    18,
     203,   185,  -212,   -18,  -212,  -212,  -212,  -212,   205,    73,
     981,  -212,    80,  -212,   796,  -212,  -212,  -212,   980,  -212,
    -212,  -212,   981,   128,  -212,   192,  -212,   583,   719,  -212,
     981,  -212,  -212,    30,    -5,   207,   193,   583,   981,   981,
     981,   190,   680,   197,  -212,  -212,  -212,   147,   267,  -212,
    -212,   835,   981,   268,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,   981,  -212,   981,   981,   981,
     981,   981,   981,   981,   981,   981,   981,   981,   981,   981,
     981,   981,   981,   981,   981,   981,   981,  -212,  -212,   501,
    -212,  -212,  1025,   804,  -212,     8,  -212,    68,  -212,  1218,
    -212,   270,  -212,  -212,  -212,  -212,  -212,    77,  -212,  -212,
      17,  -212,   981,  -212,   224,  -212,  1093,   127,  -212,   981,
     583,  -212,    31,    32,    34,   226,   680,  -212,  -212,  -212,
    -212,    58,  -212,   -35,  -212,  -212,  -212,  -212,  -212,    43,
      43,    49,    49,   211,   211,   211,   211,    60,    60,   209,
     175,   160,   183,   231,   156,  -212,  -212,  -212,   238,   241,
    -212,   239,    68,  1195,   873,  -212,  -212,  -212,  -212,   766,
    -212,  -212,  -212,  -212,  -212,   583,   583,   583,   981,   904,
    -212,   981,  -212,   981,  -212,  -212,  -212,  -212,   242,  -212,
     240,  -212,  -212,   219,  -212,  -212,    62,   583,    63,  -212,
    -212,  -212,  -212,   583,   225,  -212,   583,  -212,  -212,  -212
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,  -212,   -56,  -212,   -85,    50,    28,    -2,
      12,    76,    79,    89,    75,    78,  -212,   -58,   -57,  -212,
     -42,   -60,     2,     0,  -212,   243,  -212,   131,  -212,  -212,
     233,   -65,   -70,  -212,    51,  -212,   249,   162,   158,    40,
     -30,    10,  -212,   -53,  -212,    81,  -212,   149,   -97,  -211,
    -138,  -212,   -88,  -212,   163,    86,   191,  -175,  -212,  -212,
    -212,  -212,   280,  -212
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   147,    24,   146,    60,   140,   159,   266,    38,     1,
     166,     1,   161,   181,     1,   155,   246,   174,   224,   322,
       1,     1,    50,     1,   302,   206,    48,    49,   169,   171,
     172,    52,   240,    42,   226,    25,   176,    24,   147,    58,
     146,   231,   236,    59,   256,   173,   302,    63,   233,    16,
      17,   241,   150,    69,   146,    22,    39,   232,   139,   135,
      22,   233,    40,    23,   187,    47,    22,   232,   225,    22,
      51,   233,   214,   215,    23,    23,   135,   258,    44,   253,
     255,   315,   316,    64,   317,    23,    23,   162,    23,   261,
     244,   319,   147,   161,   146,   134,    67,   155,   174,   226,
     226,   226,   249,   226,   147,   207,   146,    75,   320,   208,
     134,   209,   344,   346,   210,   216,   217,   303,   151,   165,
     211,   304,   276,   277,   278,   243,   173,   321,   173,   308,
     135,   226,   226,    74,   272,   152,   262,   263,   264,   128,
     167,   231,   152,   188,   189,   190,   309,   178,   275,   235,
     273,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   295,
     177,   332,   314,   301,   313,   147,   256,   146,   179,   234,
     233,    41,    76,   294,   257,   191,   180,    70,   226,   192,
      71,   227,   311,   182,   147,    56,   146,   250,   183,   193,
     251,    68,   184,   146,   185,    60,    76,    76,    76,    80,
      73,    76,   283,   284,   285,   286,   226,   221,    76,   268,
     136,   212,   213,   218,   219,   226,   323,   333,   334,   335,
     287,   288,   139,    80,    80,    80,   220,   157,    80,   139,
     281,   282,   235,   222,   330,    80,   147,   223,   146,   345,
     328,    72,   155,   238,   239,   347,   139,   259,   349,   242,
     279,   280,   252,   260,   339,   340,   257,   146,   265,   267,
     269,   274,    40,   307,   312,   318,   336,   338,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   324,    76,
     165,   325,   341,   326,   342,   343,   289,   348,   292,    76,
     290,   310,   293,   139,    81,    82,    83,    84,   158,    85,
      86,   291,   149,   153,   245,    62,    80,   254,     0,   229,
     306,     0,     0,     0,   204,     0,    80,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      87,     0,    53,    88,     0,     0,     0,     0,     0,    89,
      90,     0,    91,     0,     0,     0,    92,     0,     0,    93,
       0,     0,    94,    95,    96,    97,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,    81,    82,    83,    84,
       2,    85,    86,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    87,     0,    53,   228,     0,     0,     0,     0,
       0,    89,    90,     0,    91,     0,     0,    61,    92,     0,
       1,    93,     0,     0,    94,    95,    96,    97,    98,     0,
      99,   100,   101,   102,   103,   104,   105,   106,    81,    82,
      83,    84,     0,    85,    86,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    22,     0,     0,     0,
       0,     0,     0,     0,    81,    82,    83,    84,     0,    85,
      86,     0,     0,     0,    87,    23,    53,   230,     0,     0,
       0,     0,     0,    89,    90,     0,    91,     0,     0,     0,
      92,     0,     0,    93,     0,     0,    94,    95,    96,    97,
      98,     0,    99,   100,   101,   102,   103,   104,   105,   106,
      87,     0,    53,   296,     0,     0,     0,     0,     0,    89,
      90,     0,    91,     0,     0,     0,    92,     0,     0,    93,
       0,     0,    94,    95,    96,    97,    98,     0,    99,   100,
     101,   102,   103,   104,   105,   106,    81,    82,    83,    84,
       0,    85,    86,     2,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   144,    82,    83,    84,   160,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    53,     0,     0,     0,     0,     0,
       0,    89,    90,     0,    91,     0,     0,     0,    92,     0,
       0,    93,     0,     0,    94,    95,    96,    97,    98,    87,
      99,   100,   101,   102,   103,   104,   105,   106,    89,    90,
       0,    91,     1,     0,     0,    92,     0,     0,    93,     0,
       0,    94,   186,   144,    82,    83,    84,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    22,     0,
       0,     0,   144,    82,    83,    84,     0,    85,    86,    87,
     144,    82,    83,    84,     0,    85,    86,    23,    89,    90,
       0,    91,     0,     0,     0,    92,     0,     2,    93,     0,
       0,    94,    95,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,    87,   144,
      82,    83,    84,     0,    85,    86,    87,    89,    90,     0,
      91,   145,     0,     0,    92,    89,    90,    93,    91,     0,
      94,     0,    92,     0,     0,    93,     0,     0,    94,   144,
      82,    83,    84,     0,    85,    86,     0,   144,    82,    83,
      84,     0,    85,    86,     0,    87,     0,   154,   331,     0,
       0,     0,     0,     0,    89,    90,     0,    91,     0,     0,
       0,    92,     0,     0,    93,     0,     0,    94,   144,    82,
      83,    84,     0,    85,    86,    87,     0,   154,     0,     0,
       0,     0,     0,    87,    89,    90,     0,    91,   300,     0,
       0,    92,    89,    90,    93,    91,     0,    94,     0,    92,
       0,     0,    93,     0,     0,    94,   144,    82,    83,    84,
       0,    85,    86,     0,    87,   270,     0,     0,     0,     0,
       0,     0,     0,    89,    90,     0,    91,     0,     0,     0,
      92,     0,     0,    93,     0,     0,    94,   144,    82,    83,
      84,     0,    85,    86,     0,   144,    82,    83,    84,     0,
      85,    86,    87,     0,     0,     0,     0,   329,     0,     0,
       0,    89,    90,     0,    91,     0,     0,     0,    92,     0,
       0,    93,     0,     0,    94,   144,    82,    83,    84,     0,
      85,    86,     0,    87,   337,     0,     0,     0,     0,     0,
       0,   168,    89,    90,     0,    91,     0,     0,     0,    92,
      89,    90,    93,    91,     0,    94,     0,    92,     0,     0,
      93,     0,     0,    94,   144,    82,    83,    84,     0,    85,
      86,   170,     0,     0,     0,     0,     0,     0,     0,     0,
      89,    90,     0,    91,     0,     0,     0,    92,     2,     0,
      93,     0,     0,    94,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,     0,
      87,     0,   248,     0,     0,     0,     0,     0,     0,    89,
      90,     0,    91,     0,     0,     0,    92,     0,     0,    93,
       0,     0,    94,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   137,   232,   297,     0,     0,   233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,     0,     0,     0,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
     138,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,   256,   297,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,    53,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,   327,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   305,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-212))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    59,     0,    59,    34,    58,    76,   182,     3,     3,
      80,     3,    77,   101,     3,    72,   154,    87,    17,    54,
       3,     3,     3,     3,   235,   110,    26,    27,    84,    85,
      86,    31,    50,    23,    69,    35,    96,    35,    96,    49,
      96,   129,   139,    53,    49,    87,   257,    51,    53,    42,
      43,    69,    64,    43,   110,    49,    51,    49,    58,    57,
      49,    53,    22,    68,   106,    25,    49,    49,    67,    49,
      51,    53,    12,    13,    68,    68,    74,   174,    72,   167,
      50,    50,    50,     3,    50,    68,    68,    70,    68,   177,
     150,   266,   150,   158,   150,    55,    50,   154,   168,    69,
      69,    69,   162,    69,   162,    62,   162,    51,    50,    66,
      70,    68,    50,    50,    65,    55,    56,    49,    52,    79,
      71,    53,   207,   208,   209,    52,   168,    69,   170,    52,
     128,    69,    69,    47,   191,    69,   178,   179,   180,    53,
      70,   229,    69,     7,     8,     9,    69,    49,   205,   139,
     192,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   226,
      70,   309,   260,   233,   259,   233,    49,   233,    49,   139,
      53,    23,    51,   225,   174,    49,    49,    69,    69,    53,
      72,    72,   252,    49,   252,    32,   252,    69,     3,    63,
      72,    43,    72,   259,    72,   235,    75,    76,    77,    51,
      47,    80,   214,   215,   216,   217,    69,    57,    87,    72,
      57,    10,    11,    14,    15,    69,    70,   315,   316,   317,
     218,   219,   232,    75,    76,    77,    61,    74,    80,   239,
     212,   213,   232,    60,   304,    87,   304,    16,   304,   337,
     303,    64,   309,    50,    69,   343,   256,    50,   346,    54,
     210,   211,    70,    70,   321,   323,   256,   323,    78,    72,
       3,     3,   232,     3,    50,    49,   318,   319,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    50,   158,
     250,    50,    50,    54,    54,    76,   220,    72,   223,   168,
     221,   250,   224,   303,     3,     4,     5,     6,    75,     8,
       9,   222,    63,    70,   152,    35,   158,   168,    -1,   128,
     239,    -1,    -1,    -1,    64,    -1,   168,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    68,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,     3,     4,     5,     6,
      28,     8,     9,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    51,    52,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,     0,    65,    -1,
       3,    68,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,     3,     4,
       5,     6,    -1,     8,     9,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    49,    68,    51,    52,    -1,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      49,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    68,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,     3,     4,     5,     6,
      -1,     8,     9,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,     4,     5,     6,    52,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    68,    -1,    -1,    71,    72,    73,    74,    75,    49,
      77,    78,    79,    80,    81,    82,    83,    84,    58,    59,
      -1,    61,     3,    -1,    -1,    65,    -1,    -1,    68,    -1,
      -1,    71,    72,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,     8,     9,    49,
       3,     4,     5,     6,    -1,     8,     9,    68,    58,    59,
      -1,    61,    -1,    -1,    -1,    65,    -1,    28,    68,    -1,
      -1,    71,    72,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     3,
       4,     5,     6,    -1,     8,     9,    49,    58,    59,    -1,
      61,    54,    -1,    -1,    65,    58,    59,    68,    61,    -1,
      71,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,     3,
       4,     5,     6,    -1,     8,     9,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    49,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    71,     3,     4,
       5,     6,    -1,     8,     9,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    49,    58,    59,    -1,    61,    54,    -1,
      -1,    65,    58,    59,    68,    61,    -1,    71,    -1,    65,
      -1,    -1,    68,    -1,    -1,    71,     3,     4,     5,     6,
      -1,     8,     9,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      65,    -1,    -1,    68,    -1,    -1,    71,     3,     4,     5,
       6,    -1,     8,     9,    -1,     3,     4,     5,     6,    -1,
       8,     9,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    65,    -1,
      -1,    68,    -1,    -1,    71,     3,     4,     5,     6,    -1,
       8,     9,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    58,    59,    -1,    61,    -1,    -1,    -1,    65,
      58,    59,    68,    61,    -1,    71,    -1,    65,    -1,    -1,
      68,    -1,    -1,    71,     3,     4,     5,     6,    -1,     8,
       9,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    -1,    65,    28,    -1,
      68,    -1,    -1,    71,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     3,    -1,
      49,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    -1,    61,    -1,    -1,    -1,    65,    -1,    -1,    68,
      -1,    -1,    71,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,    49,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      50,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    51,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    50,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    49,    68,   108,   109,   112,   113,   114,   115,
     121,   124,   125,   126,   127,   147,   148,   149,     3,    51,
     125,   124,   127,   128,    72,   110,   111,   125,   109,   109,
       3,    51,   109,    51,   108,   109,   140,   141,    49,    53,
     126,     0,   148,    51,     3,   122,   123,    50,   124,   127,
      69,    72,    64,   140,   141,    51,   113,   116,   117,   118,
     124,     3,     4,     5,     6,     8,     9,    49,    52,    58,
      59,    61,    65,    68,    71,    72,    73,    74,    75,    77,
      78,    79,    80,    81,    82,    83,    84,    87,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   106,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   125,   108,   140,     3,    50,   109,
     129,   130,   131,   132,     3,    54,    90,   103,   107,   122,
      64,    52,    69,   111,    51,   104,   136,   140,   116,   118,
      52,   117,    70,   119,   120,   125,   118,    70,    49,    90,
      49,    90,    90,   106,   118,   133,   107,    70,    49,    49,
      49,   138,    49,     3,    72,    72,    72,   106,     7,     8,
       9,    49,    53,    63,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    64,   105,    92,    62,    66,    68,
      65,    71,    10,    11,    12,    13,    55,    56,    14,    15,
      61,    57,    60,    16,    17,    67,    69,    72,    52,   142,
      52,   138,    49,    53,   125,   127,   134,   135,    50,    69,
      50,    69,    54,    52,   107,   123,   136,   137,    52,   107,
      69,    72,    70,   138,   133,    50,    49,   127,   134,    50,
      70,   138,   106,   106,   106,    78,   143,    72,    72,     3,
      50,    89,   104,   106,     3,   104,    92,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    97,
      98,    99,   100,   101,   106,   104,    52,    50,   129,   134,
      54,   107,   135,    49,    53,    48,   131,     3,    52,    69,
     120,   107,    50,    92,   138,    50,    50,    50,    49,   143,
      50,    69,    54,    70,    50,    50,    54,    50,   129,    54,
     107,    52,   136,   138,   138,   138,   106,    50,   106,   104,
     103,    50,    54,    76,    50,   138,    50,   138,    72,   138
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 75 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 76 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 77 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 78 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 82 "working.y"
    {(yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 83 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 84 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 85 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 86 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 87 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 88 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 89 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 93 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 94 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 98 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 99 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 100 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 101 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 102 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 103 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 107 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 108 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 109 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 110 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 111 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 112 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 116 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 117 "working.y"
    { (yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 121 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 122 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 123 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 124 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 128 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 129 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 130 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 134 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 135 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 136 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 140 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 141 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 142 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 143 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 144 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 148 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 149 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 150 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 154 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 155 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 159 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 160 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 164 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 165 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 169 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 170 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 174 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 175 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 179 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 180 "working.y"
    {(yyval.str)=make_exp(5,(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 184 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 185 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 189 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 190 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 191 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 192 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 193 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 194 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 195 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 196 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 197 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 198 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 199 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 203 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 204 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 208 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 212 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),add_newline((yyvsp[(2) - (2)].str)));}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 213 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),add_newline((yyvsp[(3) - (3)].str)));}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 217 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 218 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 219 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 220 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 221 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 222 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 226 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 227 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 231 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 232 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 236 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 237 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 238 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 239 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 240 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 244 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 245 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 246 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 247 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 248 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 249 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 250 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 251 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 252 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 253 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 254 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 255 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 259 "working.y"
    {(yyval.str)=make_exp(5,(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),add_newline((yyvsp[(3) - (5)].str)),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 260 "working.y"
    { (yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),add_newline((yyvsp[(2) - (4)].str)),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 261 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 265 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 266 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 270 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 271 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 275 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),add_newline((yyvsp[(3) - (3)].str)));}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 279 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 280 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 281 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 282 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 286 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 287 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 291 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 292 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 293 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 297 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 298 "working.y"
    {(yyval.str)=make_exp(5,(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));}
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 299 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 303 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 304 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 308 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 309 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 313 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 314 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 318 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 319 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 323 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 324 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 325 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 326 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 327 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 328 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 329 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 333 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 334 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 335 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 336 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 340 "working.y"
    {(yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 341 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 346 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 347 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 351 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 352 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 356 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 357 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 358 "working.y"
    {(yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 362 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 363 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 367 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 368 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 372 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 373 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 374 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 378 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 379 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 380 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 381 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 382 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 383 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 384 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 385 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 386 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 390 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 391 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 392 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 396 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 397 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 401 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 402 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 403 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 404 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 405 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 406 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 410 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 411 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 412 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 416 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 417 "working.y"
    { (yyval.str)=make_exp(3,add_newline((yyvsp[(1) - (3)].str)),add_newline((yyvsp[(2) - (3)].str)),add_newline((yyvsp[(3) - (3)].str)));}
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 418 "working.y"
    { (yyval.str)=make_exp(3,add_newline((yyvsp[(1) - (3)].str)),add_newline((yyvsp[(2) - (3)].str)),add_newline((yyvsp[(3) - (3)].str)));}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 419 "working.y"
    {(yyval.str)=make_exp(4,add_newline((yyvsp[(1) - (4)].str)),(yyvsp[(2) - (4)].str),add_newline((yyvsp[(3) - (4)].str)),add_newline((yyvsp[(4) - (4)].str)));}
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 423 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 424 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 428 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 429 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 433 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str));}
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 434 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 437 "working.y"
    { (yyval.str)=make_exp(5,(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));}
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 438 "working.y"
    { (yyval.str)=make_exp(7,(yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),(yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].str));}
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 439 "working.y"
    {(yyval.str)=make_exp(5,(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));}
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 443 "working.y"
    {(yyval.str)=make_exp(5,(yyvsp[(1) - (5)].str),(yyvsp[(2) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 444 "working.y"
    { (yyval.str)=make_exp(7,(yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),(yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].str));}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 446 "working.y"
    {
		for_id1++;
		
		memset(t,0,sizeof(t));
		if(flag_buff) 
		{
			sprintf(t,"\n--%d,%d==\n ",for_count,for_id1);	
		}
		
		//if(!check_for_fun($4))
		{
			if(flag_nested && !check_for_fun((yyvsp[(4) - (6)].str)))
			{
				//if(parse_for_init(t,$3)&& print_nested1)
				//	fprintf(fnested1,"\n--%d==\n%s\n",for_id1,t);
				if(parse_for_init(t,(yyvsp[(3) - (6)].str))&&flag_body)
					fprintf(fbody,"\n--%d==\n%s%s%s%s%s\n%s\n",for_id1,(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].str),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].str));
				//printf("\n is not fun : %s \n", $4);
			}
			else
			{
		
		
				//printf("\n For Init: ##%s## \n",$3);
				strcat(for_init,(yyvsp[(3) - (6)].str));
				if(for_count==0 && !check_for_fun((yyvsp[(4) - (6)].str)))
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
		
		strcat(t,(yyvsp[(1) - (6)].str));
		strcat(t,"(");
		strcat(t,(yyvsp[(3) - (6)].str));
		
		strcat(t,(yyvsp[(4) - (6)].str));
		strcat(t,")\n");
			
		strcat(t,(yyvsp[(6) - (6)].str));
		
		if(for_count==0)
		{
			strcat(t,"\n\n");
			memset(for_init,0,sizeof(for_init));
			
		}	
		
		(yyval.str)=my_strdup(t); 
		for_count--;
		step-=1;
	}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 519 "working.y"
    {
		for_id1++;
		memset(t,0,sizeof(t));
		if(flag_buff) 
		{
			sprintf(t,"\n--%d,%d==\n ",for_count,for_id1);	
		}
		//if(!check_for_fun($4))
		{
			if(flag_nested && !check_for_fun((yyvsp[(4) - (7)].str)) )
			{
				if(parse_for_init(t,(yyvsp[(3) - (7)].str))&& print_nested1)
					fprintf(fnested1,"\n--%d==\n%s\n",for_id1,t);
				
				//printf("\n is not fun : %s \n", $4);
				if(parse_for_init(t,(yyvsp[(3) - (7)].str))&&flag_body)
				{
					fprintf(fbody,"\n--%d==\n%s%s%s%s%s%s\n%s\n",for_id1,(yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),(yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].str));
				}
			}
			else
			{
				strcat(for_init,(yyvsp[(3) - (7)].str));
				if(for_count==0 && !check_for_fun((yyvsp[(4) - (7)].str)))
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
				
		strcat(t,(yyvsp[(1) - (7)].str));
		strcat(t,"(");
		strcat(t,(yyvsp[(3) - (7)].str)); 
		
		strcat(t,(yyvsp[(4) - (7)].str));
		strcat(t,(yyvsp[(5) - (7)].str));
		strcat(t,")\n");
		strcat(t,(yyvsp[(7) - (7)].str));
		if(for_count==0)
		{
			strcat(t,"\n\n");
			memset(for_init,0,sizeof(for_init));
			
		}	
		(yyval.str)=my_strdup(t); 
		for_count--;
		step--;
	}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 589 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),add_newline((yyvsp[(3) - (3)].str))); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 590 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),add_newline((yyvsp[(2) - (2)].str)));}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 591 "working.y"
    { (yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),add_newline((yyvsp[(2) - (2)].str)));}
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 592 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),add_newline((yyvsp[(2) - (2)].str)));}
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 593 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),add_newline((yyvsp[(3) - (3)].str)));}
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 597 "working.y"
    {
						   		fprintf(yyout,"\n#include<omp.h>\n%s\n",(yyvsp[(1) - (1)].str));  
						   }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 601 "working.y"
    {
								/* fprintf(yyout,"#2\n%s%s\n",$1,$2); */ /* OMIT $1, (reason?) */ 
								fprintf(yyout,"\n%s\n",(yyvsp[(2) - (2)].str));
							}
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 608 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 609 "working.y"
    { (yyval.str)=make_exp(1,(yyvsp[(1) - (1)].str)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 613 "working.y"
    {(yyval.str)=make_exp(4,(yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));}
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 614 "working.y"
    { (yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 615 "working.y"
    {(yyval.str)=make_exp(3,(yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));}
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 616 "working.y"
    {(yyval.str)=make_exp(2,(yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));}
    break;



/* Line 1806 of yacc.c  */
#line 3734 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 619 "working.y"


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
	char *temp=(char *) xmalloc(sizeof(char)*(strlen(str)+3));
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
	char *temp=(char *) xmalloc(sizeof(char)*(strlen(y)+1));
	
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
void remove_file(char *str)
{
	char t[100];
	strcpy(t,"rm ");
	strcat(t,str);
	strcat(t,".orig");
	//printf("\n DELETE %s \n",t);
	system(t);//remove file.orig created by astyle
}
int lex_yacc(char *in,char *out)
{
	
	               
	if( fparallel_flag && !flag_interactive && !flag_nested)
	{
		char t[100]="";
		yyin=fopen(in,"r");
		yyout=fopen(out,"w");
		flag_nested=0;
		yyparse();
		fclose(yyout);
		fclose(yyin);
		strcpy(t,"astyle --style=allman ");
		system(strcat(t,out));
		remove_file(out);
		return ;
			
	}
	if( fparallel_flag && !flag_interactive && flag_nested)
	{
		yyin=fopen(in,"r");
		
		int del=0;
		yyout=fopen(out,"w");
		flag_nested=1;
		yyparse();
		fclose(yyout);
		fclose(yyin);
		strcpy(t,"astyle --style=allman ");
		system(strcat(t,out));
		remove_file(out);
		return ;
			
	}
	if( fparallel_flag && flag_interactive && !flag_nested )
	{
		//pass1:generate nested1.c with pragma added blindly,flag_nested=1
		//and adds nested pragma with id to buff_pragma_nested1.c
		yyin=fopen(in,"r");
		yyout=fopen("nested1.c","w");
		fnested1=fopen("buff_pragma_nested1.c","w");
		print_nested1=1;
		flag_nested=1;
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
		yyout=fopen(".temp.c","w");//ignore
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
		remove_file("buff.c");
		remove_file("nested0.c");
		remove_file("nested1.c");
		remove_file("buff_body.c");
		if(flag_interactive)
			system("java -jar /home/neo/gcc-4.4.0_build2/bin/UserInteraction.jar");
	}	
	else
	{
		printf("\n Error in GCC flags. Allowed flag combinations are : \n");
		printf(" ./gcc file.c -fparallel\n");
		printf(" ./gcc file.c -fparallel -fnested\n");
		printf(" ./gcc file.c -fparallel -finteractive\n");
	}	
	return 0;
}
