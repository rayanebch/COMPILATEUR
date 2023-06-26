/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "projet.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "TS.h"
#include "RS.h"
#include "Quad.h"
int yylex();
int yyerror(char *);
int m=0,n=0;
int indq=0;
char* tab_char [10];
int i=0;int j=0;
extern FILE* yyin;
extern int line, colo;
int nTemp=1; char tempC[12]=""; 
char temp_branchement_if[10][10];
char tmp[20];
char tmp2[20];
char sauvOpr[20];

/* Line 371 of yacc.c  */
#line 90 "projet.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "projet.tab.h".  */
#ifndef YY_YY_PROJET_TAB_H_INCLUDED
# define YY_YY_PROJET_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_integer = 258,
     mc_float = 259,
     mc_const = 260,
     mc_if = 261,
     mc_else = 262,
     mc_for = 263,
     mc_while = 264,
     mc_struct = 265,
     idf = 266,
     entier = 267,
     reel = 268,
     aff = 269,
     pro = 270,
     prf = 271,
     add = 272,
     sub = 273,
     division = 274,
     mul = 275,
     pvg = 276,
     vig = 277,
     pts = 278,
     dpts = 279,
     acco = 280,
     accf = 281,
     ET = 282,
     OU = 283,
     NOT = 284,
     inf = 285,
     sup = 286,
     infegl = 287,
     supegl = 288,
     egal = 289,
     diff = 290,
     err = 291,
     mc_var = 292,
     mc_code = 293,
     crochero = 294,
     crocherf = 295
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 24 "projet.y"
char* nom; struct {char* type;char* res;}NT;

/* Line 387 of yacc.c  */
#line 176 "projet.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_PROJET_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 204 "projet.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    15,    18,    21,    24,    27,    30,    31,
      35,    39,    46,    53,    57,    63,    69,    76,    81,    83,
      87,    89,    93,    95,    99,   104,   107,   108,   110,   112,
     114,   116,   121,   128,   136,   144,   148,   152,   156,   160,
     162,   164,   166,   171,   176,   180,   184,   188,   195,   201,
     203,   206,   208,   210,   212,   214,   218,   222,   226,   230,
     234,   238,   246,   250,   253,   255,   257,   261,   273,   275,
     280,   283,   287
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    11,    25,    37,    25,    43,    26,    38,
      25,    52,    26,    26,    -1,    44,    43,    -1,    45,    43,
      -1,    46,    43,    -1,    47,    43,    -1,    48,    43,    -1,
      -1,     3,    49,    21,    -1,     4,    50,    21,    -1,     3,
      11,    39,    12,    40,    21,    -1,     4,    11,    39,    12,
      40,    21,    -1,     5,    11,    21,    -1,     5,    11,    14,
      12,    21,    -1,     5,    11,    14,    13,    21,    -1,    10,
      25,    43,    26,    11,    21,    -1,    10,    11,    51,    21,
      -1,    11,    -1,    11,    22,    49,    -1,    11,    -1,    11,
      22,    50,    -1,    11,    -1,    11,    22,    51,    -1,    11,
      39,    12,    40,    -1,    53,    52,    -1,    -1,    54,    -1,
      56,    -1,    66,    -1,    69,    -1,    11,    14,    55,    21,
      -1,    11,    23,    11,    14,    55,    21,    -1,    11,    39,
      11,    40,    14,    55,    21,    -1,    11,    39,    12,    40,
      14,    55,    21,    -1,    55,    17,    55,    -1,    55,    18,
      55,    -1,    55,    19,    55,    -1,    55,    20,    55,    -1,
      11,    -1,    12,    -1,    13,    -1,    11,    39,    12,    40,
      -1,    11,    39,    11,    40,    -1,    11,    23,    11,    -1,
      15,    55,    16,    -1,    57,    52,    58,    -1,    57,    52,
      60,    59,    52,    61,    -1,     6,    15,    62,    16,    25,
      -1,    26,    -1,     7,    25,    -1,    26,    -1,    26,    -1,
      63,    -1,    64,    -1,    55,    31,    55,    -1,    55,    30,
      55,    -1,    55,    34,    55,    -1,    55,    35,    55,    -1,
      55,    33,    55,    -1,    55,    32,    55,    -1,    15,    63,
      16,    65,    15,    63,    16,    -1,    55,    65,    55,    -1,
      29,    55,    -1,    27,    -1,    28,    -1,    67,    52,    68,
      -1,     8,    15,    11,    24,    12,    24,    12,    24,    11,
      16,    25,    -1,    26,    -1,    70,    71,    52,    72,    -1,
       9,    15,    -1,    62,    16,    25,    -1,    26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    36,    37,    38,    39,    40,    41,    44,
      45,    48,    50,    54,    55,    56,    59,    62,    65,    66,
      69,    70,    73,    74,    75,    81,    81,    83,    84,    85,
      86,    90,   101,   121,   131,   142,   155,   167,   181,   193,
     194,   195,   196,   197,   198,   199,   202,   203,   206,   208,
     210,   212,   214,   217,   218,   220,   221,   222,   223,   224,
     225,   228,   229,   230,   232,   233,   236,   239,   247,   250,
     251,   252,   258
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_integer", "mc_float", "mc_const",
  "mc_if", "mc_else", "mc_for", "mc_while", "mc_struct", "idf", "entier",
  "reel", "aff", "pro", "prf", "add", "sub", "division", "mul", "pvg",
  "vig", "pts", "dpts", "acco", "accf", "ET", "OU", "NOT", "inf", "sup",
  "infegl", "supegl", "egal", "diff", "err", "mc_var", "mc_code",
  "crochero", "crocherf", "$accept", "S", "DEC", "simpleDEC", "TabDEC",
  "ConstDEC", "STRUCTURE", "StructDEC", "LISTVARINT", "LISTVARFLOAT",
  "LISTSTRUCT", "list_inst", "INST", "affectation", "expressionAr",
  "CONDITION", "IF", "ACCF_SIMPLE", "ELSE", "ACCF_IF", "ACCF_ELSE", "cond",
  "comparaison", "expressionLog", "operateurLog", "BOUCLEFOR", "FOR",
  "ACCF1", "BOUCLEWHILE", "WHILE", "WLS", "ACCF", YY_NULL
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
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    43,    43,    43,    43,    44,
      44,    45,    45,    46,    46,    46,    47,    48,    49,    49,
      50,    50,    51,    51,    51,    52,    52,    53,    53,    53,
      53,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    58,
      59,    60,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    65,    65,    66,    67,    68,    69,
      70,    71,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     2,     2,     2,     2,     2,     0,     3,
       3,     6,     6,     3,     5,     5,     6,     4,     1,     3,
       1,     3,     1,     3,     4,     2,     0,     1,     1,     1,
       1,     4,     6,     7,     7,     3,     3,     3,     3,     1,
       1,     1,     4,     4,     3,     3,     3,     6,     5,     1,
       2,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     7,     3,     2,     1,     1,     3,    11,     1,     4,
       2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     8,     0,     0,     0,
       0,     0,     8,     8,     8,     8,     8,    18,     0,    20,
       0,     0,     0,     8,     0,     3,     4,     5,     6,     7,
       0,     0,     9,     0,     0,    10,     0,    13,    22,     0,
       0,     0,    18,    19,     0,    20,    21,     0,     0,     0,
       0,     0,    17,     0,    26,     0,     0,    14,    15,    23,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      26,    29,    26,    30,     0,    11,    12,    24,    16,     0,
       0,    70,     0,     0,     0,     0,    25,     0,     0,    39,
      40,    41,     0,     0,     0,     0,    53,    54,    26,     0,
       0,     0,     0,     0,     0,     0,     2,    49,    46,     0,
      68,    66,     0,     0,     0,     0,    63,     0,     0,     0,
       0,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
      26,    44,     0,     0,    45,     0,    35,    36,    37,    38,
      56,    55,    60,    59,    57,    58,    62,    71,    72,    69,
      48,     0,     0,     0,     0,    50,     0,    43,    42,     0,
       0,    32,     0,     0,    52,    47,     0,     0,    33,    34,
       0,     0,     0,    61,     0,     0,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    14,    15,    16,    18,    20,
      39,    66,    67,    68,    94,    69,    70,   108,   140,   109,
     175,    95,    96,    97,   129,    71,    72,   111,    73,    74,
      98,   159
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
      -2,    -1,    18,    16,   -92,     5,    73,    50,    63,    80,
       9,    58,    73,    73,    73,    73,    73,   -18,    77,   -16,
      89,     8,   129,    73,   111,   -92,   -92,   -92,   -92,   -92,
     137,   138,   -92,   140,   141,   -92,    14,   -92,   -14,   131,
     128,   130,   134,   -92,   117,   136,   -92,   119,   139,   142,
     129,   149,   -92,   151,    84,   143,   144,   -92,   -92,   -92,
     132,   145,   152,   153,   154,   -11,   147,    84,   -92,   -92,
      84,   -92,    84,   -92,     2,   -92,   -92,   -92,   -92,     2,
     159,   -92,   126,   160,    28,   148,   -92,   150,   155,    -7,
     -92,   -92,   126,   126,    69,   161,   -92,   -92,    84,   162,
     156,   126,    94,   165,   135,   146,   -92,   175,   -92,   176,
     -92,   -92,   173,    48,    32,   169,   125,   126,   126,   126,
     126,   -92,   -92,   126,   126,   126,   126,   126,   126,   126,
     163,   164,   166,   177,   101,   -92,   126,   178,   179,   170,
      84,   -92,   157,   158,   -92,    52,   127,   127,   -92,   -92,
     125,   125,   125,   125,   125,   125,   125,   -92,   -92,   -92,
     -92,   172,   105,   126,   126,   -92,   168,   -92,   -92,   184,
     188,   -92,   110,   115,   -92,   -92,   126,   180,   -92,   -92,
      38,   171,   190,   -92,   186,   181,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -92,   -92,    93,   -92,   -92,   -92,   -92,   -92,   182,   174,
     167,   -65,   -92,   -92,   -82,   -92,   -92,   -92,   -92,   -92,
     -92,   124,   -91,   -92,    60,   -92,   -92,   -92,   -92,   -92,
     -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -52
static const yytype_int16 yytable[] =
{
     102,   115,    86,    82,    30,    87,    33,    88,    50,     1,
     114,   116,    83,    89,    90,    91,   112,    92,     4,   134,
      22,    31,    36,    34,     3,    51,    48,    49,    84,    37,
       6,    93,   113,   131,    23,   146,   147,   148,   149,   104,
     105,   150,   151,   152,   153,   154,   155,   156,   144,   117,
     118,   119,   120,     5,   162,   117,   118,   119,   120,   142,
     143,    17,   123,   124,   125,   126,   127,   128,   123,   124,
     125,   126,   127,   128,    19,   166,     7,     8,     9,   121,
     122,   172,   173,    10,    24,   181,   117,   118,   119,   120,
      62,    21,    63,    64,   180,    65,   121,   122,    32,   123,
     124,   125,   126,   127,   128,    25,    26,    27,    28,    29,
      35,   117,   118,   119,   120,   135,    40,   144,   117,   118,
     119,   120,   117,   118,   119,   120,   171,   117,   118,   119,
     120,   178,   117,   118,   119,   120,   179,    89,    90,    91,
      38,   101,   117,   118,   119,   120,   119,   120,    42,    41,
      44,    45,    52,    47,    53,    54,    30,    55,    33,    56,
      57,    60,    61,    58,    75,    76,    78,    79,    80,    81,
     100,   103,    77,    85,   106,   137,   107,   130,   132,   136,
     133,   110,   -51,   139,   141,   145,   138,   183,   157,   161,
     158,   160,   163,   164,   174,   165,   170,   167,   168,   176,
     177,   184,   185,    99,   182,   169,   186,    46,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    59
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      82,    92,    67,    14,    22,    70,    22,    72,    22,    11,
      92,    93,    23,    11,    12,    13,    23,    15,     0,   101,
      11,    39,    14,    39,    25,    39,    12,    13,    39,    21,
      25,    29,    39,    98,    25,   117,   118,   119,   120,    11,
      12,   123,   124,   125,   126,   127,   128,   129,    16,    17,
      18,    19,    20,    37,   136,    17,    18,    19,    20,    11,
      12,    11,    30,    31,    32,    33,    34,    35,    30,    31,
      32,    33,    34,    35,    11,   140,     3,     4,     5,    27,
      28,   163,   164,    10,    26,   176,    17,    18,    19,    20,
       6,    11,     8,     9,   176,    11,    27,    28,    21,    30,
      31,    32,    33,    34,    35,    12,    13,    14,    15,    16,
      21,    17,    18,    19,    20,    21,    23,    16,    17,    18,
      19,    20,    17,    18,    19,    20,    21,    17,    18,    19,
      20,    21,    17,    18,    19,    20,    21,    11,    12,    13,
      11,    15,    17,    18,    19,    20,    19,    20,    11,    38,
      12,    11,    21,    12,    26,    25,    22,    40,    22,    40,
      21,    12,    11,    21,    21,    21,    21,    15,    15,    15,
      11,    11,    40,    26,    26,    40,    26,    16,    16,    14,
      24,    26,     7,     7,    11,    16,    40,    16,    25,    12,
      26,    25,    14,    14,    26,    25,    24,    40,    40,    15,
      12,    11,    16,    79,    24,   145,    25,    33,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    42,    25,     0,    37,    25,     3,     4,     5,
      10,    43,    44,    45,    46,    47,    48,    11,    49,    11,
      50,    11,    11,    25,    26,    43,    43,    43,    43,    43,
      22,    39,    21,    22,    39,    21,    14,    21,    11,    51,
      43,    38,    11,    49,    12,    11,    50,    12,    12,    13,
      22,    39,    21,    26,    25,    40,    40,    21,    21,    51,
      12,    11,     6,     8,     9,    11,    52,    53,    54,    56,
      57,    66,    67,    69,    70,    21,    21,    40,    21,    15,
      15,    15,    14,    23,    39,    26,    52,    52,    52,    11,
      12,    13,    15,    29,    55,    62,    63,    64,    71,    62,
      11,    15,    55,    11,    11,    12,    26,    26,    58,    60,
      26,    68,    23,    39,    55,    63,    55,    17,    18,    19,
      20,    27,    28,    30,    31,    32,    33,    34,    35,    65,
      16,    52,    16,    24,    55,    21,    14,    40,    40,     7,
      59,    11,    11,    12,    16,    16,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    25,    26,    72,
      25,    12,    55,    14,    14,    25,    52,    40,    40,    65,
      24,    21,    55,    55,    26,    61,    15,    12,    21,    21,
      55,    63,    24,    16,    11,    16,    25
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1792 of yacc.c  */
#line 32 "projet.y"
    {printf("***programme syntaxiquement correct**"); YYACCEPT;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 49 "projet.y"
    {doubleDec ((yyvsp[(2) - (6)].nom));inserer ((yyvsp[(2) - (6)].nom),"INTEGER");quad("BOUNDS","1",(yyvsp[(4) - (6)].nom),""); quad("ADEC",(yyvsp[(2) - (6)].nom),"","");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 51 "projet.y"
    {doubleDec ((yyvsp[(2) - (6)].nom));inserer ((yyvsp[(2) - (6)].nom),"FLOAT");quad("BOUNDS","1",(yyvsp[(4) - (6)].nom),""); quad("ADEC",(yyvsp[(2) - (6)].nom),"","");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 54 "projet.y"
    {doubleDec ((yyvsp[(2) - (3)].nom));inserer ((yyvsp[(2) - (3)].nom),"constant");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 55 "projet.y"
    {doubleDec ((yyvsp[(2) - (5)].nom));inserer ((yyvsp[(2) - (5)].nom),"constant");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 56 "projet.y"
    {doubleDec ((yyvsp[(2) - (5)].nom));inserer ((yyvsp[(2) - (5)].nom),"constant");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 65 "projet.y"
    {doubleDec ((yyvsp[(1) - (1)].nom));inserer ((yyvsp[(1) - (1)].nom),"INTEGER");}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 66 "projet.y"
    {doubleDec ((yyvsp[(1) - (3)].nom));inserer ((yyvsp[(1) - (3)].nom),"INTEGER");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 69 "projet.y"
    {doubleDec ((yyvsp[(1) - (1)].nom));inserer ((yyvsp[(1) - (1)].nom),"FLOAT");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 70 "projet.y"
    {doubleDec ((yyvsp[(1) - (3)].nom));inserer ((yyvsp[(1) - (3)].nom),"FLOAT");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 73 "projet.y"
    {doubleDec ((yyvsp[(1) - (1)].nom));inserer ((yyvsp[(1) - (1)].nom),"STRUCT");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 74 "projet.y"
    {doubleDec ((yyvsp[(1) - (3)].nom));inserer ((yyvsp[(1) - (3)].nom),"STRUCT");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 75 "projet.y"
    {doubleDec ((yyvsp[(1) - (4)].nom));inserer ((yyvsp[(1) - (4)].nom),"STRUCT");}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 91 "projet.y"
    {dec ((yyvsp[(1) - (4)].nom));  if(typeIdf((yyvsp[(1) - (4)].nom))=="constant"){
									yyerror("erreur semantique modification d'une constante!");
								}
					
					
					if (typeIdf((yyvsp[(1) - (4)].nom))!=(yyvsp[(3) - (4)].NT).type)
					 					yyerror("erreur semantique incompatibilite des types affectation!");
								else {
										quad ("=",(yyvsp[(3) - (4)].NT).res,"",(yyvsp[(1) - (4)].nom));
										  }}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 102 "projet.y"
    {dec ((yyvsp[(1) - (6)].nom)); dec ((yyvsp[(3) - (6)].nom));sprintf(tmp2,"%s.%s", (yyvsp[(1) - (6)].nom),(yyvsp[(3) - (6)].nom));
												if(typeIdf((yyvsp[(3) - (6)].nom))!=(yyvsp[(5) - (6)].NT).type)
													 yyerror("erreur semantique incompatibilite des types affectation!");                						
                                					if((yyvsp[(5) - (6)].NT).type=="entier"){
                                         				sprintf(tmp,"%d",entier);
      				                                	quad("=",tmp,"",tmp2);
														
                                					}
                                					else if((yyvsp[(5) - (6)].NT).type=="reel"){
                                                			sprintf(tmp,"%.02f",reel);
                                      				    	quad("=",tmp,"",tmp2);  
															
                                        					}
                                        					else{
                                                               quad("=",(yyvsp[(5) - (6)].NT).res,"",tmp2);     
                                        			}

                                				}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 122 "projet.y"
    {
								dec((yyvsp[(1) - (7)].nom));dec((yyvsp[(3) - (7)].nom));
								if(typeIdf((yyvsp[(1) - (7)].nom))!=(yyvsp[(6) - (7)].NT).type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup((yyvsp[(1) - (7)].nom)),"["),strcat((yyvsp[(3) - (7)].nom),"]"));
											quad ("=",(yyvsp[(6) - (7)].NT).res,"",result);
										}
							}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 131 "projet.y"
    {
								dec((yyvsp[(1) - (7)].nom));
								if(typeIdf((yyvsp[(1) - (7)].nom))!=(yyvsp[(6) - (7)].NT).type) 
										yyerror("erreur semantique incompatibilite des types affectation!");
										else{
											char* result=strcat(strcat(strdup((yyvsp[(1) - (7)].nom)),"["),strcat((yyvsp[(3) - (7)].nom),"]"));
											quad ("=",(yyvsp[(6) - (7)].NT).res,"",result);
										}
							}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 142 "projet.y"
    {
								if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else{
								if ((yyvsp[(1) - (3)].NT).type!=(yyvsp[(3) - (3)].NT).type) yyerror("erreur semantique incompatibilite des types");
								else {
									(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("+",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
									
								}
							}}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 155 "projet.y"
    {
						if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else{
						if ((yyvsp[(1) - (3)].NT).type!=(yyvsp[(3) - (3)].NT).type) yyerror("erreur semantique incompatibilite des types");
						else {
							(yyval.NT).type=(yyvsp[(1) - (3)].NT).type;  sprintf(tempC,"T%d",nTemp);nTemp++;
							(yyval.NT).res=strdup(tempC);tempC[0]='\0';
							quad ("-",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
						}
					}}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 167 "projet.y"
    {
						if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else{
						if ((yyvsp[(1) - (3)].NT).type!=(yyvsp[(3) - (3)].NT).type) yyerror("erreur semantique incompatibilite des types");
						else {
								(yyval.NT).type=(yyvsp[(1) - (3)].NT).type;  sprintf(tempC,"T%d",nTemp);nTemp++;
								(yyval.NT).res=strdup(tempC);tempC[0]='\0';
								quad ("/",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
								if(strcmp((yyvsp[(3) - (3)].NT).res,"0")==0) yyerror("erreur symantique DIVISION PAR ZERO");
						}
						
					}}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 181 "projet.y"
    {
						if ((yyvsp[(1) - (3)].NT).type=="constant" || (yyvsp[(3) - (3)].NT).type=="constant"){(yyval.NT).type=(yyvsp[(1) - (3)].NT).type; sprintf(tempC,"T%d",nTemp); nTemp++;
									(yyval.NT).res=strdup(tempC); tempC[0]='\0';
									quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);}
								else{
						if ((yyvsp[(1) - (3)].NT).type!=(yyvsp[(3) - (3)].NT).type) yyerror("erreur semantique incompatibilite des types");
						else {
								(yyval.NT).type=(yyvsp[(1) - (3)].NT).type;  sprintf(tempC,"T%d",nTemp);
								(yyval.NT).res=strdup(tempC);nTemp++;tempC[0]='\0';
								quad ("*",(yyvsp[(1) - (3)].NT).res,(yyvsp[(3) - (3)].NT).res,(yyval.NT).res);
						}
					}}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 193 "projet.y"
    {dec ((yyvsp[(1) - (1)].nom)); (yyval.NT).type=typeIdf((yyvsp[(1) - (1)].nom));  (yyval.NT).res=strdup((yyvsp[(1) - (1)].nom));}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 194 "projet.y"
    {(yyval.NT).type="INTEGER";  (yyval.NT).res=(yyvsp[(1) - (1)].nom);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 195 "projet.y"
    {(yyval.NT).type="FLOAT";  (yyval.NT).res=(yyvsp[(1) - (1)].nom);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 196 "projet.y"
    {(yyval.NT).type=typeIdf((yyvsp[(1) - (4)].nom));char* chaine=strcat(strdup((yyvsp[(1) - (4)].nom)),"[");strcat(chaine,strdup((yyvsp[(3) - (4)].nom))); (yyval.NT).res=strcat(chaine,"]");}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 197 "projet.y"
    {(yyval.NT).type=typeIdf((yyvsp[(1) - (4)].nom));  char* chaine=strcat(strdup((yyvsp[(1) - (4)].nom)),"[");strcat(chaine,strdup((yyvsp[(3) - (4)].nom))); (yyval.NT).res=strcat(chaine,"]");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 198 "projet.y"
    {(yyval.NT).type=typeIdf((yyvsp[(1) - (3)].nom));}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 199 "projet.y"
    {(yyval.NT).type=(yyvsp[(2) - (3)].NT).type; (yyval.NT).res=(yyvsp[(2) - (3)].NT).res;}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 206 "projet.y"
    { quad("BZ",temp_branchement_if[i],"temp_cond","");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 208 "projet.y"
    {sprintf(temp_branchement_if[i],"%d",indq); i=i+1;}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 210 "projet.y"
    {quad("BR",temp_branchement_if[i],"","");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 212 "projet.y"
    {sprintf(temp_branchement_if[i],"%d",indq+1); i=i+1;}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 214 "projet.y"
    {sprintf(temp_branchement_if[i],"%d",indq); i=i+1;}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 220 "projet.y"
    {strcpy(sauvOpr,"BLE");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 221 "projet.y"
    {strcpy(sauvOpr,"BGE");}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 222 "projet.y"
    {strcpy(sauvOpr,"BNE");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 223 "projet.y"
    {strcpy(sauvOpr,"BE");}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 224 "projet.y"
    {strcpy(sauvOpr,"BL");}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 225 "projet.y"
    {strcpy(sauvOpr,"BG");}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 239 "projet.y"
    {
                                                            quad("=",(yyvsp[(5) - (11)].nom),"",(yyvsp[(3) - (11)].nom));
                                                            empiler_Pile(&pile1,indq);
                                                            quad("+",(yyvsp[(3) - (11)].nom),(yyvsp[(7) - (11)].nom),"temp_cond");
                                                            empiler_Pile(&pile2,indq);
                                                            quad("BG",tostr(indq),"temp",(yyvsp[(9) - (11)].nom));
                                                            }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 247 "projet.y"
    {quad("BR",depiler_Pile(&pile1),"","");q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 251 "projet.y"
    {empiler_Pile(&pile1,indq);}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 252 "projet.y"
    {
						quad("BZ",tostr(indq),"temp_cond","");
						empiler_Pile(&pile2,indq-1);
					  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 258 "projet.y"
    {
			quad("BR",depiler_Pile(&pile1),"","");
    		q[atoi(depiler_Pile(&pile2))].op1=tostr(indq);
			}
    break;


/* Line 1792 of yacc.c  */
#line 1919 "projet.tab.c"
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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


/* Line 2055 of yacc.c  */
#line 268 "projet.y"

int yyerror (char* msg){
    printf (" %s ligne %d  \n",msg,line,colo); exit (0);}

int main (){ 
    yyin = fopen("test_global2.txt", "r");
    yyparse ();
	afficherTS ();
	afficherQuad();
	optimiser();
	printf("---------------||LISTE QUADS APRES OPTIMISATION ||---------------\n");
    afficherQuad();
	generateAssemblyCode(q,indq,"codeObj.asm");
    fclose (yyin);
}
