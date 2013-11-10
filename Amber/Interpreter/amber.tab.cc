
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "amber.yy"

  /* Prologue */

  #pragma warning(disable : 4065)

  #include "common.h"
  #include "parser.h"
  
  #define YYSTYPE obj

  int yylex (void);
  void yyerror (char const *);



/* Line 189 of yacc.c  */
#line 89 "amber.tab.cc"

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
     LOWER_CASE_ID = 258,
     SYMBOL = 259,
     OP_FN_NAME = 260,
     BUILTIN = 261,
     LABEL = 262,
     NUMBER = 263,
     CHAR = 264,
     STRING = 265,
     MIXED_CASE_ID = 266,
     UPPER_CASE_ID = 267,
     RIGHT_ARROW = 268,
     LEFT_ARROW = 269,
     DOUBLE_RIGHT_ARROW = 270,
     DOUBLE_DOT = 271,
     ELLIPSIS = 272,
     ASSIGNMENT = 273,
     LE = 274,
     GE = 275,
     EQ = 276,
     NEQ = 277,
     IN = 278,
     OR = 279,
     CROSSED_LEFT_ARROW = 280,
     KW_AND = 281,
     KW_AS = 282,
     KW_ASSERT = 283,
     KW_BREAK = 284,
     KW_CASE = 285,
     KW_DEF = 286,
     KW_DISABLED = 287,
     KW_DO = 288,
     KW_ELSE = 289,
     KW_ELIF = 290,
     KW_END = 291,
     KW_FAIL = 292,
     KW_FALSE = 293,
     KW_FOR = 294,
     KW_FROM = 295,
     KW_IF = 296,
     KW_IN = 297,
     KW_IS = 298,
     KW_ITSELF = 299,
     KW_LET = 300,
     KW_LOOP = 301,
     KW_MATCH = 302,
     KW_NIL = 303,
     KW_NOT = 304,
     KW_OR = 305,
     KW_PRINT = 306,
     KW_REPLACE = 307,
     KW_RETRIEVE = 308,
     KW_RETURN = 309,
     KW_SELECT = 310,
     KW_THEN = 311,
     KW_TESTCASES = 312,
     KW_TRACE = 313,
     KW_TRUE = 314,
     KW_TYPE = 315,
     KW_USING = 316,
     KW_WHEN = 317,
     KW_WHERE = 318,
     KW_WHILE = 319,
     KW_WITH = 320,
     NEG = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "amber.tab.cc"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  121
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4678

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNRULES -- Number of states.  */
#define YYNSTATES  657

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    88,     2,     2,    72,     2,
      79,    80,    73,    70,    83,    71,    77,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    86,    78,
      68,    67,    69,    89,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    84,     2,    85,    76,    87,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    90,    82,     2,     2,     2,     2,
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
      65,    75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    20,
      25,    27,    30,    33,    37,    44,    49,    55,    62,    65,
      71,    73,    77,    83,    92,    94,    98,   104,   113,   124,
     133,   143,   152,   163,   168,   176,   184,   193,   201,   211,
     221,   223,   225,   227,   230,   232,   236,   238,   241,   245,
     251,   256,   263,   271,   281,   285,   293,   300,   307,   310,
     315,   322,   325,   330,   334,   338,   344,   345,   352,   356,
     362,   368,   370,   374,   376,   379,   381,   383,   386,   388,
     390,   392,   395,   399,   404,   409,   416,   420,   423,   428,
     430,   434,   436,   439,   442,   444,   446,   451,   455,   459,
     463,   469,   475,   481,   487,   492,   497,   501,   506,   511,
     517,   521,   523,   526,   529,   532,   534,   539,   544,   547,
     551,   553,   557,   559,   563,   565,   569,   571,   575,   577,
     579,   581,   583,   585,   587,   590,   594,   597,   601,   605,
     608,   612,   618,   622,   627,   632,   637,   639,   644,   651,
     657,   662,   667,   671,   674,   678,   682,   686,   690,   694,
     698,   702,   706,   710,   714,   718,   722,   725,   729,   733,
     737,   741,   746,   751,   758,   763,   770,   776,   784,   792,
     804,   812,   822,   832,   846,   854,   864,   874,   886,   892,
     899,   903,   911,   917,   925,   935,   939,   941,   945,   947,
     951,   953,   957,   960,   965,   967,   971,   975,   981,   985,
     991,   993,   997,   999,  1003,  1007,  1013,  1017,  1023,  1027,
    1031,  1035,  1039,  1045,  1047,  1051,  1055,  1062,  1064,  1068,
    1070,  1074,  1076,  1078,  1080,  1082,  1084,  1087,  1089,  1091,
    1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,  1111,
    1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,  1131,
    1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,
    1173,  1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,
    1193
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      92,     0,    -1,    93,    -1,    92,    93,    -1,   100,    -1,
     102,    -1,    97,    -1,    94,    -1,    57,    95,    36,    -1,
      57,    32,    95,    36,    -1,    96,    -1,    95,    96,    -1,
     122,    78,    -1,    51,   122,    78,    -1,    39,    79,   109,
      80,    95,    78,    -1,   151,    18,   122,    78,    -1,    61,
      99,    81,   105,    82,    -1,    61,    81,    99,    78,   105,
      82,    -1,   114,   148,    -1,   114,   148,    79,   118,    80,
      -1,    98,    -1,    99,    83,    98,    -1,    60,   139,    67,
     120,    78,    -1,    60,   139,    84,   101,    85,    67,   120,
      78,    -1,   140,    -1,   101,    83,   140,    -1,   114,   148,
      67,   122,    78,    -1,   114,   148,    79,   104,    80,    67,
     122,    78,    -1,   114,   148,    79,   104,    80,    67,   122,
      45,   110,    78,    -1,   114,   148,    79,   104,    80,    81,
     110,    82,    -1,   114,   148,    79,   104,    80,    81,   110,
     105,    82,    -1,   114,   148,    79,   104,    80,    86,   130,
      78,    -1,   114,   148,    79,   104,    80,    86,   130,    63,
     105,    78,    -1,   148,    67,   122,    78,    -1,   148,    79,
     104,    80,    67,   122,    78,    -1,   148,    79,   104,    80,
      81,   110,    82,    -1,   148,    79,   104,    80,    81,   110,
     105,    82,    -1,   148,    79,   104,    80,    86,   130,    78,
      -1,   148,    79,   104,    80,    86,   130,    63,   105,    78,
      -1,   148,    79,   104,    80,    67,   122,    45,   110,    78,
      -1,    87,    -1,   151,    -1,   114,    -1,   114,   151,    -1,
     103,    -1,   104,    83,   103,    -1,   102,    -1,   105,   102,
      -1,    54,   122,    78,    -1,    54,   122,    41,   122,    78,
      -1,   151,    18,   122,    78,    -1,   151,    18,   122,    41,
     122,    78,    -1,    41,    79,   122,    80,   110,   107,    78,
      -1,    41,    79,   122,    80,   110,   107,    34,   110,    78,
      -1,    46,   110,    78,    -1,    46,   110,    64,    79,   122,
      80,    78,    -1,    64,    79,   122,    80,   110,    78,    -1,
      45,    79,   136,    80,   110,    78,    -1,    29,    78,    -1,
      29,    41,   122,    78,    -1,    39,    79,   109,    80,   110,
      78,    -1,    37,    78,    -1,    37,    41,   122,    78,    -1,
      28,   122,    78,    -1,    51,   122,    78,    -1,    51,   122,
      41,   122,    78,    -1,    -1,   107,    35,    79,   122,    80,
     110,    -1,   151,    86,   122,    -1,   151,    83,   151,    86,
     122,    -1,   151,    67,   122,    16,   122,    -1,   108,    -1,
     109,    78,   108,    -1,   106,    -1,   110,   106,    -1,   114,
      -1,   151,    -1,   111,   151,    -1,   145,    -1,   141,    -1,
      87,    -1,    88,   151,    -1,   152,    79,    80,    -1,   152,
      79,   111,    80,    -1,   152,    79,   112,    80,    -1,   152,
      79,   112,    83,    17,    80,    -1,   151,    66,   151,    -1,
     147,   111,    -1,   112,    83,   147,   111,    -1,   111,    -1,
     113,    83,   111,    -1,   115,    -1,   114,    73,    -1,   114,
      70,    -1,   139,    -1,   140,    -1,   139,    84,   118,    85,
      -1,    68,   120,    69,    -1,    68,    73,    69,    -1,    68,
      70,    69,    -1,    84,    73,    16,    73,    85,    -1,    84,
     141,    16,    73,    85,    -1,    84,    73,    16,   141,    85,
      -1,    84,   141,    16,   141,    85,    -1,    84,   115,    73,
      85,    -1,    84,   115,    70,    85,    -1,    84,   119,    85,
      -1,    79,   114,    73,    80,    -1,    79,   114,    70,    80,
      -1,    79,   114,    15,   114,    80,    -1,    79,   121,    80,
      -1,   114,    -1,    81,    82,    -1,    84,    85,    -1,    79,
      80,    -1,   152,    -1,   152,    79,   116,    80,    -1,   152,
      79,   121,    80,    -1,   147,   116,    -1,   147,   116,    89,
      -1,   114,    -1,   118,    83,   114,    -1,   115,    -1,   119,
      83,   115,    -1,   116,    -1,   120,    83,   116,    -1,   117,
      -1,   121,    83,   117,    -1,   142,    -1,   145,    -1,   143,
      -1,    59,    -1,    38,    -1,    48,    -1,    81,    82,    -1,
      81,   124,    82,    -1,    79,    80,    -1,    79,   134,    80,
      -1,    79,   127,    80,    -1,    84,    85,    -1,    84,   123,
      85,    -1,    84,   123,    90,   122,    85,    -1,   122,    66,
     122,    -1,   145,    79,   122,    80,    -1,   145,    79,   127,
      80,    -1,   150,    79,   127,    80,    -1,   150,    -1,   150,
      79,   123,    80,    -1,   150,    79,   123,    78,   136,    80,
      -1,   150,    79,    78,   136,    80,    -1,   149,    79,   123,
      80,    -1,   146,    79,   123,    80,    -1,    79,   122,    80,
      -1,    71,   122,    -1,   122,    70,   122,    -1,   122,    71,
     122,    -1,   122,    73,   122,    -1,   122,    74,   122,    -1,
     122,    76,   122,    -1,   122,    72,   122,    -1,   122,    68,
     122,    -1,   122,    69,   122,    -1,   122,    19,   122,    -1,
     122,    20,   122,    -1,   122,    26,   122,    -1,   122,    50,
     122,    -1,    49,   122,    -1,   122,    21,   122,    -1,   122,
      22,   122,    -1,   122,    23,   114,    -1,   122,    77,   144,
      -1,   122,    77,   144,    89,    -1,   151,    84,   123,    85,
      -1,   122,    77,   144,    84,   123,    85,    -1,    79,    89,
     131,    80,    -1,    79,    89,   131,    86,   123,    80,    -1,
      81,   122,    86,   131,    82,    -1,    81,   122,    86,   131,
      78,   123,    82,    -1,    39,    79,   131,    80,    81,   122,
      82,    -1,    39,    79,   131,    80,    41,    79,   123,    80,
      81,   122,    82,    -1,    79,   122,    15,   122,    86,   131,
      80,    -1,    79,   122,    15,   122,    86,   131,    78,   123,
      80,    -1,    39,    79,   131,    80,    79,   122,    15,   122,
      80,    -1,    39,    79,   131,    80,    41,    79,   123,    80,
      79,   122,    15,   122,    80,    -1,    84,   122,    86,   151,
      14,   122,    85,    -1,    84,   122,    86,   151,    83,   151,
      14,   122,    85,    -1,    84,   122,    86,   151,    14,   122,
      83,   122,    85,    -1,    84,   122,    86,   151,    83,   151,
      14,   122,    83,   122,    85,    -1,    41,   128,    34,   122,
     138,    -1,    47,    79,   123,    80,   130,   138,    -1,    81,
     110,    82,    -1,    52,   111,    42,   122,    65,   122,   138,
      -1,    55,   114,    42,   122,   138,    -1,    53,   122,    40,
     111,    42,   122,   138,    -1,    53,   122,    40,   111,    42,
     122,    41,   122,   138,    -1,   122,    43,   114,    -1,   122,
      -1,   123,    83,   122,    -1,   125,    -1,   124,    83,   125,
      -1,   122,    -1,   122,    41,   122,    -1,   147,   122,    -1,
     147,   122,    41,   122,    -1,   126,    -1,   127,    83,   126,
      -1,   122,    56,   122,    -1,   128,    83,   122,    56,   122,
      -1,   113,    67,   122,    -1,   113,    67,   122,    45,   110,
      -1,   129,    -1,   130,    83,   129,    -1,   132,    -1,   131,
      83,   132,    -1,   111,    14,   122,    -1,   111,    15,   111,
      14,   122,    -1,   111,    25,   122,    -1,   111,    15,   111,
      25,   122,    -1,   151,    67,   122,    -1,    79,   131,    80,
      -1,   132,    24,   132,    -1,   122,    15,   122,    -1,   122,
      15,   122,    41,   122,    -1,   133,    -1,   134,    83,   133,
      -1,   148,    67,   122,    -1,   148,    79,   137,    80,    67,
     122,    -1,   135,    -1,   136,    83,   135,    -1,   151,    -1,
     137,    83,   151,    -1,    78,    -1,    36,    -1,    11,    -1,
      12,    -1,   142,    -1,    71,   142,    -1,     8,    -1,    10,
      -1,     3,    -1,   153,    -1,   145,    -1,     4,    -1,     6,
      -1,     7,    -1,   150,    -1,   149,    -1,     5,    -1,   151,
      -1,    42,    -1,    26,    -1,    50,    -1,     3,    -1,    60,
      -1,    30,    -1,     3,    -1,   153,    -1,    26,    -1,    28,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    54,    -1,    55,    -1,    57,    -1,    56,
      -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   132,   135,   136,   137,   138,   144,   145,
     149,   150,   154,   155,   156,   157,   163,   164,   168,   169,
     172,   173,   179,   180,   184,   185,   191,   192,   193,   194,
     195,   196,   197,   199,   200,   201,   202,   203,   204,   205,
     209,   210,   211,   212,   216,   217,   221,   222,   228,   229,
     231,   234,   236,   237,   239,   240,   241,   243,   246,   247,
     249,   251,   252,   254,   256,   257,   263,   264,   268,   269,
     270,   274,   275,   279,   280,   288,   289,   290,   291,   292,
     293,   294,   297,   298,   299,   300,   301,   305,   306,   310,
     311,   317,   318,   319,   323,   324,   325,   326,   327,   328,
     330,   331,   332,   333,   335,   336,   337,   339,   340,   342,
     343,   347,   348,   349,   350,   351,   352,   353,   357,   358,
     362,   363,   367,   368,   372,   373,   377,   378,   384,   385,
     386,   388,   389,   390,   392,   393,   395,   396,   397,   399,
     400,   401,   403,   404,   406,   407,   412,   413,   414,   415,
     416,   417,   419,   421,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   434,   435,   436,   438,   439,   441,
     443,   444,   447,   448,   450,   451,   453,   454,   456,   457,
     459,   460,   462,   463,   466,   467,   468,   469,   471,   472,
     475,   477,   478,   480,   481,   484,   489,   490,   495,   496,
     500,   501,   505,   506,   510,   511,   515,   516,   520,   521,
     524,   525,   534,   535,   539,   540,   541,   542,   543,   544,
     545,   549,   550,   554,   555,   559,   560,   564,   565,   581,
     582,   605,   605,   607,   608,   610,   611,   614,   615,   618,
     619,   620,   623,   626,   628,   630,   631,   634,   643,   644,
     645,   646,   649,   650,   651,   654,   655,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,   679,   680,
     681,   682,   683,   684,   685,   687,   688,   689,   690,   691,
     692
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LOWER_CASE_ID", "SYMBOL", "OP_FN_NAME",
  "BUILTIN", "LABEL", "NUMBER", "CHAR", "STRING", "MIXED_CASE_ID",
  "UPPER_CASE_ID", "\"->\"", "\"<-\"", "\"=>\"", "\"..\"", "\"...\"",
  "\":=\"", "\"<=\"", "\">=\"", "\"==\"", "\"/=\"", "\"::\"", "\"\\\\/\"",
  "\"</-\"", "\"and\"", "\"as\"", "\"assert\"", "\"break\"", "\"case\"",
  "\"def\"", "\"disabled\"", "\"do\"", "\"else\"", "\"elif\"", "\"end\"",
  "\"fail\"", "\"false\"", "\"for\"", "\"from\"", "\"if\"", "\"in\"",
  "\"is\"", "\"itself\"", "\"let\"", "\"loop\"", "\"match\"", "\"nil\"",
  "\"not\"", "\"or\"", "\"print\"", "\"replace\"", "\"retrieve\"",
  "\"return\"", "\"select\"", "\"then\"", "\"testcases\"", "\"trace\"",
  "\"true\"", "\"type\"", "\"using\"", "\"when\"", "\"where\"",
  "\"while\"", "\"with\"", "'@'", "'='", "'<'", "'>'", "'+'", "'-'", "'&'",
  "'*'", "'/'", "NEG", "'^'", "'.'", "';'", "'('", "')'", "'{'", "'}'",
  "','", "'['", "']'", "':'", "'_'", "'#'", "'?'", "'|'", "$accept",
  "src_file", "decl", "test_block", "test_instrs", "test_instr",
  "using_block", "signature", "signatures", "typedef", "tvars", "fndef",
  "fnarg", "fnargs", "fndefs", "stmt", "elifs", "for_iter", "for_iters",
  "stmts", "pattern", "labptrns", "patterns", "type", "ntltype", "pretype",
  "labtype", "types", "ntltypes", "pretypes", "labtypes", "expr", "exprs",
  "subexprs", "subexpr", "labexpr", "labexprs", "if_branches",
  "match_branch", "match_branches", "clauses", "clause", "map_entry",
  "map_entries", "let_fndef", "let_fndefs", "let_fnargs", "exp_close",
  "tname", "tvar", "snum", "num", "str", "uqctor", "ctor", "builtin",
  "lab", "fnid", "op", "rid", "vid", "pid", "keyword", 0
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
     315,   316,   317,   318,   319,   320,    64,    61,    60,    62,
      43,    45,    38,    42,    47,   321,    94,    46,    59,    40,
      41,   123,   125,    44,    91,    93,    58,    95,    35,    63,
     124
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    93,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   103,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   116,   116,   116,   116,   117,   117,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   140,   141,   141,   142,   143,   144,
     144,   144,   145,   146,   147,   148,   148,   149,   150,   150,
     150,   150,   151,   151,   151,   152,   152,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     4,
       1,     2,     2,     3,     6,     4,     5,     6,     2,     5,
       1,     3,     5,     8,     1,     3,     5,     8,    10,     8,
       9,     8,    10,     4,     7,     7,     8,     7,     9,     9,
       1,     1,     1,     2,     1,     3,     1,     2,     3,     5,
       4,     6,     7,     9,     3,     7,     6,     6,     2,     4,
       6,     2,     4,     3,     3,     5,     0,     6,     3,     5,
       5,     1,     3,     1,     2,     1,     1,     2,     1,     1,
       1,     2,     3,     4,     4,     6,     3,     2,     4,     1,
       3,     1,     2,     2,     1,     1,     4,     3,     3,     3,
       5,     5,     5,     5,     4,     4,     3,     4,     4,     5,
       3,     1,     2,     2,     2,     1,     4,     4,     2,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     3,     3,     2,
       3,     5,     3,     4,     4,     4,     1,     4,     6,     5,
       4,     4,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     4,     4,     6,     4,     6,     5,     7,     7,    11,
       7,     9,     9,    13,     7,     9,     9,    11,     5,     6,
       3,     7,     5,     7,     9,     3,     1,     3,     1,     3,
       1,     3,     2,     4,     1,     3,     3,     5,     3,     5,
       1,     3,     1,     3,     3,     5,     3,     5,     3,     3,
       3,     3,     5,     1,     3,     3,     6,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   252,   247,   233,   234,   250,   254,   249,   251,     0,
     253,     0,     0,     0,     0,     0,     2,     7,     6,     4,
       5,     0,    91,    94,    95,     0,   246,   245,   248,   242,
     243,   237,   238,     0,   132,     0,     0,     0,   133,     0,
       0,     0,     0,     0,   131,   253,     0,     0,     0,     0,
       0,    10,     0,   128,   130,   129,     0,     0,   146,   248,
       0,     0,    20,     0,     0,   255,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   283,   282,   284,   285,   286,   287,   288,   289,   290,
       0,     0,     0,     0,     0,   111,   124,     0,   115,   256,
     244,     0,   126,     0,     0,     0,     0,   122,     0,     0,
     235,     1,     3,    93,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,   166,     0,   252,   254,
     253,    80,     0,     0,    75,    79,    78,    76,     0,     0,
       0,   153,   136,     0,     0,   204,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    73,     0,   200,     0,   198,   248,   139,   196,     0,
       8,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    99,    98,   114,   112,   113,    97,     0,
       0,     0,    93,    92,   110,     0,   118,   236,     0,     0,
       0,     0,   106,     0,     0,     0,   120,     0,     0,    40,
      44,     0,    42,    41,     9,     0,    71,     0,     0,     0,
     212,    76,     0,     0,     0,     0,   196,     0,    13,    81,
       0,    77,     0,     0,     0,     0,     0,    76,     0,   152,
     138,     0,   137,     0,   202,     0,     0,    58,     0,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     190,    74,     0,     0,   135,     0,     0,     0,     0,   140,
       0,   162,   163,   167,   168,   169,   164,   195,   165,   142,
     160,   161,   154,   155,   159,   156,   157,   158,   239,   170,
     241,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,     0,    46,     0,    21,     0,   125,
       0,     0,     0,   108,   107,   127,   119,     0,     0,   105,
     104,   123,     0,     0,     0,     0,     0,    96,    33,     0,
       0,    43,    75,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   206,     0,     0,     0,     0,
      86,    82,     0,     0,     0,     0,     0,   174,     0,     0,
     221,   205,     0,   224,     0,    63,     0,     0,     0,     0,
     227,     0,     0,     0,     0,     0,    54,     0,    64,     0,
      48,     0,   201,     0,   200,   199,     0,     0,   197,     0,
       0,   171,   143,   144,   151,   150,     0,     0,   147,   145,
      15,   172,    22,     0,     0,     0,    16,    47,     0,   116,
     117,   109,   100,   102,   101,   103,    26,     0,   121,     0,
       0,     0,    45,   219,    72,     0,     0,   214,     0,   216,
       0,     0,     0,   213,   220,   218,     0,    68,   232,   231,
     188,     0,    89,     0,   210,     0,     0,    83,    84,     0,
      87,     0,   192,     0,   218,     0,     0,     0,   203,    59,
      62,     0,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,    50,     0,     0,   141,     0,
     149,     0,    25,     0,    17,    19,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,   189,     0,     0,     0,     0,
     175,   222,     0,   221,     0,    66,     0,   228,   225,     0,
     229,     0,     0,    65,    49,     0,     0,     0,     0,     0,
     173,   148,     0,     0,     0,     0,     0,    34,    35,     0,
     248,     0,    37,     0,   215,   217,     0,     0,   178,    70,
      69,   208,    90,   211,   191,    85,    88,     0,   193,     0,
     180,    60,     0,    57,     0,     0,     0,    56,   177,    51,
       0,   184,     0,    23,     0,    27,    29,     0,     0,    31,
       0,    36,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,   230,    55,     0,     0,     0,    30,     0,    39,
      38,     0,     0,   182,   209,   194,   181,     0,     0,   226,
     186,     0,   185,    28,    32,     0,     0,    53,     0,     0,
       0,   179,     0,   187,     0,    67,   183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    50,    51,    18,    62,    63,    19,
     332,   335,   240,   241,   336,   171,   592,   246,   398,   545,
     248,   383,   473,   144,    22,   106,   112,   237,   118,   107,
     113,   256,   179,   174,   175,   155,   156,   133,   474,   475,
     249,   250,   157,   158,   400,   401,   549,   470,    23,    24,
     145,    53,    54,   319,    55,    56,   114,    25,    57,    58,
     134,   148,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -430
static const yytype_int16 yypact[] =
{
     244,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  1933,
      51,   133,  1678,   100,   127,    90,  -430,  -430,  -430,  -430,
    -430,   363,  -430,    -9,  -430,   -37,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  2228,  -430,    42,  2346,    82,  -430,  2346,
    2346,  1481,  2346,    47,  -430,  -430,  2346,  1160,  1871,  1617,
    1992,  -430,  3937,  -430,  -430,   103,   113,   152,   165,     8,
     -24,    47,  -430,   110,   363,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,  -430,
     198,   208,    97,   178,    12,    -2,  -430,    58,   213,  -430,
    -430,    63,  -430,    74,  1805,   301,   332,   105,   168,   353,
    -430,  -430,  -430,  -430,  -430,    88,    47,  2346,    26,  2051,
    1547,   234,  4289,    -6,   292,  2346,    11,  3969,   352,   369,
     392,  -430,   231,   143,    -2,  -430,  -430,   333,   396,  4327,
      -3,    11,  -430,  1547,  3074,  -430,   122,  -430,   136,  2346,
    2346,     3,   108,   399,  2405,   409,  2801,  2346,  2346,   416,
    -430,  -430,  2570,  2800,   155,  -430,    14,  -430,  2869,   248,
    -430,  -430,  2346,  2346,  2346,  2346,    47,  2346,    47,  2346,
    2346,  2346,  2346,  2346,  2346,  2346,  2346,  2346,  2346,  3230,
    -430,  2287,  2346,  2346,  2110,  2346,  2346,  1805,   406,   -38,
    2554,    47,   437,  -430,  -430,  -430,  -430,  -430,  -430,  1805,
    1742,    47,   362,   380,  -430,   458,   436,  -430,   116,   438,
     443,    47,  -430,   117,  2346,    26,    -2,   259,  4001,  -430,
    -430,   216,   134,  -430,  -430,  1333,  -430,   135,   251,   237,
     505,   -31,  1547,  2346,  2346,  2346,  4569,   278,  -430,  -430,
    2346,  -430,   231,  1247,  1481,  2346,   308,   320,  2346,  -430,
    -430,   458,  -430,  2346,  4364,  4033,  2346,  -430,  2346,  -430,
    1547,  1160,   378,   451,   452,  2590,   517,  3722,  3735,  2346,
    -430,  -430,  2346,  1547,  -430,  2346,  2346,   231,  2346,  -430,
    2346,   280,   280,   644,   644,  -430,   619,    -2,   619,  4601,
     280,   280,   147,   147,   147,    11,    11,    11,  -430,   141,
    -430,  -430,  3365,   279,   331,   339,   378,   195,   360,  4065,
     327,   252,   347,  -430,  2554,  -430,   295,  -430,    47,  -430,
     456,   361,   249,  -430,  -430,  -430,  -430,   454,   455,  -430,
    -430,  -430,   457,   462,  4097,   366,    47,  -430,  -430,   -20,
      26,  -430,    63,   374,   231,  2228,  2346,  1481,  2346,   -16,
    1547,  1547,  2346,   231,  2346,  4569,  3795,  4396,  1481,  4428,
    -430,  -430,    54,   381,  1481,   229,  3795,  -430,  2346,  2346,
    2837,  -430,  3281,  -430,  2346,  -430,  4129,  4161,   434,  3110,
    -430,   386,   104,   231,  2346,   464,  -430,  2346,  -430,  2346,
    -430,  3427,  4569,   319,  4465,  -430,  3833,    35,  4569,  2974,
    2346,  -430,  -430,  -430,  -430,  -430,   387,   378,  -430,  -430,
    -430,  -430,  -430,   406,   470,   395,  -430,  -430,   393,  -430,
    -430,  -430,  -430,  -430,  -430,  -430,  -430,   202,    -2,  2346,
    2801,  1481,  -430,  -430,  -430,   241,  2169,  4569,   254,  4569,
     473,  2346,  2346,   505,  -430,  3440,   463,  4569,  -430,  -430,
    -430,  2346,   231,   -14,  -430,   144,  2346,  -430,  -430,   145,
     231,  2346,  -430,   402,  4569,  2346,  1547,  2346,  4569,  -430,
    -430,  2801,  2801,  2801,   378,  2346,   231,  3499,  2346,  4193,
    4225,  2801,  2346,  -430,  2346,  -430,  2346,   231,  -430,   430,
    -430,   407,  -430,  1805,  -430,  -430,  2346,  2801,  1481,  3869,
    2466,   -32,  2346,  -430,  2346,  2346,  2346,  3293,  3142,  2346,
    2346,  4569,  2346,  1481,  1481,  -430,  3795,   461,  1481,  3662,
    -430,  4569,   346,  4502,  2634,  2801,  2654,  -430,  4569,   417,
    -430,  2801,  3512,  -430,  -430,  2674,   370,  4257,  2906,   540,
    -430,  -430,   297,  3905,  2510,   232,  2801,  -430,  -430,   742,
     517,  2554,  -430,  3440,  4569,  4569,   425,  2346,  -430,  4569,
    4569,  4537,   231,  -430,  -430,  -430,   231,  2346,  -430,  2346,
    -430,  -430,   312,  -430,   490,   231,  2694,  -430,  -430,  -430,
    2346,  -430,  2346,  -430,  2801,  -430,  -430,   860,  2554,  -430,
    2714,  -430,  1402,   440,  3574,  2801,  3795,   426,  2801,   477,
    -430,  2346,  -430,  -430,  3006,  2938,  2734,  -430,  1419,  -430,
    -430,  2346,  2346,  -430,  2801,  -430,  -430,  2754,  2346,  4569,
    -430,  2346,  -430,  -430,  -430,  3353,  3177,  -430,  3587,  3042,
    2346,  -430,  2801,  -430,  3649,  2801,  -430
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -430,  -430,   543,  -430,   -26,   -47,  -430,   348,   499,  -430,
    -430,     4,   201,   328,  -321,   130,  -430,   203,   432,    31,
     -35,  -430,  -430,   750,     2,   -97,   340,   230,  -430,  -195,
     350,   541,  -130,  -430,   277,   304,   191,  -430,    44,  -429,
    -145,   156,   303,  -430,    85,  -308,  -430,  -376,   574,  -194,
      13,   972,  -430,  -430,   621,  -430,   -45,   -10,   447,   489,
       0,   -11,   394
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -286
static const yytype_int16 yytable[] =
{
      28,   108,   159,   181,    20,   257,   143,   129,   266,    59,
     482,   125,   331,   435,   333,    28,   117,   226,   426,    20,
      31,    28,   521,     3,     4,   460,   205,   119,   254,     1,
     127,   571,   296,    59,   186,   262,   372,     3,     4,   265,
     334,   147,   128,   207,   276,   211,   572,   449,   176,   506,
      59,   534,   373,   532,   212,   374,     6,     1,     3,     4,
     208,   450,     3,   461,    28,   462,   451,   123,   123,   533,
     124,   124,   324,   325,   327,   126,   330,   255,   221,   172,
      12,   277,   181,   115,     6,   116,    45,   198,   199,   565,
     121,    13,   206,     1,    12,     2,    14,   217,   206,   535,
     363,     3,     4,   108,   110,    13,   117,   110,     3,     4,
      14,     3,     4,   239,    45,    12,     5,   119,   507,   511,
       6,   130,   339,   340,    31,    31,    13,   218,   243,    59,
     251,    14,     7,   222,   477,    31,   223,     1,     3,     4,
       8,   219,   259,   261,     3,     4,     1,     9,   413,   278,
      10,    11,   110,   267,   224,   234,   159,   225,    12,   159,
     584,   135,   537,   588,     6,    12,   286,   235,    12,    13,
     186,   495,   286,     6,    14,   229,    13,   215,   230,    13,
     468,    14,   201,   496,    14,   260,   279,   115,   115,   347,
     352,   210,   202,   211,    45,    12,   108,   285,   115,   569,
     116,    12,   270,    45,   123,   271,    13,   124,   108,   108,
      28,    14,    13,   364,    61,   365,   272,    14,   384,   273,
     196,   197,   469,   198,   199,   420,   159,   534,   382,   385,
     421,   203,     1,   351,     1,   243,   159,   294,   295,   512,
     635,   348,   361,   607,   204,   267,   353,     1,   261,     2,
     612,   231,   267,   232,     1,     3,     4,     1,   483,     6,
     216,     6,   380,   147,   147,   366,   367,   213,   524,   516,
       5,   481,   402,   427,     6,   428,   368,   214,   298,   525,
     251,     6,    28,   517,     6,   286,     7,   628,   518,    45,
     509,    45,   220,   267,     8,   608,   359,   417,     1,   360,
       2,     9,   291,   186,    10,    11,     3,     4,   522,    31,
     609,    45,    12,   252,    45,   534,   402,   369,   562,   123,
     370,     5,   124,    13,   373,     6,    28,   374,    14,   441,
     432,   298,   458,   299,    28,   219,    28,     7,   300,   456,
     437,   542,   356,   472,   357,     8,   618,   619,   228,   480,
     193,   194,   195,   196,   197,    45,   198,   199,   378,   423,
     243,   298,   271,    12,   455,    59,     1,   147,     2,   233,
     267,   267,   556,   466,    13,   603,   206,   436,   147,    14,
     219,     1,   261,     2,   147,   261,   262,   389,   387,     5,
     620,   370,   323,     6,   388,   328,   576,   502,     1,   262,
       2,   503,   370,   455,     5,     7,     3,     4,     6,   181,
     298,   424,   431,     8,   298,   291,   472,   402,     4,   425,
       7,     5,   298,    45,   589,     6,   590,    28,     8,   370,
     433,  -255,   434,   123,   538,    28,   124,     7,    45,   437,
     429,   440,   343,   271,   225,     8,   447,    26,  -259,   360,
     286,   147,   598,   298,   453,    45,    59,   370,   261,   617,
     344,   478,    26,    12,   479,   110,   493,   510,    26,   494,
     494,  -285,   261,   515,    13,   263,   356,   514,   280,    14,
     261,   520,   540,   472,   402,   298,   267,   561,   282,    27,
     494,   286,   286,   286,    28,   289,   550,   594,   582,   472,
     595,   286,   108,   586,    27,   613,   636,   559,   298,   298,
      27,    26,   364,   298,   491,   560,   338,   286,   147,   631,
     570,   632,   544,   349,   546,   346,   463,   464,   350,   371,
     403,   404,   555,   147,   147,   296,   439,   513,   147,   442,
     443,   585,   444,   498,   286,   286,   286,   445,   564,   530,
      52,   286,   526,    27,   602,   286,   638,   621,   122,   337,
     209,   452,   247,   355,   570,   345,   286,   454,   438,    28,
     341,    28,   415,   437,    52,   391,   393,   132,   583,   547,
     136,   137,   261,   149,    60,     0,   261,   151,   154,   173,
     178,    52,     0,   321,     0,   622,   286,   610,     0,     0,
       0,     0,     0,     0,   286,     0,     0,    28,    28,     0,
     286,   437,    28,     0,     0,   286,   437,     0,   286,     0,
       0,     0,     0,     0,     0,     0,   286,   555,    28,     0,
       0,     0,   437,     0,   286,   626,     0,   286,   182,   183,
     184,   185,   186,     0,     0,     0,   634,     0,     0,   637,
     291,     0,   286,     0,     0,   286,     0,    26,     0,     0,
       0,     0,   146,   182,   183,     0,     0,   186,   238,     0,
      52,     0,     0,     0,   291,   291,   291,     0,     0,     0,
       0,     0,     0,   655,     0,   291,     0,   191,   192,   193,
     194,   195,   196,   197,   291,   198,   199,     0,     0,    27,
     274,   275,     0,     0,     0,   132,     0,     0,   287,   288,
       0,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,     0,   301,   302,   303,   304,     0,   306,    26,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     291,     0,   322,     0,     0,     1,   329,     2,     0,     0,
      21,   146,     0,     3,     4,     0,   291,     0,     0,     0,
       0,    64,   105,   111,   291,    21,     0,   291,     5,     0,
       0,    27,     6,    26,   146,   354,     0,     0,     0,     0,
       0,    26,     0,    26,     7,   291,     0,     0,     0,     0,
       0,     0,     8,   150,   375,   376,   377,     0,     0,     0,
       0,   379,    45,     0,     0,     0,   386,     0,     0,   390,
      12,    64,     0,     0,   392,    27,     0,   396,     0,   397,
     320,    13,   399,    27,   611,    27,    14,     0,     0,     0,
     411,     0,     0,   412,     0,     0,   414,   416,     0,   418,
       0,   419,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,   105,     2,   146,     0,     0,     0,
       0,     3,     4,   146,    26,     0,   236,     0,   242,     0,
       0,     0,    26,     0,   146,   146,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     7,     0,     0,     0,    52,   457,     0,   459,
       8,     0,     0,   465,   146,   467,    27,     0,     0,     0,
      45,     0,     0,     0,    27,     0,     0,     0,    12,     0,
     484,     0,     0,     0,     0,   488,   305,     0,   307,    13,
       0,    26,   627,     0,    14,   497,     0,     0,   499,     0,
     500,     0,     0,     0,     0,     0,     0,   105,     0,     0,
      21,    64,     0,     0,     0,     0,     0,    26,     0,   105,
     105,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,   242,   120,     0,   146,     0,
     519,   146,   146,     0,     0,   362,     0,    52,     0,   146,
       0,     0,   527,   528,     0,   146,     0,     0,     0,    27,
       0,    26,   531,   120,     0,     0,    26,   536,    26,     0,
       0,     0,   539,     0,     0,     0,   541,     0,   543,     0,
       0,     0,     0,     0,     0,     0,   548,     0,     0,   552,
       0,     0,     0,     0,     0,   557,     0,   558,     0,     0,
       0,     0,     0,    27,    26,    26,     0,   563,    27,    26,
      27,     0,     0,   573,     0,   574,   575,     0,     0,     0,
     579,   580,   146,   581,     0,    26,   120,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    21,   227,   236,     0,
       0,     0,     0,     0,     0,     0,    27,    27,     0,     0,
       0,    27,   120,     0,     0,     0,   448,   146,     0,     0,
     242,     0,     0,     0,     0,     0,     0,    27,   614,     0,
       0,     0,     0,     0,     0,   120,     0,     0,   616,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   146,
       0,   624,     0,   625,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   146,   146,     0,     0,     0,   146,
       0,     0,   639,     1,    29,     2,    30,   110,    31,     0,
      32,     0,   645,   646,     0,     0,     0,     0,     0,   648,
       0,     0,   649,     0,     0,    21,     5,     0,     0,     0,
       6,   654,     0,     0,     0,     0,     0,     0,    34,   131,
     120,    36,     7,     0,     0,   120,     0,    37,    38,    39,
       8,     0,    41,    42,     0,    43,     0,   120,     0,    44,
      45,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,   120,   120,     0,     0,    47,
     152,    48,     0,     0,    49,     0,     0,     0,     0,   153,
     138,    29,   120,     0,   110,    31,     0,     0,     3,     4,
       0,     0,     0,   105,     0,   120,     0,     0,     0,     0,
      21,     0,     0,    66,     0,    67,     0,   139,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,     0,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,    91,    92,     0,    93,   140,    95,    96,
      97,    98,    99,     0,    21,    12,     0,     0,   115,    21,
       0,    21,     0,     0,     0,     0,    13,   381,     0,     0,
       0,    14,     0,     0,   141,   142,   138,    29,     0,   120,
     110,    31,   120,   120,     3,     4,     0,     0,     0,     0,
     120,     0,     0,     0,     0,     0,   120,    21,    21,    66,
       0,    67,    21,   139,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,    80,    81,    21,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,     0,    93,   140,    95,    96,    97,    98,    99,     0,
       0,    12,     0,     0,   115,     1,     0,     2,     0,     0,
       0,     0,   245,     3,     4,     0,     0,    14,     0,     0,
     141,   142,     1,   120,     2,     0,     0,     0,     5,     0,
       3,     4,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     5,     0,     0,     0,     6,
       0,     0,     8,     0,     0,     0,     0,     0,   120,     0,
       0,     7,    45,     0,     0,     0,     0,     0,     0,     8,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    45,
     630,    13,     0,     0,   138,    29,    14,    12,     0,    31,
     120,     0,     3,     4,     0,     0,     0,   644,    13,     0,
       0,     0,     0,    14,     0,   120,   120,    66,     0,    67,
     120,   139,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,    78,    79,    80,    81,     0,    82,    83,    84,
      85,    86,    87,    88,     0,    89,    90,    91,    92,     0,
      93,   140,    95,    96,    97,    98,    99,     0,     0,    12,
     138,    29,   115,     0,     0,    31,     0,     0,     3,     4,
      13,     0,     0,     0,     0,    14,     0,     0,   141,   142,
       0,     0,     0,    66,     0,    67,     0,   139,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,     0,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,    91,    92,     0,    93,   140,    95,    96,
      97,    98,    99,     0,     0,    12,     0,     0,   115,     0,
       1,    29,     2,    30,     0,    31,   245,    32,     0,     0,
       0,    14,     0,     0,   141,   142,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    34,   131,     0,    36,     7,
       0,     0,     0,     0,    37,    38,    39,     8,     0,    41,
      42,     0,    43,     0,     0,     0,    44,    45,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,    46,     3,
       4,     0,     0,     0,     0,     0,    47,     0,    48,     0,
       0,    49,   177,     0,    66,     0,    67,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,     0,    78,
      79,    80,    81,     0,    82,    83,    84,    85,    86,    87,
      88,     0,    89,    90,    91,    92,     0,    93,    94,    95,
      96,    97,    98,    99,     0,    65,    12,     0,   100,   110,
       0,   101,     0,     3,     4,     0,     0,   102,     0,   103,
       0,     0,   104,     0,     0,     0,     0,     0,    66,     0,
      67,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,    78,    79,    80,    81,     0,    82,    83,
      84,    85,    86,    87,    88,     0,    89,    90,    91,    92,
       0,    93,    94,    95,    96,    97,    98,    99,    65,     0,
      12,     0,     0,     0,     0,     0,     3,     4,     0,     0,
       0,   102,     0,   103,     0,     0,   104,     0,     0,     0,
       0,    66,     0,    67,     0,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,    80,    81,
       0,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,     0,    93,    94,    95,    96,    97,    98,
      99,     0,     0,    12,     1,    29,     2,    30,     0,    31,
       0,    32,     0,     0,   102,     0,   103,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     5,     0,   160,
     161,     6,     0,     0,     0,     0,     0,     0,   162,    34,
     163,     0,   164,     7,     0,     0,   165,   166,    37,    38,
      39,     8,   167,    41,    42,   168,    43,     0,     0,     0,
      44,    45,     0,     0,     0,   169,     1,    29,     2,    30,
       0,    31,    46,    32,     0,     0,     0,     0,     0,     0,
      47,     0,    48,   170,     0,    49,     0,     0,     0,     5,
       0,     0,     0,     6,     0,    33,     0,     0,     0,     0,
       0,    34,    35,     0,    36,     7,     0,     0,     0,     0,
      37,    38,    39,     8,    40,    41,    42,     0,    43,     0,
       0,     0,    44,    45,     0,     1,    29,     2,    30,     0,
      31,     0,    32,     0,    46,     0,     0,     0,     0,     0,
       0,     0,    47,     0,    48,     0,     0,    49,     5,     0,
       0,     0,     6,     0,     0,     0,     0,     0,   180,     0,
      34,    35,     0,    36,     7,     0,     0,     0,     0,    37,
      38,    39,     8,    40,    41,    42,     0,    43,     0,     0,
       0,    44,    45,     0,     1,    29,     2,    30,     0,    31,
       0,    32,     0,    46,     0,     0,     0,     0,     0,     0,
       0,    47,     0,    48,     0,     0,    49,     5,     0,     0,
       0,     6,     0,     0,     0,     0,     0,   244,     0,    34,
      35,     0,    36,     7,     0,     0,     0,     0,    37,    38,
      39,     8,    40,    41,    42,     0,    43,     0,     0,     0,
      44,    45,     0,     1,    29,     2,    30,   110,    31,     0,
      32,     0,    46,     0,     0,     0,     0,     0,     0,     0,
      47,     0,    48,     0,     0,    49,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,    34,   131,
       0,    36,     7,     0,     0,     0,     0,    37,    38,    39,
       8,     0,    41,    42,     0,    43,     0,     0,     0,    44,
      45,     0,     1,    29,     2,    30,     0,    31,     0,    32,
       0,    46,     0,     0,     0,     0,     0,     0,   326,    47,
       0,    48,     0,     0,    49,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
      36,     7,     0,     0,     0,     0,    37,    38,    39,     8,
      40,    41,    42,     0,    43,     0,     0,     0,    44,    45,
       0,     1,    29,     2,    30,     0,    31,     0,    32,     0,
      46,     0,     0,     0,     0,     0,     0,   523,    47,     0,
      48,     0,     0,    49,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,    36,
       7,     0,     0,     0,     0,    37,    38,    39,     8,    40,
      41,    42,     0,    43,     0,     0,     0,    44,    45,     0,
       1,    29,     2,    30,   110,    31,     0,    32,     0,    46,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    48,
       0,     0,    49,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    34,   131,     0,    36,     7,
       0,     0,     0,     0,    37,    38,    39,     8,     0,    41,
      42,     0,    43,     0,     0,     0,    44,    45,     0,     1,
      29,     2,    30,     0,    31,     0,    32,     0,    46,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    48,     0,
       0,    49,     5,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,    34,   131,     0,    36,     7,     0,
       0,     0,     0,    37,    38,    39,     8,     0,    41,    42,
       0,    43,     0,     0,     0,    44,    45,     0,     1,    29,
       2,    30,     0,    31,     0,    32,     0,    46,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    48,     0,     0,
      49,     5,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    34,   131,     0,    36,     7,     0,     0,
       0,     0,    37,    38,    39,     8,     0,    41,    42,     0,
      43,     0,     0,     0,    44,    45,     0,     0,     0,     1,
       0,     2,     0,     0,     0,     0,    46,     3,     4,     0,
       0,     0,     0,     0,   281,     0,    48,     0,     0,    49,
       0,     0,     5,     0,   160,   161,     6,     0,     0,     0,
       0,     0,     0,   162,     0,   283,     0,   284,     7,     0,
       0,   165,   166,     1,     0,     2,     8,   167,     0,     0,
     168,     3,     4,     0,     0,     0,    45,     0,     0,     0,
     169,     0,     0,     0,    12,     0,     5,     0,   160,   161,
       6,     0,     0,     0,     0,    13,     0,   162,   568,   283,
      14,   284,     7,     0,     0,   165,   166,     1,     0,     2,
       8,   167,     0,     0,   168,     3,     4,     0,     0,     0,
      45,     0,     0,     1,   169,     0,     0,     0,    12,     0,
       5,     0,     0,     0,     6,     0,     0,     0,     0,    13,
       0,     0,   606,     1,    14,     0,     7,     0,   160,   161,
       6,     0,     0,     0,     8,     0,     0,   162,     0,   283,
       0,   284,     0,     0,    45,   165,   166,     0,   160,   161,
       6,   167,    12,     0,   168,     0,     0,   162,     0,   283,
      45,   284,     0,    13,   169,   165,   166,     1,    14,     0,
       0,   167,     0,     0,   168,     0,     0,     0,     0,     0,
      45,     0,   290,     0,   405,     0,     0,     1,     0,     0,
       0,     0,   160,   161,     6,     0,     0,     0,   406,     0,
       0,   162,     0,   283,     0,   284,     0,     1,     0,   165,
     166,     0,   160,   161,     6,   167,     0,     0,   168,     0,
       0,   162,     0,   283,    45,   284,     0,     1,   169,   165,
     166,     0,   160,   161,     6,   167,     0,     0,   168,     0,
       0,   162,   591,   283,    45,   284,     0,     1,   169,   165,
     166,     0,   160,   161,     6,   167,     0,     0,   168,     0,
       0,   162,   593,   283,    45,   284,     0,     1,   169,   165,
     166,     0,   160,   161,     6,   167,     0,     0,   168,     0,
       0,   162,   597,   283,    45,   284,     0,     1,   169,   165,
     166,     0,   160,   161,     6,   167,     0,     0,   168,     0,
       0,   162,   623,   283,    45,   284,     0,     0,   169,   165,
     166,     0,   160,   161,     6,   167,     0,     0,   168,     0,
       0,   162,   629,   283,    45,   284,     0,     0,   169,   165,
     166,     0,     0,     0,     1,   167,     0,     0,   168,     0,
       0,     0,   643,     0,    45,     0,     0,     0,   169,   182,
     183,   184,   185,   186,     0,     0,   187,     0,     0,   160,
     161,     6,   647,     0,     0,     0,     0,     0,   162,     0,
     283,   292,   284,   188,     0,     0,   165,   166,     0,     0,
     189,     0,   167,     0,     0,   168,   182,   183,   184,   185,
     186,    45,     0,   187,     0,   169,   190,     0,   191,   192,
     193,   194,   195,   196,   197,     0,   198,   199,   485,     0,
     188,     0,     0,     0,     0,     0,   293,   189,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,   188,   198,   199,     0,     0,     0,     0,   189,
       0,     0,     0,   486,     0,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,     0,     0,   188,
       0,     0,     0,     0,     0,   297,   189,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,     0,     0,     0,     0,   189,   600,
       0,   601,     0,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,     0,   188,     0,     0,
       0,   641,     0,   642,   189,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,   188,
     198,   199,     0,     0,     0,     0,   189,     0,     0,   508,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,     0,   198,   199,     0,   188,     0,     0,     0,   268,
       0,   640,   189,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,   188,   198,   199,
       0,     0,     0,     0,   189,   268,     0,   653,     0,   182,
     183,   184,   185,   186,     0,     0,   187,     0,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,     0,   188,   269,     0,     0,     0,     0,     0,
     189,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,   190,     0,   191,   192,
     193,   194,   195,   196,   197,   188,   198,   199,     0,     0,
     492,     0,   189,     0,     0,     0,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
     188,     0,     0,     0,   578,     0,     0,   189,     0,     0,
       0,     0,     0,   318,    29,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,     0,   198,   199,     0,    66,     0,    67,   651,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,    80,    81,     0,    82,    83,    84,    85,
      86,    87,    88,     0,    89,    90,    91,    92,     0,    93,
      94,    95,    96,    97,    98,    99,   487,     0,     0,     0,
     182,   183,   184,   185,   186,     0,     0,   187,   577,     0,
       0,     0,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,     0,   188,     0,     0,     0,     0,     0,
       0,   189,     0,     0,     0,     0,   188,     0,     0,     0,
       0,     0,     0,   189,     0,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,   190,
       0,   191,   192,   193,   194,   195,   196,   197,   650,   198,
     199,     0,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,     0,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,     0,   188,     0,     0,     0,
       0,     0,     0,   189,     0,     0,     0,     0,   188,     0,
       0,     0,     0,     0,     0,   189,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,     0,   198,
     199,   190,     0,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,     0,     0,   422,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,   529,     0,     0,   182,
     183,   184,   185,   186,     0,     0,   187,     0,     0,     0,
     188,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,   188,     0,     0,     0,     0,     0,     0,
     189,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,     0,   198,   199,     0,   190,   501,   191,   192,
     193,   194,   195,   196,   197,     0,   198,   199,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,   188,     0,     0,     0,     0,     0,     0,   189,
       0,     0,     0,     0,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,     0,   190,   551,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
       0,     0,   596,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,     0,     0,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,   188,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,     0,     0,
     188,     0,     0,     0,     0,     0,     0,   189,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,     0,   190,   633,   191,   192,   193,   194,   195,
     196,   197,     0,   198,   199,     0,     0,   652,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,   188,     0,     0,     0,     0,     0,   468,   189,
       0,     0,     0,   587,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,     0,   190,   656,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
     469,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,     0,     0,   182,   183,   184,   185,   186,     0,
       0,   187,     0,   407,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   409,     0,   188,     0,
       0,     0,     0,     0,     0,   189,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
     408,   190,     0,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,   410,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,   188,     0,
       0,     0,     0,     0,     0,   189,     0,     0,     0,     0,
       0,     0,   182,   183,   184,   185,   186,     0,     0,   187,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,   469,   504,     0,   188,     0,     0,     0,
       0,     0,     0,   189,     0,     0,     0,     0,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,     0,   198,
     199,   505,   188,     0,   566,     0,     0,     0,     0,   189,
       0,     0,     0,     0,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,   567,   188,     0,
     604,     0,     0,     0,     0,   189,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
     188,   198,   199,   605,     0,     0,     0,   189,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,   188,   198,   199,   200,     0,     0,     0,   189,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,   188,   198,   199,   258,     0,     0,
       0,   189,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,   188,   198,   199,   358,
       0,     0,     0,   189,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,   188,   198,
     199,   395,     0,     0,     0,   189,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
     188,   198,   199,   430,     0,     0,     0,   189,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,   188,   198,   199,   446,     0,     0,     0,   189,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,   188,   198,   199,   489,     0,     0,
       0,   189,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,   188,   198,   199,   490,
       0,     0,     0,   189,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,   188,   198,
     199,   553,     0,     0,     0,   189,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
     188,   198,   199,   554,     0,     0,     0,   189,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,   188,   198,   199,   599,     0,     0,     0,   189,
       0,     0,     0,     0,     0,   253,   182,   183,   184,   185,
     186,     0,     0,   187,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,   264,     0,     0,
     188,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,     0,   198,   199,   394,     0,   188,     0,     0,
       0,     0,     0,     0,   189,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,   188,
     198,   199,     0,     0,     0,     0,   189,   182,   183,   184,
     185,   186,   471,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,     0,     0,     0,     0,   189,     0,
       0,     0,     0,     0,   182,   183,   184,   185,   186,     0,
       0,   187,     0,   476,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,   292,     0,   188,     0,
       0,     0,     0,     0,     0,   189,     0,     0,     0,     0,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,   485,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
     188,     0,   615,     0,     0,     0,     0,   189,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,   188,   198,   199,     0,     0,     0,     0,   189,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,     0,     0,     0,
       0,   189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -286,     0,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199
};

static const yytype_int16 yycheck[] =
{
       0,    12,    47,    50,     0,   135,    41,    33,   153,     9,
     386,    21,   207,   334,   208,    15,    14,   114,   326,    15,
       8,    21,   451,    11,    12,    41,    18,    14,    34,     3,
      67,    63,    18,    33,    23,    66,    67,    11,    12,    42,
      78,    41,    79,    67,    41,    83,    78,    67,    48,    14,
      50,    83,    83,    67,    64,    86,    30,     3,    11,    12,
      84,    81,    11,    79,    64,    81,    86,    70,    70,    83,
      73,    73,   202,   203,   204,    84,   206,    83,    15,    48,
      68,    78,   129,    71,    30,    73,    60,    76,    77,   518,
       0,    79,    84,     3,    68,     5,    84,    85,    84,   475,
     245,    11,    12,   114,     7,    79,   104,     7,    11,    12,
      84,    11,    12,    87,    60,    68,    26,   104,    83,   427,
      30,    79,   219,   220,     8,     8,    79,    69,   128,   129,
     130,    84,    42,    70,    80,     8,    73,     3,    11,    12,
      50,    83,   142,   143,    11,    12,     3,    57,   293,    41,
      60,    61,     7,   153,    80,    67,   201,    83,    68,   204,
     536,    79,    17,   539,    30,    68,   166,    79,    68,    79,
      23,    67,   172,    30,    84,    70,    79,    80,    73,    79,
      36,    84,    79,    79,    84,    42,    78,    71,    71,    73,
      73,    81,    79,    83,    60,    68,   207,   166,    71,   520,
      73,    68,    80,    60,    70,    83,    79,    73,   219,   220,
     210,    84,    79,    78,    81,    80,    80,    84,   263,    83,
      73,    74,    78,    76,    77,    84,   271,    83,   263,   264,
      89,    79,     3,   231,     3,   235,   281,    82,    83,   433,
     616,   228,   242,   564,    79,   245,   233,     3,   248,     5,
     571,    83,   252,    85,     3,    11,    12,     3,   388,    30,
      82,    30,   262,   263,   264,    14,    15,    69,    14,    67,
      26,    42,   282,    78,    30,    80,    25,    69,    83,    25,
     280,    30,   282,    81,    30,   285,    42,   608,    86,    60,
     420,    60,    79,   293,    50,    63,    80,   297,     3,    83,
       5,    57,   172,    23,    60,    61,    11,    12,    67,     8,
      78,    60,    68,    79,    60,    83,   326,    80,   513,    70,
      83,    26,    73,    79,    83,    30,   326,    86,    84,    80,
      78,    83,   367,    85,   334,    83,   336,    42,    90,   365,
     336,   486,    83,   378,    85,    50,    34,    35,    16,   384,
      70,    71,    72,    73,    74,    60,    76,    77,    80,    80,
     360,    83,    83,    68,   364,   365,     3,   367,     5,    16,
     370,   371,   502,   373,    79,    78,    84,    82,   378,    84,
      83,     3,   382,     5,   384,   385,    66,    67,    80,    26,
      78,    83,   201,    30,    86,   204,   526,    78,     3,    66,
       5,    82,    83,   403,    26,    42,    11,    12,    30,   456,
      83,    80,    85,    50,    83,   285,   451,   427,    12,    80,
      42,    26,    83,    60,    78,    30,    80,   427,    50,    83,
      83,    79,    85,    70,   479,   435,    73,    42,    60,   435,
      80,    80,    80,    83,    83,    50,    80,     0,    79,    83,
     450,   451,    82,    83,    80,    60,   456,    83,   458,   589,
      80,    80,    15,    68,    83,     7,    80,    80,    21,    83,
      83,    79,   472,    80,    79,    79,    83,    82,    79,    84,
     480,   450,    80,   518,   494,    83,   486,    80,    79,     0,
      83,   491,   492,   493,   494,    79,   496,    80,   533,   534,
      83,   501,   513,   538,    15,    80,    80,   507,    83,    83,
      21,    64,    78,    83,    80,    85,    79,   517,   518,    79,
     520,    81,   491,    85,   493,    89,   370,   371,    85,    24,
      79,    79,   501,   533,   534,    18,    80,    67,   538,    85,
      85,    80,    85,    79,   544,   545,   546,    85,   517,    86,
       9,   551,    79,    64,    14,   555,    79,    67,    15,   211,
      61,   360,   130,   235,   564,   225,   566,   364,   338,   569,
     220,   571,   295,   569,    33,   271,   273,    36,   534,   494,
      39,    40,   582,    42,    10,    -1,   586,    46,    47,    48,
      49,    50,    -1,   199,    -1,   595,   596,   566,    -1,    -1,
      -1,    -1,    -1,    -1,   604,    -1,    -1,   607,   608,    -1,
     610,   607,   612,    -1,    -1,   615,   612,    -1,   618,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   626,   596,   628,    -1,
      -1,    -1,   628,    -1,   634,   604,    -1,   637,    19,    20,
      21,    22,    23,    -1,    -1,    -1,   615,    -1,    -1,   618,
     520,    -1,   652,    -1,    -1,   655,    -1,   210,    -1,    -1,
      -1,    -1,    41,    19,    20,    -1,    -1,    23,   127,    -1,
     129,    -1,    -1,    -1,   544,   545,   546,    -1,    -1,    -1,
      -1,    -1,    -1,   652,    -1,   555,    -1,    68,    69,    70,
      71,    72,    73,    74,   564,    76,    77,    -1,    -1,   210,
     159,   160,    -1,    -1,    -1,   164,    -1,    -1,   167,   168,
      -1,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    -1,   182,   183,   184,   185,    -1,   187,   282,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     610,    -1,   201,    -1,    -1,     3,   205,     5,    -1,    -1,
       0,   130,    -1,    11,    12,    -1,   626,    -1,    -1,    -1,
      -1,    11,    12,    13,   634,    15,    -1,   637,    26,    -1,
      -1,   282,    30,   326,   153,   234,    -1,    -1,    -1,    -1,
      -1,   334,    -1,   336,    42,   655,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    43,   253,   254,   255,    -1,    -1,    -1,
      -1,   260,    60,    -1,    -1,    -1,   265,    -1,    -1,   268,
      68,    61,    -1,    -1,   273,   326,    -1,   276,    -1,   278,
     199,    79,   281,   334,    82,   336,    84,    -1,    -1,    -1,
     289,    -1,    -1,   292,    -1,    -1,   295,   296,    -1,   298,
      -1,   300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,   114,     5,   245,    -1,    -1,    -1,
      -1,    11,    12,   252,   427,    -1,   126,    -1,   128,    -1,
      -1,    -1,   435,    -1,   263,   264,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   280,    42,    -1,    -1,    -1,   365,   366,    -1,   368,
      50,    -1,    -1,   372,   293,   374,   427,    -1,    -1,    -1,
      60,    -1,    -1,    -1,   435,    -1,    -1,    -1,    68,    -1,
     389,    -1,    -1,    -1,    -1,   394,   186,    -1,   188,    79,
      -1,   494,    82,    -1,    84,   404,    -1,    -1,   407,    -1,
     409,    -1,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
     210,   211,    -1,    -1,    -1,    -1,    -1,   520,    -1,   219,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   494,    -1,   235,    14,    -1,   367,    -1,
     449,   370,   371,    -1,    -1,   245,    -1,   456,    -1,   378,
      -1,    -1,   461,   462,    -1,   384,    -1,    -1,    -1,   520,
      -1,   564,   471,    41,    -1,    -1,   569,   476,   571,    -1,
      -1,    -1,   481,    -1,    -1,    -1,   485,    -1,   487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   495,    -1,    -1,   498,
      -1,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,
      -1,    -1,    -1,   564,   607,   608,    -1,   516,   569,   612,
     571,    -1,    -1,   522,    -1,   524,   525,    -1,    -1,    -1,
     529,   530,   451,   532,    -1,   628,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,   336,   115,   338,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   607,   608,    -1,    -1,
      -1,   612,   130,    -1,    -1,    -1,   356,   486,    -1,    -1,
     360,    -1,    -1,    -1,    -1,    -1,    -1,   628,   577,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   587,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,
      -1,   600,    -1,   602,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   533,   534,    -1,    -1,    -1,   538,
      -1,    -1,   621,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,   631,   632,    -1,    -1,    -1,    -1,    -1,   638,
      -1,    -1,   641,    -1,    -1,   435,    26,    -1,    -1,    -1,
      30,   650,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
     228,    41,    42,    -1,    -1,   233,    -1,    47,    48,    49,
      50,    -1,    52,    53,    -1,    55,    -1,   245,    -1,    59,
      60,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,   263,   264,    -1,    -1,    79,
      80,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    89,
       3,     4,   280,    -1,     7,     8,    -1,    -1,    11,    12,
      -1,    -1,    -1,   513,    -1,   293,    -1,    -1,    -1,    -1,
     520,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,   564,    68,    -1,    -1,    71,   569,
      -1,   571,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,     3,     4,    -1,   367,
       7,     8,   370,   371,    11,    12,    -1,    -1,    -1,    -1,
     378,    -1,    -1,    -1,    -1,    -1,   384,   607,   608,    26,
      -1,    28,   612,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,   628,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,     3,    -1,     5,    -1,    -1,
      -1,    -1,    79,    11,    12,    -1,    -1,    84,    -1,    -1,
      87,    88,     3,   451,     5,    -1,    -1,    -1,    26,    -1,
      11,    12,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    26,    -1,    -1,    -1,    30,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,   486,    -1,
      -1,    42,    60,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      78,    79,    -1,    -1,     3,     4,    84,    68,    -1,     8,
     518,    -1,    11,    12,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    84,    -1,   533,   534,    26,    -1,    28,
     538,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    68,
       3,     4,    71,    -1,    -1,     8,    -1,    -1,    11,    12,
      79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    -1,
       3,     4,     5,     6,    -1,     8,    79,    10,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    71,    11,
      12,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    84,    85,    -1,    26,    -1,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    -1,    46,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    56,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,     3,    68,    -1,    70,     7,
      -1,    73,    -1,    11,    12,    -1,    -1,    79,    -1,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    -1,    46,    47,
      48,    49,    50,    51,    52,    -1,    54,    55,    56,    57,
      -1,    59,    60,    61,    62,    63,    64,    65,     3,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    68,     3,     4,     5,     6,    -1,     8,
      -1,    10,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    -1,    41,    42,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,     3,     4,     5,     6,
      -1,     8,    71,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    -1,    84,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,     3,     4,     5,     6,    -1,
       8,    -1,    10,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    84,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    -1,    -1,
      -1,    59,    60,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    81,    -1,    -1,    84,    26,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    84,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      -1,    81,    -1,    -1,    84,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,     3,     4,     5,     6,    -1,     8,    -1,    10,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,
      81,    -1,    -1,    84,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,
      -1,    -1,    84,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,
      -1,    84,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    -1,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,
      84,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    -1,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    71,    11,    12,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,
      -1,    -1,    26,    -1,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    42,    -1,
      -1,    45,    46,     3,    -1,     5,    50,    51,    -1,    -1,
      54,    11,    12,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    -1,    26,    -1,    28,    29,
      30,    -1,    -1,    -1,    -1,    79,    -1,    37,    82,    39,
      84,    41,    42,    -1,    -1,    45,    46,     3,    -1,     5,
      50,    51,    -1,    -1,    54,    11,    12,    -1,    -1,    -1,
      60,    -1,    -1,     3,    64,    -1,    -1,    -1,    68,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    82,     3,    84,    -1,    42,    -1,    28,    29,
      30,    -1,    -1,    -1,    50,    -1,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    60,    45,    46,    -1,    28,    29,
      30,    51,    68,    -1,    54,    -1,    -1,    37,    -1,    39,
      60,    41,    -1,    79,    64,    45,    46,     3,    84,    -1,
      -1,    51,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    82,    -1,    64,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,    -1,    78,    -1,
      -1,    37,    -1,    39,    -1,    41,    -1,     3,    -1,    45,
      46,    -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,
      -1,    37,    -1,    39,    60,    41,    -1,     3,    64,    45,
      46,    -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,
      -1,    37,    78,    39,    60,    41,    -1,     3,    64,    45,
      46,    -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,
      -1,    37,    78,    39,    60,    41,    -1,     3,    64,    45,
      46,    -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,
      -1,    37,    78,    39,    60,    41,    -1,     3,    64,    45,
      46,    -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,
      -1,    37,    78,    39,    60,    41,    -1,    -1,    64,    45,
      46,    -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,
      -1,    37,    78,    39,    60,    41,    -1,    -1,    64,    45,
      46,    -1,    -1,    -1,     3,    51,    -1,    -1,    54,    -1,
      -1,    -1,    78,    -1,    60,    -1,    -1,    -1,    64,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    28,
      29,    30,    78,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    41,    41,    43,    -1,    -1,    45,    46,    -1,    -1,
      50,    -1,    51,    -1,    -1,    54,    19,    20,    21,    22,
      23,    60,    -1,    26,    -1,    64,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    86,    50,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    86,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    86,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,    83,
      -1,    85,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    43,    -1,    -1,
      -1,    83,    -1,    85,    50,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    43,
      76,    77,    -1,    -1,    -1,    -1,    50,    -1,    -1,    85,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    43,    -1,    -1,    -1,    15,
      -1,    85,    50,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    43,    76,    77,
      -1,    -1,    -1,    -1,    50,    15,    -1,    85,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    -1,    43,    80,    -1,    -1,    -1,    -1,    -1,
      50,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    43,    76,    77,    -1,    -1,
      80,    -1,    50,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      43,    -1,    -1,    -1,    82,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    -1,    26,    -1,    28,    82,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    15,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    15,    76,
      77,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    -1,    80,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    16,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    -1,    66,    80,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    -1,    66,    80,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      -1,    -1,    80,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    -1,    66,    80,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    -1,    -1,    80,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    36,    50,
      -1,    -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    -1,    66,    80,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    43,    -1,
      45,    -1,    -1,    -1,    -1,    50,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      43,    76,    77,    78,    -1,    -1,    -1,    50,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    43,    76,    77,    78,    -1,    -1,    -1,    50,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    43,    76,    77,    78,    -1,    -1,
      -1,    50,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    43,    76,    77,    78,
      -1,    -1,    -1,    50,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    43,    76,
      77,    78,    -1,    -1,    -1,    50,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      43,    76,    77,    78,    -1,    -1,    -1,    50,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    43,    76,    77,    78,    -1,    -1,    -1,    50,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    43,    76,    77,    78,    -1,    -1,
      -1,    50,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    43,    76,    77,    78,
      -1,    -1,    -1,    50,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    43,    76,
      77,    78,    -1,    -1,    -1,    50,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      43,    76,    77,    78,    -1,    -1,    -1,    50,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    43,    76,    77,    78,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    56,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    40,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    43,
      76,    77,    -1,    -1,    -1,    -1,    50,    19,    20,    21,
      22,    23,    56,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    65,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    41,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    11,    12,    26,    30,    42,    50,    57,
      60,    61,    68,    79,    84,    92,    93,    94,    97,   100,
     102,   114,   115,   139,   140,   148,   149,   150,   151,     4,
       6,     8,    10,    32,    38,    39,    41,    47,    48,    49,
      51,    52,    53,    55,    59,    60,    71,    79,    81,    84,
      95,    96,   122,   142,   143,   145,   146,   149,   150,   151,
     139,    81,    98,    99,   114,     3,    26,    28,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    41,    42,
      43,    44,    46,    47,    48,    49,    50,    51,    52,    54,
      55,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      70,    73,    79,    81,    84,   114,   116,   120,   152,   153,
       7,   114,   117,   121,   147,    71,    73,   115,   119,   141,
     142,     0,    93,    70,    73,   148,    84,    67,    79,    95,
      79,    39,   122,   128,   151,    79,   122,   122,     3,    30,
      60,    87,    88,   111,   114,   141,   145,   151,   152,   122,
     114,   122,    80,    89,   122,   126,   127,   133,   134,   147,
      28,    29,    37,    39,    41,    45,    46,    51,    54,    64,
      82,   106,   110,   122,   124,   125,   151,    85,   122,   123,
      36,    96,    19,    20,    21,    22,    23,    26,    43,    50,
      66,    68,    69,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    79,    79,    79,    18,    84,    67,    84,    99,
      81,    83,   148,    69,    69,    80,    82,    85,    69,    83,
      79,    15,    70,    73,    80,    83,   116,   142,    16,    70,
      73,    83,    85,    16,    67,    79,   114,   118,   122,    87,
     103,   104,   114,   151,    36,    79,   108,   109,   111,   131,
     132,   151,    79,    56,    34,    83,   122,   123,    78,   151,
      42,   151,    66,    79,    40,    42,   131,   151,    15,    80,
      80,    83,    80,    83,   122,   122,    41,    78,    41,    78,
      79,    79,    79,    39,    41,   110,   151,   122,   122,    79,
      82,   106,    41,    86,    82,    83,    18,    86,    83,    85,
      90,   122,   122,   122,   122,   114,   122,   114,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,     3,   144,
     145,   153,   122,   127,   123,   123,    78,   123,   127,   122,
     123,   120,   101,   140,    78,   102,   105,    98,    79,   116,
     116,   121,   114,    80,    80,   117,    89,    73,   141,    85,
      85,   115,    73,   141,   122,   104,    83,    85,    78,    80,
      83,   151,   114,   131,    78,    80,    14,    15,    25,    80,
      83,    24,    67,    83,    86,   122,   122,   122,    80,   122,
     151,    80,   111,   112,   147,   111,   122,    80,    86,    67,
     122,   126,   122,   133,    41,    78,   122,   122,   109,   122,
     135,   136,   148,    79,    79,    64,    78,    41,    78,    41,
      78,   122,   122,   131,   122,   125,   122,   151,   122,   122,
      84,    89,    80,    80,    80,    80,   136,    78,    80,    80,
      78,    85,    78,    83,    85,   105,    82,   102,   118,    80,
      80,    80,    85,    85,    85,    85,    78,    80,   114,    67,
      81,    86,   103,    80,   108,   151,    95,   122,   111,   122,
      41,    79,    81,   132,   132,   122,   151,   122,    36,    78,
     138,    56,   111,   113,   129,   130,    65,    80,    80,    83,
     111,    42,   138,   123,   122,    41,    86,    15,   122,    78,
      78,    80,    80,    80,    83,    67,    79,   122,    79,   122,
     122,    80,    78,    82,    41,    78,    14,    83,    85,   123,
      80,   136,   140,    67,    82,    80,    67,    81,    86,   122,
     110,   130,    67,    78,    14,    25,    79,   122,   122,    16,
      86,   122,    67,    83,    83,   138,   122,    17,   147,   122,
      80,   122,   131,   122,   110,   110,   110,   135,   122,   137,
     151,    80,   122,    78,    78,   110,   123,   122,   122,   151,
      85,    80,   120,   122,   110,   130,    45,    78,    82,   105,
     151,    63,    78,   122,   122,   122,   123,    15,    82,   122,
     122,   122,   111,   129,   138,    80,   111,    41,   138,    78,
      80,    78,   107,    78,    80,    83,    80,    78,    82,    78,
      83,    85,    14,    78,    45,    78,    82,   105,    63,    78,
     110,    82,   105,    80,   122,    45,   122,   123,    34,    35,
      78,    67,   151,    78,   122,   122,   110,    82,   105,    78,
      78,    79,    81,    80,   110,   138,    80,   110,    79,   122,
      85,    83,    85,    78,    78,   122,   122,    78,   122,   122,
      15,    82,    80,    85,   122,   110,    80
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

/* Line 1455 of yacc.c  */
#line 131 "amber.yy"
    {consume_decl((yyvsp[(1) - (1)]));                                ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 132 "amber.yy"
    {consume_decl((yyvsp[(2) - (2)]));                                ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 144 "amber.yy"
    {(yyval) = mk_test_block(true, (yyvsp[(2) - (3)]));                    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 145 "amber.yy"
    {(yyval) = mk_test_block(false, (yyvsp[(3) - (4)]));                   ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 149 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 150 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 154 "amber.yy"
    {(yyval) = mk_test_instr_bool((yyvsp[(1) - (2)]));                     ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 155 "amber.yy"
    {(yyval) = mk_test_instr_print((yyvsp[(2) - (3)]));                    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 156 "amber.yy"
    {(yyval) = mk_test_instr_loop((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 157 "amber.yy"
    {(yyval) = mk_test_instr_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));           ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 163 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                     ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 164 "amber.yy"
    {(yyval) = mk_using_block((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                     ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 168 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));                       ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 169 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));                   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 172 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 173 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]));                             ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 179 "amber.yy"
    {(yyval) = mk_typedef((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 180 "amber.yy"
    {(yyval) = mk_typedef_par((yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                 ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 184 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 185 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 191 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                       ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 192 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                   ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 193 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (10)]), (yyvsp[(2) - (10)]), (yyvsp[(4) - (10)]), mk_expr_let((yyvsp[(7) - (10)]), (yyvsp[(9) - (10)])));  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 194 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));              ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 195 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(8) - (9)]));          ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 196 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 197 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(9) - (10)]));  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 199 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                   ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 200 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));               ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 201 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));          ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 202 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));      ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 203 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 204 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 205 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), mk_expr_let((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)])));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 209 "amber.yy"
    {(yyval) = mk_fnarg(null(), null());                   ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 210 "amber.yy"
    {(yyval) = mk_fnarg(null(), (yyvsp[(1) - (1)]));                       ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 211 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (1)]),     null());                   ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 212 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (2)]),     (yyvsp[(2) - (2)]));                       ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 216 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 217 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 221 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 222 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 228 "amber.yy"
    {(yyval) = mk_stmt_return((yyvsp[(2) - (3)]));                    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 229 "amber.yy"
    {(yyval) = mk_stmt_return_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));             ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 231 "amber.yy"
    {(yyval) = mk_stmt_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 234 "amber.yy"
    {(yyval) = mk_stmt_assignment_if((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));     ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 236 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(6) - (7)]));                ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 237 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 239 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (3)]));                      ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 240 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (7)]), (yyvsp[(5) - (7)]));                  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 241 "amber.yy"
    {(yyval) = mk_stmt_while((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 243 "amber.yy"
    {(yyval) = mk_stmt_let((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 246 "amber.yy"
    {(yyval) = mk_stmt_break();                       ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 247 "amber.yy"
    {(yyval) = mk_stmt_break_if((yyvsp[(3) - (4)]));                  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 249 "amber.yy"
    {(yyval) = mk_stmt_for((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 251 "amber.yy"
    {(yyval) = mk_stmt_fail();                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 252 "amber.yy"
    {(yyval) = mk_stmt_fail_if((yyvsp[(3) - (4)]));                   ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 254 "amber.yy"
    {(yyval) = mk_stmt_assert((yyvsp[(2) - (3)]));                    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 256 "amber.yy"
    {(yyval) = mk_stmt_print((yyvsp[(2) - (3)]));                     ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 257 "amber.yy"
    {(yyval) = mk_stmt_print_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));              ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 263 "amber.yy"
    {(yyval) = mk_seq_empty();                        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 264 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (6)]), mk_elif((yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])));           ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 268 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 269 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));               ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 270 "amber.yy"
    {(yyval) = mk_for_iter_range((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));         ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 274 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 275 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 279 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 280 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 288 "amber.yy"
    {(yyval) = mk_ptrn_type((yyvsp[(1) - (1)]));                               ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 289 "amber.yy"
    {(yyval) = mk_ptrn_var((yyvsp[(1) - (1)]));                                ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 290 "amber.yy"
    {(yyval) = mk_ptrn_ptrn_var((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 291 "amber.yy"
    {(yyval) = mk_ptrn_ctor((yyvsp[(1) - (1)]));                               ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 292 "amber.yy"
    {(yyval) = mk_ptrn_num((yyvsp[(1) - (1)]));                                ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 293 "amber.yy"
    {(yyval) = mk_ptrn_jolly();                                ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 294 "amber.yy"
    {(yyval) = mk_ptrn_expr((yyvsp[(2) - (2)]));                               ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 297 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (3)]), mk_ptrn_jolly());          ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 298 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                       ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 299 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), mk_ptrn_tuple((yyvsp[(3) - (4)]), false)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 300 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (6)]), mk_ptrn_tuple((yyvsp[(3) - (6)]), true));  ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 301 "amber.yy"
    {(yyval) = mk_ptrn_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 305 "amber.yy"
    {(yyval) = mk_seq(mk_lab_ptrn((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])));                    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 306 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (4)]), mk_lab_ptrn((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])));                ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 310 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                     ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 311 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                                 ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 318 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), false);                     ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 319 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), true);                      ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 323 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (1)]));                            ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 324 "amber.yy"
    {(yyval) = mk_type_var((yyvsp[(1) - (1)]));                            ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 325 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 326 "amber.yy"
    {(yyval) = mk_type_inline((yyvsp[(2) - (3)]));                         ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 327 "amber.yy"
    {(yyval) = mk_type_any();                              ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 328 "amber.yy"
    {(yyval) = mk_type_symb();                             ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 330 "amber.yy"
    {(yyval) = mk_type_int();                              ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 331 "amber.yy"
    {(yyval) = mk_type_low_bounded_int((yyvsp[(2) - (5)]));                ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 332 "amber.yy"
    {(yyval) = mk_type_up_bounded_int((yyvsp[(4) - (5)]));                 ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 333 "amber.yy"
    {(yyval) = mk_type_bounded_int((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 335 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 336 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 337 "amber.yy"
    {(yyval) = mk_type_fixed_seq((yyvsp[(2) - (3)]));                      ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 339 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 340 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 342 "amber.yy"
    {(yyval) = mk_type_map((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 343 "amber.yy"
    {(yyval) = mk_type_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 347 "amber.yy"
    {(yyval) = mk_pretype_type((yyvsp[(1) - (1)]));                        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 348 "amber.yy"
    {(yyval) = mk_pretype_empty_set();                     ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 349 "amber.yy"
    {(yyval) = mk_pretype_empty_seq();                     ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 350 "amber.yy"
    {(yyval) = mk_pretype_empty_map();                     ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 351 "amber.yy"
    {(yyval) = mk_pretype_sing((yyvsp[(1) - (1)]));                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 352 "amber.yy"
    {(yyval) = mk_pretype_tagged_obj((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));              ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 353 "amber.yy"
    {(yyval) = mk_pretype_tagged_tuple((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 357 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), false);                  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 358 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), true);                   ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 362 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 363 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 367 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 368 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 372 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 373 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 377 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 378 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 384 "amber.yy"
    {(yyval) = mk_expr_num((yyvsp[(1) - (1)]));                            ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 385 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 386 "amber.yy"
    {(yyval) = mk_expr_str((yyvsp[(1) - (1)]));                            ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 388 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 389 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 390 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 392 "amber.yy"
    {(yyval) = mk_expr_set(mk_seq_empty());                ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 393 "amber.yy"
    {(yyval) = mk_expr_set((yyvsp[(2) - (3)]));                            ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 395 "amber.yy"
    {(yyval) = mk_expr_map(mk_seq_empty());                ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 396 "amber.yy"
    {(yyval) = mk_expr_map((yyvsp[(2) - (3)]));                            ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 397 "amber.yy"
    {(yyval) = mk_expr_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 399 "amber.yy"
    {(yyval) = mk_expr_seq(mk_seq_empty());                ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 400 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (3)]));                            ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 401 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 403 "amber.yy"
    {(yyval) = mk_expr_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 404 "amber.yy"
    {(yyval) = mk_expr_tag_obj(mk_expr_ctor((yyvsp[(1) - (4)])), (yyvsp[(3) - (4)]));      ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 406 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 407 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 412 "amber.yy"
    {(yyval) = mk_expr_const_or_var((yyvsp[(1) - (1)]));                   ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 413 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 414 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_fn_call((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])), (yyvsp[(5) - (6)])); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 415 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_const_or_var((yyvsp[(1) - (5)])), (yyvsp[(4) - (5)]));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 416 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 417 "amber.yy"
    {(yyval) = mk_expr_builtin_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 419 "amber.yy"
    {(yyval) = (yyvsp[(2) - (3)]);                                         ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 421 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                         ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 423 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 424 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 425 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 426 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 427 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 428 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 429 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 430 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 431 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 432 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 434 "amber.yy"
    {(yyval) = mk_expr_and((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 435 "amber.yy"
    {(yyval) = mk_expr_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 436 "amber.yy"
    {(yyval) = mk_expr_not((yyvsp[(2) - (2)]));                            ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 438 "amber.yy"
    {(yyval) = mk_expr_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 439 "amber.yy"
    {(yyval) = mk_expr_neq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 441 "amber.yy"
    {(yyval) = mk_expr_type_test((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                  ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 443 "amber.yy"
    {(yyval) = mk_expr_dot_acc((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 444 "amber.yy"
    {(yyval) = mk_expr_dot_acc_test((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 447 "amber.yy"
    {(yyval) = mk_expr_idx((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 448 "amber.yy"
    {(yyval) = mk_expr_idx_member((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));             ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 450 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (4)]));                        ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 451 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                    ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 453 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 454 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 456 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(6) - (7)]), (yyvsp[(3) - (7)]));                         ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 457 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(10) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(7) - (11)]));                    ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 459 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                    ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 460 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 462 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(3) - (9)]));                    ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 464 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(10) - (13)]), (yyvsp[(12) - (13)]), (yyvsp[(3) - (13)]), (yyvsp[(7) - (13)]));              ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 466 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 467 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                 ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 468 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 469 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (11)]), (yyvsp[(4) - (11)]), (yyvsp[(6) - (11)]), (yyvsp[(8) - (11)]), (yyvsp[(10) - (11)]));           ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 471 "amber.yy"
    {(yyval) = mk_expr_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 472 "amber.yy"
    {(yyval) = mk_expr_match((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                        ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 475 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 477 "amber.yy"
    {(yyval) = mk_expr_repl((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 478 "amber.yy"
    {(yyval) = mk_expr_sel((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 480 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 482 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));               ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 484 "amber.yy"
    {(yyval) = mk_expr_is((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 489 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 490 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 495 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 496 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 500 "amber.yy"
    {(yyval) = mk_sexpr_expr((yyvsp[(1) - (1)]));                          ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 501 "amber.yy"
    {(yyval) = mk_sexpr_cond((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 505 "amber.yy"
    {(yyval) = mk_sexpr_lab((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 506 "amber.yy"
    {(yyval) = mk_sexpr_lab_cond((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));              ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 510 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 511 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 515 "amber.yy"
    {(yyval) = mk_seq(mk_if_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])));               ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 516 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (5)]), mk_if_branch((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));           ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 520 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 521 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (5)]), mk_expr_let((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));     ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 524 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 525 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 534 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 535 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 539 "amber.yy"
    {(yyval) = mk_clause_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 540 "amber.yy"
    {(yyval) = mk_clause_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 541 "amber.yy"
    {(yyval) = mk_clause_not_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 542 "amber.yy"
    {(yyval) = mk_clause_not_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 543 "amber.yy"
    {(yyval) = mk_clause_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 544 "amber.yy"
    {(yyval) = mk_clause_and((yyvsp[(2) - (3)]));                          ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 545 "amber.yy"
    {(yyval) = mk_clause_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 549 "amber.yy"
    {(yyval) = mk_map_entry((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 550 "amber.yy"
    {(yyval) = mk_map_entry_cond((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));              ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 554 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 555 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 559 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 560 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));               ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 564 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 565 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 581 "amber.yy"
    {(yyval) = mk_seq(mk_fnarg(null(), (yyvsp[(1) - (1)])));         ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 582 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), mk_fnarg(null(), (yyvsp[(3) - (3)])));     ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 611 "amber.yy"
    {(yyval) = mk_snum_neg_num((yyvsp[(2) - (2)]));                      ;}
    break;



/* Line 1455 of yacc.c  */
#line 4363 "amber.tab.cc"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 695 "amber.yy"
  /* Epilogue */



//#include <assert.h>
#include <string.h>
#include <stdio.h>

#include "common.h"
#include "lexer.h"

//bool streq(const char *str1, const char *str2);

struct StrIntPair {
  const char *str;
  int n;
};

static StrIntPair token_to_id_map[] = {
  {"and",        KW_AND       },
  {"assert",     KW_ASSERT    },
  {"break",      KW_BREAK     },
  {"case",       KW_CASE      },
  {"def",        KW_DEF       },
  {"disabled",   KW_DISABLED  },
  {"do",         KW_DO        },
  {"else",       KW_ELSE      },
  {"elif",       KW_ELIF      },
  {"end",        KW_END       },
  {"false",      KW_FALSE     },
  {"fail",       KW_FAIL      },
  {"for",        KW_FOR       },
  {"from",       KW_FROM      },
  {"if",         KW_IF        },
  {"in",         KW_IN        },
  {"is",         KW_IS        },
  {"itself",     KW_ITSELF    },
  {"let",        KW_LET       },
  {"loop",       KW_LOOP      },
  {"match",      KW_MATCH     },
  {"nil",        KW_NIL       },
  {"not",        KW_NOT       },
  {"or",         KW_OR        },
  {"print",      KW_PRINT     },
  {"replace",    KW_REPLACE   },
  {"retrieve",   KW_RETRIEVE  },
  {"return",     KW_RETURN    },
  {"select",     KW_SELECT    },
  {"then",       KW_THEN      },
  {"testcases",  KW_TESTCASES },
  {"trace",      KW_TRACE     },
  {"true",       KW_TRUE      },
  //{"try",        KW_TRY       },
  {"type",       KW_TYPE      },
  {"using",      KW_USING     },
  {"when",       KW_WHEN      },
  {"where",      KW_WHERE     },
  {"while",      KW_WHILE     },
  {"with",       KW_WITH      }
};

obj get_token(unsigned int idx, char *str, int &line, int &col);

//int yylex(void)
//{
//  int _yylex_(void);
//  int a = _yylex_();
//  if (!yylval.is_null())
//  {
//    string str = downcast<Token>(yylval)->str;
//    cout << str << " - " << a << endl;
//  }
//  return a;
//}

int yylex(void)
{
  static unsigned int pos = 0;

  char str[1024];
  int line;
  int col;

  yylval = get_token(pos++, str, line, col);

  if (yylval.is_null())
    return 0;

  if (strlen(str) == 1 && !isalnum(str[0]))
    return str[0];

  switch (token_type(str))
  {
    case plain_identifier:  /*puts(" - LOWER_CASE_ID\n"); */  break; // LOWER_CASE_ID;
    case op_function:       /*puts(" - OP_FN_NAME\n");    */  return OP_FN_NAME;
    case symbol:            /*puts(" - SYMBOL\n");        */  return SYMBOL;
    case label:             /*puts(" - LABEL\n");         */  return LABEL;
    case number:            /*puts(" - NUMBER\n");        */  return NUMBER;
    case type_id:           /*puts(" - MIXED_CASE_ID\n"); */  return MIXED_CASE_ID;
    case type_var:          /*puts(" - UPPER_CASE_ID\n"); */  return UPPER_CASE_ID;
    case operator_symbol:                                     break;
    case builtin:           /*puts(" - BUILTIN\n");       */  return BUILTIN;
    case string_lit:        /*puts(" - STRING\n");        */  return STRING;
    default:                assert(false);
  }

  if (streq(str, "->"))          return RIGHT_ARROW;
  if (streq(str, "=>"))          return DOUBLE_RIGHT_ARROW;
  if (streq(str, "<-"))          return LEFT_ARROW;
  if (streq(str, ".."))          return DOUBLE_DOT;
  if (streq(str, "..."))         return ELLIPSIS;
  if (streq(str, ":="))          return ASSIGNMENT;
  if (streq(str, "<="))          return LE;
  if (streq(str, ">="))          return GE;
  if (streq(str, "/="))          return NEQ;
  if (streq(str, "=="))          return EQ;
  if (streq(str, "::"))          return IN;
  if (streq(str, "\\/"))         return OR;
  if (streq(str, "</-"))         return CROSSED_LEFT_ARROW;

  for (int i=0 ; i < lengthof(token_to_id_map) ; i++)
    if (streq(str, token_to_id_map[i].str))
      return token_to_id_map[i].n;

  return LOWER_CASE_ID;
}

