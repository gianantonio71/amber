
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
#define YYLAST   4647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNRULES -- Number of states.  */
#define YYNSTATES  659

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
     465,   471,   477,   483,   488,   493,   497,   502,   507,   513,
     517,   523,   525,   528,   531,   534,   536,   541,   546,   549,
     553,   555,   559,   561,   565,   567,   571,   573,   577,   579,
     581,   583,   585,   587,   589,   592,   596,   599,   603,   607,
     610,   614,   620,   624,   629,   634,   639,   641,   646,   653,
     659,   664,   669,   673,   676,   680,   684,   688,   692,   696,
     700,   704,   708,   712,   716,   720,   724,   727,   731,   735,
     739,   743,   748,   753,   760,   765,   772,   778,   786,   794,
     806,   814,   824,   834,   848,   856,   866,   876,   888,   894,
     901,   905,   913,   919,   927,   937,   941,   943,   947,   949,
     953,   955,   959,   962,   967,   969,   973,   977,   983,   987,
     993,   995,   999,  1001,  1005,  1009,  1015,  1019,  1025,  1029,
    1033,  1037,  1041,  1047,  1049,  1053,  1057,  1064,  1066,  1070,
    1072,  1076,  1078,  1080,  1082,  1084,  1086,  1089,  1091,  1093,
    1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,  1111,  1113,
    1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,  1131,  1133,
    1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,
    1155,  1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,
    1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,
    1195
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
      -1,    68,   120,    69,    -1,    68,    70,    69,    -1,    84,
      73,    16,    73,    85,    -1,    84,   141,    16,    73,    85,
      -1,    84,    73,    16,   141,    85,    -1,    84,   141,    16,
     141,    85,    -1,    84,   115,    73,    85,    -1,    84,   115,
      70,    85,    -1,    84,   119,    85,    -1,    79,   114,    73,
      80,    -1,    79,   114,    70,    80,    -1,    79,   114,    15,
     114,    80,    -1,    79,   121,    80,    -1,    79,   115,    66,
     114,    80,    -1,   114,    -1,    81,    82,    -1,    84,    85,
      -1,    79,    80,    -1,   152,    -1,   152,    79,   116,    80,
      -1,   152,    79,   121,    80,    -1,   147,   116,    -1,   147,
     116,    89,    -1,   114,    -1,   118,    83,   114,    -1,   115,
      -1,   119,    83,   115,    -1,   116,    -1,   120,    83,   116,
      -1,   117,    -1,   121,    83,   117,    -1,   142,    -1,   145,
      -1,   143,    -1,    59,    -1,    38,    -1,    48,    -1,    81,
      82,    -1,    81,   124,    82,    -1,    79,    80,    -1,    79,
     134,    80,    -1,    79,   127,    80,    -1,    84,    85,    -1,
      84,   123,    85,    -1,    84,   123,    90,   122,    85,    -1,
     122,    66,   122,    -1,   145,    79,   122,    80,    -1,   145,
      79,   127,    80,    -1,   150,    79,   127,    80,    -1,   150,
      -1,   150,    79,   123,    80,    -1,   150,    79,   123,    78,
     136,    80,    -1,   150,    79,    78,   136,    80,    -1,   149,
      79,   123,    80,    -1,   146,    79,   123,    80,    -1,    79,
     122,    80,    -1,    71,   122,    -1,   122,    70,   122,    -1,
     122,    71,   122,    -1,   122,    73,   122,    -1,   122,    74,
     122,    -1,   122,    76,   122,    -1,   122,    72,   122,    -1,
     122,    68,   122,    -1,   122,    69,   122,    -1,   122,    19,
     122,    -1,   122,    20,   122,    -1,   122,    26,   122,    -1,
     122,    50,   122,    -1,    49,   122,    -1,   122,    21,   122,
      -1,   122,    22,   122,    -1,   122,    23,   114,    -1,   122,
      77,   144,    -1,   122,    77,   144,    89,    -1,   151,    84,
     123,    85,    -1,   122,    77,   144,    84,   123,    85,    -1,
      79,    89,   131,    80,    -1,    79,    89,   131,    86,   123,
      80,    -1,    81,   122,    86,   131,    82,    -1,    81,   122,
      86,   131,    78,   123,    82,    -1,    39,    79,   131,    80,
      81,   122,    82,    -1,    39,    79,   131,    80,    41,    79,
     123,    80,    81,   122,    82,    -1,    79,   122,    15,   122,
      86,   131,    80,    -1,    79,   122,    15,   122,    86,   131,
      78,   123,    80,    -1,    39,    79,   131,    80,    79,   122,
      15,   122,    80,    -1,    39,    79,   131,    80,    41,    79,
     123,    80,    79,   122,    15,   122,    80,    -1,    84,   122,
      86,   151,    14,   122,    85,    -1,    84,   122,    86,   151,
      83,   151,    14,   122,    85,    -1,    84,   122,    86,   151,
      14,   122,    83,   122,    85,    -1,    84,   122,    86,   151,
      83,   151,    14,   122,    83,   122,    85,    -1,    41,   128,
      34,   122,   138,    -1,    47,    79,   123,    80,   130,   138,
      -1,    81,   110,    82,    -1,    52,   111,    42,   122,    65,
     122,   138,    -1,    55,   114,    42,   122,   138,    -1,    53,
     122,    40,   111,    42,   122,   138,    -1,    53,   122,    40,
     111,    42,   122,    41,   122,   138,    -1,   122,    43,   114,
      -1,   122,    -1,   123,    83,   122,    -1,   125,    -1,   124,
      83,   125,    -1,   122,    -1,   122,    41,   122,    -1,   147,
     122,    -1,   147,   122,    41,   122,    -1,   126,    -1,   127,
      83,   126,    -1,   122,    56,   122,    -1,   128,    83,   122,
      56,   122,    -1,   113,    67,   122,    -1,   113,    67,   122,
      45,   110,    -1,   129,    -1,   130,    83,   129,    -1,   132,
      -1,   131,    83,   132,    -1,   111,    14,   122,    -1,   111,
      15,   111,    14,   122,    -1,   111,    25,   122,    -1,   111,
      15,   111,    25,   122,    -1,   151,    67,   122,    -1,    79,
     131,    80,    -1,   132,    24,   132,    -1,   122,    15,   122,
      -1,   122,    15,   122,    41,   122,    -1,   133,    -1,   134,
      83,   133,    -1,   148,    67,   122,    -1,   148,    79,   137,
      80,    67,   122,    -1,   135,    -1,   136,    83,   135,    -1,
     151,    -1,   137,    83,   151,    -1,    78,    -1,    36,    -1,
      11,    -1,    12,    -1,   142,    -1,    71,   142,    -1,     8,
      -1,    10,    -1,     3,    -1,   153,    -1,   145,    -1,     4,
      -1,     6,    -1,     7,    -1,   150,    -1,   149,    -1,     5,
      -1,   151,    -1,    42,    -1,    26,    -1,    50,    -1,     3,
      -1,    60,    -1,    30,    -1,     3,    -1,   153,    -1,    26,
      -1,    28,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    51,    -1,    52,    -1,    54,    -1,    55,    -1,    57,
      -1,    56,    -1,    59,    -1,    60,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,    65,    -1
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
     311,   317,   318,   319,   323,   324,   325,   326,   327,   329,
     330,   331,   332,   334,   335,   336,   338,   339,   341,   342,
     344,   348,   349,   350,   351,   352,   353,   354,   358,   359,
     363,   364,   368,   369,   373,   374,   378,   379,   385,   386,
     387,   389,   390,   391,   393,   394,   396,   397,   398,   400,
     401,   402,   404,   405,   407,   408,   413,   414,   415,   416,
     417,   418,   420,   422,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   433,   435,   436,   437,   439,   440,   442,
     444,   445,   448,   449,   451,   452,   454,   455,   457,   458,
     460,   461,   463,   464,   467,   468,   469,   470,   472,   473,
     476,   478,   479,   481,   482,   485,   490,   491,   496,   497,
     501,   502,   506,   507,   511,   512,   516,   517,   521,   522,
     525,   526,   535,   536,   540,   541,   542,   543,   544,   545,
     546,   550,   551,   555,   556,   560,   561,   565,   566,   570,
     571,   594,   594,   596,   597,   599,   600,   603,   604,   607,
     608,   609,   612,   615,   617,   619,   620,   623,   632,   633,
     634,   635,   638,   639,   640,   643,   644,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   676,   677,   678,   679,   680,
     681
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
       3,     1,     2,     2,     1,     1,     4,     3,     3,     5,
       5,     5,     5,     4,     4,     3,     4,     4,     5,     3,
       5,     1,     2,     2,     2,     1,     4,     4,     2,     3,
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
       0,     0,     0,     0,   111,   124,     0,   115,   256,   244,
       0,    91,   126,     0,     0,     0,     0,   122,     0,     0,
     235,     1,     3,    93,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,   166,     0,   252,   254,
     253,    80,     0,     0,    75,    79,    78,    76,     0,     0,
       0,   153,   136,     0,     0,   204,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,    73,     0,   200,     0,   198,   248,   139,   196,     0,
       8,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    98,   114,   112,   113,    97,     0,     0,
       0,    93,    92,     0,   109,     0,   118,   236,     0,     0,
       0,     0,   105,     0,     0,     0,   120,     0,     0,    40,
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
       0,     0,     0,   107,   106,     0,   127,   119,     0,     0,
     104,   103,   123,     0,     0,     0,     0,     0,    96,    33,
       0,     0,    43,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,    86,    82,     0,     0,     0,     0,     0,   174,     0,
       0,   221,   205,     0,   224,     0,    63,     0,     0,     0,
       0,   227,     0,     0,     0,     0,     0,    54,     0,    64,
       0,    48,     0,   201,     0,   200,   199,     0,     0,   197,
       0,     0,   171,   143,   144,   151,   150,     0,     0,   147,
     145,    15,   172,    22,     0,     0,     0,    16,    47,     0,
     116,   117,   108,   110,    99,   101,   100,   102,    26,     0,
     121,     0,     0,     0,    45,   219,    72,     0,     0,   214,
       0,   216,     0,     0,     0,   213,   220,   218,     0,    68,
     232,   231,   188,     0,    89,     0,   210,     0,     0,    83,
      84,     0,    87,     0,   192,     0,   218,     0,     0,     0,
     203,    59,    62,     0,   152,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,     0,    50,     0,     0,
     141,     0,   149,     0,    25,     0,    17,    19,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,   189,     0,     0,
       0,     0,   175,   222,     0,   221,     0,    66,     0,   228,
     225,     0,   229,     0,     0,    65,    49,     0,     0,     0,
       0,     0,   173,   148,     0,     0,     0,     0,     0,    34,
      35,     0,   248,     0,    37,     0,   215,   217,     0,     0,
     178,    70,    69,   208,    90,   211,   191,    85,    88,     0,
     193,     0,   180,    60,     0,    57,     0,     0,     0,    56,
     177,    51,     0,   184,     0,    23,     0,    27,    29,     0,
       0,    31,     0,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,   230,    55,     0,     0,     0,    30,
       0,    39,    38,     0,     0,   182,   209,   194,   181,     0,
       0,   226,   186,     0,   185,    28,    32,     0,     0,    53,
       0,     0,     0,   179,     0,   187,     0,    67,   183
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    50,    51,    18,    62,    63,    19,
     332,   335,   240,   241,   336,   171,   594,   246,   399,   547,
     248,   384,   475,   144,    22,   105,   112,   237,   118,   106,
     113,   256,   179,   174,   175,   155,   156,   133,   476,   477,
     249,   250,   157,   158,   401,   402,   551,   472,    23,    24,
     145,    53,    54,   319,    55,    56,   114,    25,    57,    58,
     134,   148,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -408
static const yytype_int16 yypact[] =
{
     248,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  1891,
      27,   134,  1636,    55,   386,   121,  -408,  -408,  -408,  -408,
    -408,   375,  -408,   -40,  -408,   -16,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  2186,  -408,   -26,  2304,    96,  -408,  2304,
    2304,  1439,  2304,    43,  -408,  -408,  2304,  1152,  1829,  1575,
    1950,  -408,  3906,  -408,  -408,   114,   138,   217,   223,     6,
     101,    43,  -408,   -10,   375,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,
      16,    25,   150,    23,   -28,  -408,    86,   235,  -408,  -408,
     125,   175,  -408,   178,  1763,   322,   323,   290,   194,   329,
    -408,  -408,  -408,  -408,  -408,   145,    43,  2304,    57,  2009,
    1505,   270,  4258,     5,   285,  2304,    97,  3938,   280,   296,
     328,  -408,   128,   149,   -28,  -408,  -408,   384,   353,  4296,
     -12,    97,  -408,  1505,  3043,  -408,   307,  -408,   308,  2304,
    2304,   108,   109,   376,  2363,   412,  2770,  2304,  2304,   438,
    -408,  -408,  2563,  2769,   239,  -408,    34,  -408,  2838,   131,
    -408,  -408,  2304,  2304,  2304,  2304,    43,  2304,    43,  2304,
    2304,  2304,  2304,  2304,  2304,  2304,  2304,  2304,  2304,  3199,
    -408,  2245,  2304,  2304,  2068,  2304,  2304,  1763,   455,   228,
     877,    43,   448,  -408,  -408,  -408,  -408,  -408,  1763,  1700,
      43,   332,   399,    43,  -408,   522,   443,  -408,    64,   446,
     449,    43,  -408,    91,  2304,    57,   -28,   366,  3970,  -408,
    -408,   319,   173,  -408,  -408,  1373,  -408,   406,   241,   331,
     509,   206,  1505,  2304,  2304,  2304,  4538,   333,  -408,  -408,
    2304,  -408,   128,  1307,  1439,  2304,   287,   395,  2304,  -408,
    -408,   522,  -408,  2304,  4333,  4002,  2304,  -408,  2304,  -408,
    1505,  1152,   265,   458,   460,  2583,   523,  3691,  3704,  2304,
    -408,  -408,  2304,  1505,  -408,  2304,  2304,   128,  2304,  -408,
    2304,   603,   603,  1027,  1027,  -408,   645,   -28,   645,  4570,
     603,   603,     2,     2,     2,    97,    97,    97,  -408,   262,
    -408,  -408,  3334,   339,   340,   344,   265,   203,   346,  4034,
     407,   298,   414,  -408,   877,  -408,  1052,  -408,    43,  -408,
     462,   350,   110,  -408,  -408,   268,  -408,  -408,   464,   466,
    -408,  -408,  -408,   470,   471,  4066,   351,    43,  -408,  -408,
     144,    57,  -408,   125,   358,   128,  2186,  2304,  1439,  2304,
     118,  1505,  1505,  2304,   128,  2304,  4538,  3764,  4365,  1439,
    4397,  -408,  -408,    17,   359,  1439,   162,  3764,  -408,  2304,
    2304,  2806,  -408,  3250,  -408,  2304,  -408,  4098,  4130,   435,
    3079,  -408,   363,   233,   128,  2304,   479,  -408,  2304,  -408,
    2304,  -408,  3396,  4538,   246,  4434,  -408,  3802,    15,  4538,
    2943,  2304,  -408,  -408,  -408,  -408,  -408,   364,   265,  -408,
    -408,  -408,  -408,  -408,   455,   476,  1213,  -408,  -408,   383,
    -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,  -408,   153,
     -28,  2304,  2770,  1439,  -408,  -408,  -408,   -27,  2127,  4538,
     317,  4538,   482,  2304,  2304,   509,  -408,  3409,   459,  4538,
    -408,  -408,  -408,  2304,   128,   182,  -408,    78,  2304,  -408,
    -408,   177,   128,  2304,  -408,   388,  4538,  2304,  1505,  2304,
    4538,  -408,  -408,  2770,  2770,  2770,   265,  2304,   128,  3468,
    2304,  4162,  4194,  2770,  2304,  -408,  2304,  -408,  2304,   128,
    -408,   433,  -408,   392,  -408,  1763,  -408,  -408,  2304,  2770,
    1439,  3838,   929,   240,  2304,  -408,  2304,  2304,  2304,  3262,
    3111,  2304,  2304,  4538,  2304,  1439,  1439,  -408,  3764,   483,
    1439,  3631,  -408,  4538,   275,  4471,  2603,  2770,  2623,  -408,
    4538,   393,  -408,  2770,  3481,  -408,  -408,  2643,   425,  4226,
    2875,   548,  -408,  -408,   306,  3874,  2424,   274,  2770,  -408,
    -408,  1241,   523,   877,  -408,  3409,  4538,  4538,   398,  2304,
    -408,  4538,  4538,  4506,   128,  -408,  -408,  -408,   128,  2304,
    -408,  2304,  -408,  -408,    -8,  -408,   498,   128,  2663,  -408,
    -408,  -408,  2304,  -408,  2304,  -408,  2770,  -408,  -408,  2468,
     877,  -408,  2683,  -408,  2504,   442,  3543,  2770,  3764,   400,
    2770,   488,  -408,  2304,  -408,  -408,  2975,  2907,  2703,  -408,
    2537,  -408,  -408,  2304,  2304,  -408,  2770,  -408,  -408,  2723,
    2304,  4538,  -408,  2304,  -408,  -408,  -408,  3322,  3146,  -408,
    3556,  3011,  2304,  -408,  2770,  -408,  3618,  2770,  -408
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -408,  -408,   554,  -408,   -31,   -43,  -408,   361,   513,  -408,
    -408,     4,   216,   343,  -316,   221,  -408,   215,   451,    35,
     -35,  -408,  -408,   648,     9,  -103,   362,   257,  -408,  -202,
     367,   543,  -122,  -408,   305,   334,   310,  -408,    66,  -407,
    -145,   154,   335,  -408,   111,  -309,  -408,  -371,   594,  -198,
      -2,   796,  -408,  -408,    24,  -408,   -44,    -7,    28,    74,
       0,   -11,   416
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -286
static const yytype_int16 yytable[] =
{
      28,   107,   129,   159,    20,   331,   143,   181,   266,    59,
     333,   226,   119,   257,   125,    28,   484,   427,   436,    20,
       1,    28,   111,   117,   205,   186,   620,   621,    26,   508,
     265,    31,   109,    59,     3,     4,     3,     4,     3,   254,
     524,   147,   123,    26,   126,   124,   523,     6,   176,    26,
      59,   127,   296,   130,     3,     4,   374,   212,   123,   375,
       1,   124,   109,   128,    28,   146,     3,     4,     3,     4,
     622,   210,    31,   211,    27,   196,   197,    45,   198,   199,
     324,   325,   327,   172,   330,   213,   181,     6,   255,    27,
     206,    12,    26,    12,   115,    27,   116,   479,   509,    31,
     364,   119,    13,   107,    13,   214,   537,    14,   216,    14,
     111,    12,   117,   567,   470,   339,   340,    45,   206,   513,
     186,   121,    13,    12,     1,    12,     2,    14,   243,    59,
     251,     1,     3,     4,    13,   115,    13,   348,    27,    14,
     220,    14,   259,   261,   239,     3,     4,     5,   414,   276,
     278,     6,     1,   267,   146,   217,   471,   159,     6,   462,
     159,   536,   115,     7,   353,     1,   286,   586,   207,   218,
     590,     8,   286,   198,   199,   135,     1,   146,     9,     6,
     123,    10,    11,   124,   109,   208,   277,   279,    45,    12,
     442,   260,     6,   201,   539,   221,   107,   463,   222,   464,
      13,   285,    12,     6,   483,    14,   571,   107,   107,    45,
      28,   451,   234,    13,   298,    61,   299,   202,    14,   385,
     518,   300,    45,   320,   235,   452,   349,   159,   383,   386,
     453,   354,   215,    45,   519,   243,   514,   159,    26,   520,
     352,   223,   362,   123,     1,   267,   124,   637,   261,   534,
     609,     1,   267,     2,   111,   367,   368,   614,   224,     3,
       4,   225,   381,   147,   147,   535,   369,   485,     1,   146,
       2,     6,   262,   373,     5,   403,   146,   231,     6,   232,
     251,   428,    28,   429,    27,   286,   298,   146,   146,   374,
       7,     5,   375,   267,   630,     6,   203,   418,     8,   511,
     497,    45,   204,   573,   146,     9,   334,     7,    10,    11,
      26,   211,   498,   564,   219,     8,    12,   146,   574,   403,
       1,   294,   295,   536,   504,    45,    28,    13,   505,   371,
      31,   526,    14,   460,    28,   458,    28,   610,   123,   228,
     438,   124,   527,   544,   474,   233,   421,     6,   443,   252,
     482,   422,   611,   591,    26,   592,    27,   536,   371,  -255,
     229,   243,    26,   230,    26,   457,    59,   388,   147,   206,
     371,   267,   267,   389,   468,  -259,   433,    45,     1,   147,
       2,   218,   558,   261,   605,   147,   261,   270,   272,   218,
     271,   273,   146,   291,    31,   146,   146,     3,     4,   360,
      27,     5,   361,   146,   457,     6,   578,  -285,    27,   146,
      27,   370,   343,   379,   371,   181,   298,     7,   474,   424,
     425,   403,   271,   298,   426,     8,   430,   298,    28,   271,
     441,   449,   263,   225,   361,    45,    28,   540,   455,   480,
     438,   371,   481,   495,   512,   123,   496,   496,   124,   357,
     262,   358,   286,   147,    12,   280,    26,   115,    59,   116,
     261,   262,   390,   517,    26,    13,   357,     4,   542,   619,
      14,   298,   563,   596,   261,   496,   597,   146,   615,   344,
     638,   298,   261,   298,   365,   474,   366,   522,   267,   403,
     298,   282,   432,   286,   286,   286,    28,   434,   552,   435,
     584,   474,    27,   286,   107,   588,   291,   600,   298,   561,
      27,   323,   146,   365,   328,   493,   298,   289,   562,   286,
     147,   633,   572,   634,    26,   465,   466,   338,   546,   109,
     548,   350,   347,   372,   351,   147,   147,   404,   557,   405,
     147,   296,   440,   515,   146,   532,   286,   286,   286,   444,
      26,   445,    52,   286,   566,   446,   447,   286,   500,   146,
     146,   528,   604,   587,   146,   623,   572,   640,   286,   122,
      27,    28,   337,    28,   209,   438,    52,   454,   356,   132,
     456,   247,   136,   137,   261,   149,   341,   346,   261,   151,
     154,   173,   178,    52,    26,   439,    27,   624,   286,    26,
     416,    26,   585,   612,    60,   392,   286,   549,   394,    28,
      28,     0,   286,   438,    28,   321,     0,   286,   438,     0,
     286,     0,     0,     0,     0,     0,   186,     0,   286,     0,
      28,     0,     0,   557,   438,     0,   286,    26,    26,   286,
      27,   628,    26,     0,     0,    27,     0,    27,    21,     0,
       0,     0,   636,     0,   286,   639,     0,   286,    26,    64,
     104,   110,     0,    21,   182,   183,   184,   185,   186,     0,
     238,     0,    52,   193,   194,   195,   196,   197,     0,   198,
     199,     0,     0,    27,    27,     0,     0,     0,    27,   657,
       0,   150,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,   275,    27,     0,     0,   132,     0,    64,
     287,   288,     0,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,     0,     0,   301,   302,   303,   304,     0,
     306,     0,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,     0,   291,   322,     0,     0,     0,   329,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,   291,   291,   291,
       0,     0,     0,     0,   236,     0,   242,   355,   291,     0,
       0,     0,     0,     0,     0,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,     0,   376,   377,   378,     0,
       0,     0,     0,   380,     0,     0,     0,     0,   387,     0,
     120,   391,     0,     0,     0,     0,   393,     0,     0,   397,
       0,   398,     0,     0,   400,     0,     0,     0,     0,     0,
       0,     0,   412,   291,   305,   413,   307,   120,   415,   417,
       0,   419,     0,   420,     0,     0,     0,     0,     0,   291,
       0,     0,     0,     0,     0,   104,     0,   291,    21,    64,
     291,     0,     0,     0,     0,     0,   104,   104,   342,     0,
       0,   345,     0,     0,     0,     0,     0,     0,   291,     0,
       1,     0,     2,   242,     0,     0,     0,     0,     3,     4,
       0,     0,     0,   363,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     5,     0,     0,     0,     6,     0,    52,
     459,   227,   461,     0,     0,     0,   467,     0,   469,     7,
       0,     0,     0,     0,     0,     0,   120,     8,     0,     0,
       0,     0,     1,   486,     2,     0,     0,    45,   490,     0,
       3,     4,     0,     0,     0,    12,     0,     0,   499,   120,
       0,   501,     0,   502,     0,     5,    13,   160,   161,     6,
       0,    14,     0,     0,     0,     0,   162,     0,   283,     0,
     284,     7,     0,     0,   165,   166,     0,     0,     0,     8,
     167,     0,    21,   168,    21,     0,   236,     0,     0,    45,
       0,     0,     0,   169,   521,     0,     0,    12,     0,     0,
       0,    52,     0,     0,     0,   450,   529,   530,    13,   242,
       0,   570,     0,    14,     0,     0,   533,     0,     0,     0,
       0,   538,     0,     0,   120,     0,   541,     0,     0,   120,
     543,     0,   545,     0,     0,     0,     0,     0,     0,     0,
     550,   120,     0,   554,     0,     0,   182,   183,   120,   559,
     186,   560,     0,     0,     0,     1,     0,     2,     0,   120,
     120,   565,     0,     3,     4,     0,     0,   575,     0,   576,
     577,     0,     0,     0,   581,   582,   120,   583,     5,     0,
       0,     0,     6,     0,    21,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     7,   191,   192,   193,   194,   195,
     196,   197,     8,   198,   199,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
      12,     0,   616,     0,     0,     0,     0,     0,     0,     0,
       0,    13,   618,     0,   437,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,   626,     0,   627,     0,     0,
       0,     0,     0,     0,     0,     1,    29,     2,    30,   109,
      31,     0,    32,   104,   120,     0,   641,   120,   120,     0,
      21,     0,     0,     0,     0,   120,   647,   648,     5,     0,
       0,   120,     6,   650,     0,     0,   651,     0,     0,     0,
      34,   131,     0,    36,     7,   656,     0,     0,     0,    37,
      38,    39,     8,     0,    41,    42,     0,    43,     0,     0,
       0,    44,    45,     0,    21,     0,     1,     0,     2,    21,
       0,    21,     0,    46,     3,     4,     0,     0,     0,     0,
       0,    47,   152,    48,     0,     0,    49,     0,     0,     5,
       0,   153,     0,     6,     1,     0,     2,     0,     0,   120,
       0,     0,     3,     4,     0,     7,     0,    21,    21,     0,
       0,     0,    21,     8,     0,     0,     0,     5,     0,     0,
       0,     6,     0,    45,     0,     0,     0,     0,    21,     0,
       0,    12,     0,     7,   120,     0,     0,     0,     0,     0,
       0,     8,    13,     0,     0,   516,     0,    14,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,    12,
     138,    29,     0,     0,   109,    31,   120,     0,     3,     4,
      13,     0,     0,   613,     0,    14,     0,     0,     0,     0,
       0,   120,   120,    66,     0,    67,   120,   139,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,    79,
      80,    81,     0,    82,    83,    84,    85,    86,    87,    88,
       0,    89,    90,    91,    92,     0,    93,   140,    95,    96,
      97,    98,    99,     0,     0,    12,   138,    29,   115,     0,
     109,    31,     0,     0,     3,     4,    13,   382,     0,     0,
       0,    14,     0,     0,   141,   142,     0,     0,     0,    66,
       0,    67,     0,   139,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,    80,    81,     0,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,     0,    93,   140,    95,    96,    97,    98,    99,     0,
       0,    12,   138,    29,   115,     0,     0,    31,     0,     0,
       3,     4,   245,     0,     0,     0,     0,    14,     0,     0,
     141,   142,     0,     0,     0,    66,     0,    67,     0,   139,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,    80,    81,     0,    82,    83,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,     0,    93,   140,
      95,    96,    97,    98,    99,     0,     0,    12,   138,    29,
     115,     0,     0,    31,     0,     0,     3,     4,    13,     0,
       0,     0,     0,    14,     0,     0,   141,   142,     0,     0,
       0,    66,     0,    67,     0,   139,    69,    70,    71,    72,
      73,    74,    75,    76,    77,     0,    78,    79,    80,    81,
       0,    82,    83,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,     0,    93,   140,    95,    96,    97,    98,
      99,     0,     0,    12,     0,     0,   115,     0,     1,    29,
       2,    30,     0,    31,   245,    32,     0,     0,     0,    14,
       0,     0,   141,   142,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    34,   131,     0,    36,     7,     0,     0,
       0,     0,    37,    38,    39,     8,     0,    41,    42,     0,
      43,     0,     0,     0,    44,    45,     0,     0,     0,    65,
       0,     0,     0,     0,     0,     0,    46,     3,     4,     0,
       0,     0,     0,     0,    47,     0,    48,     0,     0,    49,
     177,     0,    66,     0,    67,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,    78,    79,    80,
      81,     0,    82,    83,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,     0,    93,    94,    95,    96,    97,
      98,    99,     0,    65,    12,     0,   100,   109,     0,     0,
       0,     3,     4,     0,     0,   101,     0,   102,     0,     0,
     103,     0,     0,     0,     0,     0,    66,     0,    67,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    78,    79,    80,    81,     0,    82,    83,    84,    85,
      86,    87,    88,     0,    89,    90,    91,    92,     0,    93,
      94,    95,    96,    97,    98,    99,    65,     0,    12,     0,
       0,     0,     0,     0,     3,     4,     0,     0,     0,   101,
       0,   102,     0,     0,   103,     0,     0,     0,     0,    66,
       0,    67,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78,    79,    80,    81,     0,    82,
      83,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,     0,    93,    94,    95,    96,    97,    98,    99,     0,
       0,    12,     1,    29,     2,    30,     0,    31,     0,    32,
       0,     0,   101,     0,   102,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     5,     0,   160,   161,     6,
       0,     0,     0,     0,     0,     0,   162,    34,   163,     0,
     164,     7,     0,     0,   165,   166,    37,    38,    39,     8,
     167,    41,    42,   168,    43,     0,     0,     0,    44,    45,
       0,     0,     0,   169,     1,    29,     2,    30,     0,    31,
      46,    32,     0,     0,     0,     0,     0,     0,    47,     0,
      48,   170,     0,    49,     0,     0,     0,     5,     0,     0,
       0,     6,     0,    33,     0,     0,     0,     0,     0,    34,
      35,     0,    36,     7,     0,     0,     0,     0,    37,    38,
      39,     8,    40,    41,    42,     0,    43,     0,     0,     0,
      44,    45,     0,     1,    29,     2,    30,     0,    31,     0,
      32,     0,    46,     0,     0,     0,     0,     0,     0,     0,
      47,     0,    48,     0,     0,    49,     5,     0,     0,     0,
       6,     0,     0,     0,     0,     0,   180,     0,    34,    35,
       0,    36,     7,     0,     0,     0,     0,    37,    38,    39,
       8,    40,    41,    42,     0,    43,     0,     0,     0,    44,
      45,     0,     1,    29,     2,    30,     0,    31,     0,    32,
       0,    46,     0,     0,     0,     0,     0,     0,     0,    47,
       0,    48,     0,     0,    49,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,   244,     0,    34,    35,     0,
      36,     7,     0,     0,     0,     0,    37,    38,    39,     8,
      40,    41,    42,     0,    43,     0,     0,     0,    44,    45,
       0,     1,    29,     2,    30,   109,    31,     0,    32,     0,
      46,     0,     0,     0,     0,     0,     0,     0,    47,     0,
      48,     0,     0,    49,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,    34,   131,     0,    36,
       7,     0,     0,     0,     0,    37,    38,    39,     8,     0,
      41,    42,     0,    43,     0,     0,     0,    44,    45,     0,
       1,    29,     2,    30,     0,    31,     0,    32,     0,    46,
       0,     0,     0,     0,     0,     0,   326,    47,     0,    48,
       0,     0,    49,     5,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,    36,     7,
       0,     0,     0,     0,    37,    38,    39,     8,    40,    41,
      42,     0,    43,     0,     0,     0,    44,    45,     0,     1,
      29,     2,    30,     0,    31,     0,    32,     0,    46,     0,
       0,     0,     0,     0,     0,   525,    47,     0,    48,     0,
       0,    49,     5,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,    36,     7,     0,
       0,     0,     0,    37,    38,    39,     8,    40,    41,    42,
       0,    43,     0,     0,     0,    44,    45,     0,     1,    29,
       2,    30,   109,    31,     0,    32,     0,    46,     0,     0,
       0,     0,     0,     0,     0,    47,     0,    48,     0,     0,
      49,     5,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,    34,   131,     0,    36,     7,     0,     0,
       0,     0,    37,    38,    39,     8,     0,    41,    42,     0,
      43,     0,     0,     0,    44,    45,     0,     1,    29,     2,
      30,     0,    31,     0,    32,     0,    46,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    48,     0,     0,    49,
       5,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,    34,   131,     0,    36,     7,     0,     0,     0,
       0,    37,    38,    39,     8,     0,    41,    42,     0,    43,
       0,     0,     0,    44,    45,     0,     1,    29,     2,    30,
       0,    31,     0,    32,     0,    46,     0,     0,     0,     0,
       0,     0,     0,    47,     0,    48,     0,     0,    49,     5,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,    34,   131,     0,    36,     7,     0,     0,     0,     0,
      37,    38,    39,     8,     0,    41,    42,     0,    43,     0,
       0,     0,    44,    45,     0,     0,     0,     1,     0,     2,
       0,     0,     0,     0,    46,     3,     4,     0,     0,     0,
       0,     0,   281,     0,    48,     0,     0,    49,     0,     0,
       5,     0,   160,   161,     6,     0,     0,     0,     0,     0,
       0,   162,     0,   283,     0,   284,     7,     0,     0,   165,
     166,     1,     0,     2,     8,   167,     0,     0,   168,     3,
       4,     0,     0,     0,    45,     0,     0,     0,   169,     0,
       0,     0,    12,     0,     5,     0,     0,     0,     6,     0,
       0,     0,     0,    13,     0,     0,   608,     1,    14,     2,
       7,     0,     0,     0,     0,     3,     4,     0,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       5,     0,     0,     0,     6,     0,    12,     0,     0,     0,
       1,     0,     2,     0,     0,     0,     7,    13,     3,     4,
     629,     0,    14,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     5,    45,     0,     1,     6,     0,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     7,
       0,     0,   632,    13,     0,     0,     1,     8,    14,     0,
       0,   160,   161,     6,     0,     0,     0,    45,     0,     0,
     162,     0,   283,     0,   284,    12,     1,     0,   165,   166,
       0,   160,   161,     6,   167,   646,    13,   168,     0,     0,
     162,    14,   283,    45,   284,     0,     1,   169,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,     0,   283,    45,   284,   290,     1,   406,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,   407,   283,    45,   284,     0,     1,   169,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,   593,   283,    45,   284,     0,     1,   169,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,   595,   283,    45,   284,     0,     1,   169,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,   599,   283,    45,   284,     0,     1,   169,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,   625,   283,    45,   284,     0,     0,   169,   165,   166,
       0,   160,   161,     6,   167,     0,     0,   168,     0,     0,
     162,   631,   283,    45,   284,     0,     0,   169,   165,   166,
       0,     0,     0,     1,   167,     0,     0,   168,     0,     0,
       0,   645,     0,    45,     0,     0,     0,   169,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,   160,   161,
       6,   649,     0,     0,     0,     0,     0,   162,     0,   283,
     292,   284,   188,     0,     0,   165,   166,     0,     0,   189,
       0,   167,     0,     0,   168,   182,   183,   184,   185,   186,
      45,     0,   187,     0,   169,   190,     0,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,   487,     0,   188,
       0,     0,     0,     0,     0,   293,   189,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,     0,     0,     0,     0,   189,     0,
       0,     0,   488,     0,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,     0,     0,   188,     0,
       0,     0,     0,     0,   297,   189,   182,   183,   184,   185,
     186,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
     188,   198,   199,     0,     0,     0,     0,   189,   602,     0,
     603,     0,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,   190,     0,   191,   192,   193,   194,   195,
     196,   197,     0,   198,   199,     0,   188,     0,     0,     0,
     643,     0,   644,   189,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,   188,   198,
     199,     0,     0,     0,     0,   189,     0,     0,   510,     0,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
       0,   198,   199,     0,   188,     0,     0,     0,   268,     0,
     642,   189,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,   188,   198,   199,     0,
       0,     0,     0,   189,   268,     0,   655,     0,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,     0,   198,
     199,     0,   188,   269,     0,     0,     0,     0,     0,   189,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,   190,     0,   191,   192,   193,
     194,   195,   196,   197,   188,   198,   199,     0,     0,   494,
       0,   189,     0,     0,     0,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,   188,
       0,     0,     0,   580,     0,     0,   189,     0,     0,     0,
       0,     0,   318,    29,     0,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,     0,   198,   199,     0,    66,     0,    67,   653,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
      78,    79,    80,    81,     0,    82,    83,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,     0,    93,    94,
      95,    96,    97,    98,    99,   489,     0,     0,     0,   182,
     183,   184,   185,   186,     0,     0,   187,   579,     0,     0,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,     0,   188,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,   191,   192,
     193,   194,   195,   196,   197,     0,   198,   199,   190,     0,
     191,   192,   193,   194,   195,   196,   197,   652,   198,   199,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,     0,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,     0,   188,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
     190,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,     0,     0,   423,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,   531,     0,     0,   182,   183,
     184,   185,   186,     0,     0,   187,     0,     0,     0,   188,
       0,     0,     0,     0,     0,     0,   189,     0,     0,     0,
       0,     0,   188,     0,     0,     0,     0,     0,     0,   189,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,     0,   198,   199,     0,   190,   503,   191,   192,   193,
     194,   195,   196,   197,     0,   198,   199,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,   188,     0,     0,     0,     0,     0,     0,   189,     0,
       0,     0,     0,     0,   188,     0,     0,     0,     0,     0,
       0,   189,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,     0,   190,   553,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,     0,
       0,   598,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,     0,     0,     0,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,   188,     0,     0,     0,
       0,     0,     0,   189,     0,     0,     0,     0,     0,   188,
       0,     0,     0,     0,     0,     0,   189,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,     0,   198,
     199,     0,   190,   635,   191,   192,   193,   194,   195,   196,
     197,     0,   198,   199,     0,     0,   654,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,   188,     0,     0,     0,     0,     0,   470,   189,     0,
       0,     0,   589,     0,   188,     0,     0,     0,     0,     0,
       0,   189,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,     0,   190,   658,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,   471,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
       0,     0,     0,   182,   183,   184,   185,   186,     0,     0,
     187,     0,   408,     0,   188,     0,     0,     0,     0,     0,
       0,   189,     0,     0,     0,   410,     0,   188,     0,     0,
       0,     0,     0,     0,   189,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,   409,
     190,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,   411,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     470,     0,     0,     0,     0,     0,     0,   188,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,     0,     0,
       0,   182,   183,   184,   185,   186,     0,     0,   187,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,   471,   506,     0,   188,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,     0,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,     0,   198,   199,
     507,   188,     0,   568,     0,     0,     0,     0,   189,     0,
       0,     0,     0,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,   569,   188,     0,   606,
       0,     0,     0,     0,   189,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,   188,
     198,   199,   607,     0,     0,     0,   189,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,   200,     0,     0,     0,   189,   182,
     183,   184,   185,   186,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,   188,   198,   199,   258,     0,     0,     0,
     189,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,   190,     0,   191,   192,
     193,   194,   195,   196,   197,   188,   198,   199,   359,     0,
       0,     0,   189,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,   188,   198,   199,
     396,     0,     0,     0,   189,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,   188,
     198,   199,   431,     0,     0,     0,   189,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,   448,     0,     0,     0,   189,   182,
     183,   184,   185,   186,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,   188,   198,   199,   491,     0,     0,     0,
     189,   182,   183,   184,   185,   186,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,   190,     0,   191,   192,
     193,   194,   195,   196,   197,   188,   198,   199,   492,     0,
       0,     0,   189,   182,   183,   184,   185,   186,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,   190,     0,
     191,   192,   193,   194,   195,   196,   197,   188,   198,   199,
     555,     0,     0,     0,   189,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,   188,
     198,   199,   556,     0,     0,     0,   189,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,   601,     0,     0,     0,   189,     0,
       0,     0,     0,     0,   253,   182,   183,   184,   185,   186,
       0,     0,   187,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,   264,     0,     0,   188,
       0,     0,     0,     0,     0,     0,   189,     0,     0,     0,
       0,     0,   182,   183,   184,   185,   186,     0,     0,   187,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,     0,   198,   199,   395,     0,   188,     0,     0,     0,
       0,     0,     0,   189,   182,   183,   184,   185,   186,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,   190,
       0,   191,   192,   193,   194,   195,   196,   197,   188,   198,
     199,     0,     0,     0,     0,   189,   182,   183,   184,   185,
     186,   473,     0,   187,     0,     0,     0,     0,     0,     0,
       0,   190,     0,   191,   192,   193,   194,   195,   196,   197,
     188,   198,   199,     0,     0,     0,     0,   189,     0,     0,
       0,     0,     0,   182,   183,   184,   185,   186,     0,     0,
     187,     0,   478,   190,     0,   191,   192,   193,   194,   195,
     196,   197,     0,   198,   199,   292,     0,   188,     0,     0,
       0,     0,     0,     0,   189,     0,     0,     0,     0,     0,
     182,   183,   184,   185,   186,     0,     0,   187,     0,     0,
     190,     0,   191,   192,   193,   194,   195,   196,   197,     0,
     198,   199,   487,     0,   188,     0,     0,     0,     0,     0,
       0,   189,     0,     0,     0,   182,   183,   184,   185,   186,
       0,     0,   187,     0,     0,     0,     0,   190,     0,   191,
     192,   193,   194,   195,   196,   197,     0,   198,   199,   188,
       0,   617,     0,     0,     0,     0,   189,   182,   183,   184,
     185,   186,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,   190,     0,   191,   192,   193,   194,   195,   196,
     197,   188,   198,   199,     0,     0,     0,     0,   189,   182,
     183,   184,   185,   186,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,   190,     0,   191,   192,   193,   194,
     195,   196,   197,     0,   198,   199,     0,     0,     0,     0,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -286,     0,   191,   192,
     193,   194,   195,   196,   197,     0,   198,   199
};

static const yytype_int16 yycheck[] =
{
       0,    12,    33,    47,     0,   207,    41,    50,   153,     9,
     208,   114,    14,   135,    21,    15,   387,   326,   334,    15,
       3,    21,    13,    14,    18,    23,    34,    35,     0,    14,
      42,     8,     7,    33,    11,    12,    11,    12,    11,    34,
      67,    41,    70,    15,    84,    73,   453,    30,    48,    21,
      50,    67,    18,    79,    11,    12,    83,    64,    70,    86,
       3,    73,     7,    79,    64,    41,    11,    12,    11,    12,
      78,    81,     8,    83,     0,    73,    74,    60,    76,    77,
     202,   203,   204,    48,   206,    69,   129,    30,    83,    15,
      84,    68,    64,    68,    71,    21,    73,    80,    83,     8,
     245,   103,    79,   114,    79,    80,   477,    84,    85,    84,
     101,    68,   103,   520,    36,   218,   219,    60,    84,   428,
      23,     0,    79,    68,     3,    68,     5,    84,   128,   129,
     130,     3,    11,    12,    79,    71,    79,    73,    64,    84,
      15,    84,   142,   143,    87,    11,    12,    26,   293,    41,
      41,    30,     3,   153,   130,    69,    78,   201,    30,    41,
     204,    83,    71,    42,    73,     3,   166,   538,    67,    83,
     541,    50,   172,    76,    77,    79,     3,   153,    57,    30,
      70,    60,    61,    73,     7,    84,    78,    78,    60,    68,
      80,    42,    30,    79,    17,    70,   207,    79,    73,    81,
      79,   166,    68,    30,    42,    84,   522,   218,   219,    60,
     210,    67,    67,    79,    83,    81,    85,    79,    84,   263,
      67,    90,    60,   199,    79,    81,   228,   271,   263,   264,
      86,   233,    82,    60,    81,   235,   434,   281,   210,    86,
     231,    66,   242,    70,     3,   245,    73,   618,   248,    67,
     566,     3,   252,     5,   245,    14,    15,   573,    80,    11,
      12,    83,   262,   263,   264,    83,    25,   389,     3,   245,
       5,    30,    66,    67,    26,   282,   252,    83,    30,    85,
     280,    78,   282,    80,   210,   285,    83,   263,   264,    83,
      42,    26,    86,   293,   610,    30,    79,   297,    50,   421,
      67,    60,    79,    63,   280,    57,    78,    42,    60,    61,
     282,    83,    79,   515,    79,    50,    68,   293,    78,   326,
       3,    82,    83,    83,    78,    60,   326,    79,    82,    83,
       8,    14,    84,   368,   334,   366,   336,    63,    70,    16,
     336,    73,    25,   488,   379,    16,    84,    30,    80,    79,
     385,    89,    78,    78,   326,    80,   282,    83,    83,    79,
      70,   361,   334,    73,   336,   365,   366,    80,   368,    84,
      83,   371,   372,    86,   374,    79,    78,    60,     3,   379,
       5,    83,   504,   383,    78,   385,   386,    80,    80,    83,
      83,    83,   368,   172,     8,   371,   372,    11,    12,    80,
     326,    26,    83,   379,   404,    30,   528,    79,   334,   385,
     336,    80,    80,    80,    83,   458,    83,    42,   453,    80,
      80,   428,    83,    83,    80,    50,    80,    83,   428,    83,
      80,    80,    79,    83,    83,    60,   436,   481,    80,    80,
     436,    83,    83,    80,    80,    70,    83,    83,    73,    83,
      66,    85,   452,   453,    68,    79,   428,    71,   458,    73,
     460,    66,    67,    80,   436,    79,    83,    12,    80,   591,
      84,    83,    80,    80,   474,    83,    83,   453,    80,    80,
      80,    83,   482,    83,    78,   520,    80,   452,   488,   496,
      83,    79,    85,   493,   494,   495,   496,    83,   498,    85,
     535,   536,   428,   503,   515,   540,   285,    82,    83,   509,
     436,   201,   488,    78,   204,    80,    83,    79,    85,   519,
     520,    79,   522,    81,   496,   371,   372,    79,   493,     7,
     495,    85,    89,    24,    85,   535,   536,    79,   503,    79,
     540,    18,    80,    67,   520,    86,   546,   547,   548,    85,
     522,    85,     9,   553,   519,    85,    85,   557,    79,   535,
     536,    79,    14,    80,   540,    67,   566,    79,   568,    15,
     496,   571,   211,   573,    61,   571,    33,   361,   235,    36,
     365,   130,    39,    40,   584,    42,   219,   225,   588,    46,
      47,    48,    49,    50,   566,   338,   522,   597,   598,   571,
     295,   573,   536,   568,    10,   271,   606,   496,   273,   609,
     610,    -1,   612,   609,   614,   199,    -1,   617,   614,    -1,
     620,    -1,    -1,    -1,    -1,    -1,    23,    -1,   628,    -1,
     630,    -1,    -1,   598,   630,    -1,   636,   609,   610,   639,
     566,   606,   614,    -1,    -1,   571,    -1,   573,     0,    -1,
      -1,    -1,   617,    -1,   654,   620,    -1,   657,   630,    11,
      12,    13,    -1,    15,    19,    20,    21,    22,    23,    -1,
     127,    -1,   129,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    -1,   609,   610,    -1,    -1,    -1,   614,   654,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   160,   630,    -1,    -1,   164,    -1,    61,
     167,   168,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    -1,   182,   183,   184,   185,    -1,
     187,    -1,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,    -1,   522,   201,    -1,    -1,    -1,   205,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,   546,   547,   548,
      -1,    -1,    -1,    -1,   126,    -1,   128,   234,   557,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   566,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,   255,    -1,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,   265,    -1,
      14,   268,    -1,    -1,    -1,    -1,   273,    -1,    -1,   276,
      -1,   278,    -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   289,   612,   186,   292,   188,    41,   295,   296,
      -1,   298,    -1,   300,    -1,    -1,    -1,    -1,    -1,   628,
      -1,    -1,    -1,    -1,    -1,   207,    -1,   636,   210,   211,
     639,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,   657,    -1,
       3,    -1,     5,   235,    -1,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,   366,
     367,   115,   369,    -1,    -1,    -1,   373,    -1,   375,    42,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    50,    -1,    -1,
      -1,    -1,     3,   390,     5,    -1,    -1,    60,   395,    -1,
      11,    12,    -1,    -1,    -1,    68,    -1,    -1,   405,   153,
      -1,   408,    -1,   410,    -1,    26,    79,    28,    29,    30,
      -1,    84,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,    50,
      51,    -1,   334,    54,   336,    -1,   338,    -1,    -1,    60,
      -1,    -1,    -1,    64,   451,    -1,    -1,    68,    -1,    -1,
      -1,   458,    -1,    -1,    -1,   357,   463,   464,    79,   361,
      -1,    82,    -1,    84,    -1,    -1,   473,    -1,    -1,    -1,
      -1,   478,    -1,    -1,   228,    -1,   483,    -1,    -1,   233,
     487,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     497,   245,    -1,   500,    -1,    -1,    19,    20,   252,   506,
      23,   508,    -1,    -1,    -1,     3,    -1,     5,    -1,   263,
     264,   518,    -1,    11,    12,    -1,    -1,   524,    -1,   526,
     527,    -1,    -1,    -1,   531,   532,   280,   534,    26,    -1,
      -1,    -1,    30,    -1,   436,    -1,    -1,    -1,    -1,   293,
      -1,    -1,    -1,    -1,    42,    68,    69,    70,    71,    72,
      73,    74,    50,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,   579,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,   589,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   602,    -1,   604,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,   515,   368,    -1,   623,   371,   372,    -1,
     522,    -1,    -1,    -1,    -1,   379,   633,   634,    26,    -1,
      -1,   385,    30,   640,    -1,    -1,   643,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,   652,    -1,    -1,    -1,    47,
      48,    49,    50,    -1,    52,    53,    -1,    55,    -1,    -1,
      -1,    59,    60,    -1,   566,    -1,     3,    -1,     5,   571,
      -1,   573,    -1,    71,    11,    12,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    -1,    -1,    84,    -1,    -1,    26,
      -1,    89,    -1,    30,     3,    -1,     5,    -1,    -1,   453,
      -1,    -1,    11,    12,    -1,    42,    -1,   609,   610,    -1,
      -1,    -1,   614,    50,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    -1,    60,    -1,    -1,    -1,    -1,   630,    -1,
      -1,    68,    -1,    42,   488,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    79,    -1,    -1,    82,    -1,    84,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
       3,     4,    -1,    -1,     7,     8,   520,    -1,    11,    12,
      79,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,   535,   536,    26,    -1,    28,   540,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    44,    -1,    46,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    -1,    68,     3,     4,    71,    -1,
       7,     8,    -1,    -1,    11,    12,    79,    80,    -1,    -1,
      -1,    84,    -1,    -1,    87,    88,    -1,    -1,    -1,    26,
      -1,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    46,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    56,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,     3,     4,    71,    -1,    -1,     8,    -1,    -1,
      11,    12,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    -1,    -1,    -1,    26,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    68,     3,     4,
      71,    -1,    -1,     8,    -1,    -1,    11,    12,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,
      -1,    26,    -1,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    46,    47,    48,    49,    50,    51,    52,    -1,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    -1,    68,    -1,    -1,    71,    -1,     3,     4,
       5,     6,    -1,     8,    79,    10,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    -1,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    11,    12,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,
      85,    -1,    26,    -1,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    56,    57,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,     3,    68,    -1,    70,     7,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,
      41,    42,    -1,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    64,     3,     4,     5,     6,    -1,     8,
      71,    10,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    82,    -1,    84,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    38,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    -1,    -1,    84,    26,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    81,    -1,    -1,    84,    26,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      81,    -1,    -1,    84,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    47,    48,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    81,
      -1,    -1,    84,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    81,    -1,
      -1,    84,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,
      84,    26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    47,    48,    49,    50,    -1,    52,    53,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    47,    48,    49,    50,    -1,    52,    53,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    81,    -1,    -1,    84,    26,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    52,    53,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    71,    11,    12,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    -1,    -1,    84,    -1,    -1,
      26,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    45,
      46,     3,    -1,     5,    50,    51,    -1,    -1,    54,    11,
      12,    -1,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    -1,    26,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    82,     3,    84,     5,
      42,    -1,    -1,    -1,    -1,    11,    12,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      26,    -1,    -1,    -1,    30,    -1,    68,    -1,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    42,    79,    11,    12,
      82,    -1,    84,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    60,    -1,     3,    30,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    78,    79,    -1,    -1,     3,    50,    84,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    60,    -1,    -1,
      37,    -1,    39,    -1,    41,    68,     3,    -1,    45,    46,
      -1,    28,    29,    30,    51,    78,    79,    54,    -1,    -1,
      37,    84,    39,    60,    41,    -1,     3,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    -1,    39,    60,    41,    82,     3,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    78,    39,    60,    41,    -1,     3,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    78,    39,    60,    41,    -1,     3,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    78,    39,    60,    41,    -1,     3,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    78,    39,    60,    41,    -1,     3,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    78,    39,    60,    41,    -1,    -1,    64,    45,    46,
      -1,    28,    29,    30,    51,    -1,    -1,    54,    -1,    -1,
      37,    78,    39,    60,    41,    -1,    -1,    64,    45,    46,
      -1,    -1,    -1,     3,    51,    -1,    -1,    54,    -1,    -1,
      -1,    78,    -1,    60,    -1,    -1,    -1,    64,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    28,    29,
      30,    78,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      41,    41,    43,    -1,    -1,    45,    46,    -1,    -1,    50,
      -1,    51,    -1,    -1,    54,    19,    20,    21,    22,    23,
      60,    -1,    26,    -1,    64,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    41,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    86,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    86,    -1,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    86,    50,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      43,    76,    77,    -1,    -1,    -1,    -1,    50,    83,    -1,
      85,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    -1,    43,    -1,    -1,    -1,
      83,    -1,    85,    50,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    43,    76,
      77,    -1,    -1,    -1,    -1,    50,    -1,    -1,    85,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    -1,    43,    -1,    -1,    -1,    15,    -1,
      85,    50,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    43,    76,    77,    -1,
      -1,    -1,    -1,    50,    15,    -1,    85,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    43,    80,    -1,    -1,    -1,    -1,    -1,    50,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
      71,    72,    73,    74,    43,    76,    77,    -1,    -1,    80,
      -1,    50,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    43,
      -1,    -1,    -1,    82,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    26,    -1,    28,    82,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    56,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    -1,    26,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    15,    76,    77,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    -1,    -1,    80,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    16,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    66,    80,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    66,    80,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    -1,
      -1,    80,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      77,    -1,    66,    80,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    -1,    80,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    36,    50,    -1,
      -1,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    66,    80,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    78,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    78,    41,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    77,
      78,    43,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    78,    43,    -1,    45,
      -1,    -1,    -1,    -1,    50,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    43,
      76,    77,    78,    -1,    -1,    -1,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    78,    -1,    -1,    -1,    50,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    43,    76,    77,    78,    -1,    -1,    -1,
      50,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    43,    76,    77,    78,    -1,
      -1,    -1,    50,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    43,    76,    77,
      78,    -1,    -1,    -1,    50,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    43,
      76,    77,    78,    -1,    -1,    -1,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    78,    -1,    -1,    -1,    50,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    43,    76,    77,    78,    -1,    -1,    -1,
      50,    19,    20,    21,    22,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    43,    76,    77,    78,    -1,
      -1,    -1,    50,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    71,    72,    73,    74,    43,    76,    77,
      78,    -1,    -1,    -1,    50,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    43,
      76,    77,    78,    -1,    -1,    -1,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    78,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,    26,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    41,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    19,    20,    21,    22,    23,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    68,    69,    70,    71,    72,    73,    74,    43,    76,
      77,    -1,    -1,    -1,    -1,    50,    19,    20,    21,    22,
      23,    56,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    68,    69,    70,    71,    72,    73,    74,
      43,    76,    77,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    -1,
      26,    -1,    65,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    77,    41,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,
      66,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    77,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    19,    20,    21,    22,    23,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    77,    43,
      -1,    45,    -1,    -1,    -1,    -1,    50,    19,    20,    21,
      22,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    71,    72,    73,
      74,    43,    76,    77,    -1,    -1,    -1,    -1,    50,    19,
      20,    21,    22,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,
      72,    73,    74,    -1,    76,    77,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    76,    77
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
      70,    79,    81,    84,   114,   116,   120,   152,   153,     7,
     114,   115,   117,   121,   147,    71,    73,   115,   119,   141,
     142,     0,    93,    70,    73,   148,    84,    67,    79,    95,
      79,    39,   122,   128,   151,    79,   122,   122,     3,    30,
      60,    87,    88,   111,   114,   141,   145,   151,   152,   122,
     114,   122,    80,    89,   122,   126,   127,   133,   134,   147,
      28,    29,    37,    39,    41,    45,    46,    51,    54,    64,
      82,   106,   110,   122,   124,   125,   151,    85,   122,   123,
      36,    96,    19,    20,    21,    22,    23,    26,    43,    50,
      66,    68,    69,    70,    71,    72,    73,    74,    76,    77,
      78,    79,    79,    79,    79,    18,    84,    67,    84,    99,
      81,    83,   148,    69,    80,    82,    85,    69,    83,    79,
      15,    70,    73,    66,    80,    83,   116,   142,    16,    70,
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
     116,   121,   114,    80,    80,   114,   117,    89,    73,   141,
      85,    85,   115,    73,   141,   122,   104,    83,    85,    78,
      80,    83,   151,   114,   131,    78,    80,    14,    15,    25,
      80,    83,    24,    67,    83,    86,   122,   122,   122,    80,
     122,   151,    80,   111,   112,   147,   111,   122,    80,    86,
      67,   122,   126,   122,   133,    41,    78,   122,   122,   109,
     122,   135,   136,   148,    79,    79,    64,    78,    41,    78,
      41,    78,   122,   122,   131,   122,   125,   122,   151,   122,
     122,    84,    89,    80,    80,    80,    80,   136,    78,    80,
      80,    78,    85,    78,    83,    85,   105,    82,   102,   118,
      80,    80,    80,    80,    85,    85,    85,    85,    78,    80,
     114,    67,    81,    86,   103,    80,   108,   151,    95,   122,
     111,   122,    41,    79,    81,   132,   132,   122,   151,   122,
      36,    78,   138,    56,   111,   113,   129,   130,    65,    80,
      80,    83,   111,    42,   138,   123,   122,    41,    86,    15,
     122,    78,    78,    80,    80,    80,    83,    67,    79,   122,
      79,   122,   122,    80,    78,    82,    41,    78,    14,    83,
      85,   123,    80,   136,   140,    67,    82,    80,    67,    81,
      86,   122,   110,   130,    67,    78,    14,    25,    79,   122,
     122,    16,    86,   122,    67,    83,    83,   138,   122,    17,
     147,   122,    80,   122,   131,   122,   110,   110,   110,   135,
     122,   137,   151,    80,   122,    78,    78,   110,   123,   122,
     122,   151,    85,    80,   120,   122,   110,   130,    45,    78,
      82,   105,   151,    63,    78,   122,   122,   122,   123,    15,
      82,   122,   122,   122,   111,   129,   138,    80,   111,    41,
     138,    78,    80,    78,   107,    78,    80,    83,    80,    78,
      82,    78,    83,    85,    14,    78,    45,    78,    82,   105,
      63,    78,   110,    82,   105,    80,   122,    45,   122,   123,
      34,    35,    78,    67,   151,    78,   122,   122,   110,    82,
     105,    78,    78,    79,    81,    80,   110,   138,    80,   110,
      79,   122,    85,    83,    85,    78,    78,   122,   122,    78,
     122,   122,    15,    82,    80,    85,   122,   110,    80
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
    {(yyval) = mk_type_symb();                             ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 329 "amber.yy"
    {(yyval) = mk_type_int();                              ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 330 "amber.yy"
    {(yyval) = mk_type_low_bounded_int((yyvsp[(2) - (5)]));                ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 331 "amber.yy"
    {(yyval) = mk_type_up_bounded_int((yyvsp[(4) - (5)]));                 ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 332 "amber.yy"
    {(yyval) = mk_type_bounded_int((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 334 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 335 "amber.yy"
    {(yyval) = mk_type_seq((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 336 "amber.yy"
    {(yyval) = mk_type_fixed_seq((yyvsp[(2) - (3)]));                      ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 338 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), false);                     ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 339 "amber.yy"
    {(yyval) = mk_type_set((yyvsp[(2) - (4)]), true);                      ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 341 "amber.yy"
    {(yyval) = mk_type_map((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 342 "amber.yy"
    {(yyval) = mk_type_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 344 "amber.yy"
    {(yyval) = mk_type_tagged_obj((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                 ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 348 "amber.yy"
    {(yyval) = mk_pretype_type((yyvsp[(1) - (1)]));                        ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 349 "amber.yy"
    {(yyval) = mk_pretype_empty_set();                     ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 350 "amber.yy"
    {(yyval) = mk_pretype_empty_seq();                     ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 351 "amber.yy"
    {(yyval) = mk_pretype_empty_map();                     ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 352 "amber.yy"
    {(yyval) = mk_pretype_sing((yyvsp[(1) - (1)]));                        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 353 "amber.yy"
    {(yyval) = mk_pretype_tagged_obj((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));              ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 354 "amber.yy"
    {(yyval) = mk_pretype_tagged_tuple((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));            ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 358 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), false);                  ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 359 "amber.yy"
    {(yyval) = mk_labtype((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), true);                   ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 363 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 364 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 368 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 369 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 373 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 374 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 378 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 379 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 385 "amber.yy"
    {(yyval) = mk_expr_num((yyvsp[(1) - (1)]));                            ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 386 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 387 "amber.yy"
    {(yyval) = mk_expr_str((yyvsp[(1) - (1)]));                            ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 389 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 390 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 391 "amber.yy"
    {(yyval) = mk_expr_ctor((yyvsp[(1) - (1)]));                           ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 393 "amber.yy"
    {(yyval) = mk_expr_set(mk_seq_empty());                ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 394 "amber.yy"
    {(yyval) = mk_expr_set((yyvsp[(2) - (3)]));                            ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 396 "amber.yy"
    {(yyval) = mk_expr_map(mk_seq_empty());                ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 397 "amber.yy"
    {(yyval) = mk_expr_map((yyvsp[(2) - (3)]));                            ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 398 "amber.yy"
    {(yyval) = mk_expr_tuple((yyvsp[(2) - (3)]));                          ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 400 "amber.yy"
    {(yyval) = mk_expr_seq(mk_seq_empty());                ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 401 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (3)]));                            ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 402 "amber.yy"
    {(yyval) = mk_expr_seq((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 404 "amber.yy"
    {(yyval) = mk_expr_tag_obj((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 405 "amber.yy"
    {(yyval) = mk_expr_tag_obj(mk_expr_ctor((yyvsp[(1) - (4)])), (yyvsp[(3) - (4)]));      ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 407 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 408 "amber.yy"
    {(yyval) = mk_expr_tag_map((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 413 "amber.yy"
    {(yyval) = mk_expr_const_or_var((yyvsp[(1) - (1)]));                   ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 414 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 415 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_fn_call((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)])), (yyvsp[(5) - (6)])); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 416 "amber.yy"
    {(yyval) = mk_expr_where(mk_expr_const_or_var((yyvsp[(1) - (5)])), (yyvsp[(4) - (5)]));;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 417 "amber.yy"
    {(yyval) = mk_expr_fn_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                    ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 418 "amber.yy"
    {(yyval) = mk_expr_builtin_call((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 420 "amber.yy"
    {(yyval) = (yyvsp[(2) - (3)]);                                         ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 422 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                         ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 424 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 425 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 426 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 427 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 428 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 429 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 430 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 431 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 432 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 433 "amber.yy"
    {(yyval) = mk_expr_op((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                     ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 435 "amber.yy"
    {(yyval) = mk_expr_and((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 436 "amber.yy"
    {(yyval) = mk_expr_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 437 "amber.yy"
    {(yyval) = mk_expr_not((yyvsp[(2) - (2)]));                            ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 439 "amber.yy"
    {(yyval) = mk_expr_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 440 "amber.yy"
    {(yyval) = mk_expr_neq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                        ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 442 "amber.yy"
    {(yyval) = mk_expr_type_test((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                  ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 444 "amber.yy"
    {(yyval) = mk_expr_dot_acc((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                    ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 445 "amber.yy"
    {(yyval) = mk_expr_dot_acc_test((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));               ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 448 "amber.yy"
    {(yyval) = mk_expr_idx((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));                        ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 449 "amber.yy"
    {(yyval) = mk_expr_idx_member((yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));             ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 451 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (4)]));                        ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 452 "amber.yy"
    {(yyval) = mk_expr_ex_qual((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                    ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 454 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 455 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 457 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(6) - (7)]), (yyvsp[(3) - (7)]));                         ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 458 "amber.yy"
    {(yyval) = mk_expr_sc((yyvsp[(10) - (11)]), (yyvsp[(3) - (11)]), (yyvsp[(7) - (11)]));                    ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 460 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                    ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 461 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 463 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]), (yyvsp[(3) - (9)]));                    ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 465 "amber.yy"
    {(yyval) = mk_expr_mc((yyvsp[(10) - (13)]), (yyvsp[(12) - (13)]), (yyvsp[(3) - (13)]), (yyvsp[(7) - (13)]));              ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 467 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                     ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 468 "amber.yy"
    {(yyval) = mk_expr_lc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                 ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 469 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));                ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 470 "amber.yy"
    {(yyval) = mk_expr_flc((yyvsp[(2) - (11)]), (yyvsp[(4) - (11)]), (yyvsp[(6) - (11)]), (yyvsp[(8) - (11)]), (yyvsp[(10) - (11)]));           ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 472 "amber.yy"
    {(yyval) = mk_expr_if((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                         ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 473 "amber.yy"
    {(yyval) = mk_expr_match((yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));                        ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 476 "amber.yy"
    {(yyval) = mk_expr_do((yyvsp[(2) - (3)]));                             ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 478 "amber.yy"
    {(yyval) = mk_expr_repl((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 479 "amber.yy"
    {(yyval) = mk_expr_sel((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));                        ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 481 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]));                   ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 483 "amber.yy"
    {(yyval) = mk_expr_retr((yyvsp[(2) - (9)]), (yyvsp[(4) - (9)]), (yyvsp[(6) - (9)]), (yyvsp[(8) - (9)]));               ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 485 "amber.yy"
    {(yyval) = mk_expr_is((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                         ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 490 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 491 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 496 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 497 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 501 "amber.yy"
    {(yyval) = mk_sexpr_expr((yyvsp[(1) - (1)]));                          ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 502 "amber.yy"
    {(yyval) = mk_sexpr_cond((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 506 "amber.yy"
    {(yyval) = mk_sexpr_lab((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));                       ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 507 "amber.yy"
    {(yyval) = mk_sexpr_lab_cond((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));              ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 511 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 512 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 516 "amber.yy"
    {(yyval) = mk_seq(mk_if_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])));               ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 517 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (5)]), mk_if_branch((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));           ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 521 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                      ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 522 "amber.yy"
    {(yyval) = mk_match_branch((yyvsp[(1) - (5)]), mk_expr_let((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)])));     ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 525 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 526 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 535 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 536 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 540 "amber.yy"
    {(yyval) = mk_clause_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 541 "amber.yy"
    {(yyval) = mk_clause_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 542 "amber.yy"
    {(yyval) = mk_clause_not_in((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 543 "amber.yy"
    {(yyval) = mk_clause_not_in_map((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));                       ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 544 "amber.yy"
    {(yyval) = mk_clause_eq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 545 "amber.yy"
    {(yyval) = mk_clause_and((yyvsp[(2) - (3)]));                          ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 546 "amber.yy"
    {(yyval) = mk_clause_or((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 550 "amber.yy"
    {(yyval) = mk_map_entry((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                       ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 551 "amber.yy"
    {(yyval) = mk_map_entry_cond((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]));              ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 555 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 556 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 560 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                   ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 561 "amber.yy"
    {(yyval) = mk_fndef(null(), (yyvsp[(1) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(6) - (6)]));               ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 565 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (1)]));                                 ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 566 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));                             ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 570 "amber.yy"
    {(yyval) = mk_seq(mk_fnarg(null(), (yyvsp[(1) - (1)])));         ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 571 "amber.yy"
    {(yyval) = mk_seq((yyvsp[(1) - (3)]), mk_fnarg(null(), (yyvsp[(3) - (3)])));     ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 600 "amber.yy"
    {(yyval) = mk_snum_neg_num((yyvsp[(2) - (2)]));                      ;}
    break;



/* Line 1455 of yacc.c  */
#line 4357 "amber.tab.cc"
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
#line 684 "amber.yy"
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

