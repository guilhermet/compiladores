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
#line 1 "tiger.y"

#include <stdio.h>
#include "absyn.h"
#include "errormsg.h"

A_exp absyn_root;

void yyerror(char *s){
   EM_error(EM_tokPos, "%s", s);
}



/* Line 268 of yacc.c  */
#line 85 "tiger.tab.c"

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
     ID = 258,
     STRING = 259,
     INT = 260,
     COMMA = 261,
     COLON = 262,
     SEMICOLON = 263,
     LPAREN = 264,
     RPAREN = 265,
     LBRACK = 266,
     RBRACK = 267,
     LBRACE = 268,
     RBRACE = 269,
     DOT = 270,
     PLUS = 271,
     MINUS = 272,
     TIMES = 273,
     DIVIDE = 274,
     EQUAL = 275,
     NEQUAL = 276,
     LT = 277,
     LE = 278,
     GT = 279,
     GE = 280,
     AND = 281,
     OR = 282,
     ASSIGN = 283,
     ARRAY = 284,
     IF = 285,
     THEN = 286,
     ELSE = 287,
     WHILE = 288,
     FOR = 289,
     TO = 290,
     DO = 291,
     LET = 292,
     IN = 293,
     END = 294,
     OF = 295,
     BREAK = 296,
     NIL = 297,
     FUNCTION = 298,
     VAR = 299,
     TYPE = 300,
     IMPORT = 301,
     PRIVATE = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 15 "tiger.y"

	int ival;
	char* sval;

	struct A_var_ *A_var;
	struct A_exp_ *A_exp;
	struct A_dec_ *A_dec;
	struct A_ty_ *A_ty;

	struct A_decList_ *A_decList;
	struct A_expList_ *A_expList;
	struct A_field_ *A_field;
	struct A_fieldList_ *A_fieldList;
	struct A_fundec_ *A_fundec;
	struct A_fundecList_ *A_fundecList;
	struct A_namety_ *A_namety;
	struct A_nametyList_ *A_nametyList;
	struct A_efield_ *A_efield;
	struct A_efieldList_ *A_efieldList;

	


/* Line 293 of yacc.c  */
#line 192 "tiger.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 204 "tiger.tab.c"

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
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  143

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    18,    24,    26,
      28,    30,    32,    36,    41,    45,    47,    52,    61,    63,
      69,    74,    81,    83,    87,    92,    95,    96,   100,   104,
     105,   109,   110,   113,   114,   118,   121,   125,   129,   133,
     137,   141,   145,   149,   153,   157,   161,   165,   169,   170,
     173,   175,   177,   179,   181,   184,   189,   191,   195,   199,
     200,   203,   207,   208,   212,   219,   224,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    42,    -1,     5,    -1,     4,
      -1,     3,    11,    50,    12,    40,    50,    -1,     3,    13,
      55,    56,    14,    -1,    52,    -1,    59,    -1,    60,    -1,
      61,    -1,     9,    53,     9,    -1,     3,     9,    57,    10,
      -1,    52,    28,    50,    -1,    51,    -1,    33,    50,    36,
      50,    -1,    34,     3,    28,    50,    35,    50,    36,    50,
      -1,    41,    -1,    37,    62,    38,    53,    39,    -1,    30,
      50,    31,    50,    -1,    30,    50,    31,    50,    32,    50,
      -1,     3,    -1,     3,    15,     3,    -1,     3,    11,    50,
      12,    -1,    50,    54,    -1,    -1,     8,    50,    54,    -1,
       3,    20,    50,    -1,    -1,     6,    55,    56,    -1,    -1,
      50,    58,    -1,    -1,     6,    50,    58,    -1,    17,    50,
      -1,    50,    16,    50,    -1,    50,    17,    50,    -1,    50,
      18,    50,    -1,    50,    19,    50,    -1,    50,    20,    50,
      -1,    50,    21,    50,    -1,    50,    22,    50,    -1,    50,
      23,    50,    -1,    50,    24,    50,    -1,    50,    25,    50,
      -1,    50,    26,    50,    -1,    50,    27,    50,    -1,    -1,
      63,    62,    -1,    70,    -1,    64,    -1,    71,    -1,    65,
      -1,    65,    64,    -1,    45,     3,    20,    66,    -1,     3,
      -1,    13,    67,    14,    -1,    29,    40,     3,    -1,    -1,
      68,    69,    -1,     3,     7,     3,    -1,    -1,     6,    68,
      69,    -1,    44,     3,     7,     3,    28,    50,    -1,    44,
       3,    28,    50,    -1,    43,     3,     9,    67,    10,     7,
       3,    20,    50,    -1,    43,     3,     9,    67,    10,    20,
      50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    80,    80,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     103,   104,   107,   108,   109,   112,   115,   116,   119,   122,
     123,   126,   127,   130,   131,   134,   135,   136,   137,   138,
     141,   142,   143,   144,   145,   146,   149,   150,   153,   154,
     157,   158,   159,   162,   163,   166,   169,   170,   171,   174,
     175,   178,   181,   182,   185,   186,   189,   190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "INT", "COMMA", "COLON",
  "SEMICOLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE",
  "DOT", "PLUS", "MINUS", "TIMES", "DIVIDE", "EQUAL", "NEQUAL", "LT", "LE",
  "GT", "GE", "AND", "OR", "ASSIGN", "ARRAY", "IF", "THEN", "ELSE",
  "WHILE", "FOR", "TO", "DO", "LET", "IN", "END", "OF", "BREAK", "NIL",
  "FUNCTION", "VAR", "TYPE", "IMPORT", "PRIVATE", "$accept", "program",
  "exp", "ifexp", "lvalue", "sequence", "sequencetail", "recordfield",
  "recordtail", "funcParametros", "parametrosTail", "MathExp",
  "CompareExp", "BooleanExp", "decs", "dec", "typedecs", "typedec", "ty",
  "tyfields", "tyfield", "comma_tyfields", "vardec", "fundec", 0
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    51,    52,    52,    52,    53,    54,    54,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    64,    64,    65,    66,    66,    66,    67,
      67,    68,    69,    69,    70,    70,    71,    71
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     6,     5,     1,     1,
       1,     1,     3,     4,     3,     1,     4,     8,     1,     5,
       4,     6,     1,     3,     4,     2,     0,     3,     3,     0,
       3,     0,     2,     0,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     2,
       1,     1,     1,     1,     2,     4,     1,     3,     3,     0,
       2,     3,     0,     3,     6,     4,     9,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    22,     5,     4,     0,     0,     0,     0,     0,    48,
      18,     3,     0,     2,    15,     8,     9,    10,    11,    31,
       0,     0,     0,    26,     0,    35,     0,     0,     0,     0,
       0,     0,     0,    48,    51,    53,    50,    52,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    29,    23,     0,    25,
      12,     0,     0,     0,     0,     0,     0,     0,    49,    54,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    14,     0,    32,    13,    24,     0,     0,     0,
      26,    20,    16,     0,    59,     0,     0,     0,     0,    33,
       0,    28,    29,     7,    27,     0,     0,     0,     0,    62,
       0,    65,    56,    59,     0,    55,    19,    34,     6,    30,
      21,     0,     0,     0,     0,    60,     0,     0,     0,     0,
      61,     0,     0,    62,    64,    57,    58,    17,     0,    67,
      63,     0,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    23,    14,    15,    24,    59,    56,    89,    53,
      84,    16,    17,    18,    32,    33,    34,    35,   115,   108,
     109,   125,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -20
static const yytype_int16 yypact[] =
{
      51,    -1,   -20,   -20,    51,    51,    51,    51,     1,   -19,
     -20,   -20,     9,   207,   -20,   -15,   -20,   -20,   -20,    51,
      51,    14,    15,   147,     6,     3,   179,    91,    24,    50,
      54,    79,    52,   -19,   -20,    41,   -20,   -20,   -20,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    53,    81,   195,    69,    88,   -20,    51,   -20,
     -20,    51,    51,    51,    86,    -5,    77,    51,   -20,   -20,
       3,     3,   -20,   -20,   229,   229,    48,    48,    48,    48,
     219,    12,   207,    51,   -20,   -20,    58,    51,    14,    85,
     147,    70,   207,   159,    98,   100,    51,    -2,    65,    53,
      51,   207,    88,   -20,   -20,    51,    51,   112,   110,   115,
      94,   207,   -20,    98,    83,   -20,   -20,   -20,   207,   -20,
     -20,   126,   121,    -4,    98,   -20,    51,   111,   125,    51,
     -20,   127,    51,   115,   207,   -20,   -20,   207,   113,   207,
     -20,    51,   207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -20,   -20,     0,   -20,   -20,    64,    44,    47,    34,   -20,
      38,   -20,   -20,   -20,   105,   -20,   104,   -20,   -20,    27,
      30,    23,   -20,   -20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      13,   112,    95,   131,    28,    25,    26,    27,    19,    38,
      20,   113,    21,    51,    22,    60,   132,    55,    57,    52,
      54,    41,    42,    96,    29,    30,    31,   114,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    63,    64,     1,     2,     3,    65,    90,    83,
       4,    91,    92,    93,    39,    40,    41,    42,     5,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     6,    66,    99,     7,     8,    31,   101,     9,    87,
      67,    85,    10,    11,    88,    94,   111,    97,   100,   103,
     118,   107,   105,   110,   116,   120,   121,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   122,
     123,   124,   126,   128,   130,   135,   134,    62,   136,   137,
     138,    98,   139,   141,   104,   102,   119,   117,    68,    69,
     127,   142,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   133,    58,   140,     0,     0,     0,
       0,     0,   129,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,   106,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    86,     0,     0,
      61,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    39,    40,    41,    42,     0,
       0,    45,    46,    47,    48
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-20))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     3,     7,     7,     3,     5,     6,     7,     9,     0,
      11,    13,    13,    28,    15,     9,    20,     3,     3,    19,
      20,    18,    19,    28,    43,    44,    45,    29,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    28,     3,     3,     4,     5,     3,    58,     6,
       9,    61,    62,    63,    16,    17,    18,    19,    17,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    30,     3,    83,    33,    34,    45,    87,    37,    20,
      38,    10,    41,    42,     6,     9,    96,    20,    40,    14,
     100,     3,    32,     3,    39,   105,   106,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     7,
      10,     6,    28,    40,     3,    14,   126,    36,     3,   129,
       3,    67,   132,    20,    90,    88,   102,    99,    33,    35,
     113,   141,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   124,     8,   133,    -1,    -1,    -1,
      -1,    -1,    36,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    12,    -1,    -1,
      31,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    17,    30,    33,    34,    37,
      41,    42,    49,    50,    51,    52,    59,    60,    61,     9,
      11,    13,    15,    50,    53,    50,    50,    50,     3,    43,
      44,    45,    62,    63,    64,    65,    70,    71,     0,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    50,    57,    50,     3,    55,     3,     8,    54,
       9,    31,    36,    28,     3,     3,     3,    38,    62,    64,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,     6,    58,    10,    12,    20,     6,    56,
      50,    50,    50,    50,     9,     7,    28,    20,    53,    50,
      40,    50,    55,    14,    54,    32,    35,     3,    67,    68,
       3,    50,     3,    13,    29,    66,    39,    58,    50,    56,
      50,    50,     7,    10,     6,    69,    28,    67,    40,    36,
       3,     7,    20,    68,    50,    14,     3,    50,     3,    50,
      69,    20,    50
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
#line 80 "tiger.y"
    { absyn_root=(yyvsp[(1) - (1)].A_exp);}
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 83 "tiger.y"
    { (yyval.A_exp)=A_NilExp(EM_tokPos); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 84 "tiger.y"
    { (yyval.A_exp)=A_IntExp(EM_tokPos, (yyvsp[(1) - (1)].ival)); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 85 "tiger.y"
    { (yyval.A_exp)=A_StringExp(EM_tokPos, (yyvsp[(1) - (1)].sval)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 86 "tiger.y"
    { (yyval.A_exp)=A_ArrayExp(EM_tokPos, S_Symbol((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].A_exp), (yyvsp[(6) - (6)].A_exp)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 87 "tiger.y"
    { (yyval.A_exp)=A_RecordExp(EM_tokPos, S_Symbol((yyvsp[(1) - (5)].sval)), A_EfieldList((yyvsp[(3) - (5)].A_efield), (yyvsp[(4) - (5)].A_efieldList))); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 88 "tiger.y"
    { (yyval.A_exp)=A_VarExp(EM_tokPos, (yyvsp[(1) - (1)].A_var)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 89 "tiger.y"
    { (yyval.A_exp)=(yyvsp[(1) - (1)].A_exp); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 90 "tiger.y"
    { (yyval.A_exp)=(yyvsp[(1) - (1)].A_exp); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 91 "tiger.y"
    { (yyval.A_exp)=(yyvsp[(1) - (1)].A_exp); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 92 "tiger.y"
    { (yyval.A_exp)=A_SeqExp(EM_tokPos, (yyvsp[(2) - (3)].A_expList)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 93 "tiger.y"
    { (yyval.A_exp)=A_CallExp(EM_tokPos, S_Symbol((yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].A_expList)); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 94 "tiger.y"
    { (yyval.A_exp)=A_AssignExp(EM_tokPos, (yyvsp[(1) - (3)].A_var), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 95 "tiger.y"
    { (yyval.A_exp)=(yyvsp[(1) - (1)].A_exp); }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 96 "tiger.y"
    { (yyval.A_exp)=A_WhileExp(EM_tokPos, (yyvsp[(2) - (4)].A_exp), (yyvsp[(4) - (4)].A_exp)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 97 "tiger.y"
    { (yyval.A_exp)=A_ForExp(EM_tokPos, S_Symbol((yyvsp[(2) - (8)].sval)), (yyvsp[(4) - (8)].A_exp), (yyvsp[(6) - (8)].A_exp), (yyvsp[(8) - (8)].A_exp)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 98 "tiger.y"
    { (yyval.A_exp)=A_BreakExp(EM_tokPos); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 99 "tiger.y"
    { (yyval.A_exp)=A_LetExp(EM_tokPos, (yyvsp[(2) - (5)].A_decList), A_SeqExp(EM_tokPos, (yyvsp[(4) - (5)].A_expList))); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 103 "tiger.y"
    { (yyval.A_exp)=A_IfExp(EM_tokPos, (yyvsp[(2) - (4)].A_exp), (yyvsp[(4) - (4)].A_exp), NULL); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 104 "tiger.y"
    { (yyval.A_exp)=A_IfExp(EM_tokPos, (yyvsp[(2) - (6)].A_exp), (yyvsp[(4) - (6)].A_exp), (yyvsp[(6) - (6)].A_exp)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 107 "tiger.y"
    { (yyval.A_var)=A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[(1) - (1)].sval)));}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 108 "tiger.y"
    { (yyval.A_var)=A_FieldVar(EM_tokPos, A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[(1) - (3)].sval))), S_Symbol((yyvsp[(3) - (3)].sval))); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 109 "tiger.y"
    { (yyval.A_var)=A_SubscriptVar(EM_tokPos, A_SimpleVar(EM_tokPos, S_Symbol((yyvsp[(1) - (4)].sval))), (yyvsp[(3) - (4)].A_exp)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 112 "tiger.y"
    { (yyval.A_expList)=A_ExpList((yyvsp[(1) - (2)].A_exp), (yyvsp[(2) - (2)].A_expList)); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 115 "tiger.y"
    { (yyval.A_expList)=NULL; }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 116 "tiger.y"
    { (yyval.A_expList)=A_ExpList((yyvsp[(2) - (3)].A_exp), (yyvsp[(3) - (3)].A_expList)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 119 "tiger.y"
    { (yyval.A_efield)=A_Efield(S_Symbol((yyvsp[(1) - (3)].sval)), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 122 "tiger.y"
    { (yyval.A_efieldList)=NULL; }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 123 "tiger.y"
    { (yyval.A_efieldList)=A_EfieldList((yyvsp[(2) - (3)].A_efield), (yyvsp[(3) - (3)].A_efieldList)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 126 "tiger.y"
    { (yyval.A_expList)=NULL; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 127 "tiger.y"
    { (yyval.A_expList)=A_ExpList((yyvsp[(1) - (2)].A_exp), (yyvsp[(2) - (2)].A_expList)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 130 "tiger.y"
    { (yyval.A_expList)=NULL; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 131 "tiger.y"
    { (yyval.A_expList)=A_ExpList((yyvsp[(2) - (3)].A_exp), (yyvsp[(3) - (3)].A_expList)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 134 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_minusOp, A_IntExp(EM_tokPos, 0), (yyvsp[(2) - (2)].A_exp)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 135 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_plusOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 136 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_minusOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 137 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_timesOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 138 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_divideOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 141 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_eqOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 142 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_neqOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 143 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_ltOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 144 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_leOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 145 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_gtOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 146 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_geOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 149 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_andOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 150 "tiger.y"
    { (yyval.A_exp)=A_OpExp(EM_tokPos, A_orOp, (yyvsp[(1) - (3)].A_exp), (yyvsp[(3) - (3)].A_exp)); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 153 "tiger.y"
    { (yyval.A_decList)=NULL;}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 154 "tiger.y"
    { (yyval.A_decList)=A_DecList((yyvsp[(1) - (2)].A_dec), (yyvsp[(2) - (2)].A_decList));}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 157 "tiger.y"
    { (yyval.A_dec)=(yyvsp[(1) - (1)].A_dec); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 158 "tiger.y"
    { (yyval.A_dec)=A_TypeDec(EM_tokPos, (yyvsp[(1) - (1)].A_nametyList)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 159 "tiger.y"
    { (yyval.A_dec)=(yyvsp[(1) - (1)].A_dec); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 162 "tiger.y"
    { (yyval.A_nametyList)=A_NametyList((yyvsp[(1) - (1)].A_namety), NULL);}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 163 "tiger.y"
    { (yyval.A_nametyList)=A_NametyList((yyvsp[(1) - (2)].A_namety), (yyvsp[(2) - (2)].A_nametyList)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 166 "tiger.y"
    { (yyval.A_namety)=A_Namety(S_Symbol((yyvsp[(2) - (4)].sval)), (yyvsp[(4) - (4)].A_ty)); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 169 "tiger.y"
    { (yyval.A_ty)=A_NameTy(EM_tokPos, S_Symbol((yyvsp[(1) - (1)].sval))); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 170 "tiger.y"
    { (yyval.A_ty)=A_RecordTy(EM_tokPos, (yyvsp[(2) - (3)].A_fieldList)); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 171 "tiger.y"
    { (yyval.A_ty)=A_ArrayTy(EM_tokPos, S_Symbol((yyvsp[(3) - (3)].sval)));}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 174 "tiger.y"
    { (yyval.A_fieldList)=NULL; }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 175 "tiger.y"
    { (yyval.A_fieldList)=A_FieldList((yyvsp[(1) - (2)].A_field), (yyvsp[(2) - (2)].A_fieldList)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 178 "tiger.y"
    { (yyval.A_field)=A_Field(EM_tokPos, S_Symbol((yyvsp[(1) - (3)].sval)), S_Symbol((yyvsp[(3) - (3)].sval))); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 181 "tiger.y"
    { (yyval.A_fieldList)=NULL; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 182 "tiger.y"
    { (yyval.A_fieldList)=A_FieldList((yyvsp[(2) - (3)].A_field), (yyvsp[(3) - (3)].A_fieldList)); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 185 "tiger.y"
    { (yyval.A_dec)=A_VarDec(EM_tokPos, S_Symbol((yyvsp[(2) - (6)].sval)), S_Symbol((yyvsp[(4) - (6)].sval)), (yyvsp[(6) - (6)].A_exp)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 186 "tiger.y"
    { (yyval.A_dec)=A_VarDec(EM_tokPos, S_Symbol((yyvsp[(2) - (4)].sval)), NULL, (yyvsp[(4) - (4)].A_exp)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 189 "tiger.y"
    {(yyval.A_dec)=A_FunctionDec(EM_tokPos, S_Symbol((yyvsp[(2) - (9)].sval)), (yyvsp[(4) - (9)].A_fieldList), S_Symbol((yyvsp[(7) - (9)].sval)), (yyvsp[(9) - (9)].A_exp)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 190 "tiger.y"
    {(yyval.A_dec)=A_FunctionDec(EM_tokPos, S_Symbol((yyvsp[(2) - (7)].sval)), (yyvsp[(4) - (7)].A_fieldList), NULL, (yyvsp[(7) - (7)].A_exp)); }
    break;



/* Line 1806 of yacc.c  */
#line 2036 "tiger.tab.c"
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
#line 193 "tiger.y"



