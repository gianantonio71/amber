
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
  
  #define YYSTYPE Term

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
#define YYFINAL  122
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4669

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  291
/* YYNRULES -- Number of states.  */
#define YYNSTATES  660

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
     899,   903,   907,   915,   921,   929,   939,   943,   945,   949,
     951,   955,   957,   961,   964,   969,   971,   975,   979,   985,
     989,   995,   997,  1001,  1003,  1007,  1011,  1017,  1021,  1027,
    1031,  1035,  1039,  1043,  1049,  1051,  1055,  1059,  1066,  1068,
    1072,  1074,  1078,  1080,  1082,  1084,  1086,  1088,  1091,  1093,
    1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,  1111,  1113,
    1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,  1131,  1133,
    1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,
    1155,  1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,
    1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,
    1195,  1197
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
     138,    -1,    47,    79,   123,    80,   130,   138,    -1,    33,
     110,   138,    -1,    81,   110,    82,    -1,    52,   111,    42,
     122,    65,   122,   138,    -1,    55,   114,    42,   122,   138,
      -1,    53,   122,    40,   111,    42,   122,   138,    -1,    53,
     122,    40,   111,    42,   122,    41,   122,   138,    -1,   122,
      43,   114,    -1,   122,    -1,   123,    83,   122,    -1,   125,
      -1,   124,    83,   125,    -1,   122,    -1,   122,    41,   122,
      -1,   147,   122,    -1,   147,   122,    41,   122,    -1,   126,
      -1,   127,    83,   126,    -1,   122,    56,   122,    -1,   128,
      83,   122,    56,   122,    -1,   113,    67,   122,    -1,   113,
      67,   122,    45,   110,    -1,   129,    -1,   130,    83,   129,
      -1,   132,    -1,   131,    83,   132,    -1,   111,    14,   122,
      -1,   111,    15,   111,    14,   122,    -1,   111,    25,   122,
      -1,   111,    15,   111,    25,   122,    -1,   151,    67,   122,
      -1,    79,   131,    80,    -1,   132,    24,   132,    -1,   122,
      15,   122,    -1,   122,    15,   122,    41,   122,    -1,   133,
      -1,   134,    83,   133,    -1,   148,    67,   122,    -1,   148,
      79,   137,    80,    67,   122,    -1,   135,    -1,   136,    83,
     135,    -1,   151,    -1,   137,    83,   151,    -1,    78,    -1,
      36,    -1,    11,    -1,    12,    -1,   142,    -1,    71,   142,
      -1,     8,    -1,    10,    -1,     3,    -1,   153,    -1,   145,
      -1,     4,    -1,     6,    -1,     7,    -1,   150,    -1,   149,
      -1,     5,    -1,   151,    -1,    42,    -1,    26,    -1,    50,
      -1,     3,    -1,    60,    -1,    30,    -1,     3,    -1,   153,
      -1,    26,    -1,    28,    -1,    30,    -1,    31,    -1,    32,
      -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    39,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    54,    -1,    55,
      -1,    57,    -1,    56,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   131,   131,   132,   135,   136,   137,   138,   144,   145,
     149,   150,   154,   155,   156,   157,   163,   164,   169,   170,
     173,   174,   180,   181,   185,   186,   192,   193,   194,   195,
     196,   197,   198,   200,   201,   202,   203,   204,   205,   206,
     210,   211,   212,   213,   217,   218,   222,   223,   229,   230,
     232,   235,   237,   238,   240,   241,   242,   244,   247,   248,
     250,   252,   253,   255,   257,   258,   262,   263,   267,   268,
     269,   273,   274,   278,   279,   287,   288,   289,   290,   291,
     292,   293,   296,   297,   298,   299,   300,   304,   305,   309,
     310,   316,   317,   318,   322,   323,   324,   325,   326,   327,
     329,   330,   331,   332,   334,   335,   336,   338,   339,   341,
     342,   346,   347,   348,   349,   350,   351,   352,   356,   357,
     361,   362,   366,   367,   371,   372,   376,   377,   383,   384,
     385,   387,   388,   389,   391,   392,   394,   395,   396,   398,
     399,   400,   402,   403,   405,   406,   409,   410,   411,   412,
     413,   414,   416,   418,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   431,   432,   433,   435,   436,   438,
     440,   441,   444,   445,   447,   448,   450,   451,   453,   454,
     456,   457,   459,   460,   463,   464,   465,   466,   468,   469,
     470,   472,   474,   475,   477,   478,   481,   486,   487,   492,
     493,   497,   498,   502,   503,   507,   508,   512,   513,   517,
     518,   521,   522,   531,   532,   536,   537,   538,   539,   540,
     541,   542,   546,   547,   551,   552,   556,   557,   561,   562,
     566,   567,   572,   572,   574,   575,   577,   578,   581,   582,
     585,   586,   587,   590,   593,   595,   597,   598,   601,   610,
     611,   612,   613,   616,   617,   618,   621,   622,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   654,   655,   656,   657,
     658,   659
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
     122,   122,   122,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   140,   141,   141,   142,   143,
     144,   144,   144,   145,   146,   147,   148,   148,   149,   150,
     150,   150,   150,   151,   151,   151,   152,   152,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153
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
       3,     3,     7,     5,     7,     9,     3,     1,     3,     1,
       3,     1,     3,     2,     4,     1,     3,     3,     5,     3,
       5,     1,     3,     1,     3,     3,     5,     3,     5,     3,
       3,     3,     3,     5,     1,     3,     3,     6,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   253,   248,   234,   235,   251,   255,   250,   252,     0,
     254,     0,     0,     0,     0,     0,     2,     7,     6,     4,
       5,     0,    91,    94,    95,     0,   247,   246,   249,   243,
     244,   238,   239,     0,     0,   132,     0,     0,     0,   133,
       0,     0,     0,     0,     0,   131,   254,     0,     0,     0,
       0,     0,    10,     0,   128,   130,   129,     0,     0,   146,
     249,     0,     0,    20,     0,     0,   256,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   284,   283,   285,   286,   287,   288,   289,   290,
     291,     0,     0,     0,     0,     0,   111,   124,     0,   115,
     257,   245,     0,   126,     0,     0,     0,     0,   122,     0,
       0,   236,     1,     3,    93,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,     0,     0,     0,     0,     0,   249,     0,
     166,     0,   253,   255,   254,    80,     0,     0,    75,    79,
      78,    76,     0,     0,     0,   153,   136,     0,     0,   205,
       0,   224,     0,     0,     0,     0,   134,     0,   201,     0,
     199,   249,   139,   197,     0,     8,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    99,    98,
     114,   112,   113,    97,     0,     0,     0,    93,    92,   110,
       0,   118,   237,     0,     0,     0,     0,   106,     0,     0,
       0,   120,     0,     0,    40,    44,     0,    42,    41,     9,
       0,     0,    58,     0,    61,     0,     0,     0,     0,     0,
       0,     0,   233,   232,    74,   190,     0,     0,    71,     0,
       0,     0,   213,    76,     0,     0,     0,     0,   197,     0,
      13,    81,     0,    77,     0,     0,     0,     0,     0,    76,
       0,   152,   138,     0,   137,     0,   203,     0,     0,   191,
       0,     0,   135,     0,     0,     0,   140,     0,   162,   163,
     167,   168,   169,   164,   196,   165,   142,   160,   161,   154,
     155,   159,   156,   157,   158,   240,   170,   242,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,    46,     0,    21,     0,   125,     0,     0,     0,
     108,   107,   127,   119,     0,     0,   105,   104,   123,     0,
       0,     0,     0,     0,    96,    33,     0,     0,    43,    63,
       0,     0,     0,     0,     0,   228,     0,     0,     0,    54,
       0,    64,     0,    48,     0,     0,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
       0,     0,     0,     0,    86,    82,     0,     0,     0,     0,
       0,   174,     0,     0,   222,   206,     0,   225,     0,     0,
     202,     0,   201,   200,     0,   198,     0,     0,   171,   143,
     144,   151,   150,     0,     0,   147,   145,    15,   172,    22,
       0,     0,     0,    16,    47,     0,   116,   117,   109,   100,
     102,   101,   103,    26,     0,   121,     0,     0,     0,    45,
      59,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,   220,    72,     0,   215,     0,
     217,     0,     0,     0,   214,   221,   219,     0,    68,   188,
       0,    89,     0,   211,     0,     0,    83,    84,     0,    87,
       0,   193,     0,   219,     0,     0,     0,   204,   152,     0,
     176,     0,     0,   141,     0,   149,     0,    25,     0,    17,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    66,
       0,   229,   226,     0,   230,     0,    65,    49,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,   208,     0,
       0,     0,   189,     0,     0,     0,     0,   175,   223,     0,
     222,     0,     0,     0,   173,   148,     0,     0,     0,     0,
       0,    34,    35,     0,   249,     0,    37,    60,     0,    57,
       0,     0,     0,    56,    51,   216,   218,     0,     0,   178,
      70,    69,   209,    90,   212,   192,    85,    88,     0,   194,
       0,   180,   177,     0,   184,     0,    23,     0,    27,    29,
       0,     0,    31,     0,    36,     0,     0,     0,    52,     0,
     231,    55,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    39,    38,     0,     0,   227,     0,     0,   182,
     210,   195,   181,   186,     0,   185,    28,    32,    53,     0,
       0,     0,     0,     0,     0,   179,   187,    67,     0,   183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    51,    52,    18,    63,    64,    19,
     339,   342,   245,   246,   343,   141,   578,   268,   372,   529,
     270,   407,   492,   158,    22,   107,   113,   242,   119,   108,
     114,   278,   184,   179,   180,   169,   170,   147,   493,   494,
     271,   272,   171,   172,   375,   376,   533,   265,    23,    24,
     159,    54,    55,   326,    56,    57,   115,    25,    58,    59,
     148,   162,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -435
static const yytype_int16 yypact[] =
{
     314,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  1851,
      20,   116,  1596,   102,   221,    75,  -435,  -435,  -435,  -435,
    -435,   261,  -435,     7,  -435,   -32,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  2146,  2745,  -435,    61,  2264,    70,  -435,
    2264,  2264,  1467,  2264,   234,  -435,  -435,  2264,  1258,  1789,
    1170,  1910,  -435,  3887,  -435,  -435,    79,    95,   119,   123,
      28,   -24,   234,  -435,     1,   261,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,   125,   147,   192,   152,   139,   -15,  -435,    51,   183,
    -435,  -435,    15,  -435,   200,  1723,   290,   294,   110,   196,
     306,  -435,  -435,  -435,  -435,  -435,   106,   234,  2264,    11,
    1969,  2264,   -12,    21,   250,   273,   300,  2745,  2264,  2264,
     317,  -435,  2538,   351,  1533,   337,  4284,    -6,   319,  2264,
      69,  3900,   359,   366,   421,  -435,   145,   136,   -15,  -435,
    -435,   320,   427,  4322,     3,    69,  -435,  1533,  3018,  -435,
     259,  -435,   330,  2264,   431,  2323,  -435,  2488,  2744,   171,
    -435,    32,  -435,  2813,   247,  -435,  -435,  2264,  2264,  2264,
    2264,   234,  2264,   234,  2264,  2264,  2264,  2264,  2264,  2264,
    2264,  2264,  2264,  2264,  3174,  -435,  2205,  2264,  2264,  2028,
    2264,  2264,  1723,   480,   142,  1076,   234,   434,  -435,  -435,
    -435,  -435,  -435,  -435,  1723,  1660,   234,   345,   444,  -435,
     510,   439,  -435,    53,   441,   448,   234,  -435,    89,  2264,
      11,   -15,   307,  3960,  -435,  -435,   331,    33,  -435,  -435,
    3973,  2264,  -435,  2264,  -435,   145,  2264,   357,  2558,  3668,
    3681,  2264,  -435,  -435,  -435,  -435,  2264,  1401,  -435,   236,
     321,   332,   512,   -29,  1533,  2264,  2264,  2264,  4564,   340,
    -435,  -435,  2264,  -435,   145,  1323,  1467,  2264,   -27,   454,
    2264,  -435,  -435,   510,  -435,  2264,  4359,  1533,  1258,  -435,
    2264,  1533,  -435,  2264,   145,  2264,  -435,  2264,   378,   378,
    4592,  4592,  -435,  4574,   -15,  4574,  4217,   378,   378,   115,
     115,   115,    69,    69,    69,  -435,   223,  -435,  -435,  3309,
     344,   346,   352,   357,   270,   356,  4033,   412,   302,   413,
    -435,  1076,  -435,   813,  -435,   234,  -435,   463,   364,   226,
    -435,  -435,  -435,  -435,   459,   460,  -435,  -435,  -435,   462,
     467,  4046,   376,   234,  -435,  -435,   141,    11,  -435,  -435,
    4106,  4119,   423,   -19,  3371,  -435,   380,   211,   474,  -435,
    2264,  -435,  2264,  -435,  3384,  3741,    15,   387,   145,  2146,
    2264,  1467,  2264,   138,  1533,  1533,  2264,   145,  2264,  4564,
    3754,  4391,  1467,  4423,  -435,  -435,    14,   391,  1467,   233,
    3754,  -435,  2264,  2264,  2781,  -435,  3225,  -435,  2264,  3054,
    4564,   295,  4460,  -435,    13,  4564,  2918,  2264,  -435,  -435,
    -435,  -435,  -435,   393,   357,  -435,  -435,  -435,  -435,  -435,
     480,   487,   912,  -435,  -435,   395,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,   170,   -15,  2264,  2745,  1467,  -435,
    -435,  -435,  2745,  2264,  2745,  2745,   357,  2264,   145,  2264,
    4179,  4192,  2745,  2264,  -435,  -435,  -435,  2087,  4564,   324,
    4564,   478,  2264,  2264,   512,  -435,  3446,   472,  4564,  -435,
    2264,   145,    88,  -435,   128,  2264,  -435,  -435,   146,   145,
    2264,  -435,   400,  4564,  2264,  1533,  2264,  4564,  2745,  2264,
    -435,  2264,   145,  -435,   426,  -435,   401,  -435,  1723,  -435,
    -435,  2264,  2745,  1467,  3814,  2384,   165,  2578,  3446,  2745,
    2598,  -435,  4564,   405,  -435,  3458,  -435,  -435,  2618,  4252,
    -435,  2264,  2264,  2264,  3237,  3086,  2264,  2264,  4564,  2264,
    1467,  1467,  -435,  3754,   479,  1467,  3608,  -435,  4564,   285,
    4497,   348,  2850,   547,  -435,  -435,   322,  3827,  2428,   245,
    2745,  -435,  -435,   948,   351,  1076,  -435,  -435,     5,  -435,
     495,   145,  2638,  -435,  -435,  4564,  4564,   406,  2264,  -435,
    4564,  4564,  4532,   145,  -435,  -435,  -435,   145,  2264,  -435,
    2264,  -435,  -435,  2264,  -435,  2264,  -435,  2745,  -435,  -435,
    1026,  1076,  -435,  2658,  -435,  2472,  2745,   484,  -435,  2264,
    -435,  -435,   437,  3520,  2745,  3754,   410,  2950,  2882,  2678,
    -435,  2494,  -435,  -435,  2698,  2264,  4564,  2264,  2264,  -435,
    2745,  -435,  -435,  -435,  2264,  -435,  -435,  -435,  -435,  3533,
    3297,  3121,  2986,  2745,  2264,  -435,  -435,  2745,  3595,  -435
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -435,  -435,   549,  -435,   -28,   -49,  -435,   349,   505,  -435,
    -435,     4,   202,   334,  -316,    10,  -435,   184,   432,    84,
     377,  -435,  -435,   659,     6,  -102,   341,   235,  -435,  -209,
     354,   551,  -139,  -435,   280,   292,   231,  -435,    35,  -434,
    -160,   137,   301,  -435,   121,  -315,  -435,  -384,   579,  -201,
      -3,   845,  -435,  -435,   -36,  -435,   -16,   -13,   100,   161,
       0,   -11,   386
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -287
static const yytype_int16 yytable[] =
{
      28,   109,   186,   338,    20,   130,   160,   288,   126,    60,
     279,   120,   340,   231,     1,    28,   489,     1,   433,    20,
     118,    28,     3,     4,   526,   442,   501,   511,   276,   251,
     226,     3,   173,    60,   143,   128,     1,   284,   396,   616,
     617,     6,   161,   212,     6,   287,   210,   129,   463,   181,
     266,    60,   217,   411,   397,   124,   394,   398,   125,   412,
     213,    31,   253,     6,   397,    28,   252,   398,   331,   332,
     334,    46,   337,   124,    46,   122,   125,   277,     1,    12,
       2,   186,   215,   618,   216,   227,     3,     4,   228,   569,
      13,   127,   191,    46,   496,    14,   512,    31,   244,   254,
      26,     5,   120,   124,   109,     6,   125,   387,   160,   111,
     552,   118,   211,     3,     4,    26,   211,     7,   142,   516,
     223,    26,   346,   347,   116,     8,   354,     3,     4,   248,
      60,   160,     9,   177,   224,    10,    11,   143,   191,     1,
     144,   421,   143,    12,   273,   203,   204,    31,     1,   149,
       3,     4,   264,   111,    13,   549,   281,   283,   206,    14,
     116,    27,   359,   554,   262,    26,     6,   289,   327,   595,
      12,   550,   599,   239,   207,     6,    27,   143,   282,   481,
     234,    13,    27,   235,    12,   240,    14,   264,   201,   202,
     173,   203,   204,   173,   218,    13,    46,    62,   208,   111,
      14,   109,   209,     3,     4,    46,   263,    12,   456,   573,
     116,   551,   117,   109,   109,    28,   219,   482,    13,   483,
     341,   258,   457,    14,   222,   216,    27,   458,   575,    31,
     355,   160,     3,     4,   221,   360,     1,   521,   160,   517,
     248,   641,   358,   576,   377,     3,     4,   368,   551,   160,
     160,   522,   610,   302,   303,   373,   523,    28,   143,   615,
      12,   160,   225,     6,     1,   160,     2,   289,   264,   408,
     283,    13,   220,   502,   289,   500,    14,   173,   467,   236,
     229,   237,   173,   230,   404,   161,   161,     5,   514,    12,
     468,     6,   116,    46,   117,   631,   124,   273,    31,   125,
      13,   289,    12,     7,   424,    14,   448,   427,   611,   566,
     233,     8,   428,    13,   388,    26,   389,     1,    14,     2,
     377,    46,   238,   612,     1,     3,     4,     1,   551,   255,
     305,   124,   306,    28,   125,   390,   391,   307,   541,   292,
       5,    28,   293,    28,     6,   559,   392,   444,   434,   542,
     435,     6,   256,   305,     6,   160,     7,    26,   160,   160,
       1,   477,     2,   600,     8,   601,   160,   248,   394,   266,
     561,     9,   160,   509,    10,    11,    27,   510,   394,   257,
     439,    46,    12,     5,    46,   224,   284,     6,   373,    60,
     363,   161,   364,    13,   289,   289,   261,   487,    14,     7,
     606,   191,   161,   211,   587,   224,   283,     8,   161,   283,
     294,   366,   393,   295,   367,   394,   274,    46,    27,   157,
     402,   377,   160,   305,   430,   350,   431,   293,   186,   305,
     602,   305,   432,    26,    28,   305,   436,   330,  -256,   293,
     335,    26,    28,    26,   447,  -260,   444,   230,   198,   199,
     200,   201,   202,   377,   203,   204,   454,   143,   161,   367,
     465,   626,   143,   466,   143,   143,    28,   475,   534,   160,
     394,   497,   143,   515,   498,   520,   466,    60,   363,   283,
     557,   565,   555,   305,   466,   580,   622,   160,   581,   305,
     642,   283,     4,   305,    27,   305,   440,   438,   441,   283,
    -286,   388,    27,   462,    27,   289,   285,   109,   143,   305,
     297,   564,   563,   345,   160,   160,   637,   111,   638,   160,
     284,   413,   143,   161,   351,   574,   356,   143,   353,   143,
     143,   484,   485,   357,    26,   264,   395,   264,   143,   264,
     264,   525,    26,   446,   449,   450,   527,   451,   264,   530,
     161,   161,   452,   469,   518,   161,   538,   543,   547,   596,
      53,   605,   619,   635,   123,   344,    26,   214,   574,   459,
     143,   352,   476,    28,   362,    28,   269,   444,   264,   348,
     445,   620,   143,   423,    53,   415,   594,   531,   146,    61,
     328,   150,   151,   283,   163,    27,   417,   283,   165,   168,
     178,   183,    53,    27,     0,     0,   568,   143,     0,     0,
      28,    28,     0,   143,   444,    28,   143,     0,     0,   444,
       0,     0,     0,   264,   143,    26,     0,    27,     0,   143,
       0,    28,     0,     0,   143,   444,     0,     0,     0,   264,
     143,     0,     0,     0,   264,     0,     0,     0,     0,     0,
     264,     0,     0,   143,   613,     0,     0,   143,     0,    21,
       0,     0,   406,   409,     0,     0,   538,   264,    26,     0,
      65,   106,   112,    26,    21,    26,     0,     0,     0,   243,
       0,    53,   250,     0,     0,     0,    27,     0,     0,   259,
     260,   629,     0,     0,     0,     0,     0,     0,     0,     0,
     634,     0,     0,   164,     0,     0,     0,     0,   640,     0,
      26,    26,     0,     0,     0,    26,     0,     0,     0,     0,
       0,    65,     0,     0,   296,     0,   146,     0,     0,    27,
       0,    26,     0,     0,    27,     0,    27,   657,   308,   309,
     310,   311,     0,   313,     0,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,     0,     0,   329,     0,     0,
       0,   336,   112,     0,     0,     0,     0,     0,   479,     0,
       0,    27,    27,     0,   106,     0,    27,     0,     0,   491,
       0,     0,     0,     0,     0,   499,   241,     0,   247,     0,
     361,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   370,     0,   371,     0,     0,   374,     0,     0,
       0,     0,   384,     0,     0,     0,     1,   385,     2,     0,
       0,     0,     0,     0,     3,     4,   399,   400,   401,     0,
       0,     0,     0,   403,     0,   491,     0,     0,   410,     5,
       0,   414,     0,     6,     0,     0,   416,     0,     0,   419,
     312,   420,   314,     0,   422,     7,   425,     0,   426,   121,
       0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
       0,   106,     0,    46,    21,    65,     0,     0,     0,     0,
       0,    12,     0,   106,   106,   349,     0,   121,     0,     0,
       0,     0,    13,     0,     0,   443,     0,    14,     0,   247,
     491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     2,     0,     0,
       0,     0,     0,     3,     4,     0,   386,   593,   491,     0,
       0,   470,   597,   471,     0,     0,     0,     0,     5,     0,
      53,   478,     6,   480,     0,     0,     0,   486,     0,   488,
     121,     1,     0,     2,     7,     0,     0,     0,     0,     3,
       4,   232,     8,     0,   503,     0,     0,     0,     0,   507,
       0,     0,    46,     0,     5,     0,     0,     0,     6,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       7,    13,     0,     0,   519,     0,    14,     0,     8,     0,
      21,     0,    21,     0,   241,     0,     0,   524,    46,     0,
       0,     0,   121,     0,   528,     0,    12,     0,   532,     0,
     535,     0,   455,     0,   539,     0,   247,    13,    53,     1,
     614,     2,    14,   544,   545,     0,     0,     3,     4,     0,
       0,   548,     0,     0,     0,     0,   553,     0,     0,     0,
       0,   556,     5,     0,     0,   558,     6,   560,     0,     0,
       0,     0,   562,     0,     0,     0,     0,     0,     7,     0,
       0,     0,   567,     0,     0,     0,     8,     0,   121,     1,
       0,     2,     0,   121,     0,     0,    46,     3,     4,     0,
       0,     0,   585,   586,    12,     0,     0,   590,   591,     0,
     592,    21,     5,     0,     0,    13,     6,     0,   630,     0,
      14,     0,   121,     0,     0,     0,     0,     0,     7,   121,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
     121,   121,     0,     0,     0,     0,    46,     0,     0,   623,
       0,     0,   121,     0,    12,     0,   121,     0,     0,   625,
       0,     0,     0,     0,   627,    13,   628,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     636,     0,     0,     1,    29,     2,    30,   106,    31,     0,
      32,     0,     0,     0,    21,     0,   649,     0,   650,   651,
       0,     0,     0,     0,     0,   652,     5,     0,     0,     0,
       6,     0,     0,    34,     0,   658,     0,     0,    35,   145,
       0,    37,     7,     0,     0,     0,     0,    38,    39,    40,
       8,     0,    42,    43,     0,    44,     0,    21,     0,    45,
      46,     0,    21,     0,    21,     0,   121,     0,     0,   121,
     121,    47,     0,     0,     0,     0,     0,   121,     0,    48,
       0,    49,     0,   121,    50,   182,     0,     0,     0,     0,
       0,     1,    29,     2,    30,   111,    31,     0,    32,    21,
      21,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
      21,    34,     0,     0,     0,     0,    35,   145,     0,    37,
       7,     0,     0,   121,     0,    38,    39,    40,     8,     0,
      42,    43,     0,    44,     0,     0,     0,    45,    46,     0,
       0,     0,     0,     0,     0,     0,   152,    29,     0,    47,
     111,    31,     0,     0,     3,     4,     0,    48,   166,    49,
       0,     0,    50,     0,     0,     0,     0,   167,     0,    67,
     121,    68,     0,   153,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,   121,    83,
      84,    85,    86,    87,    88,    89,     0,    90,    91,    92,
      93,     0,    94,   154,    96,    97,    98,    99,   100,     0,
       0,    12,     0,     0,   116,   121,   121,     0,     0,     0,
     121,     0,    13,   405,   152,    29,     0,    14,   111,    31,
     155,   156,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,     0,    68,
       0,   153,    70,    71,    72,    73,    74,    75,    76,    77,
      78,     0,    79,    80,    81,    82,     0,    83,    84,    85,
      86,    87,    88,    89,     0,    90,    91,    92,    93,     0,
      94,   154,    96,    97,    98,    99,   100,     0,     0,    12,
     152,    29,   116,     0,     0,    31,     0,     0,     3,     4,
     267,     0,     0,     0,     0,    14,     0,     0,   155,   156,
       0,     0,     0,    67,     0,    68,     0,   153,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,    79,    80,
      81,    82,     0,    83,    84,    85,    86,    87,    88,    89,
       0,    90,    91,    92,    93,     0,    94,   154,    96,    97,
      98,    99,   100,     0,     0,    12,   152,    29,   116,     0,
       0,    31,     0,     0,     3,     4,    13,     0,     0,     0,
       0,    14,     0,     0,   155,   156,     0,     0,     0,    67,
       0,    68,     0,   153,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,     0,    83,
      84,    85,    86,    87,    88,    89,     0,    90,    91,    92,
      93,     0,    94,   154,    96,    97,    98,    99,   100,    66,
       0,    12,     0,     0,   116,     0,     0,     3,     4,     0,
       0,     0,   267,     0,     0,     0,     0,    14,     0,     0,
     155,   156,    67,     0,    68,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,     0,    79,    80,    81,
      82,     0,    83,    84,    85,    86,    87,    88,    89,     0,
      90,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   100,     0,    66,    12,     0,   101,   111,     0,   102,
       0,     3,     4,     0,     0,   103,     0,   104,     0,     0,
     105,     0,     0,     0,     0,     0,    67,     0,    68,     0,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,    79,    80,    81,    82,     0,    83,    84,    85,    86,
      87,    88,    89,     0,    90,    91,    92,    93,     0,    94,
      95,    96,    97,    98,    99,   100,    66,     0,    12,     0,
       0,     0,     0,     0,     3,     4,     0,     0,     0,   103,
       0,   104,     0,     0,   105,     0,     0,     0,     0,    67,
       0,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,     0,    79,    80,    81,    82,     0,    83,
      84,    85,    86,    87,    88,    89,     0,    90,    91,    92,
      93,     0,    94,    95,    96,    97,    98,    99,   100,     0,
       0,    12,     1,    29,     2,    30,     0,    31,     0,    32,
       0,     0,   103,     0,   104,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   131,   132,     6,
       0,     0,    34,     0,     0,     0,   133,    35,   174,     0,
     175,     7,     0,     0,   136,   137,    38,    39,    40,     8,
     138,    42,    43,   139,    44,     0,     0,     0,    45,    46,
       0,     0,     0,   140,     1,    29,     2,    30,     0,    31,
      47,    32,     0,     0,     0,     0,     0,     0,    48,     0,
      49,   176,     0,    50,     0,     0,     0,     5,     0,     0,
       0,     6,     0,    33,    34,     0,     0,     0,     0,    35,
      36,     0,    37,     7,     0,     0,     0,     0,    38,    39,
      40,     8,    41,    42,    43,     0,    44,     0,     0,     0,
      45,    46,     0,     1,    29,     2,    30,     0,    31,     0,
      32,     0,    47,     0,     0,     0,     0,     0,     0,     0,
      48,     0,    49,     0,     0,    50,     5,     0,     0,     0,
       6,     0,     0,    34,     0,     0,   185,     0,    35,    36,
       0,    37,     7,     0,     0,     0,     0,    38,    39,    40,
       8,    41,    42,    43,     0,    44,     0,     0,     0,    45,
      46,     0,     1,    29,     2,    30,     0,    31,     0,    32,
       0,    47,     0,     0,     0,     0,     0,     0,     0,    48,
       0,    49,     0,     0,    50,     5,     0,     0,     0,     6,
       0,     0,    34,     0,     0,   249,     0,    35,    36,     0,
      37,     7,     0,     0,     0,     0,    38,    39,    40,     8,
      41,    42,    43,     0,    44,     0,     0,     0,    45,    46,
       0,     1,    29,     2,    30,   111,    31,     0,    32,     0,
      47,     0,     0,     0,     0,     0,     0,     0,    48,     0,
      49,     0,     0,    50,     5,     0,     0,     0,     6,     0,
       0,    34,     0,     0,     0,     0,    35,   145,     0,    37,
       7,     0,     0,     0,     0,    38,    39,    40,     8,     0,
      42,    43,     0,    44,     0,     0,     0,    45,    46,     0,
       1,    29,     2,    30,     0,    31,     0,    32,     0,    47,
       0,     0,     0,     0,     0,     0,   333,    48,     0,    49,
       0,     0,    50,     5,     0,     0,     0,     6,     0,     0,
      34,     0,     0,     0,     0,    35,    36,     0,    37,     7,
       0,     0,     0,     0,    38,    39,    40,     8,    41,    42,
      43,     0,    44,     0,     0,     0,    45,    46,     0,     1,
      29,     2,    30,     0,    31,     0,    32,     0,    47,     0,
       0,     0,     0,     0,     0,   540,    48,     0,    49,     0,
       0,    50,     5,     0,     0,     0,     6,     0,     0,    34,
       0,     0,     0,     0,    35,    36,     0,    37,     7,     0,
       0,     0,     0,    38,    39,    40,     8,    41,    42,    43,
       0,    44,     0,     0,     0,    45,    46,     0,     1,    29,
       2,    30,   111,    31,     0,    32,     0,    47,     0,     0,
       0,     0,     0,     0,     0,    48,     0,    49,     0,     0,
      50,     5,     0,     0,     0,     6,     0,     0,    34,     0,
       0,     0,     0,    35,   145,     0,    37,     7,     0,     0,
       0,     0,    38,    39,    40,     8,     0,    42,    43,     0,
      44,     0,     0,     0,    45,    46,     0,     1,    29,     2,
      30,     0,    31,     0,    32,     0,    47,     0,     0,     0,
       0,     0,     0,     0,    48,     0,    49,     0,     0,    50,
       5,     0,     0,     0,     6,     0,     0,    34,     0,     0,
       0,     0,    35,   145,     0,    37,     7,     0,     0,     0,
       0,    38,    39,    40,     8,     0,    42,    43,     0,    44,
       0,     0,     0,    45,    46,     0,     1,    29,     2,    30,
       0,    31,     0,    32,     0,    47,     0,     0,     0,     0,
       0,     0,     0,    48,     0,    49,     0,     0,    50,     5,
       0,     0,     0,     6,     0,     0,    34,     0,     0,     0,
       0,    35,   145,     0,    37,     7,     0,     0,     0,     0,
      38,    39,    40,     8,     0,    42,    43,     0,    44,     0,
       0,     0,    45,    46,     0,     0,     0,     1,     0,     2,
       0,     0,     0,     0,    47,     3,     4,     0,     0,     0,
       0,     0,   298,     0,    49,     0,     0,    50,     0,     0,
       5,     0,   131,   132,     6,     0,     0,     0,     0,     0,
       0,   133,     0,   134,     0,   135,     7,     0,     0,   136,
     137,     1,     0,     2,     8,   138,     0,     0,   139,     3,
       4,     0,     0,     0,    46,     0,     0,     0,   140,     0,
       0,     0,    12,     0,     5,     0,   131,   132,     6,     0,
       0,     0,     0,    13,     0,   133,   572,   134,    14,   135,
       7,     0,     0,   136,   137,     1,     0,     2,     8,   138,
       0,     0,   139,     3,     4,     0,     0,     0,    46,     0,
       0,     1,   140,     0,     0,     0,    12,     1,     5,     2,
       0,     0,     6,     0,     0,     3,     4,    13,     0,     0,
     609,     0,    14,     0,     7,     0,   131,   132,     6,     0,
       5,     0,     8,     0,     6,   133,     0,   134,     0,   135,
       0,     0,    46,   136,   137,     0,     7,     0,     0,   138,
      12,     1,   139,     0,     8,     0,     0,     0,    46,     0,
     633,    13,   140,     0,    46,     0,    14,     0,     0,     0,
       0,     1,    12,     0,     0,     0,   131,   132,     6,     0,
     299,     0,   647,    13,   262,   133,     0,   134,    14,   135,
       0,     1,     0,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,     0,   134,    46,   135,
       0,     1,   140,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   263,   134,    46,   135,
       0,     1,   378,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   379,   134,    46,   135,
       0,     1,   140,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   577,   134,    46,   135,
       0,     1,   140,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   579,   134,    46,   135,
       0,     1,   140,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   583,   134,    46,   135,
       0,     1,   140,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   621,   134,    46,   135,
       0,     0,   140,   136,   137,     0,   131,   132,     6,   138,
       0,     0,   139,     0,     0,   133,   632,   134,    46,   135,
       0,     0,   140,   136,   137,     0,     0,     0,     1,   138,
       0,     0,   139,     0,     0,     0,   646,     0,    46,     0,
       0,     0,   140,   187,   188,   189,   190,   191,     0,     0,
     192,     0,     0,   131,   132,     6,   648,     0,     0,     0,
       0,     0,   133,     0,   134,   300,   135,   193,     0,     0,
     136,   137,     0,     0,   194,     0,   138,     0,     0,   139,
     187,   188,   189,   190,   191,    46,     0,   192,     0,   140,
     195,     0,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   504,     0,   193,     0,     0,     0,     0,     0,
     301,   194,   187,   188,   189,   190,   191,     0,     0,   192,
       0,     0,     0,     0,     0,     0,     0,   195,     0,   196,
     197,   198,   199,   200,   201,   202,   193,   203,   204,     0,
       0,     0,     0,   194,     0,     0,     0,   505,     0,   187,
     188,   189,   190,   191,     0,     0,   192,     0,     0,   195,
       0,   196,   197,   198,   199,   200,   201,   202,     0,   203,
     204,     0,     0,   193,     0,     0,     0,     0,     0,   304,
     194,   187,   188,   189,   190,   191,     0,     0,   192,     0,
       0,     0,     0,     0,     0,     0,   195,     0,   196,   197,
     198,   199,   200,   201,   202,   193,   203,   204,     0,     0,
       0,     0,   194,   603,     0,   604,     0,   187,   188,   189,
     190,   191,     0,     0,   192,     0,     0,     0,   195,     0,
     196,   197,   198,   199,   200,   201,   202,     0,   203,   204,
       0,   193,     0,     0,     0,   644,     0,   645,   194,   187,
     188,   189,   190,   191,     0,     0,   192,     0,     0,     0,
       0,     0,     0,     0,   195,     0,   196,   197,   198,   199,
     200,   201,   202,   193,   203,   204,     0,     0,     0,     0,
     194,     0,     0,   513,     0,   187,   188,   189,   190,   191,
       0,     0,   192,     0,     0,     0,   195,     0,   196,   197,
     198,   199,   200,   201,   202,     0,   203,   204,     0,   193,
       0,     0,     0,   290,     0,   643,   194,   187,   188,   189,
     190,   191,     0,     0,   192,     0,     0,     0,     0,     0,
       0,     0,   195,     0,   196,   197,   198,   199,   200,   201,
     202,   193,   203,   204,     0,     0,     0,     0,   194,   290,
       0,   656,     0,   187,   188,   189,   190,   191,     0,     0,
     192,     0,     0,     0,   195,     0,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,     0,   193,   291,     0,
       0,     0,     0,     0,   194,   187,   188,   189,   190,   191,
       0,     0,   192,     0,     0,     0,     0,     0,     0,     0,
     195,     0,   196,   197,   198,   199,   200,   201,   202,   193,
     203,   204,     0,     0,   508,     0,   194,     0,     0,     0,
     187,   188,   189,   190,   191,     0,     0,   192,     0,     0,
       0,     0,   195,     0,   196,   197,   198,   199,   200,   201,
     202,     0,   203,   204,   193,     0,     0,     0,   589,     0,
       0,   194,     0,     0,     0,     0,     0,   325,    29,     0,
       0,     0,     0,     0,     0,     0,     0,   195,     0,   196,
     197,   198,   199,   200,   201,   202,     0,   203,   204,     0,
      67,     0,    68,   655,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,    79,    80,    81,    82,     0,
      83,    84,    85,    86,    87,    88,    89,     0,    90,    91,
      92,    93,     0,    94,    95,    96,    97,    98,    99,   100,
     506,     0,     0,     0,   187,   188,   189,   190,   191,     0,
       0,   192,   588,     0,     0,     0,   187,   188,   189,   190,
     191,     0,     0,   192,     0,     0,     0,     0,   193,     0,
       0,     0,     0,     0,     0,   194,     0,     0,     0,     0,
     193,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,   195,     0,   196,   197,   198,   199,   200,   201,   202,
       0,   203,   204,   195,     0,   196,   197,   198,   199,   200,
     201,   202,   654,   203,   204,     0,   187,   188,   189,   190,
     191,     0,     0,   192,     0,     0,     0,     0,   187,   188,
     189,   190,   191,     0,     0,   192,     0,     0,     0,     0,
     193,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   194,
       0,     0,     0,   195,     0,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,   195,     0,   196,   197,   198,
     199,   200,   201,   202,     0,   203,   204,     0,     0,   429,
     187,   188,   189,   190,   191,     0,     0,   192,     0,     0,
       0,     0,     0,   187,   188,   189,   190,   191,     0,     0,
     192,     0,     0,     0,   193,     0,     0,     0,     0,     0,
       0,   194,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,   194,     0,     0,   195,     0,   196,
     197,   198,   199,   200,   201,   202,     0,   203,   204,     0,
     195,   464,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   546,     0,   472,   187,   188,   189,   190,   191,
       0,     0,   192,     0,     0,     0,     0,   187,   188,   189,
     190,   191,     0,     0,   192,     0,     0,     0,     0,   193,
       0,     0,     0,     0,     0,     0,   194,     0,     0,     0,
       0,   193,     0,     0,     0,     0,     0,     0,   194,     0,
       0,     0,   195,     0,   196,   197,   198,   199,   200,   201,
     202,     0,   203,   204,   195,     0,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,     0,     0,   582,   187,
     188,   189,   190,   191,     0,     0,   192,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,     0,     0,   192,
       0,     0,     0,   193,     0,     0,     0,     0,     0,     0,
     194,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,     0,     0,   194,     0,     0,   195,     0,   196,   197,
     198,   199,   200,   201,   202,     0,   203,   204,     0,   195,
     639,   196,   197,   198,   199,   200,   201,   202,     0,   203,
     204,     0,     0,   653,   187,   188,   189,   190,   191,     0,
       0,   192,     0,     0,     0,     0,     0,   187,   188,   189,
     190,   191,     0,     0,   192,     0,     0,     0,   193,     0,
       0,     0,     0,     0,   262,   194,     0,     0,     0,   598,
       0,   193,     0,     0,     0,     0,     0,     0,   194,     0,
       0,   195,     0,   196,   197,   198,   199,   200,   201,   202,
       0,   203,   204,     0,   195,   659,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,   263,   187,   188,   189,
     190,   191,     0,     0,   192,     0,     0,     0,     0,     0,
     187,   188,   189,   190,   191,     0,     0,   192,     0,   380,
       0,   193,     0,     0,     0,     0,     0,     0,   194,     0,
       0,     0,   382,     0,   193,     0,     0,     0,     0,     0,
       0,   194,     0,     0,   195,     0,   196,   197,   198,   199,
     200,   201,   202,     0,   203,   204,   381,   195,     0,   196,
     197,   198,   199,   200,   201,   202,     0,   203,   204,   383,
     187,   188,   189,   190,   191,     0,     0,   192,     0,     0,
       0,     0,     0,   187,   188,   189,   190,   191,     0,     0,
     192,     0,   473,     0,   193,     0,     0,     0,     0,     0,
     262,   194,     0,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,   194,     0,     0,   195,     0,   196,
     197,   198,   199,   200,   201,   202,     0,   203,   204,   474,
     195,     0,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   263,   187,   188,   189,   190,   191,     0,     0,
     192,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,     0,     0,   192,     0,     0,     0,   193,     0,   570,
       0,     0,     0,     0,   194,     0,     0,     0,     0,     0,
     193,     0,   607,     0,     0,     0,     0,   194,     0,     0,
     195,     0,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   571,   195,     0,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,   608,   187,   188,   189,   190,
     191,     0,     0,   192,     0,     0,     0,     0,     0,   187,
     188,   189,   190,   191,     0,     0,   192,     0,     0,     0,
     193,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,     0,     0,   193,     0,     0,     0,     0,     0,     0,
     194,     0,     0,   195,     0,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,   205,   195,     0,   196,   197,
     198,   199,   200,   201,   202,     0,   203,   204,   280,   187,
     188,   189,   190,   191,     0,     0,   192,     0,     0,     0,
       0,     0,   187,   188,   189,   190,   191,     0,     0,   192,
       0,     0,     0,   193,     0,     0,     0,     0,     0,     0,
     194,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,     0,     0,   194,     0,     0,   195,     0,   196,   197,
     198,   199,   200,   201,   202,     0,   203,   204,   365,   195,
       0,   196,   197,   198,   199,   200,   201,   202,     0,   203,
     204,   369,   187,   188,   189,   190,   191,     0,     0,   192,
       0,     0,     0,     0,     0,   187,   188,   189,   190,   191,
       0,     0,   192,     0,     0,     0,   193,     0,     0,     0,
       0,     0,     0,   194,     0,     0,     0,     0,     0,   193,
       0,     0,     0,     0,     0,     0,   194,     0,     0,   195,
       0,   196,   197,   198,   199,   200,   201,   202,     0,   203,
     204,   437,   195,     0,   196,   197,   198,   199,   200,   201,
     202,     0,   203,   204,   453,   187,   188,   189,   190,   191,
       0,     0,   192,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,     0,     0,   192,     0,     0,     0,   193,
       0,     0,     0,     0,     0,     0,   194,     0,     0,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   194,
       0,     0,   195,     0,   196,   197,   198,   199,   200,   201,
     202,     0,   203,   204,   460,   195,     0,   196,   197,   198,
     199,   200,   201,   202,     0,   203,   204,   461,   187,   188,
     189,   190,   191,     0,     0,   192,     0,     0,     0,     0,
       0,   187,   188,   189,   190,   191,     0,     0,   192,     0,
       0,     0,   193,     0,     0,     0,     0,     0,     0,   194,
       0,     0,     0,     0,     0,   193,   187,   188,   189,   190,
     191,     0,   194,   192,     0,   195,     0,   196,   197,   198,
     199,   200,   201,   202,     0,   203,   204,   536,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   194,   203,   204,
     537,   187,   188,   189,   190,   191,     0,     0,   192,     0,
       0,     0,     0,  -287,     0,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,   193,     0,     0,     0,     0,
       0,     0,   194,   187,   188,   189,   190,   191,     0,     0,
     192,     0,     0,     0,     0,     0,     0,     0,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   193,   203,   204,
     584,     0,     0,     0,   194,     0,     0,     0,     0,     0,
     275,   187,   188,   189,   190,   191,     0,     0,   192,     0,
     195,     0,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   286,     0,     0,   193,     0,     0,     0,     0,
       0,     0,   194,     0,     0,     0,     0,     0,   187,   188,
     189,   190,   191,     0,     0,   192,     0,     0,   195,     0,
     196,   197,   198,   199,   200,   201,   202,     0,   203,   204,
     418,     0,   193,     0,     0,     0,     0,     0,     0,   194,
     187,   188,   189,   190,   191,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,   195,     0,   196,   197,   198,
     199,   200,   201,   202,   193,   203,   204,     0,     0,     0,
       0,   194,   187,   188,   189,   190,   191,   490,     0,   192,
       0,     0,     0,     0,     0,     0,     0,   195,     0,   196,
     197,   198,   199,   200,   201,   202,   193,   203,   204,     0,
       0,     0,     0,   194,     0,     0,     0,     0,     0,   187,
     188,   189,   190,   191,     0,     0,   192,     0,   495,   195,
       0,   196,   197,   198,   199,   200,   201,   202,     0,   203,
     204,   300,     0,   193,     0,     0,     0,     0,     0,     0,
     194,     0,     0,     0,     0,     0,   187,   188,   189,   190,
     191,     0,     0,   192,     0,     0,   195,     0,   196,   197,
     198,   199,   200,   201,   202,     0,   203,   204,   504,     0,
     193,     0,     0,     0,     0,     0,     0,   194,     0,     0,
       0,   187,   188,   189,   190,   191,     0,     0,   192,     0,
       0,     0,     0,   195,     0,   196,   197,   198,   199,   200,
     201,   202,     0,   203,   204,   193,     0,   624,     0,     0,
       0,     0,   194,   187,   188,   189,   190,   191,     0,     0,
     192,     0,     0,   187,   188,   189,   190,   191,   195,     0,
     196,   197,   198,   199,   200,   201,   202,   193,   203,   204,
       0,   187,   188,     0,   194,   191,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,     0,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,   196,   197,   198,   199,   200,   201,   202,     0,
     203,   204,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   197,   198,   199,   200,   201,   202,     0,   203,   204
};

static const yytype_int16 yycheck[] =
{
       0,    12,    51,   212,     0,    33,    42,   167,    21,     9,
     149,    14,   213,   115,     3,    15,   400,     3,   333,    15,
      14,    21,    11,    12,   458,   341,   410,    14,    34,    41,
      15,    11,    48,    33,    34,    67,     3,    66,    67,    34,
      35,    30,    42,    67,    30,    42,    18,    79,    67,    49,
      18,    51,    65,    80,    83,    70,    83,    86,    73,    86,
      84,     8,    41,    30,    83,    65,    78,    86,   207,   208,
     209,    60,   211,    70,    60,     0,    73,    83,     3,    68,
       5,   130,    81,    78,    83,    70,    11,    12,    73,   523,
      79,    84,    23,    60,    80,    84,    83,     8,    87,    78,
       0,    26,   105,    70,   115,    30,    73,   267,   144,     7,
     494,   105,    84,    11,    12,    15,    84,    42,    34,   434,
      69,    21,   224,   225,    71,    50,    73,    11,    12,   129,
     130,   167,    57,    49,    83,    60,    61,   137,    23,     3,
      79,   301,   142,    68,   144,    76,    77,     8,     3,    79,
      11,    12,   142,     7,    79,    67,   156,   157,    79,    84,
      71,     0,    73,    17,    36,    65,    30,   167,   204,   553,
      68,    83,   556,    67,    79,    30,    15,   177,    42,    41,
      70,    79,    21,    73,    68,    79,    84,   177,    73,    74,
     206,    76,    77,   209,    69,    79,    60,    81,    79,     7,
      84,   212,    79,    11,    12,    60,    78,    68,    67,   525,
      71,    83,    73,   224,   225,   215,    69,    79,    79,    81,
      78,   137,    81,    84,    85,    83,    65,    86,    63,     8,
     233,   267,    11,    12,    82,   238,     3,    67,   274,   440,
     240,   625,   236,    78,   257,    11,    12,   247,    83,   285,
     286,    81,   568,    82,    83,   255,    86,   257,   258,   575,
      68,   297,    79,    30,     3,   301,     5,   267,   258,   285,
     270,    79,    80,   412,   274,    42,    84,   293,    67,    83,
      80,    85,   298,    83,   284,   285,   286,    26,   427,    68,
      79,    30,    71,    60,    73,   611,    70,   297,     8,    73,
      79,   301,    68,    42,   304,    84,    80,    84,    63,   518,
      16,    50,    89,    79,    78,   215,    80,     3,    84,     5,
     333,    60,    16,    78,     3,    11,    12,     3,    83,    79,
      83,    70,    85,   333,    73,    14,    15,    90,    14,    80,
      26,   341,    83,   343,    30,   505,    25,   343,    78,    25,
      80,    30,    79,    83,    30,   391,    42,   257,   394,   395,
       3,   389,     5,    78,    50,    80,   402,   367,    83,    18,
     509,    57,   408,    78,    60,    61,   215,    82,    83,    79,
      78,    60,    68,    26,    60,    83,    66,    30,   388,   389,
      83,   391,    85,    79,   394,   395,    79,   397,    84,    42,
      78,    23,   402,    84,   543,    83,   406,    50,   408,   409,
      80,    80,    80,    83,    83,    83,    79,    60,   257,    42,
      80,   434,   458,    83,    80,    80,    80,    83,   477,    83,
      82,    83,    80,   333,   434,    83,    80,   206,    79,    83,
     209,   341,   442,   343,    80,    79,   442,    83,    70,    71,
      72,    73,    74,   466,    76,    77,    80,   457,   458,    83,
      80,   600,   462,    83,   464,   465,   466,    80,   468,   505,
      83,    80,   472,    80,    83,    80,    83,   477,    83,   479,
      80,    80,   498,    83,    83,    80,    80,   523,    83,    83,
      80,   491,    12,    83,   333,    83,    83,    85,    85,   499,
      79,    78,   341,    80,   343,   505,    79,   518,   508,    83,
      79,    85,   512,    79,   550,   551,    79,     7,    81,   555,
      66,    67,   522,   523,    80,   525,    85,   527,    89,   529,
     530,   394,   395,    85,   434,   525,    24,   527,   538,   529,
     530,   457,   442,    80,    85,    85,   462,    85,   538,   465,
     550,   551,    85,    79,    67,   555,   472,    79,    86,    80,
       9,    14,    67,    79,    15,   216,   466,    62,   568,   367,
     570,   230,   388,   573,   240,   575,   144,   573,   568,   225,
     345,   581,   582,   303,    33,   293,   551,   466,    37,    10,
     204,    40,    41,   593,    43,   434,   295,   597,    47,    48,
      49,    50,    51,   442,    -1,    -1,   522,   607,    -1,    -1,
     610,   611,    -1,   613,   610,   615,   616,    -1,    -1,   615,
      -1,    -1,    -1,   613,   624,   525,    -1,   466,    -1,   629,
      -1,   631,    -1,    -1,   634,   631,    -1,    -1,    -1,   629,
     640,    -1,    -1,    -1,   634,    -1,    -1,    -1,    -1,    -1,
     640,    -1,    -1,   653,   570,    -1,    -1,   657,    -1,     0,
      -1,    -1,   285,   286,    -1,    -1,   582,   657,   568,    -1,
      11,    12,    13,   573,    15,   575,    -1,    -1,    -1,   128,
      -1,   130,   131,    -1,    -1,    -1,   525,    -1,    -1,   138,
     139,   607,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     616,    -1,    -1,    44,    -1,    -1,    -1,    -1,   624,    -1,
     610,   611,    -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,   173,    -1,   175,    -1,    -1,   568,
      -1,   631,    -1,    -1,   573,    -1,   575,   653,   187,   188,
     189,   190,    -1,   192,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    -1,    -1,   206,    -1,    -1,
      -1,   210,   103,    -1,    -1,    -1,    -1,    -1,   391,    -1,
      -1,   610,   611,    -1,   115,    -1,   615,    -1,    -1,   402,
      -1,    -1,    -1,    -1,    -1,   408,   127,    -1,   129,    -1,
     239,    -1,   631,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    -1,     3,   266,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,   275,   276,   277,    -1,
      -1,    -1,    -1,   282,    -1,   458,    -1,    -1,   287,    26,
      -1,   290,    -1,    30,    -1,    -1,   295,    -1,    -1,   298,
     191,   300,   193,    -1,   303,    42,   305,    -1,   307,    14,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    60,   215,   216,    -1,    -1,    -1,    -1,
      -1,    68,    -1,   224,   225,   226,    -1,    42,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    84,    -1,   240,
     523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,   267,   550,   551,    -1,
      -1,   380,   555,   382,    -1,    -1,    -1,    -1,    26,    -1,
     389,   390,    30,   392,    -1,    -1,    -1,   396,    -1,   398,
     105,     3,    -1,     5,    42,    -1,    -1,    -1,    -1,    11,
      12,   116,    50,    -1,   413,    -1,    -1,    -1,    -1,   418,
      -1,    -1,    60,    -1,    26,    -1,    -1,    -1,    30,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      42,    79,    -1,    -1,    82,    -1,    84,    -1,    50,    -1,
     341,    -1,   343,    -1,   345,    -1,    -1,   456,    60,    -1,
      -1,    -1,   167,    -1,   463,    -1,    68,    -1,   467,    -1,
     469,    -1,   363,    -1,   473,    -1,   367,    79,   477,     3,
      82,     5,    84,   482,   483,    -1,    -1,    11,    12,    -1,
      -1,   490,    -1,    -1,    -1,    -1,   495,    -1,    -1,    -1,
      -1,   500,    26,    -1,    -1,   504,    30,   506,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,   521,    -1,    -1,    -1,    50,    -1,   233,     3,
      -1,     5,    -1,   238,    -1,    -1,    60,    11,    12,    -1,
      -1,    -1,   541,   542,    68,    -1,    -1,   546,   547,    -1,
     549,   442,    26,    -1,    -1,    79,    30,    -1,    82,    -1,
      84,    -1,   267,    -1,    -1,    -1,    -1,    -1,    42,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
     285,   286,    -1,    -1,    -1,    -1,    60,    -1,    -1,   588,
      -1,    -1,   297,    -1,    68,    -1,   301,    -1,    -1,   598,
      -1,    -1,    -1,    -1,   603,    79,   605,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     619,    -1,    -1,     3,     4,     5,     6,   518,     8,    -1,
      10,    -1,    -1,    -1,   525,    -1,   635,    -1,   637,   638,
      -1,    -1,    -1,    -1,    -1,   644,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,   654,    -1,    -1,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    -1,    52,    53,    -1,    55,    -1,   568,    -1,    59,
      60,    -1,   573,    -1,   575,    -1,   391,    -1,    -1,   394,
     395,    71,    -1,    -1,    -1,    -1,    -1,   402,    -1,    79,
      -1,    81,    -1,   408,    84,    85,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,   610,
     611,    -1,    -1,    -1,   615,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,
     631,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,   458,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    71,
       7,     8,    -1,    -1,    11,    12,    -1,    79,    80,    81,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    26,
     505,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,   523,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,    -1,    -1,    71,   550,   551,    -1,    -1,    -1,
     555,    -1,    79,    80,     3,     4,    -1,    84,     7,     8,
      87,    88,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    46,    47,    48,
      49,    50,    51,    52,    -1,    54,    55,    56,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    -1,    -1,    68,
       3,     4,    71,    -1,    -1,     8,    -1,    -1,    11,    12,
      79,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    -1,    -1,    26,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    68,     3,     4,    71,    -1,
      -1,     8,    -1,    -1,    11,    12,    79,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,     3,
      -1,    68,    -1,    -1,    71,    -1,    -1,    11,    12,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,     3,    68,    -1,    70,     7,    -1,    73,
      -1,    11,    12,    -1,    -1,    79,    -1,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    46,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,     3,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    -1,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    29,    30,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    39,    -1,
      41,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,     3,     4,     5,     6,    -1,     8,
      71,    10,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    -1,    84,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    -1,    32,    33,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    84,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    36,    -1,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    84,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    36,    -1,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    84,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    81,
      -1,    -1,    84,    26,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,
      -1,    84,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,
      84,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    -1,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    -1,    52,    53,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    52,    53,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    71,    11,    12,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    45,
      46,     3,    -1,     5,    50,    51,    -1,    -1,    54,    11,
      12,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    26,    -1,    28,    29,    30,    -1,
      -1,    -1,    -1,    79,    -1,    37,    82,    39,    84,    41,
      42,    -1,    -1,    45,    46,     3,    -1,     5,    50,    51,
      -1,    -1,    54,    11,    12,    -1,    -1,    -1,    60,    -1,
      -1,     3,    64,    -1,    -1,    -1,    68,     3,    26,     5,
      -1,    -1,    30,    -1,    -1,    11,    12,    79,    -1,    -1,
      82,    -1,    84,    -1,    42,    -1,    28,    29,    30,    -1,
      26,    -1,    50,    -1,    30,    37,    -1,    39,    -1,    41,
      -1,    -1,    60,    45,    46,    -1,    42,    -1,    -1,    51,
      68,     3,    54,    -1,    50,    -1,    -1,    -1,    60,    -1,
      78,    79,    64,    -1,    60,    -1,    84,    -1,    -1,    -1,
      -1,     3,    68,    -1,    -1,    -1,    28,    29,    30,    -1,
      82,    -1,    78,    79,    36,    37,    -1,    39,    84,    41,
      -1,     3,    -1,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    -1,    39,    60,    41,
      -1,     3,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,     3,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,     3,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,     3,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,     3,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,     3,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,    -1,    64,    45,    46,    -1,    28,    29,    30,    51,
      -1,    -1,    54,    -1,    -1,    37,    78,    39,    60,    41,
      -1,    -1,    64,    45,    46,    -1,    -1,    -1,     3,    51,
      -1,    -1,    54,    -1,    -1,    -1,    78,    -1,    60,    -1,
      -1,    -1,    64,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    28,    29,    30,    78,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    41,    41,    43,    -1,    -1,
      45,    46,    -1,    -1,    50,    -1,    51,    -1,    -1,    54,
      19,    20,    21,    22,    23,    60,    -1,    26,    -1,    64,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      86,    50,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    43,    76,    77,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    86,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    86,
      50,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    43,    76,    77,    -1,    -1,
      -1,    -1,    50,    83,    -1,    85,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      -1,    43,    -1,    -1,    -1,    83,    -1,    85,    50,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    43,    76,    77,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    85,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    43,
      -1,    -1,    -1,    15,    -1,    85,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,    15,
      -1,    85,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    43,    80,    -1,
      -1,    -1,    -1,    -1,    50,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    43,
      76,    77,    -1,    -1,    80,    -1,    50,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    43,    -1,    -1,    -1,    82,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    -1,
      26,    -1,    28,    82,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    -1,
      46,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      56,    57,    -1,    59,    60,    61,    62,    63,    64,    65,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    15,    76,    77,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    -1,    -1,    80,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    -1,
      66,    80,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    16,    -1,    80,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    -1,    80,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    -1,    66,
      80,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    -1,    80,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    36,    50,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    66,    80,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      36,    50,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    43,    -1,    45,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    78,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    78,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    78,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    43,    19,    20,    21,    22,
      23,    -1,    50,    26,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    50,    76,    77,
      78,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    43,    76,    77,
      78,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      56,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    40,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    43,    76,    77,    -1,    -1,    -1,
      -1,    50,    19,    20,    21,    22,    23,    56,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    43,    76,    77,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    65,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    43,    -1,    45,    -1,    -1,
      -1,    -1,    50,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    19,    20,    21,    22,    23,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    43,    76,    77,
      -1,    19,    20,    -1,    50,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,    11,    12,    26,    30,    42,    50,    57,
      60,    61,    68,    79,    84,    92,    93,    94,    97,   100,
     102,   114,   115,   139,   140,   148,   149,   150,   151,     4,
       6,     8,    10,    32,    33,    38,    39,    41,    47,    48,
      49,    51,    52,    53,    55,    59,    60,    71,    79,    81,
      84,    95,    96,   122,   142,   143,   145,   146,   149,   150,
     151,   139,    81,    98,    99,   114,     3,    26,    28,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    41,
      42,    43,    44,    46,    47,    48,    49,    50,    51,    52,
      54,    55,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    70,    73,    79,    81,    84,   114,   116,   120,   152,
     153,     7,   114,   117,   121,   147,    71,    73,   115,   119,
     141,   142,     0,    93,    70,    73,   148,    84,    67,    79,
      95,    28,    29,    37,    39,    41,    45,    46,    51,    54,
      64,   106,   110,   151,    79,    39,   122,   128,   151,    79,
     122,   122,     3,    30,    60,    87,    88,   111,   114,   141,
     145,   151,   152,   122,   114,   122,    80,    89,   122,   126,
     127,   133,   134,   147,    39,    41,    82,   110,   122,   124,
     125,   151,    85,   122,   123,    36,    96,    19,    20,    21,
      22,    23,    26,    43,    50,    66,    68,    69,    70,    71,
      72,    73,    74,    76,    77,    78,    79,    79,    79,    79,
      18,    84,    67,    84,    99,    81,    83,   148,    69,    69,
      80,    82,    85,    69,    83,    79,    15,    70,    73,    80,
      83,   116,   142,    16,    70,    73,    83,    85,    16,    67,
      79,   114,   118,   122,    87,   103,   104,   114,   151,    36,
     122,    41,    78,    41,    78,    79,    79,    79,   110,   122,
     122,    79,    36,    78,   106,   138,    18,    79,   108,   109,
     111,   131,   132,   151,    79,    56,    34,    83,   122,   123,
      78,   151,    42,   151,    66,    79,    40,    42,   131,   151,
      15,    80,    80,    83,    80,    83,   122,    79,    79,    82,
      41,    86,    82,    83,    86,    83,    85,    90,   122,   122,
     122,   122,   114,   122,   114,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,     3,   144,   145,   153,   122,
     127,   123,   123,    78,   123,   127,   122,   123,   120,   101,
     140,    78,   102,   105,    98,    79,   116,   116,   121,   114,
      80,    80,   117,    89,    73,   141,    85,    85,   115,    73,
     141,   122,   104,    83,    85,    78,    80,    83,   151,    78,
     122,   122,   109,   151,   122,   135,   136,   148,    64,    78,
      41,    78,    41,    78,   122,   122,   114,   131,    78,    80,
      14,    15,    25,    80,    83,    24,    67,    83,    86,   122,
     122,   122,    80,   122,   151,    80,   111,   112,   147,   111,
     122,    80,    86,    67,   122,   126,   122,   133,    41,   122,
     122,   131,   122,   125,   151,   122,   122,    84,    89,    80,
      80,    80,    80,   136,    78,    80,    80,    78,    85,    78,
      83,    85,   105,    82,   102,   118,    80,    80,    80,    85,
      85,    85,    85,    78,    80,   114,    67,    81,    86,   103,
      78,    78,    80,    67,    80,    80,    83,    67,    79,    79,
     122,   122,    80,    41,    78,    80,   108,    95,   122,   111,
     122,    41,    79,    81,   132,   132,   122,   151,   122,   138,
      56,   111,   113,   129,   130,    65,    80,    80,    83,   111,
      42,   138,   123,   122,    41,    86,    15,   122,    80,    78,
      82,    14,    83,    85,   123,    80,   136,   140,    67,    82,
      80,    67,    81,    86,   122,   110,   130,   110,   122,   110,
     110,   135,   122,   137,   151,   122,    78,    78,   110,   122,
      78,    14,    25,    79,   122,   122,    16,    86,   122,    67,
      83,    83,   138,   122,    17,   147,   122,    80,   122,   131,
     122,   123,   122,   151,    85,    80,   120,   122,   110,   130,
      45,    78,    82,   105,   151,    63,    78,    78,   107,    78,
      80,    83,    80,    78,    78,   122,   122,   123,    15,    82,
     122,   122,   122,   111,   129,   138,    80,   111,    41,   138,
      78,    80,    82,    83,    85,    14,    78,    45,    78,    82,
     105,    63,    78,   110,    82,   105,    34,    35,    78,    67,
     151,    78,    80,   122,    45,   122,   123,   122,   122,   110,
      82,   105,    78,    78,   110,    79,   122,    79,    81,    80,
     110,   138,    80,    85,    83,    85,    78,    78,    78,   122,
     122,   122,   122,    80,    15,    82,    85,   110,   122,    80
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
#line 169 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));                       ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 170 "amber.yy"
    {(yyval) = mk_signature((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));                   ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 173 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 174 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 180 "amber.yy"
    {(yyval) = mk_typedef((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 181 "amber.yy"
    {(yyval) = mk_typedef_par((yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                 ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 185 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 186 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 192 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                       ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 193 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));                   ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 194 "amber.yy"
    {(yyval) = mk_fndef((yyvsp[(1) - (10)]), (yyvsp[(2) - (10)]), (yyvsp[(4) - (10)]), mk_expr_let((yyvsp[(7) - (10)]), (yyvsp[(9) - (10)])));  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 195 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));              ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 196 "amber.yy"
    {(yyval) = mk_fndef_proc((yyvsp[(1) - (9)]), (yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(7) - (9)]), (yyvsp[(8) - (9)]));          ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 197 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (8)]), (yyvsp[(2) - (8)]), (yyvsp[(4) - (8)]), (yyvsp[(7) - (8)]));            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 198 "amber.yy"
    {(yyval) = mk_fndef_switch((yyvsp[(1) - (10)]), (yyvsp[(3) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(9) - (10)]));  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 200 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                   ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 201 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));               ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 202 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));          ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 203 "amber.yy"
    {(yyval) = mk_fndef_proc(null(), (yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(6) - (8)]), (yyvsp[(7) - (8)]));      ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 204 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(6) - (7)]));        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 205 "amber.yy"
    {(yyval) = mk_fndef_switch(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 206 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (9)]), (yyvsp[(3) - (9)]), mk_expr_let((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)])));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 210 "amber.yy"
    {(yyval) = mk_fnarg(null(), null());                   ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 211 "amber.yy"
    {(yyval) = mk_fnarg(null(), (yyvsp[(1) - (1)]));                       ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 212 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (1)]),     null());                   ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 213 "amber.yy"
    {(yyval) = mk_fnarg((yyvsp[(1) - (2)]),     (yyvsp[(2) - (2)]));                       ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 217 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 218 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 222 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 223 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                             ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 229 "amber.yy"
    {(yyval) = mk_stmt_return((yyvsp[(2) - (3)]));                    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 230 "amber.yy"
    {(yyval) = mk_stmt_return_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));             ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 232 "amber.yy"
    {(yyval) = mk_stmt_assignment((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 235 "amber.yy"
    {(yyval) = mk_stmt_assignment_if((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));     ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 237 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(6) - (7)]));                ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 238 "amber.yy"
    {(yyval) = mk_stmt_if((yyvsp[(3) - (9)]), (yyvsp[(5) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));            ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 240 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (3)]));                      ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 241 "amber.yy"
    {(yyval) = mk_stmt_loop((yyvsp[(2) - (7)]), (yyvsp[(5) - (7)]));                  ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 242 "amber.yy"
    {(yyval) = mk_stmt_while((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                 ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 244 "amber.yy"
    {(yyval) = mk_stmt_let((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 247 "amber.yy"
    {(yyval) = mk_stmt_break();                       ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 248 "amber.yy"
    {(yyval) = mk_stmt_break_if((yyvsp[(3) - (4)]));                  ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 250 "amber.yy"
    {(yyval) = mk_stmt_for((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                   ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 252 "amber.yy"
    {(yyval) = mk_stmt_fail();                        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 253 "amber.yy"
    {(yyval) = mk_stmt_fail_if((yyvsp[(3) - (4)]));                   ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 255 "amber.yy"
    {(yyval) = mk_stmt_assert((yyvsp[(2) - (3)]));                    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 257 "amber.yy"
    {(yyval) = mk_stmt_print((yyvsp[(2) - (3)]));                     ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 258 "amber.yy"
    {(yyval) = mk_stmt_print_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));              ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 262 "amber.yy"
    {(yyval) = mk_seq_empty();                        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 263 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (6)]), mk_elif((yyvsp[(4) - (6)]), (yyvsp[(6) - (6)])));           ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 267 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 268 "amber.yy"
    {(yyval) = mk_for_iter((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));               ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 269 "amber.yy"
    {(yyval) = mk_for_iter_range((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));         ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 273 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 274 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 278 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                            ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 279 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 287 "amber.yy"
    {(yyval) = mk_ptrn_type((yyvsp[(1) - (1)]));                               ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 288 "amber.yy"
    {(yyval) = mk_ptrn_var((yyvsp[(1) - (1)]));                                ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 289 "amber.yy"
    {(yyval) = mk_ptrn_ptrn_var((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 290 "amber.yy"
    {(yyval) = mk_ptrn_ctor((yyvsp[(1) - (1)]));                               ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 291 "amber.yy"
    {(yyval) = mk_ptrn_num((yyvsp[(1) - (1)]));                                ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 292 "amber.yy"
    {(yyval) = mk_ptrn_jolly();                                ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 293 "amber.yy"
    {(yyval) = mk_ptrn_expr((yyvsp[(2) - (2)]));                               ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 296 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (3)]), mk_ptrn_jolly());          ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 297 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                       ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 298 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (4)]), mk_ptrn_tuple((yyvsp[(3) - (4)]), false)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 299 "amber.yy"
    {(yyval) = mk_ptrn_tag_ptrn((yyvsp[(1) - (6)]), mk_ptrn_tuple((yyvsp[(3) - (6)]), true));  ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 300 "amber.yy"
    {(yyval) = mk_ptrn_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 304 "amber.yy"
    {(yyval) = mk_seq(mk_lab_ptrn((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])));                    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 305 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (4)]), mk_lab_ptrn((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)])));                ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 309 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                     ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 310 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                                 ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 317 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), false);                     ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 318 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(1) - (2)]), true);                      ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 322 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (1)]));                            ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 323 "amber.yy"
    {(yyval) = mk_type_var((yyvsp[(1) - (1)]));                            ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 324 "amber.yy"
    {(yyval) = mk_type_ref((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 325 "amber.yy"
    {(yyval) = mk_type_inline((yyvsp[(2) - (3)]));                         ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 326 "amber.yy"
    {(yyval) = mk_type_any();                              ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 327 "amber.yy"
    {(yyval) = mk_type_symb();                             ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 329 "amber.yy"
    {(yyval) = mk_type_int();                              ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 330 "amber.yy"
    {(yyval) = mk_type_low_bounded_int((yyvsp[(2) - (5)]));                ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 331 "amber.yy"
    {(yyval) = mk_type_up_bounded_int((yyvsp[(4) - (5)]));                 ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 332 "amber.yy"
    {(yyval) = mk_type_bounded_int((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 334 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 335 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 336 "amber.yy"
    {(yyval) = mk_type_fixed_seq((yyvsp[(2) - (3)]));                      ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 338 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 339 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 341 "amber.yy"
    {(yyval) = mk_type_map((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 342 "amber.yy"
    {(yyval) = mk_type_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 346 "amber.yy"
    {(yyval) = mk_pretype_type((yyvsp[(1) - (1)]));                        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 347 "amber.yy"
    {(yyval) = mk_pretype_empty_set();                     ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 348 "amber.yy"
    {(yyval) = mk_pretype_empty_seq();                     ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 349 "amber.yy"
    {(yyval) = mk_pretype_empty_map();                     ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 350 "amber.yy"
    {(yyval) = mk_pretype_sing((yyvsp[(1) - (1)]));                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 351 "amber.yy"
    {(yyval) = mk_pretype_tagged_obj((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));              ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 352 "amber.yy"
    {(yyval) = mk_pretype_tagged_tuple((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 356 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), false);                  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 357 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), true);                   ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 361 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 362 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 366 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 367 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 371 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 372 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 376 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 377 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 383 "amber.yy"
    {(yyval) = mk_expr_num((yyvsp[(1) - (1)]));                            ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 384 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 385 "amber.yy"
    {(yyval) = mk_expr_str((yyvsp[(1) - (1)]));                            ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 387 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 388 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 389 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 391 "amber.yy"
    {(yyval) = mk_expr_set(mk_seq_empty());                ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 392 "amber.yy"
    {(yyval) = mk_expr_set((yyvsp[(2) - (3)]));                            ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 394 "amber.yy"
    {(yyval) = mk_expr_map(mk_seq_empty());                ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 395 "amber.yy"
    {(yyval) = mk_expr_map((yyvsp[(2) - (3)]));                            ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 396 "amber.yy"
    {(yyval) = mk_expr_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 398 "amber.yy"
    {(yyval) = mk_expr_seq(mk_seq_empty());                ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 399 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (3)]));                            ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 400 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 402 "amber.yy"
    {(yyval) = mk_expr_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 403 "amber.yy"
    {(yyval) = mk_expr_tag_obj(mk_expr_ctor((yyvsp[(1) - (4)])), (yyvsp[(3) - (4)]));      ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 405 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 406 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 409 "amber.yy"
    {(yyval) = mk_expr_const_or_var((yyvsp[(1) - (1)]));                   ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 410 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 411 "amber.yy"
    {(yyval) = mk_expr_fn_call_impl((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));           ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 412 "amber.yy"
    {(yyval) = mk_expr_fn_call_impl((yyvsp[(1) - (5)]), mk_seq_empty(), (yyvsp[(4) - (5)])); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 413 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 414 "amber.yy"
    {(yyval) = mk_expr_builtin_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 416 "amber.yy"
    {(yyval) = (yyvsp[(2) - (3)]);                                         ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 418 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                         ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 420 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 421 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 422 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 423 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 424 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 425 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 426 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 427 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 428 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 429 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 431 "amber.yy"
    {(yyval) = mk_expr_and((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 432 "amber.yy"
    {(yyval) = mk_expr_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 433 "amber.yy"
    {(yyval) = mk_expr_not((yyvsp[(2) - (2)]));                            ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 435 "amber.yy"
    {(yyval) = mk_expr_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 436 "amber.yy"
    {(yyval) = mk_expr_neq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 438 "amber.yy"
    {(yyval) = mk_expr_type_test((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                  ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 440 "amber.yy"
    {(yyval) = mk_expr_dot_acc((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 441 "amber.yy"
    {(yyval) = mk_expr_dot_acc_test((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 444 "amber.yy"
    {(yyval) = mk_expr_idx((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 445 "amber.yy"
    {(yyval) = mk_expr_idx_member((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));             ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 447 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (4)]));                        ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 448 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                    ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 450 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 451 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 453 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(6) - (7)]), (yyvsp[(3) - (7)]));                         ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 454 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(10) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(7) - (11)]));                    ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 456 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                    ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 457 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 459 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(3) - (9)]));                    ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 461 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(10) - (13)]), (yyvsp[(12) - (13)]), (yyvsp[(3) - (13)]), (yyvsp[(7) - (13)]));              ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 463 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 464 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                 ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 465 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 466 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (11)]), (yyvsp[(4) - (11)]), (yyvsp[(6) - (11)]), (yyvsp[(8) - (11)]), (yyvsp[(10) - (11)]));           ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 468 "amber.yy"
    {(yyval) = mk_expr_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 469 "amber.yy"
    {(yyval) = mk_expr_match((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                        ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 470 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 472 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 474 "amber.yy"
    {(yyval) = mk_expr_repl((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 475 "amber.yy"
    {(yyval) = mk_expr_sel((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 477 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 479 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));               ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 481 "amber.yy"
    {(yyval) = mk_expr_is((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 486 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 487 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 492 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 493 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 497 "amber.yy"
    {(yyval) = mk_sexpr_expr((yyvsp[(1) - (1)]));                          ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 498 "amber.yy"
    {(yyval) = mk_sexpr_cond((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 502 "amber.yy"
    {(yyval) = mk_sexpr_lab((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 503 "amber.yy"
    {(yyval) = mk_sexpr_lab_cond((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));              ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 507 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 508 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 512 "amber.yy"
    {(yyval) = mk_seq(mk_if_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])));               ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 513 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (5)]), mk_if_branch((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));           ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 517 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 518 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (5)]), mk_expr_let((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));     ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 521 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 522 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 531 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 532 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 536 "amber.yy"
    {(yyval) = mk_clause_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 537 "amber.yy"
    {(yyval) = mk_clause_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 538 "amber.yy"
    {(yyval) = mk_clause_not_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 539 "amber.yy"
    {(yyval) = mk_clause_not_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 540 "amber.yy"
    {(yyval) = mk_clause_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 541 "amber.yy"
    {(yyval) = mk_clause_and((yyvsp[(2) - (3)]));                          ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 542 "amber.yy"
    {(yyval) = mk_clause_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 546 "amber.yy"
    {(yyval) = mk_map_entry((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 547 "amber.yy"
    {(yyval) = mk_map_entry_cond((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));              ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 551 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 552 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 556 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 557 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));               ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 561 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 562 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 566 "amber.yy"
    {(yyval) = mk_seq(mk_fnarg(null(), (yyvsp[(1) - (1)])));         ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 567 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), mk_fnarg(null(), (yyvsp[(3) - (3)])));     ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 578 "amber.yy"
    {(yyval) = mk_snum_neg_num((yyvsp[(2) - (2)]));                      ;}
    break;



/* Line 1455 of yacc.c  */
#line 4368 "amber.tab.cc"
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
#line 662 "amber.yy"
  /* Epilogue */



#include <string.h>
#include <stdio.h>

#include "common.h"
#include "lexer.h"


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

string clean_str(string str)
{
  int len = str.length();
  
  switch (token_type(str))
  {
    case plain_identifier:
      return str;
      
    case op_function:
      return str;
    
    case symbol:
      return str.substr(1);

    case label:
      return str.substr(0, len-1);

    case number:
      return str;
    
    case type_id:
      for (int i=0 ; i < len ; i++)
        if (isupper(str[i]))
          str[i] = tolower(str[i]);
      return str;

    case type_var:
      for (int i=0 ; i < len ; i++)
        if (isupper(str[i]))
          str[i] = tolower(str[i]);
      return str;

    case operator_symbol:
      return str;

    case builtin:
      return str.substr(1, len-2);

    case string_lit:
      return str;

    default:
      halt;
  }
}

int yylex(void)
{
  static unsigned int pos = 0;

  int line;
  int col;

  string get_token(unsigned int idx, int &line, int &col);
  string str = get_token(pos++, line, col);
  
  if (str == "")
    return 0;

  yylval = str_obj(clean_str(str));

  assert(yylval.get_string() == clean_str(str));
  
  if (str.length() == 1 && !isalnum(str[0]))
    return str[0];

  switch (token_type(str))
  {
    case plain_identifier:  break; // LOWER_CASE_ID;
    case op_function:       return OP_FN_NAME;
    case symbol:            return SYMBOL;
    case label:             return LABEL;
    case number:            return NUMBER;
    case type_id:           return MIXED_CASE_ID;
    case type_var:          return UPPER_CASE_ID;
    case operator_symbol:   break;
    case builtin:           return BUILTIN;
    case string_lit:        return STRING;
    default:                assert(false);
  }

  if (str == "->")          return RIGHT_ARROW;
  if (str == "=>")          return DOUBLE_RIGHT_ARROW;
  if (str == "<-")          return LEFT_ARROW;
  if (str == "..")          return DOUBLE_DOT;
  if (str == "...")         return ELLIPSIS;
  if (str == ":=")          return ASSIGNMENT;
  if (str == "<=")          return LE;
  if (str == ">=")          return GE;
  if (str == "==")          return EQ;
  if (str == "/=")          return NEQ;
  if (str == "::")          return IN;
  if (str == "\\/")         return OR;
  if (str == "</-")         return CROSSED_LEFT_ARROW;

  for (int i=0 ; i < lengthof(token_to_id_map) ; i++)
    if (str == token_to_id_map[i].str)
      return token_to_id_map[i].n;

  return LOWER_CASE_ID;
}

//struct StrIntPair {
//  const char *str;
//  int n;
//};

//static StrIntPair string_to_code_map[] = {
//  {"LOWER_CASE_ID",          LOWER_CASE_ID},
//  {"SYMBOL",                 SYMBOL},
//  {"OP_FN_NAME",             OP_FN_NAME},
//  {"BUILTIN",                BUILTIN},
//  {"LABEL",                  LABEL},
//  {"NUMBER",                 NUMBER},
//  {"CHAR",                   CHAR},
//  {"STRING",                 STRING},
//  {"MIXED_CASE_ID",          MIXED_CASE_ID},
//  {"UPPER_CASE_ID",          UPPER_CASE_ID},
//  {"RIGHT_ARROW",            RIGHT_ARROW},
//  {"LEFT_ARROW",             LEFT_ARROW},
//  {"DOUBLE_RIGHT_ARROW",     DOUBLE_RIGHT_ARROW},
//  {"DOUBLE_DOT",             DOUBLE_DOT},
//  {"ELLIPSIS",               ELLIPSIS},
//  {"ASSIGNMENT",             ASSIGNMENT},
//  {"LE",                     LE},
//  {"GE",                     GE},
//  {"NEQ",                    NEQ},
//  {"IN",                     IN},
//  {"OR",                     OR},
//  {"CROSSED_LEFT_ARROW",     CROSSED_LEFT_ARROW},
//  {"KW_AND",                 KW_AND},
//  {"KW_AS",                  KW_AS},
//  {"KW_ASSERT",              KW_ASSERT},
//  {"KW_BREAK",               KW_BREAK},
//  {"KW_CASE",                KW_CASE},
//  {"KW_DEF",                 KW_DEF},
//  {"KW_DISABLED",            KW_DISABLED},
//  {"KW_DO",                  KW_DO},
//  {"KW_ELSE",                KW_ELSE},
//  {"KW_ELIF",                KW_ELIF},
//  {"KW_END",                 KW_END},
//  {"KW_FOR",                 KW_FOR},
//  {"KW_FROM",                KW_FROM},
//  {"KW_IF",                  KW_IF},
//  {"KW_IN",                  KW_IN},
//  {"KW_IS",                  KW_IS},
//  {"KW_ITSELF",              KW_ITSELF},
//  {"KW_LET",                 KW_LET},
//  {"KW_LOOP",                KW_LOOP},
//  {"KW_MATCH",               KW_MATCH},
//  {"KW_NOT",                 KW_NOT},
//  {"KW_OR",                  KW_OR},
//  {"KW_PRINT",               KW_PRINT},
//  {"KW_REPLACE",             KW_REPLACE},
//  {"KW_RETRIEVE",            KW_RETRIEVE},
//  {"KW_RETURN",              KW_RETURN},
//  {"KW_SELECT",              KW_SELECT},
//  {"KW_THEN",                KW_THEN},
//  {"KW_TESTCASES",           KW_TESTCASES},
//  {"KW_TRACE",               KW_TRACE},
//  //{"KW_TRY",                 KW_TRY},
//  {"KW_TYPE",                KW_TYPE},
//  {"KW_USING",               KW_USING},
//  {"KW_WHEN",                KW_WHEN},
//  {"KW_WHERE",               KW_WHERE},
//  {"KW_WHILE",               KW_WHILE},
//  {"KW_WITH",                KW_WITH}
//};
//
//int yylex(void)
//{
//  int res = _yylex();
//  string res_str;
//  for (int i=0 ; i < lengthof(string_to_code_map) ; i++)
//    if (string_to_code_map[i].n == res)
//    {
//      res_str = string_to_code_map[i].str;
//      break;
//    }
//  cout << res_str << " - " << yylval.get_string() << endl;
//  return res;
//}

