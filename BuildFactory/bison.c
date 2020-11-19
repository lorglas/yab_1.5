
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


/*

    YABASIC ---  a simple Basic Interpreter
    written by Marc-Oliver Ihm 1995-2004
    homepage: www.yabasic.de

    BISON part
     
    This file is part of yabasic and may be copied only 
    under the terms of either the Artistic License or 
    the GNU General Public License (GPL), both of which 
    can be found at www.yabasic.de

*/


#ifndef YABASIC_INCLUDED
#include "yabasic.h"     /* definitions of yabasic */
#endif

#include <malloc.h>

#if HAVE_ALLOCA_H
#ifndef WINDOWS
#include <alloca.h>
#endif
#endif

void __yy_bcopy(char *,char *,int); /* prototype missing */

int tileol; /* true, read should go to eon of line */
int yylineno=1; /* line number; counts fresh in every new file */
int main_lineno=1; /* line number of main */
int function_type=ftNONE; /* contains function type while parsing function */
char *current_function=NULL; /* name of currently parsed function */
int exported=FALSE; /* true, if function is exported */
int yylex(void);
extern struct libfile_name *current_libfile; /*  defined in main.c: name of currently parsed file */
int missing_endif=0;
int missing_endif_line=0;
int missing_endsub=0;
int missing_endsub_line=0;
int missing_next=0;
int missing_next_line=0;
int missing_wend=0;
int missing_wend_line=0;
int missing_until=0;
int missing_until_line=0;
int missing_loop=0;
int missing_loop_line=0;
int in_loop=0;

void report_missing(int severity,char *text) {
  if (missing_loop || missing_endif || missing_next || missing_until || missing_wend) {
    error(severity,text);
    string[0]='\0';
    if (missing_endif)
      sprintf(string,"if statement starting at line %d has seen no 'endif' yet",missing_endif_line);
    else if (missing_next)
      sprintf(string,"for-loop starting at line %d has seen no 'next' yet",missing_next_line);
    else if (missing_wend)
      sprintf(string,"while-loop starting at line %d has seen no 'wend' yet",missing_wend_line);
    else if (missing_until)
      sprintf(string,"repeat-loop starting at line %d has seen no 'until' yet",missing_until_line);
    else if (missing_loop)
      sprintf(string,"do-loop starting at line %d has seen no 'loop' yet",missing_wend_line);
    if (string[0]) error(severity,string);
  }
}
     



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     tFNUM = 258,
     tSYMBOL = 259,
     tSTRSYM = 260,
     tDOCU = 261,
     tDIGITS = 262,
     tSTRING = 263,
     tFOR = 264,
     tTO = 265,
     tSTEP = 266,
     tNEXT = 267,
     tWHILE = 268,
     tWEND = 269,
     tREPEAT = 270,
     tUNTIL = 271,
     tIMPORT = 272,
     tGOTO = 273,
     tGOSUB = 274,
     tLABEL = 275,
     tON = 276,
     tSUB = 277,
     tENDSUB = 278,
     tLOCAL = 279,
     tSTATIC = 280,
     tEXPORT = 281,
     tERROR = 282,
     tEXECUTE = 283,
     tEXECUTE2 = 284,
     tCOMPILE = 285,
     tRUNTIME_CREATED_SUB = 286,
     tINTERRUPT = 287,
     tBREAK = 288,
     tCONTINUE = 289,
     tSWITCH = 290,
     tSEND = 291,
     tCASE = 292,
     tDEFAULT = 293,
     tLOOP = 294,
     tDO = 295,
     tSEP = 296,
     tEOPROG = 297,
     tIF = 298,
     tTHEN = 299,
     tELSE = 300,
     tELSIF = 301,
     tENDIF = 302,
     tUSING = 303,
     tPRINT = 304,
     tINPUT = 305,
     tLINE = 306,
     tRETURN = 307,
     tDIM = 308,
     tEND = 309,
     tEXIT = 310,
     tAT = 311,
     tSCREEN = 312,
     tSCREENSHOT = 313,
     tREVERSE = 314,
     tCOLOUR = 315,
     tAND = 316,
     tOR = 317,
     tNOT = 318,
     tEOR = 319,
     tNEQ = 320,
     tLEQ = 321,
     tGEQ = 322,
     tLTN = 323,
     tGTN = 324,
     tEQU = 325,
     tPOW = 326,
     tREAD = 327,
     tDATA = 328,
     tRESTORE = 329,
     tOPEN = 330,
     tCLOSE = 331,
     tSEEK = 332,
     tTELL = 333,
     tAS = 334,
     tREADING = 335,
     tWRITING = 336,
     tWAIT = 337,
     tBELL = 338,
     tLET = 339,
     tARDIM = 340,
     tARSIZE = 341,
     tBIND = 342,
     tWINDOW = 343,
     tDOT = 344,
     tCIRCLE = 345,
     tCLEAR = 346,
     tFILL = 347,
     tPRINTER = 348,
     tSETUP = 349,
     tBUTTON = 350,
     tALERT = 351,
     tMENU = 352,
     tCHECKBOX = 353,
     tRADIOBUTTON = 354,
     tTEXTCONTROL = 355,
     tLISTBOX = 356,
     tDROPBOX = 357,
     tADD = 358,
     tREMOVE = 359,
     tLOCALIZE = 360,
     tFILEPANEL = 361,
     tSLIDER = 362,
     tSTATUSBAR = 363,
     tLAYOUT = 364,
     tSET = 365,
     tTEXTEDIT = 366,
     tCOUNT = 367,
     tVIEW = 368,
     tBOXVIEW = 369,
     tTABVIEW = 370,
     tTEXTURL = 371,
     tBITMAP = 372,
     tCANVAS = 373,
     tOPTION = 374,
     tDROPZONE = 375,
     tCOLORCONTROL = 376,
     tTREEBOX = 377,
     tCOLUMNBOX = 378,
     tCOLUMN = 379,
     tSORT = 380,
     tTOOLTIP = 381,
     tCALENDAR = 382,
     tCLIPBOARD = 383,
     tCOPY = 384,
     tSUBMENU = 385,
     tSELECT = 386,
     tSCROLLBAR = 387,
     tEXPAND = 388,
     tCOLLAPSE = 389,
     tSPLITVIEW = 390,
     tSTACKVIEW = 391,
     tPOPUPMENU = 392,
     tSPINCONTROL = 393,
     tMSEND = 394,
     tNUMMESSAGE = 395,
     tTHREAD = 396,
     tSOUND = 397,
     tPLAY = 398,
     tSTOP = 399,
     tSHORTCUT = 400,
     tISCOMPUTERON = 401,
     tDRAW = 402,
     tTEXT = 403,
     tFLUSH = 404,
     tELLIPSE = 405,
     tSAVE = 406,
     tRECT = 407,
     tGETCHAR = 408,
     tPUTCHAR = 409,
     tNEW = 410,
     tCURVE = 411,
     tLAUNCH = 412,
     tSIN = 413,
     tASIN = 414,
     tCOS = 415,
     tACOS = 416,
     tTAN = 417,
     tATAN = 418,
     tEXP = 419,
     tLOG = 420,
     tSQRT = 421,
     tSQR = 422,
     tMYEOF = 423,
     tABS = 424,
     tSIG = 425,
     tINT = 426,
     tFRAC = 427,
     tMOD = 428,
     tRAN = 429,
     tLEN = 430,
     tVAL = 431,
     tLEFT = 432,
     tRIGHT = 433,
     tMID = 434,
     tMIN = 435,
     tMAX = 436,
     tSTR = 437,
     tINKEY = 438,
     tCHR = 439,
     tASC = 440,
     tHEX = 441,
     tDEC = 442,
     tBIN = 443,
     tUPPER = 444,
     tLOWER = 445,
     tTRIM = 446,
     tLTRIM = 447,
     tRTRIM = 448,
     tINSTR = 449,
     tRINSTR = 450,
     tSYSTEM = 451,
     tSYSTEM2 = 452,
     tPEEK = 453,
     tPEEK2 = 454,
     tPOKE = 455,
     tDATE = 456,
     tTIME = 457,
     tTOKEN = 458,
     tTOKENALT = 459,
     tSPLIT = 460,
     tSPLITALT = 461,
     tGLOB = 462,
     tMESSAGE = 463,
     tIMAGE = 464,
     tSVG = 465,
     tTRANSLATE = 466,
     tGET = 467,
     tMOUSE = 468,
     tISMOUSEIN = 469,
     tKEYBOARD = 470,
     tPASTE = 471,
     tGETNUM = 472,
     UMINUS = 473
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{


  double fnum;          /* double number */
  int inum;             /* integer number */
  int token;            /* token of command */
  int sep;              /* number of newlines */
  char *string;         /* quoted string */
  char *symbol;         /* general symbol */
  char *digits;         /* string of digits */
  char *docu;		/* embedded documentation */



} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */



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
#define YYFINAL  398
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  228
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  579
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1895

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   473

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   227,     2,     2,     2,     2,
     223,   224,   220,   219,   226,   218,     2,   221,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   225,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   222
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,     9,    10,    16,    17,    19,
      22,    24,    27,    29,    32,    34,    36,    38,    40,    42,
      44,    46,    48,    50,    52,    53,    57,    58,    62,    64,
      66,    69,    72,    76,    80,    81,    87,    88,    94,    97,
      99,   102,   104,   107,   112,   117,   121,   126,   131,   132,
     136,   137,   142,   145,   148,   150,   153,   155,   158,   161,
     164,   174,   185,   194,   205,   216,   229,   240,   244,   250,
     258,   269,   275,   279,   285,   291,   297,   303,   310,   319,
     330,   336,   338,   341,   349,   357,   361,   365,   370,   376,
     384,   394,   401,   412,   418,   424,   432,   440,   448,   460,
     464,   470,   476,   488,   494,   502,   511,   515,   528,   539,
     545,   551,   557,   563,   571,   579,   589,   601,   616,   633,
     641,   649,   661,   667,   670,   678,   690,   696,   704,   714,
     719,   729,   737,   745,   755,   767,   771,   778,   787,   791,
     798,   808,   814,   820,   824,   835,   841,   851,   863,   871,
     875,   881,   887,   893,   901,   907,   913,   927,   945,   951,
     957,   962,   972,   976,   980,   993,  1005,  1021,  1025,  1031,
    1037,  1049,  1060,  1066,  1073,  1081,  1091,  1097,  1103,  1111,
    1121,  1132,  1142,  1154,  1167,  1177,  1187,  1202,  1208,  1212,
    1216,  1220,  1224,  1230,  1234,  1240,  1253,  1261,  1271,  1282,
    1288,  1299,  1311,  1318,  1321,  1324,  1326,  1328,  1332,  1337,
    1342,  1347,  1352,  1357,  1362,  1364,  1366,  1369,  1371,  1374,
    1378,  1389,  1398,  1407,  1416,  1420,  1422,  1424,  1431,  1436,
    1443,  1450,  1455,  1462,  1464,  1469,  1471,  1473,  1475,  1477,
    1481,  1485,  1492,  1499,  1508,  1515,  1520,  1527,  1536,  1538,
    1542,  1547,  1552,  1557,  1562,  1567,  1572,  1577,  1582,  1584,
    1588,  1590,  1594,  1599,  1606,  1613,  1618,  1625,  1630,  1641,
    1646,  1651,  1656,  1658,  1662,  1665,  1670,  1675,  1679,  1685,
    1691,  1695,  1702,  1711,  1715,  1719,  1722,  1730,  1734,  1740,
    1746,  1753,  1759,  1763,  1767,  1771,  1772,  1777,  1778,  1783,
    1786,  1790,  1794,  1798,  1802,  1806,  1810,  1815,  1822,  1824,
    1829,  1834,  1841,  1848,  1850,  1852,  1856,  1860,  1864,  1868,
    1872,  1875,  1879,  1883,  1887,  1891,  1895,  1899,  1901,  1905,
    1909,  1913,  1917,  1922,  1927,  1932,  1937,  1942,  1947,  1954,
    1959,  1964,  1971,  1976,  1981,  1986,  1991,  1996,  2001,  2008,
    2013,  2017,  2024,  2031,  2036,  2041,  2046,  2051,  2058,  2065,
    2074,  2081,  2090,  2095,  2100,  2105,  2112,  2119,  2126,  2131,
    2140,  2147,  2156,  2163,  2168,  2173,  2180,  2187,  2196,  2206,
    2216,  2225,  2228,  2231,  2235,  2241,  2247,  2258,  2262,  2266,
    2272,  2278,  2282,  2286,  2290,  2294,  2298,  2304,  2310,  2318,
    2326,  2334,  2340,  2348,  2354,  2360,  2366,  2373,  2377,  2379,
    2383,  2387,  2391,  2395,  2403,  2411,  2417,  2423,  2433,  2435,
    2438,  2441,  2443,  2445,  2447,  2449,  2454,  2461,  2466,  2473,
    2478,  2483,  2484,  2487,  2488,  2490,  2494,  2496,  2498,  2499,
    2500,  2501,  2513,  2515,  2517,  2519,  2521,  2522,  2524,  2526,
    2529,  2531,  2535,  2537,  2539,  2544,  2549,  2551,  2555,  2557,
    2559,  2564,  2569,  2570,  2572,  2576,  2578,  2580,  2584,  2588,
    2589,  2590,  2591,  2592,  2607,  2609,  2611,  2612,  2615,  2616,
    2618,  2619,  2627,  2629,  2632,  2634,  2636,  2637,  2638,  2639,
    2646,  2647,  2648,  2653,  2654,  2659,  2661,  2663,  2664,  2665,
    2674,  2676,  2678,  2679,  2684,  2686,  2691,  2692,  2693,  2694,
    2695,  2707,  2709,  2711,  2712,  2718,  2719,  2722,  2723,  2724,
    2725,  2733,  2734,  2736,  2738,  2739,  2744,  2746,  2751,  2753,
    2758,  2760,  2764,  2766,  2771,  2773,  2778,  2780,  2782,  2786,
    2790,  2791,  2794,  2799,  2801,  2805,  2806,  2809,  2816,  2817,
    2822,  2823,  2828,  2829,  2836,  2837,  2847,  2848,  2852,  2853,
    2855,  2856,  2859,  2862,  2867,  2869,  2874,  2881,  2888,  2896,
    2907,  2920,  2928,  2939,  2952,  2955,  2957,  2959,  2963,  2965
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     229,     0,    -1,   230,    42,    -1,   233,    -1,    -1,    -1,
     230,   231,    41,   232,   233,    -1,    -1,   240,    -1,    84,
     240,    -1,   247,    -1,    84,   247,    -1,    17,    -1,    27,
     245,    -1,   278,    -1,   286,    -1,   302,    -1,   298,    -1,
     295,    -1,    33,    -1,    34,    -1,   265,    -1,   259,    -1,
     260,    -1,    -1,    24,   234,   272,    -1,    -1,    25,   235,
     274,    -1,   305,    -1,   311,    -1,    18,   257,    -1,    19,
     257,    -1,    21,    32,    33,    -1,    21,    32,    34,    -1,
      -1,    21,   248,    18,   236,   335,    -1,    -1,    21,   248,
      19,   237,   336,    -1,    20,   257,    -1,   242,    -1,    76,
     334,    -1,   243,    -1,    30,   245,    -1,    28,   223,   261,
     224,    -1,    29,   223,   261,   224,    -1,    49,   333,   324,
      -1,    49,   333,   324,   225,    -1,    49,   333,   324,   226,
      -1,    -1,    50,   238,   326,    -1,    -1,    51,    50,   239,
     326,    -1,    72,   321,    -1,    73,   323,    -1,    74,    -1,
      74,   257,    -1,    52,    -1,    52,   248,    -1,    52,   245,
      -1,    53,   258,    -1,    88,    75,   253,   241,   253,   226,
     245,   226,   245,    -1,    95,   253,   241,   253,   226,   245,
     226,   245,   226,   245,    -1,    97,   245,   226,   245,   226,
     245,   226,   245,    -1,    98,   253,   226,   245,   226,   245,
     226,   248,   226,   245,    -1,    99,   253,   226,   245,   226,
     245,   226,   248,   226,   245,    -1,   100,   253,   241,   253,
     226,   245,   226,   245,   226,   245,   226,   245,    -1,   101,
     253,   241,   253,   226,   245,   226,   248,   226,   245,    -1,
     101,    91,   245,    -1,   101,   103,   245,   226,   245,    -1,
     101,   103,   245,   226,   248,   226,   245,    -1,   102,   253,
     241,   253,   226,   245,   226,   245,   226,   245,    -1,   102,
     103,   245,   226,   245,    -1,   102,    91,   245,    -1,   102,
     104,   245,   226,   248,    -1,   101,   104,   245,   226,   245,
      -1,   101,   104,   245,   226,   248,    -1,   101,   131,   245,
     226,   248,    -1,    96,   245,   226,   245,   226,   245,    -1,
     148,   253,   226,   245,   226,   245,   226,   245,    -1,   148,
     253,   241,   253,   226,   245,   226,   245,   226,   245,    -1,
     148,   110,   245,   226,   245,    -1,   105,    -1,   105,   245,
      -1,   147,   148,   253,   226,   245,   226,   245,    -1,   147,
     152,   253,   241,   253,   226,   245,    -1,   147,   149,   245,
      -1,    88,    76,   245,    -1,   109,   245,   226,   245,    -1,
      88,   110,   245,   226,   245,    -1,    88,   110,   245,   226,
     245,   226,   245,    -1,    88,   110,   245,   226,   245,   226,
     248,   226,   248,    -1,   145,   245,   226,   245,   226,   245,
      -1,   111,   253,   241,   253,   226,   245,   226,   248,   226,
     245,    -1,   111,   103,   245,   226,   245,    -1,   111,   110,
     245,   226,   245,    -1,   111,   110,   245,   226,   245,   226,
     248,    -1,   111,   110,   245,   226,   245,   226,   245,    -1,
     111,    60,   245,   226,   245,   226,   245,    -1,   111,    60,
     245,   226,   245,   226,   248,   226,   248,   226,   248,    -1,
     111,    91,   245,    -1,   147,   110,   245,   226,   245,    -1,
     147,   110,   248,   226,   245,    -1,   147,   110,   245,   226,
     248,   226,   248,   226,   248,   226,   245,    -1,   147,   110,
     245,   226,   248,    -1,   147,   110,   245,   226,   245,   226,
     245,    -1,   113,   253,   241,   253,   226,   245,   226,   245,
      -1,   113,   104,   245,    -1,   114,   253,   241,   253,   226,
     245,   226,   245,   226,   248,   226,   245,    -1,   115,   253,
     241,   253,   226,   245,   226,   245,   226,   245,    -1,   115,
     110,   245,   226,   248,    -1,   115,   103,   245,   226,   245,
      -1,   115,   104,   245,   226,   248,    -1,   147,    89,   253,
     226,   245,    -1,   147,    51,   253,   241,   253,   226,   245,
      -1,   147,    90,   253,   226,   248,   226,   245,    -1,   147,
     150,   253,   226,   248,   226,   248,   226,   245,    -1,   147,
     156,   253,   226,   253,   226,   253,   226,   253,   226,   245,
      -1,   107,   253,   241,   253,   226,   245,   226,   245,   226,
     248,   226,   248,   226,   245,    -1,   107,   253,   241,   253,
     226,   245,   226,   245,   226,   248,   226,   248,   226,   245,
     226,   245,    -1,   107,    20,   245,   226,   245,   226,   245,
      -1,   107,   110,   245,   226,   245,   226,   248,    -1,   107,
      60,   245,   226,   245,   226,   248,   226,   248,   226,   248,
      -1,   107,   110,   245,   226,   248,    -1,   157,   245,    -1,
     119,   110,   245,   226,   245,   226,   245,    -1,   119,    60,
     245,   226,   245,   226,   248,   226,   248,   226,   248,    -1,
     119,   110,   245,   226,   245,    -1,   119,   110,   245,   226,
     245,   226,   248,    -1,   119,   110,   245,   226,   245,   226,
     248,   226,   248,    -1,   117,   253,   226,   245,    -1,   117,
     217,   253,   241,   253,   226,   245,   226,   245,    -1,   117,
     217,   248,   226,   245,   226,   245,    -1,   117,   217,   245,
     226,   245,   226,   245,    -1,   147,   117,   253,   226,   245,
     226,   245,   226,   245,    -1,   147,   117,   253,   241,   253,
     226,   245,   226,   245,   226,   245,    -1,   117,   104,   245,
      -1,    58,   253,   241,   253,   226,   245,    -1,   118,   253,
     241,   253,   226,   245,   226,   245,    -1,   113,   120,   245,
      -1,   121,   253,   226,   245,   226,   245,    -1,   121,   110,
     245,   226,   248,   226,   248,   226,   248,    -1,   100,   110,
     245,   226,   245,    -1,   100,   110,   245,   226,   248,    -1,
     100,    91,   245,    -1,   122,   253,   241,   253,   226,   245,
     226,   248,   226,   245,    -1,   122,   103,   245,   226,   245,
      -1,   122,   103,   245,   226,   245,   226,   245,   226,   248,
      -1,   122,   103,   245,   226,   245,   226,   248,   226,   248,
     226,   248,    -1,   122,   103,   245,   226,   245,   226,   248,
      -1,   122,    91,   245,    -1,   122,   104,   245,   226,   245,
      -1,   122,   131,   245,   226,   248,    -1,   122,   104,   245,
     226,   248,    -1,   122,   104,   245,   226,   245,   226,   245,
      -1,   122,   133,   245,   226,   245,    -1,   122,   134,   245,
     226,   245,    -1,    95,   209,   253,   226,   245,   226,   245,
     226,   245,   226,   245,   226,   245,    -1,    98,   209,   253,
     226,   245,   226,   245,   226,   245,   226,   245,   226,   245,
     226,   248,   226,   245,    -1,    98,   110,   245,   226,   248,
      -1,    99,   110,   245,   226,   248,    -1,   126,   245,   226,
     245,    -1,   126,    60,   245,   226,   248,   226,   248,   226,
     248,    -1,   101,   125,   245,    -1,   122,   125,   245,    -1,
     123,   253,   241,   253,   226,   245,   226,   248,   226,   245,
     226,   245,    -1,   123,   103,   245,   226,   248,   226,   248,
     226,   248,   226,   245,    -1,   123,   124,   245,   226,   245,
     226,   248,   226,   248,   226,   248,   226,   248,   226,   245,
      -1,   123,    91,   245,    -1,   123,   104,   245,   226,   248,
      -1,   123,   131,   245,   226,   248,    -1,   123,    60,   245,
     226,   245,   226,   248,   226,   248,   226,   248,    -1,   127,
     253,   226,   245,   226,   245,   226,   245,   226,   245,    -1,
     127,   110,   245,   226,   245,    -1,   132,   245,   226,   248,
     226,   245,    -1,   132,   110,   245,   226,   245,   226,   248,
      -1,   132,   110,   245,   226,   245,   226,   248,   226,   248,
      -1,   132,   110,   245,   226,   245,    -1,   102,   131,   245,
     226,   248,    -1,    97,   110,   245,   226,   248,   226,   245,
      -1,    97,   110,   245,   226,   245,   226,   245,   226,   245,
      -1,   130,   245,   226,   245,   226,   245,   226,   245,   226,
     245,    -1,   130,   110,   245,   226,   245,   226,   248,   226,
     245,    -1,   130,   110,   245,   226,   245,   226,   245,   226,
     245,   226,   245,    -1,   108,   253,   241,   253,   226,   245,
     226,   245,   226,   245,   226,   245,    -1,   108,   110,   245,
     226,   245,   226,   245,   226,   248,    -1,   108,   110,   245,
     226,   248,   226,   248,   226,   248,    -1,   138,   253,   226,
     245,   226,   245,   226,   248,   226,   248,   226,   248,   226,
     245,    -1,   138,   110,   245,   226,   248,    -1,   128,   129,
     245,    -1,    93,    94,   245,    -1,   213,   110,   245,    -1,
     142,   144,   248,    -1,   142,   144,   223,   248,   224,    -1,
     142,    82,   248,    -1,   142,    82,   223,   248,   224,    -1,
     135,   253,   241,   253,   226,   245,   226,   248,   226,   248,
     226,   245,    -1,   135,   110,   245,   226,   245,   226,   248,
      -1,   135,   110,   245,   226,   245,   226,   248,   226,   248,
      -1,   136,   253,   241,   253,   226,   245,   226,   248,   226,
     245,    -1,   136,   110,   245,   226,   248,    -1,   116,   253,
     226,   245,   226,   245,   226,   245,   226,   245,    -1,   116,
      60,   245,   226,   245,   226,   248,   226,   248,   226,   248,
      -1,   154,   245,   241,   248,   226,   248,    -1,    91,    57,
      -1,    82,   248,    -1,    83,    -1,   183,    -1,   183,   223,
     224,    -1,   183,   223,   248,   224,    -1,   197,   223,   245,
     224,    -1,   200,   245,   226,   245,    -1,   200,   245,   226,
     248,    -1,   200,   334,   226,   245,    -1,   200,   334,   226,
     248,    -1,    54,    -1,    55,    -1,    55,   248,    -1,     6,
      -1,    87,   245,    -1,     5,    70,   245,    -1,   179,   223,
     244,   226,   248,   226,   248,   224,    70,   245,    -1,   179,
     223,   244,   226,   248,   224,    70,   245,    -1,   177,   223,
     244,   226,   248,   224,    70,   245,    -1,   178,   223,   244,
     226,   248,   224,    70,   245,    -1,   260,    70,   245,    -1,
     226,    -1,    10,    -1,    75,   334,   226,   245,   226,   245,
      -1,    75,   334,   226,   245,    -1,    75,   245,     9,    80,
      79,   334,    -1,    75,   245,     9,    81,    79,   334,    -1,
      77,   334,   226,   248,    -1,    77,   334,   226,   248,   226,
     245,    -1,     5,    -1,     5,   223,   261,   224,    -1,     5,
      -1,   246,    -1,   260,    -1,     8,    -1,   245,   219,   245,
      -1,   223,   245,   224,    -1,   177,   223,   245,   226,   248,
     224,    -1,   178,   223,   245,   226,   248,   224,    -1,   179,
     223,   245,   226,   248,   226,   248,   224,    -1,   179,   223,
     245,   226,   248,   224,    -1,   182,   223,   248,   224,    -1,
     182,   223,   248,   226,   245,   224,    -1,   182,   223,   248,
     226,   245,   226,   245,   224,    -1,   183,    -1,   183,   223,
     224,    -1,   183,   223,   248,   224,    -1,   184,   223,   248,
     224,    -1,   189,   223,   245,   224,    -1,   190,   223,   245,
     224,    -1,   192,   223,   245,   224,    -1,   193,   223,   245,
     224,    -1,   191,   223,   245,   224,    -1,   196,   223,   245,
     224,    -1,   201,    -1,   201,   223,   224,    -1,   202,    -1,
     202,   223,   224,    -1,   199,   223,   245,   224,    -1,   199,
     223,   245,   226,   245,   224,    -1,   204,   223,   244,   226,
     245,   224,    -1,   204,   223,   244,   224,    -1,   206,   223,
     244,   226,   245,   224,    -1,   206,   223,   244,   224,    -1,
     153,   223,   248,   226,   248,   241,   248,   226,   248,   224,
      -1,   186,   223,   248,   224,    -1,   188,   223,   248,   224,
      -1,    29,   223,   261,   224,    -1,   208,    -1,   208,   223,
     224,    -1,   213,   208,    -1,   213,   208,   223,   224,    -1,
     211,   223,   245,   224,    -1,   111,   212,   245,    -1,   111,
     212,   245,   226,   248,    -1,   111,   212,   245,   226,   245,
      -1,   100,   212,   245,    -1,   106,   245,   226,   245,   226,
     245,    -1,   106,   245,   226,   245,   226,   245,   226,   245,
      -1,   213,   208,   245,    -1,   215,   208,   245,    -1,   128,
     216,    -1,   123,   212,   245,   226,   248,   226,   248,    -1,
     127,   212,   245,    -1,   101,   212,   245,   226,   248,    -1,
     122,   212,   245,   226,   248,    -1,   137,   253,   226,   245,
     226,   245,    -1,   102,   212,   245,   226,   248,    -1,   147,
     212,   245,    -1,     4,    70,   248,    -1,   259,    70,   248,
      -1,    -1,   248,    62,   249,   248,    -1,    -1,   248,    61,
     250,   248,    -1,    63,   248,    -1,   248,    70,   248,    -1,
     248,    65,   248,    -1,   248,    68,   248,    -1,   248,    66,
     248,    -1,   248,    69,   248,    -1,   248,    67,   248,    -1,
     168,   223,   334,   224,    -1,   207,   223,   245,   226,   245,
     224,    -1,   256,    -1,    85,   223,   251,   224,    -1,    85,
     223,   252,   224,    -1,    86,   223,   251,   226,   248,   224,
      -1,    86,   223,   252,   226,   248,   224,    -1,   259,    -1,
       4,    -1,   248,   219,   248,    -1,   248,   218,   248,    -1,
     248,   220,   248,    -1,   248,   221,   248,    -1,   248,    71,
     248,    -1,   218,   248,    -1,   245,    70,   245,    -1,   245,
      65,   245,    -1,   245,    68,   245,    -1,   245,    66,   245,
      -1,   245,    69,   245,    -1,   245,    67,   245,    -1,   254,
      -1,   223,   248,   224,    -1,     4,   223,   224,    -1,     5,
     223,   224,    -1,   248,   226,   248,    -1,   158,   223,   248,
     224,    -1,   159,   223,   248,   224,    -1,   160,   223,   248,
     224,    -1,   161,   223,   248,   224,    -1,   162,   223,   248,
     224,    -1,   163,   223,   248,   224,    -1,   163,   223,   248,
     226,   248,   224,    -1,   164,   223,   248,   224,    -1,   165,
     223,   248,   224,    -1,   165,   223,   248,   226,   248,   224,
      -1,   166,   223,   248,   224,    -1,   167,   223,   248,   224,
      -1,   171,   223,   248,   224,    -1,   172,   223,   248,   224,
      -1,   169,   223,   248,   224,    -1,   170,   223,   248,   224,
      -1,   173,   223,   248,   226,   248,   224,    -1,   174,   223,
     248,   224,    -1,   174,   223,   224,    -1,   180,   223,   248,
     226,   248,   224,    -1,   181,   223,   248,   226,   248,   224,
      -1,   175,   223,   245,   224,    -1,   176,   223,   245,   224,
      -1,   185,   223,   245,   224,    -1,   187,   223,   245,   224,
      -1,   187,   223,   245,   226,   248,   224,    -1,   194,   223,
     245,   226,   245,   224,    -1,   194,   223,   245,   226,   245,
     226,   248,   224,    -1,   195,   223,   245,   226,   245,   224,
      -1,   195,   223,   245,   226,   245,   226,   248,   224,    -1,
     197,   223,   245,   224,    -1,   198,   223,   334,   224,    -1,
     198,   223,   245,   224,    -1,    61,   223,   248,   226,   248,
     224,    -1,    62,   223,   248,   226,   248,   224,    -1,    64,
     223,   248,   226,   248,   224,    -1,    78,   223,   334,   224,
      -1,   203,   223,   245,   226,   252,   226,   245,   224,    -1,
     203,   223,   245,   226,   252,   224,    -1,   205,   223,   245,
     226,   252,   226,   245,   224,    -1,   205,   223,   245,   226,
     252,   224,    -1,    28,   223,   261,   224,    -1,    75,   223,
     245,   224,    -1,    75,   223,   245,   226,   245,   224,    -1,
      75,   223,   334,   226,   245,   224,    -1,    75,   223,   334,
     226,   245,   226,   245,   224,    -1,   147,   209,   248,   226,
     248,   226,   245,   226,   245,    -1,   147,   209,   253,   241,
     253,   226,   245,   226,   245,    -1,   210,   253,   241,   253,
     226,   245,   226,   245,    -1,    88,   112,    -1,   214,   245,
      -1,   123,   112,   245,    -1,    88,   217,   245,   226,   245,
      -1,   113,   217,   245,   226,   245,    -1,    96,   245,   226,
     245,   226,   245,   226,   245,   226,   245,    -1,   101,   112,
     245,    -1,   122,   112,   245,    -1,   132,   217,   245,   226,
     245,    -1,   135,   217,   245,   226,   245,    -1,   136,   217,
     245,    -1,   115,   217,   245,    -1,   138,   217,   245,    -1,
     102,   112,   245,    -1,   107,   217,   245,    -1,   121,   217,
     245,   226,   245,    -1,   111,   217,   245,   226,   245,    -1,
     111,   217,   245,   226,   245,   226,   248,    -1,   111,   217,
     245,   226,   245,   226,   245,    -1,   147,   217,   245,   226,
     245,   226,   245,    -1,   147,   217,   245,   226,   245,    -1,
     147,   217,   253,   226,   245,   226,   245,    -1,   140,   139,
     245,   226,   245,    -1,   141,   104,   245,   226,   248,    -1,
     141,   217,   245,   226,   245,    -1,    93,   245,   226,   245,
     226,   245,    -1,   142,   143,   245,    -1,   146,    -1,   101,
     217,   245,    -1,   102,   217,   245,    -1,   122,   217,   245,
      -1,   123,   217,   245,    -1,   122,   217,   245,   226,   245,
     226,   248,    -1,   117,   151,   245,   226,   245,   226,   245,
      -1,   117,   209,   245,   226,   245,    -1,   117,   217,   245,
     226,   245,    -1,   117,    60,   248,   226,   248,   226,   245,
     226,   245,    -1,   256,    -1,   219,   256,    -1,   218,   256,
      -1,     3,    -1,     7,    -1,     7,    -1,     4,    -1,     4,
     223,   261,   224,    -1,   258,   226,     4,   223,   261,   224,
      -1,     5,   223,   261,   224,    -1,   258,   226,     5,   223,
     261,   224,    -1,     4,   223,   261,   224,    -1,     5,   223,
     261,   224,    -1,    -1,   262,   263,    -1,    -1,   264,    -1,
     263,   226,   264,    -1,   245,    -1,   248,    -1,    -1,    -1,
      -1,   271,    22,   266,   270,   267,   223,   276,   224,   268,
     230,   269,    -1,    42,    -1,    23,    -1,     4,    -1,     5,
      -1,    -1,    26,    -1,    31,    -1,    31,    26,    -1,   273,
      -1,   272,   226,   273,    -1,     4,    -1,     5,    -1,     4,
     223,   261,   224,    -1,     5,   223,   261,   224,    -1,   275,
      -1,   274,   226,   275,    -1,     4,    -1,     5,    -1,     4,
     223,   261,   224,    -1,     5,   223,   261,   224,    -1,    -1,
     277,    -1,   276,   226,   277,    -1,     4,    -1,     5,    -1,
       4,   223,   224,    -1,     5,   223,   224,    -1,    -1,    -1,
      -1,    -1,     9,   279,     4,    70,   280,   248,    10,   248,
     284,   281,   230,   282,   283,   285,    -1,    42,    -1,    12,
      -1,    -1,    11,   248,    -1,    -1,     4,    -1,    -1,    35,
     287,   289,   288,   290,   293,    36,    -1,    41,    -1,   288,
      41,    -1,   248,    -1,   245,    -1,    -1,    -1,    -1,   290,
      37,   291,   289,   292,   230,    -1,    -1,    -1,    38,    41,
     294,   230,    -1,    -1,    40,   296,   230,   297,    -1,    42,
      -1,    39,    -1,    -1,    -1,    13,   299,   223,   248,   224,
     300,   230,   301,    -1,    42,    -1,    14,    -1,    -1,    15,
     303,   230,   304,    -1,    42,    -1,    16,   223,   248,   224,
      -1,    -1,    -1,    -1,    -1,    43,   248,   306,    44,   307,
     230,   308,   314,   313,   309,   310,    -1,    42,    -1,    47,
      -1,    -1,    43,   248,   312,   230,    47,    -1,    -1,    45,
     230,    -1,    -1,    -1,    -1,    46,   248,   317,   315,   230,
     316,   314,    -1,    -1,    44,    -1,   320,    -1,    -1,   320,
     226,   319,   318,    -1,     4,    -1,     4,   223,   261,   224,
      -1,     5,    -1,     5,   223,   261,   224,    -1,   322,    -1,
     321,   226,   322,    -1,     4,    -1,     4,   223,   261,   224,
      -1,     5,    -1,     5,   223,   261,   224,    -1,     8,    -1,
     255,    -1,   323,   226,     8,    -1,   323,   226,   255,    -1,
      -1,   248,   325,    -1,   324,   226,   248,   325,    -1,   245,
      -1,   324,   226,   245,    -1,    -1,    48,   245,    -1,    48,
     223,   245,   226,   245,   224,    -1,    -1,   227,     4,   327,
     318,    -1,    -1,   227,     7,   328,   318,    -1,    -1,   227,
     223,   248,   224,   329,   318,    -1,    -1,    56,   223,   248,
     226,   248,   224,   330,   332,   318,    -1,    -1,   331,   332,
     318,    -1,    -1,     8,    -1,    -1,   227,     4,    -1,   227,
       7,    -1,   227,   223,   248,   224,    -1,    59,    -1,    60,
     223,   245,   224,    -1,    60,   223,   245,   226,   245,   224,
      -1,    56,   223,   248,   226,   248,   224,    -1,    59,    56,
     223,   248,   226,   248,   224,    -1,    60,   223,   245,   224,
      56,   223,   248,   226,   248,   224,    -1,    60,   223,   245,
     226,   245,   224,    56,   223,   248,   226,   248,   224,    -1,
      56,   223,   248,   226,   248,   224,    59,    -1,    56,   223,
     248,   226,   248,   224,    60,   223,   245,   224,    -1,    56,
     223,   248,   226,   248,   224,    60,   223,   245,   226,   245,
     224,    -1,   227,   248,    -1,   248,    -1,   257,    -1,   335,
     226,   257,    -1,   257,    -1,   336,   226,   257,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   148,   148,   151,   152,   153,   152,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   173,   174,   174,   175,   176,
     177,   178,   179,   180,   181,   181,   183,   183,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   195,
     196,   196,   197,   198,   199,   200,   201,   210,   211,   212,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   394,
     395,   396,   397,   398,   399,   402,   403,   406,   407,   409,
     410,   413,   414,   417,   418,   421,   422,   423,   424,   425,
     426,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   473,   475,   476,   477,   478,   479,
     480,   481,   482,   485,   486,   489,   489,   490,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   523,
     526,   529,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   578,   579,   580,   581,   582,
     583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   609,   610,   611,   612,   613,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   634,   635,
     636,   639,   640,   643,   644,   647,   648,   649,   650,   653,
     656,   659,   659,   662,   663,   664,   667,   668,   671,   672,
     675,   671,   680,   681,   684,   685,   688,   689,   690,   691,
     694,   695,   698,   699,   700,   701,   704,   705,   708,   709,
     710,   711,   714,   715,   716,   719,   720,   721,   722,   725,
     726,   730,   743,   725,   748,   749,   752,   753,   756,   757,
     762,   762,   767,   768,   771,   772,   776,   777,   778,   777,
     782,   783,   783,   787,   787,   793,   794,   798,   799,   798,
     805,   806,   810,   810,   815,   816,   820,   821,   821,   823,
     820,   827,   828,   831,   831,   835,   836,   839,   841,   843,
     840,   847,   848,   851,   852,   852,   855,   856,   858,   859,
     863,   864,   867,   868,   870,   871,   875,   876,   877,   878,
     881,   882,   883,   884,   885,   888,   889,   890,   893,   893,
     894,   894,   895,   895,   896,   896,   897,   897,   900,   901,
     904,   905,   906,   907,   908,   909,   910,   911,   912,   913,
     914,   915,   916,   917,   920,   921,   923,   924,   927,   928
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tFNUM", "tSYMBOL", "tSTRSYM", "tDOCU",
  "tDIGITS", "tSTRING", "tFOR", "tTO", "tSTEP", "tNEXT", "tWHILE", "tWEND",
  "tREPEAT", "tUNTIL", "tIMPORT", "tGOTO", "tGOSUB", "tLABEL", "tON",
  "tSUB", "tENDSUB", "tLOCAL", "tSTATIC", "tEXPORT", "tERROR", "tEXECUTE",
  "tEXECUTE2", "tCOMPILE", "tRUNTIME_CREATED_SUB", "tINTERRUPT", "tBREAK",
  "tCONTINUE", "tSWITCH", "tSEND", "tCASE", "tDEFAULT", "tLOOP", "tDO",
  "tSEP", "tEOPROG", "tIF", "tTHEN", "tELSE", "tELSIF", "tENDIF", "tUSING",
  "tPRINT", "tINPUT", "tLINE", "tRETURN", "tDIM", "tEND", "tEXIT", "tAT",
  "tSCREEN", "tSCREENSHOT", "tREVERSE", "tCOLOUR", "tAND", "tOR", "tNOT",
  "tEOR", "tNEQ", "tLEQ", "tGEQ", "tLTN", "tGTN", "tEQU", "tPOW", "tREAD",
  "tDATA", "tRESTORE", "tOPEN", "tCLOSE", "tSEEK", "tTELL", "tAS",
  "tREADING", "tWRITING", "tWAIT", "tBELL", "tLET", "tARDIM", "tARSIZE",
  "tBIND", "tWINDOW", "tDOT", "tCIRCLE", "tCLEAR", "tFILL", "tPRINTER",
  "tSETUP", "tBUTTON", "tALERT", "tMENU", "tCHECKBOX", "tRADIOBUTTON",
  "tTEXTCONTROL", "tLISTBOX", "tDROPBOX", "tADD", "tREMOVE", "tLOCALIZE",
  "tFILEPANEL", "tSLIDER", "tSTATUSBAR", "tLAYOUT", "tSET", "tTEXTEDIT",
  "tCOUNT", "tVIEW", "tBOXVIEW", "tTABVIEW", "tTEXTURL", "tBITMAP",
  "tCANVAS", "tOPTION", "tDROPZONE", "tCOLORCONTROL", "tTREEBOX",
  "tCOLUMNBOX", "tCOLUMN", "tSORT", "tTOOLTIP", "tCALENDAR", "tCLIPBOARD",
  "tCOPY", "tSUBMENU", "tSELECT", "tSCROLLBAR", "tEXPAND", "tCOLLAPSE",
  "tSPLITVIEW", "tSTACKVIEW", "tPOPUPMENU", "tSPINCONTROL", "tMSEND",
  "tNUMMESSAGE", "tTHREAD", "tSOUND", "tPLAY", "tSTOP", "tSHORTCUT",
  "tISCOMPUTERON", "tDRAW", "tTEXT", "tFLUSH", "tELLIPSE", "tSAVE",
  "tRECT", "tGETCHAR", "tPUTCHAR", "tNEW", "tCURVE", "tLAUNCH", "tSIN",
  "tASIN", "tCOS", "tACOS", "tTAN", "tATAN", "tEXP", "tLOG", "tSQRT",
  "tSQR", "tMYEOF", "tABS", "tSIG", "tINT", "tFRAC", "tMOD", "tRAN",
  "tLEN", "tVAL", "tLEFT", "tRIGHT", "tMID", "tMIN", "tMAX", "tSTR",
  "tINKEY", "tCHR", "tASC", "tHEX", "tDEC", "tBIN", "tUPPER", "tLOWER",
  "tTRIM", "tLTRIM", "tRTRIM", "tINSTR", "tRINSTR", "tSYSTEM", "tSYSTEM2",
  "tPEEK", "tPEEK2", "tPOKE", "tDATE", "tTIME", "tTOKEN", "tTOKENALT",
  "tSPLIT", "tSPLITALT", "tGLOB", "tMESSAGE", "tIMAGE", "tSVG",
  "tTRANSLATE", "tGET", "tMOUSE", "tISMOUSEIN", "tKEYBOARD", "tPASTE",
  "tGETNUM", "'-'", "'+'", "'*'", "'/'", "UMINUS", "'('", "')'", "';'",
  "','", "'#'", "$accept", "program", "statement_list", "$@1", "$@2",
  "statement", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "string_assignment", "to", "open_clause", "seek_clause",
  "string_scalar_or_array", "string_expression", "string_function",
  "assignment", "expression", "$@9", "$@10", "arrayref", "string_arrayref",
  "coordinates", "function", "const", "number", "symbol_or_lineno",
  "dimlist", "function_or_array", "stringfunction_or_array", "call_list",
  "$@11", "calls", "call_item", "function_definition", "$@12", "$@13",
  "$@14", "endsub", "function_name", "export", "local_list", "local_item",
  "static_list", "static_item", "paramlist", "paramitem", "for_loop",
  "$@15", "$@16", "$@17", "$@18", "next", "step_part", "next_symbol",
  "switch_number_or_string", "$@19", "sep_list", "number_or_string",
  "case_list", "$@20", "$@21", "default", "$@22", "do_loop", "$@23",
  "loop", "while_loop", "$@24", "$@25", "wend", "repeat_loop", "$@26",
  "until", "if_clause", "$@27", "$@28", "$@29", "$@30", "endif",
  "short_if", "$@31", "else_part", "elsif_part", "$@32", "$@33",
  "maybe_then", "inputlist", "$@34", "input", "readlist", "readitem",
  "datalist", "printlist", "using", "inputbody", "$@35", "$@36", "$@37",
  "$@38", "$@39", "prompt", "printintro", "hashed_number", "goto_list",
  "gosub_list", 0
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,    45,    43,
      42,    47,   473,    40,    41,    59,    44,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   228,   229,   230,   231,   232,   230,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   234,   233,   235,   233,   233,   233,
     233,   233,   233,   233,   236,   233,   237,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   238,   233,
     239,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   240,
     240,   240,   240,   240,   240,   241,   241,   242,   242,   242,
     242,   243,   243,   244,   244,   245,   245,   245,   245,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   247,   247,   249,   248,   250,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   251,
     252,   253,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     255,   256,   256,   257,   257,   258,   258,   258,   258,   259,
     260,   262,   261,   263,   263,   263,   264,   264,   266,   267,
     268,   265,   269,   269,   270,   270,   271,   271,   271,   271,
     272,   272,   273,   273,   273,   273,   274,   274,   275,   275,
     275,   275,   276,   276,   276,   277,   277,   277,   277,   279,
     280,   281,   282,   278,   283,   283,   284,   284,   285,   285,
     287,   286,   288,   288,   289,   289,   290,   291,   292,   290,
     293,   294,   293,   296,   295,   297,   297,   299,   300,   298,
     301,   301,   303,   302,   304,   304,   306,   307,   308,   309,
     305,   310,   310,   312,   311,   313,   313,   314,   315,   316,
     314,   317,   317,   318,   319,   318,   320,   320,   320,   320,
     321,   321,   322,   322,   322,   322,   323,   323,   323,   323,
     324,   324,   324,   324,   324,   325,   325,   325,   327,   326,
     328,   326,   329,   326,   330,   326,   331,   326,   332,   332,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   334,   334,   335,   335,   336,   336
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     0,     0,     5,     0,     1,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       2,     2,     3,     3,     0,     5,     0,     5,     2,     1,
       2,     1,     2,     4,     4,     3,     4,     4,     0,     3,
       0,     4,     2,     2,     1,     2,     1,     2,     2,     2,
       9,    10,     8,    10,    10,    12,    10,     3,     5,     7,
      10,     5,     3,     5,     5,     5,     5,     6,     8,    10,
       5,     1,     2,     7,     7,     3,     3,     4,     5,     7,
       9,     6,    10,     5,     5,     7,     7,     7,    11,     3,
       5,     5,    11,     5,     7,     8,     3,    12,    10,     5,
       5,     5,     5,     7,     7,     9,    11,    14,    16,     7,
       7,    11,     5,     2,     7,    11,     5,     7,     9,     4,
       9,     7,     7,     9,    11,     3,     6,     8,     3,     6,
       9,     5,     5,     3,    10,     5,     9,    11,     7,     3,
       5,     5,     5,     7,     5,     5,    13,    17,     5,     5,
       4,     9,     3,     3,    12,    11,    15,     3,     5,     5,
      11,    10,     5,     6,     7,     9,     5,     5,     7,     9,
      10,     9,    11,    12,     9,     9,    14,     5,     3,     3,
       3,     3,     5,     3,     5,    12,     7,     9,    10,     5,
      10,    11,     6,     2,     2,     1,     1,     3,     4,     4,
       4,     4,     4,     4,     1,     1,     2,     1,     2,     3,
      10,     8,     8,     8,     3,     1,     1,     6,     4,     6,
       6,     4,     6,     1,     4,     1,     1,     1,     1,     3,
       3,     6,     6,     8,     6,     4,     6,     8,     1,     3,
       4,     4,     4,     4,     4,     4,     4,     4,     1,     3,
       1,     3,     4,     6,     6,     4,     6,     4,    10,     4,
       4,     4,     1,     3,     2,     4,     4,     3,     5,     5,
       3,     6,     8,     3,     3,     2,     7,     3,     5,     5,
       6,     5,     3,     3,     3,     0,     4,     0,     4,     2,
       3,     3,     3,     3,     3,     3,     4,     6,     1,     4,
       4,     6,     6,     1,     1,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     6,     4,     4,     4,     4,     4,     4,     6,     4,
       3,     6,     6,     4,     4,     4,     4,     6,     6,     8,
       6,     8,     4,     4,     4,     6,     6,     6,     4,     8,
       6,     8,     6,     4,     4,     6,     6,     8,     9,     9,
       8,     2,     2,     3,     5,     5,    10,     3,     3,     5,
       5,     3,     3,     3,     3,     3,     5,     5,     7,     7,
       7,     5,     7,     5,     5,     5,     6,     3,     1,     3,
       3,     3,     3,     7,     7,     5,     5,     9,     1,     2,
       2,     1,     1,     1,     1,     4,     6,     4,     6,     4,
       4,     0,     2,     0,     1,     3,     1,     1,     0,     0,
       0,    11,     1,     1,     1,     1,     0,     1,     1,     2,
       1,     3,     1,     1,     4,     4,     1,     3,     1,     1,
       4,     4,     0,     1,     3,     1,     1,     3,     3,     0,
       0,     0,     0,    14,     1,     1,     0,     2,     0,     1,
       0,     7,     1,     2,     1,     1,     0,     0,     0,     6,
       0,     0,     4,     0,     4,     1,     1,     0,     0,     8,
       1,     1,     0,     4,     1,     4,     0,     0,     0,     0,
      11,     1,     1,     0,     5,     0,     2,     0,     0,     0,
       7,     0,     1,     1,     0,     4,     1,     4,     1,     4,
       1,     3,     1,     4,     1,     4,     1,     1,     3,     3,
       0,     2,     4,     1,     3,     0,     2,     6,     0,     4,
       0,     4,     0,     6,     0,     9,     0,     3,     0,     1,
       0,     2,     2,     4,     1,     4,     6,     6,     7,    10,
      12,     7,    10,    12,     2,     1,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     0,   217,   469,   497,   502,    12,     0,     0,
       0,     0,    24,    26,   447,     0,     0,     0,     0,   448,
      19,    20,   480,   493,     0,   560,    48,     0,    56,     0,
     214,   215,     0,     0,     0,    54,     0,     0,     0,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,     0,     0,
       0,     4,     3,     8,    39,    41,    10,    22,    23,    21,
       0,    14,    15,    18,    17,    16,    28,    29,     0,   431,
       0,   431,     0,     0,     7,   424,   423,    30,    31,    38,
     421,   314,   235,   422,   238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,   260,     0,     0,
       0,     0,     0,   272,     0,     0,     0,     0,     0,     0,
       0,     0,   236,     0,   327,   308,   313,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,   431,   431,
      42,   449,     0,     7,   513,     0,   564,     0,     0,   540,
     556,    50,    58,    57,     0,     0,    59,   216,     0,     0,
     532,   534,    52,   530,   536,     0,     0,   537,   418,    53,
      55,     0,     0,   575,     0,    40,     0,   204,     9,    11,
       0,     0,   218,     0,     0,     0,   203,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       0,     0,     0,   438,   293,     0,   433,   219,     0,     0,
       0,     4,   431,   431,    32,    33,     0,     0,   299,     0,
       0,     0,     0,     0,   381,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   285,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
     382,     0,   320,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    36,   297,   295,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   452,   453,    25,
     450,   458,   459,    27,   456,     0,     0,     0,   485,   484,
       0,     4,     0,     7,     0,     0,     0,   561,   562,     0,
     543,   545,    45,     0,     0,    49,   558,   556,   431,   431,
       0,     0,   226,   225,     0,   431,   431,     0,   420,   419,
       0,   574,     0,     0,     0,     0,    86,     0,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,    67,     0,     0,   162,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    99,     0,     0,     0,   106,   138,     0,     0,     0,
       0,     0,     0,     0,     0,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,   163,     0,
       0,     0,     0,     0,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   193,     0,   191,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,   225,     0,     0,   233,     0,     0,     0,   207,
       0,     0,     0,     0,   190,     5,   294,   224,     0,   429,
     436,   437,   432,   434,   430,   470,     0,     0,   504,   503,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   280,   387,     0,
     409,   394,     0,   410,     0,   395,   277,     0,     0,   392,
       0,     0,     0,     0,     0,   388,     0,   411,   383,     0,
     412,   287,     0,     0,   391,     0,   393,     0,     0,     0,
     407,     0,     0,   292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   350,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259,   261,     0,     0,     0,     0,     0,   273,
       0,     0,     0,   283,   284,   240,   328,   322,   324,   326,
     323,   325,   321,   239,     0,     0,     0,     0,   301,   303,
     305,   302,   304,   300,   319,   316,   315,   317,   318,   431,
     431,     0,   431,   431,     0,    43,    44,   482,   486,   496,
     495,   494,   507,     4,     0,     0,     0,     0,     0,   541,
      46,    47,     0,   548,   550,     0,   559,     0,    51,     0,
       0,     0,     0,   331,     0,     0,     0,   531,   538,   539,
       0,     0,   228,   231,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   431,     0,
       0,     0,   208,   209,   210,   211,   212,   213,     7,   444,
     445,   439,     0,     0,   498,     0,   373,   271,     0,     0,
       0,   374,     0,     0,   368,     0,     0,   309,   310,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
     333,   334,   335,   336,   337,     0,   339,   340,     0,   342,
     343,   306,   346,   347,   344,   345,     0,   349,   353,   354,
       0,     0,     0,     0,     0,   245,     0,   250,   251,   355,
     269,   356,     0,   270,   252,   253,   256,   254,   255,     0,
       0,   257,   362,   364,   363,   262,     0,     0,   265,     0,
       0,   267,     0,     0,     0,   276,   275,   576,    35,   578,
      37,   298,   296,     0,     0,   451,     0,     0,   457,   483,
     490,     7,   514,     0,     0,   565,     0,   563,     0,   546,
     544,   545,     0,     0,     0,     0,   526,   528,   557,   523,
     425,   427,   431,   431,     0,   533,   535,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,   158,
       0,     0,   159,     0,   141,   142,     0,    68,     0,    74,
      75,    76,     0,    71,    73,   177,     0,     0,     0,     0,
     122,     0,     0,     0,     0,     0,    93,    94,     0,     0,
       0,   110,   111,   109,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,     0,   145,   150,   152,   151,   154,
     155,     0,     0,     0,   168,     0,   169,     0,     0,   172,
       0,     0,     0,   176,     0,     0,     0,   199,     0,   187,
       0,   194,   192,     0,     0,   112,     0,   100,   103,   101,
       0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
       0,     0,     0,     0,     6,     0,   435,     0,     7,     0,
       0,     0,     0,     0,     0,   329,   330,     0,     0,   384,
       0,     0,   288,   291,     0,   279,   278,   397,   385,     0,
       0,   415,   416,   396,   289,     0,     0,   389,   390,     0,
     403,   404,   405,   331,     0,   401,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   454,
     455,   460,   461,   487,     0,     0,   508,     0,     0,     0,
       0,     0,   542,     0,   549,   551,   552,   431,   431,   524,
       0,     0,   136,   229,   230,   227,   232,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   173,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   202,   234,     0,     0,     0,
       0,   462,     0,     4,   505,   365,   366,   367,   375,   376,
       0,   311,   312,   406,     0,   281,     0,     0,     0,     0,
       0,   290,     0,     0,     0,     0,     0,   338,   341,   348,
     241,   242,   244,     0,   351,   352,   246,     0,   357,   358,
       0,   360,     0,   263,   370,     0,   264,   372,     0,   266,
     307,     0,   577,   579,     0,   491,   481,   517,   567,     0,
       0,   566,     0,     0,     0,     0,     0,     0,   426,   428,
       0,    89,     0,     0,     0,     0,   178,     0,     0,     0,
       0,     0,    69,     0,     0,   119,     0,   120,     0,     0,
       0,     0,    97,     0,    96,    95,     0,     0,     0,     0,
       0,     0,   132,   131,     0,     0,     0,   124,   127,     0,
       0,   148,   153,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   196,     0,     0,     0,   113,   114,
     104,     0,     0,     0,    83,     0,    84,     0,     0,     0,
       0,     0,     0,     0,   465,   466,     0,   463,   476,   501,
     500,   499,     0,     0,     0,   399,   398,     0,   414,   413,
     286,     0,     0,   400,   402,     0,     0,     0,     0,     0,
       0,     0,     0,   488,     7,     0,   515,   571,     0,   568,
       0,     0,     0,   554,   553,   527,   529,   525,     0,     0,
       0,     0,     0,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
       0,     0,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,   222,   223,   221,     0,     0,     0,   440,     0,     0,
     471,   377,     0,   282,     0,     0,     0,     0,   243,   247,
     359,   361,   369,   371,   380,     7,     4,   521,     7,   509,
       0,     0,     0,   547,   558,    60,    90,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   185,
       0,     0,     0,     0,     0,     0,     0,   130,     0,   128,
     140,   146,     0,     0,     0,     0,     0,     0,   161,     0,
       0,   181,     0,   175,   197,     0,     0,     0,     0,   133,
       0,   115,     0,     0,     0,   467,   468,     7,   464,   477,
       7,     0,   417,   378,   379,     0,   489,   522,   518,   516,
       0,     0,     0,     0,     0,     0,    61,     0,    63,    64,
       0,    66,    70,     0,     0,     0,     0,    92,     0,   108,
       0,   200,     0,     0,   144,     0,     0,     0,     0,   171,
       0,   180,     0,   198,     0,     0,     0,     0,    79,   220,
       4,   472,   386,   268,     7,   511,   512,   510,   572,     0,
     569,     0,   555,     0,     0,     0,   121,     0,     0,    98,
       0,   201,   125,   147,   170,   165,     0,     0,   182,     0,
       0,   102,   134,   116,   443,   442,   441,     0,   519,     0,
       0,     0,     0,    65,     0,   183,   107,     0,   164,   195,
       0,   475,   474,   478,   517,   573,   570,   156,     0,     0,
       0,     0,   479,   473,   520,     0,   117,     0,   186,     0,
       0,   166,     0,   118,   157
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    90,    91,   400,  1018,    92,   228,   229,   854,   855,
     250,   577,    93,   584,    94,    95,   706,   221,   222,    96,
     258,   857,   856,   740,   741,   259,   224,   267,   225,   117,
     256,   226,   227,   405,   406,   722,   723,    99,   718,  1275,
    1767,  1856,  1021,   100,   549,   550,   553,   554,  1586,  1587,
     101,   112,  1023,  1770,  1857,  1873,  1690,  1883,   102,   242,
     878,   560,  1140,  1494,  1705,  1345,  1614,   103,   243,   881,
     104,   113,  1278,  1591,   105,   114,   729,   106,   562,  1141,
    1497,  1780,  1827,   107,   563,  1709,  1616,  1824,  1874,  1778,
    1158,  1507,  1159,   262,   263,   269,   572,   889,   575,  1153,
    1154,  1504,  1714,   576,   897,   249,   274,  1128,  1130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1143
static const yytype_int16 yypact[] =
{
   10144,   -46,   -45, -1143, -1143, -1143, -1143, -1143,   165,   165,
     165,  6290, -1143, -1143, -1143,  9700,  -195,  -186,  9700,    22,
   -1143, -1143, -1143, -1143,  8677,   -10, -1143,    10,  8677,   153,
   -1143,  8677,  8677,   368,    28,   165,  2133,  2133,  2133,  8677,
   -1143,    18,  9700,   -14,    25,   -24,  6507,  9700,  9236,  5422,
    6724,  5639,  4315,  4554,  9700,  4988,  6941,  9700,  4771,  5856,
    8677,  5205,  7158,  6073,  8677,   -34,  7375,  3881,  4098,  9352,
    7592,   -37,  9468,  9584,  7809,  8026,  8243,   -18,  9700,   940,
    8460,  9700,  9700,  -117,  -104,   -93,   -75,   -39,  2133,    60,
     181,   156, -1143, -1143, -1143, -1143, -1143,   137,   146, -1143,
     207, -1143, -1143, -1143, -1143, -1143, -1143, -1143,  8677, -1143,
    9700, -1143,   227,    45, 10144, -1143, -1143, -1143, -1143, -1143,
   -1143,    54,    74, -1143, -1143,    96,   100,   355,   104,   112,
    8677,   121,   135,   147,   152,   169,   -71,  9700,  9700,    30,
     -41,   -38,  9700,   173,  -108,   195,   203,     5,   209,    31,
     151,   226,   232,   225,   251,   261,  8677,   280,   393,   -70,
     362, -1143,   -88,   286,   321,   333,   337,   364,   405,   420,
     428,   434,   442,   445,   456,   467,   471,   477,   513,   519,
     536,   547,   558,   580,   581,   582,   583,   584,   602,   613,
     617,   619,   629,   646,   660,   670,   671,   683,   695,   710,
     725,   737,   749,   763,   767,   773,   781,   782,   783,   793,
     802,   808,   822,   844,  8677,   859,   338,  9700,   401,  8677,
    8677,    94, -1143,   554, -1143, -1143, -1143, -1143,   396,   398,
     418,   498,   526,   538,   669,   739,  9700,   574, -1143, -1143,
     574, -1143,  8677, 10144,   497,   860,   816,   874,    12,  8677,
     -42, -1143,    94, 11892,   877,   890,   348, 11892,  1175,    -2,
     893,   894,   758, -1143, -1143,   142,   142, -1143, -1143,   766,
   -1143,  8677,    66, 11892,   827, -1143,   900, 11892, -1143, -1143,
     137,   146,   574,  8677,  9700,  9700, -1143,  9700,  8677,    -2,
    -101,  9700,   -13,  9700,  8677,   902,  9700,   903,  9700,  9700,
      -2,  9700,  9700,  9700,  9700,  9700,    -2,  9700,  9700,  9700,
    9700,    -2,   574,  9700,  9700,  9700,    -2,  9700,    -2,    -7,
    9700,  9700,  9700,  9700,    -2,  9700,  9700,    -2,    -2,  9700,
    9700,  9700,    -2,  9700,   904,  9700,  8677,   922,    -2,  9700,
    9700,  9700,   935,  9700,  9700,  9700,  9700,  9700,  9700,  9700,
      -2,  9700,  9700,  9700,  9700,  9700,  9700,    -2,  9700,    35,
    9700,   938,  9700,  9700,   140,  9700,   158,  9700,    -2,  9700,
      -2,  9700,   944,  8894,  9111,   167,  8677,  8677,  8677,  8677,
    8677,  8677,  9700,  8677,  8677,  8677,  9700,    -1,    -8,   574,
    1014,  1014,  1014,  2614,  9700,   123,   962,  9700, -1143, -1143,
    1157,  8677,  9700, -1143, 11892,   879,  8677,   574,   976,  1132,
    8677,    63, -1143, -1143, -1143, -1143,  8677,  8677,  1533,  8677,
    2133,  2133,   472,   472, -1143,  9700,   185,   240,  9700,  9700,
    9700,  9700,  9700,  9700,  9700,   248,  9700,  9700,  9700,  9700,
    9700,  8677,  9700,  9700,  9700,  9700,  9700,  9700,  9700,  9700,
    9700,  9700,  9700, -1143,  9700,  9700,  9700,   978,  9700,  9700,
    9700,  9700,  9700,  8677,  9700,  8677,  8677,  8677,  8677,  8677,
    8677,  8677,  8677,  8677,  8677,  8677,  8677,  2133,  8677,  8677,
    8677,  8677,  8677,  3417,  9700,  9700,  9700,  9700,  9700,  8677,
    8677,  8677,  3644,  8677,  9700,  8677,  9700,  8677,  9700,  9700,
    9700,  9700,  9700,  9700,  9700,  9700,  9700,  2133,  9700,   982,
     994,  9700,  1014,  9700,  1014,  9700,  1000,    -2,  9700,  9816,
     574,  9700, -1143,    72,  1053,  9700,  9700,  9700,  9700,  9700,
    9700,  9700, -1143, -1143, -1143, -1143,  8677,  8677,  8677,  8677,
    8677,  8677,  8677,  8677,  8677,  8677,  8677,  1003,  1011,  1033,
   -1143,  1039,  1040,  1056, -1143,   -25,  1079,  1087,    94, 11892,
    1279,   202,  1268, 10144,  8677,  1105,  9700, -1143, -1143,  8677,
      94,   579,   282,  1153,    13, -1143,  1342,   -42, -1143, -1143,
     649,  8677, -1143, -1143,  8677, -1143, -1143,   368, -1143, -1143,
      37, 11892,   527,  9700,  8677,    -2,   574,   276,   574,  1151,
    8677,  9700,   299,  9700,   323,  1163,  9700,   324,  9700,   574,
     326,  8677,   574,   335,   366,   574,   370,  8677,   574,   371,
     387,   391,  8677,   392,   433,   436,  8677,   452,  8677,  9700,
     457,   574,   466,   469,  8677,   574,   574,  8677,  8677,   486,
     495,   500,  8677,   501,  9700,   574,   386,  1467,    -2,  9700,
    8677,   503,   509,   515,  9700,   574,   518,   539,   574,   545,
     550,   565,  8677,   570,   574,   575,   590,   600,   603,  8677,
     604,  9700,   605,  9700,   574,   609,  9700,   634,  8677,   636,
    8677,   639,  8677,   645,  9700,  8677, 11892,  8677, 11892,  9700,
      -2,  1166,  1176,   454,  1524,     0,  1177,   574,  1214,    -2,
    1291,   648,  9700,  8677,  8677,  1296,  1295,  1305,  1314, -1143,
    2329,    -4,  8677,  8677,   574, -1143, 11892,   574,   662, -1143,
      94, 11892,  1331, -1143, -1143, -1143,  2358,  1348, -1143, -1143,
    1350,  1364,  1560,  1578,  1783,   329,  1333,  1372,  1385,  1387,
    1400,  1408,  1346,  1410,   656,  9700,  9700,   574,   574,   658,
     574,   574,   676,   574,  9700,   574,   684,   686,   689,   574,
    1829,   690,   700,   701,   705,   574,   713,   716,   574,   717,
     574,   574,   718,   728,   574,  9700,   574,   740,   742,   761,
     574,  1840,    -2,   574,   470,  1412,  1874,  3183, 10944, 10955,
   10966, 10977,   932, 10988,   993, 11028, 11051,  1426, 11149, 11160,
   11171, 11189,  1909, -1143, 11212,    55,    98,   769,   795,   796,
    1926,  2304,  1199, -1143, 11223, 11234,   238, 11245,   -16, 11256,
     351,   352,   407,   458,   487,   801,   809,   571,   661,    85,
    1441,     4, -1143, -1143,   830,   -44,   847,    36,   849, -1143,
    8677,   738,   655,   574,   574, -1143, -1143,   574,   574,   574,
     574,   574,   574, -1143,   165,   165,  8677,  8677,  1588,   678,
     567,   188,   310,   -53, -1143,   -20,   -20,  1595,  1595, -1143,
   -1143,   396, -1143, -1143,   398, -1143, -1143, -1143,  1633, -1143,
   -1143, -1143, -1143,  1629,  2316,  8677,    56, 11267,  9932, -1143,
   -1143,  8677,  8677, -1143, -1143,  8677, -1143,   704, -1143,  1453,
    1458,  1461,  1466, 11892,  1464,  1470,  1472, -1143, -1143, -1143,
    1612,  1618,   850,  2343,  8677,  9700,  9700,  1473,   852,  8677,
     853,  8677,  9700,   858,  8677,   867,  8677,  1474,  8677,  8677,
    8677,  1475,  9700,  8677,  8677,  1476,  9700,  9700,  8677,  1478,
    8677,  1479,   574,  9700,  9700,  9700,  1486,  1487,  1490,  9700,
    8677,  8677,  1492,  9700,   872,  9700,  8677,  8677,   574,  1494,
    9700,  9700,  8677,   880,  9700,  8677,  8677,  9700,  9700,  1496,
    9700,  8677,  8677,  9700,  8677,  1497,  8677,   574,  9700,   883,
    9700,   886,  9700,  2385,  9700,  1498,  8677,  1500,  8677,   906,
   11278, 11289,   946,  8677,  9700,  8677,  8677,  9700,  9700,  8677,
    9700,  8677,  8677,  8677,  9700,   948,  1501,  2774, -1143,  8677,
    8677,  8677, -1143, -1143,    94, 11892,    94, 11892, 10144, -1143,
   -1143, -1143,  8677,  8677, -1143,  8677, -1143, -1143,  8677,  8677,
    8677, -1143,  9700,  9700, -1143,  1505,  1506, -1143, -1143,  8677,
    8677,  9700,   954,   956,  8677,  8677,   957,  8677,  9700,  9700,
    8677,  9700,  9700,  9700,  9700,  8677,  9700,  8677,  9700,  9700,
     959,  9700,  8677,  9700,  8677,  8677,  9700,  9700,  8677, -1143,
   -1143, -1143, -1143, -1143, -1143,  8677, -1143, -1143,  8677, -1143,
   -1143, -1143, -1143, -1143, -1143, -1143,  8677, -1143, -1143, -1143,
    8677,  8677,  8677,  8677,  8677, -1143,  9700, -1143, -1143, -1143,
   -1143, -1143,  8677, -1143, -1143, -1143, -1143, -1143, -1143,  9700,
    9700, -1143, -1143, -1143, -1143, -1143,  9700,  1693, -1143,  9700,
    1693, -1143,  9700,  9700,  1507, -1143, -1143, -1143,  1509, -1143,
    1510,  1533,  3288,  1514,  1515, -1143,  1516,  1522, -1143, -1143,
     730, 10144, -1143,  8677,  2788,  1675,  9700, -1143,  9700,   574,
      94,   579,  2802,   704,   704, 11332,  1532,  1534, -1143,  1521,
   -1143, -1143, -1143, -1143,  9700, -1143, -1143,  2133,  2133,  9700,
    9700,  1535,   965,   971,  9700,  9700,   514,  2814,  9700, 11892,
     977,  9700, 11892,  9700,    94, 11892,  9700,    94,  2834,    94,
   11892, 11892,  9700,   574, 11892, 11892,  9700,  1002,  1004,   745,
   11892,  9700,   821,  2854,  9700,  1013,   574,  1028,  9700,  9700,
    9700,   574, 11892, 11892,  9700,  1029,  9700,  1030,   908,  1536,
    9700,  1031,  1032,  2911,  9700,  1059,   943, 11892, 11892,   574,
     574,  9700,  1061,  3055, 11892,  1062, 11892,  9700,  3073,   574,
    9700,  1064,  9700,  1067,  9700,  1072,  9700, 11892,  9700, 11892,
    9700, 11932, 11932,  9700,  1537,   574,  3085,  1070,  3110,   574,
    1073,  1540,  1078,  3159,  1541,  1542,   574,  9700,  9700,  8677,
    1547, 11350, 11450,  1248, -1143,  1546, -1143,    46, 10144, 11461,
   11472, 11493, 11511,   861,   127, -1143, -1143, 11522, 11533,   574,
    9700,  9700, 11892, 11892,  9700,    94, 11892,  1081,   574,  3170,
    1082,   574,   574,   574, 11892,  1111,  3218,   574,   574,  9700,
     574, 11892,   574,  4484,  1549,  1112,  1129,    19, 11544, 11555,
   11566, 11577, 11588,  1274, 11633, 11654,   150, 11749,   159,   239,
     968,    47,   996,    77,  1110,  1127,  9700,   165,   165, -1143,
   -1143, -1143, -1143, -1143,  1717,  1723,  1719, 11760,  8677,  1559,
    1187,   256, -1143,  8677, -1143, -1143, -1143, -1143, -1143, -1143,
    1561,  1564,   574, -1143, -1143,   574,   574,  9700,  8677,  9700,
    1130,   574,  9700,  9700,  1140,  9700,  1142,  1143,  1144,  9700,
    1146,  1154,  9700,  8677,  8677,  1159,  9700,  8677,  1160,  8677,
    8677,  1162,  1178,  1179,  1181,  8677,  1196,  9700,  9700,  9700,
    1202,  8677,  8677,  8677,   574,  8677,  9700,  1205,  8677,  8677,
    8677,  1207,  8677,  1208,  8677,  1210,  8677,   574,  8677,  1211,
    1213,  1219,   574,  9700,  9700,  9700,  8677,  9700,  9700,  9700,
    8677,  9700,  8677,  1225,  1227, 11892, -1143,  1713,  1714,  1720,
    8677,   719,  8677,    41, -1143, -1143, -1143, -1143, -1143, -1143,
    9700, -1143, -1143,   574,  1233,  1235,  8677,  9700,  9700,  8677,
    8677,   574,  9700,  9700,  9700,  9700,  8677, -1143, -1143, -1143,
   -1143, -1143, -1143,  8677, -1143, -1143, -1143,  9700, -1143, -1143,
    8677, -1143,  8677, -1143, -1143,  9700, -1143, -1143,  9700, -1143,
   -1143,  1237, -1143, -1143,  8677, -1143, -1143,  1743,   720, 11771,
    8677,  1736,  9700, 11794,   704,  1569,  1579,   704, -1143, -1143,
    1238,    94,  9283,  1239,  9700,  1252,   574,  9700,  1256,  8677,
    8677,  9700,   574,  8677,  9700,   574,  9300, 11892,  9700,  1258,
    9399,  9700,    94,  9416,    94, 11892,  8677,  9700,  9700,  9700,
    9515,  9700,   574,   574,  1262,  9700,  9532,    94,  9631,  9648,
    1076,  9747,   574,  8677,  9764,  9863,  9880,  8677, 10142,  9700,
    1257, 10238,  9700, 10249, 10263,  8677,  8677,  8677,   574,   574,
     574, 10281,  1270,  1271,   574, 10304,   574,  1584,  9700,  9700,
    9700,  9700,  9700, 11815,  1582,  1589,   131, -1143,    32, -1143,
   -1143, -1143,  1236,  9700,  9700,    94, 11892,  1282,   574, 11892,
   11892,  1284,  1285,   574,   574, 10315, 11826,  1261, 11837, 11848,
    1267,  1445,  9700, -1143, 10144,  8677,  1766, -1143,  1590, -1143,
   10326,  1592,  1448, -1143, -1143, -1143, -1143, -1143,  9700,  8677,
    9700,  1286,  9700,   574,  9700, 10337, 10348,  1288, 10359,  1299,
    8677,  1301,  8677,  8677,  1320,  8677, 10370,   574,  1322,  1323,
    8677,  1324,  9700,   574,  8677,  8677,  8677,  8677,  8677, 10381,
    8677,  8677,  8677, 10425,  8677,  1326,  9700,  9700,  1332,  8677,
    8677, 10443, 10543, 10554,  8677,  9700,  9700,  9700,  8677,   574,
    1334,   574,   574,   574,  1747,  1594,  1597, -1143,   719,  8677,
   -1143, -1143,  1335,   574,  9700,  9700,  9700,  8677, -1143, -1143,
   -1143, -1143, -1143, -1143,   574, 10144,  1786,   533, 10144, -1143,
    9700,  8677,  8677, -1143,  1342,   574, 11892,  1336,  9700,   574,
    1349,  9700,  9700,  9700,  9700,  9700, 10565,  8677, 11892, 11892,
    9700, 10587,  9700,  8677,  9700, 10605,  9700,   574, 10616, 11892,
   11892, 11892, 10627,  9700, 10638, 10649, 10660,  9700, 11892,  9700,
    1351,   574,  9700, 11892, 11892,  8677,  9700,  8677, 10671,   574,
    1361,   574,  1593,  9700,  9700, -1143, -1143, 10144, -1143, 11892,
   10144,  9700,   574,   574,   574, 11859,  1719, -1143, -1143,  1719,
     162,   275, 11870, 10682,   704,  9700,   574,  9700,   574,   574,
    1386,   574,   574,  8677, 10727,  1388,  8677,   574, 10749,   574,
    8677,   574,  8677,  8677,   574,  8677,  9700,  8677,  1392,   574,
    9700,   574, 10844,   574, 10855,  9700,  9700,  9700,   574,   574,
      49,  1719,   574, -1143, 10144, -1143, -1143, -1143, -1143,  9700,
   -1143,  8677, -1143,  1397,  1415,  9700, 11892,  8677,  9700, 11892,
    9700, 11892, 11892, 11892, 11892,   574, 10866,  9700,   574,  9700,
    8677,   574,   574,   574, -1143, -1143, -1143,    26,  1719,  1454,
   11881,  9700,  9700,   574, 10889,   574,   574,  8677,   574,   574,
   10911, -1143, -1143,  1820,  1743, -1143, -1143,   574,  1416,  9700,
   10922,  9700, -1143, -1143, -1143,  8677,  1444,  9700,   574, 10933,
    9700,   574,  9700,   574,   574
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1143, -1143,   -99, -1143, -1143,   810, -1143, -1143, -1143, -1143,
   -1143, -1143,  1785,   375, -1143, -1143,  -339,   -15, -1143,  1788,
    1545, -1143, -1143,  1404,  -416,  3033, -1143,  1241,   -33,    -5,
   -1143,     6,    69,   -52, -1143, -1143,   811, -1143, -1143, -1143,
   -1143, -1143, -1143, -1143, -1143,   964, -1143,   963, -1143,   154,
   -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143,
   -1143,   344, -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143,
   -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143, -1143,
   -1143, -1143, -1143, -1143, -1143, -1143,   -31, -1143, -1143, -1143,
   -1142, -1143, -1143, -1143,  1253, -1143, -1143,   706,  1264, -1143,
   -1143, -1143, -1143, -1143,   141, -1143,    40, -1143, -1143
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -507
static const yytype_int16 yytable[] =
{
     237,   268,   582,   240,   118,   119,    97,   743,   582,   582,
     582,  1354,  1355,   252,   573,   411,   567,   893,   542,   568,
     894,   272,     1,     2,   108,   110,   339,   282,   238,   582,
     270,   120,   290,   292,   460,   123,   264,   239,  1871,   312,
     120,   424,   319,  1689,   123,   908,   245,   280,   241,   246,
     247,   542,   707,   708,   359,  1589,  1442,   364,   366,   408,
     251,   283,   284,   375,   373,   441,   388,   389,  1872,    98,
     287,   429,  1854,   395,   432,   592,   340,   275,   276,   727,
     534,   535,   286,  1590,   536,   537,   538,   539,   540,   541,
     542,  1855,   362,   534,   535,   407,   285,   536,   537,   538,
     539,   540,   541,   542,   437,   728,   390,   534,   535,   438,
     281,   536,   537,   538,   539,   540,   541,   542,   531,   391,
      97,   463,   426,   427,   464,   601,   374,   435,   396,   465,
     392,   525,   526,   527,   528,   529,   530,   525,   526,   527,
     528,   529,   530,   446,   561,   120,   425,   461,   393,   123,
     525,   526,   527,   528,   529,   530,   442,   254,   255,   525,
     526,   527,   528,   529,   530,   543,   544,   545,   546,   115,
     397,   430,   116,   835,   433,   837,   431,   109,   111,   434,
    1118,   398,  1119,    98,   394,   574,   556,   557,   525,   526,
     527,   528,   529,   530,   531,    83,    84,    85,   399,   845,
     545,   546,   520,   531,  1825,   523,   531,   401,  1101,  1826,
    1102,   531,   531,   603,   443,   531,   402,   248,   583,   629,
    1013,   555,   444,   531,   583,   702,   998,   558,  1115,   403,
    1116,   409,   588,   589,   570,   569,   895,   543,   544,   545,
     546,   879,   428,   447,   880,   583,   265,   266,   448,    97,
     543,   544,   545,   546,   531,   265,   266,   540,   541,   542,
    1121,   671,  1122,   449,   543,   544,   545,   546,   410,   596,
     597,  1484,   598,  1485,   531,   531,   602,   109,   604,  1088,
    1145,   607,  1146,   609,   610,   531,   612,   613,   614,   615,
     616,   531,   618,   619,   620,   621,   845,   111,   623,   624,
     625,  1487,   627,  1488,   531,   630,   631,   632,   633,  1113,
     635,   636,    98,   531,   639,   640,   641,   531,   643,   412,
     645,   646,  1089,   413,   651,   652,   653,   416,   655,   656,
     657,   658,   659,   660,   661,   417,   663,   664,   665,   666,
     667,   668,   531,   670,   419,   672,   531,   674,   675,   712,
     677,  1449,   679,  1450,   681,  1687,   683,  1688,   420,   531,
     730,   731,  1624,   450,   693,  1627,   676,   697,   451,   531,
     421,   701,   260,   261,  1476,   422,  1477,   531,   531,   711,
     541,   542,   714,  1479,   678,  1480,   531,   717,   414,   415,
     436,   720,   423,   689,   525,   526,   527,   528,   529,   530,
     547,   548,   551,   552,   531,   735,   543,   544,   545,   546,
     744,   745,   439,   747,   748,   749,   750,   751,   752,   753,
     440,   755,   756,   757,   758,   759,   445,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   452,   772,
     773,   774,   454,   776,   777,   778,   779,   780,   453,   783,
     784,   525,   526,   527,   528,   529,   530,   531,   531,   531,
     736,   737,  1099,  1481,   883,  1482,   746,   531,   455,   805,
     806,   807,   808,   809,   754,   531,   738,   739,   456,   816,
     845,   818,  1502,   820,   821,   822,   823,   824,   825,   826,
     827,   828,   829,   831,   531,   531,   834,   458,   836,  1828,
     838,  1829,   915,   841,   843,   462,   844,   890,   891,   466,
     847,   848,   849,   850,   851,   852,   853,   797,   531,   525,
     526,   527,   528,   529,   530,   919,   899,   900,   543,   544,
     545,   546,   459,   905,   906,   525,   526,   527,   528,   529,
     530,  -506,   531,   531,   467,   531,   519,   830,   531,   921,
     924,   886,   926,  1031,   531,  1032,   468,   268,   534,   535,
     469,   928,   536,   537,   538,   539,   540,   541,   542,    97,
     531,   531,   532,   533,   580,  1104,  1105,  1777,   912,   525,
     526,   527,   528,   529,   530,   531,   918,   470,   920,   531,
     531,   923,   929,   925,   534,   535,   930,   932,   536,   537,
     538,   539,   540,   541,   542,   531,   531,   910,   911,   521,
     531,   531,   955,   933,   942,   534,   535,   934,   936,   536,
     537,   538,   539,   540,   541,   542,   531,   888,   471,   954,
     430,  1106,    98,   537,   958,   539,   540,   541,   542,   963,
     534,   535,  1832,   472,   536,   537,   538,   539,   540,   541,
     542,   473,   531,   901,   902,   531,   977,   474,   979,   937,
     122,   981,   938,   124,   600,   475,  1019,  1020,   476,   989,
     523,   531,   523,   531,   992,   611,   531,   531,   940,   477,
     996,   617,  1107,   943,   126,   531,   622,  1005,   531,   531,
     478,   626,   944,   628,   479,   945,  1066,  1014,  1016,   634,
     480,  1331,   637,   638,  1333,   531,   531,   642,  1156,  1157,
     433,  1108,   949,   650,   531,   543,   544,   545,   546,   531,
     531,   950,   531,  1584,  1585,   662,   951,   953,   531,   960,
    1042,  1043,   669,   531,   531,   961,   481,   531,   437,  1046,
    1372,   962,   482,   680,   964,   682,   539,   540,   541,   542,
     447,   543,   544,   545,   546,   139,   230,   231,   531,   483,
    1060,   142,   703,   704,   531,   965,   232,  1343,  1344,   531,
     484,   966,   543,   544,   545,   546,   967,   233,   234,  1617,
    1618,   485,   151,   152,   531,   543,   544,   545,   546,   531,
     531,   968,   156,   531,   531,  1111,   970,   543,   544,   545,
     546,   971,   235,   486,   487,   488,   489,   490,   163,   531,
     525,   526,   527,   528,   529,   530,   972,  1133,  1134,   531,
    1136,  1137,   531,   531,   531,   491,   973,   555,   531,   974,
     976,   978,   183,   184,   185,   980,   492,   188,   189,   190,
     493,   192,   494,   194,   195,   196,   197,   198,   199,  1127,
    1129,   202,   495,   531,   205,   531,   206,   207,   531,   209,
     982,   211,   984,   213,   531,   986,   215,   531,   216,   496,
     218,   988,   565,  1149,  1004,   531,  1150,   531,   236,  1126,
     531,   450,  1041,   497,  1044,  1112,   525,   526,   527,   528,
     529,   530,   840,   498,   499,   531,   543,   544,   545,   546,
    1172,  1173,  1045,   531,  1176,   531,   500,  1180,   531,   531,
    1047,  1184,  1048,  1187,  1189,  1049,  1051,  1193,   501,   531,
     531,  1197,  1198,  1199,   531,  1202,  1052,  1053,  1205,  1206,
    1207,  1054,   531,   502,  1211,   531,   531,   531,  1215,  1055,
    1217,  1218,  1056,  1057,  1058,  1221,  1222,   531,   503,  1225,
    1226,   464,  1229,  1230,  1059,  1232,  1270,   531,  1235,   531,
     504,   531,  1125,  1239,   531,  1241,  1061,  1243,  1062,  1245,
     914,  1384,   505,   525,   526,   527,   528,   529,   530,  1255,
     531,  1257,  1259,  1260,   587,  1262,   506,  1063,   531,  1266,
     507,   376,   590,   534,   535,  1090,   508,   536,   537,   538,
     539,   540,   541,   542,   509,   510,   511,   720,   525,   526,
     527,   528,   529,   530,   531,   531,   512,  1283,  1284,   705,
     531,  1091,  1092,   957,    97,   513,  1289,  1109,   531,   377,
     378,   514,  1295,  1297,  1298,  1110,  1300,  1301,  1302,  1303,
     531,  1305,  1346,  1307,  1308,   515,  1310,  1386,  1312,   531,
     379,  1315,  1316,   593,   534,   535,  1117,   380,   536,   537,
     538,   539,   540,   541,   542,   993,   531,   516,   531,   531,
     999,   531,   531,  1120,  1002,  1123,  1169,   531,  1175,  1178,
     531,  1326,   518,   564,  1181,  1448,   531,    98,   381,   382,
     383,   531,   384,  1183,  1328,  1329,   385,   566,  1216,   531,
     578,  1330,   531,   719,  1332,   531,  1224,  1334,  1335,  1240,
    1360,  1361,  1242,   579,   534,   535,   585,   586,   536,   537,
     538,   539,   540,   541,   542,   531,   594,   531,   606,   608,
     644,  1350,  1250,  1351,  1398,   525,   526,   527,   528,   529,
     530,   525,   526,   527,   528,   529,   530,    97,   649,  1362,
     543,   544,   545,   546,  1365,  1366,  1074,  1065,  1075,  1370,
    1371,   654,   531,  1374,   673,   531,  1376,   531,  1377,  1406,
     684,  1378,  1253,   531,  1267,   531,   531,  1380,   531,  1443,
    1290,  1381,  1291,  1294,   531,  1309,  1385,   531,   713,  1388,
     531,  1368,  1483,  1391,  1392,  1393,   531,  1369,   715,  1394,
     724,  1396,   725,  1375,   775,  1400,   832,  1363,  1364,  1404,
      98,   543,   544,   545,   546,   531,  1407,  1077,   833,  1078,
    1486,   531,  1411,   531,   839,  1413,   869,  1415,  1382,  1417,
    1383,  1419,   531,  1420,   870,  1421,   534,   535,  1422,  1389,
     536,   537,   538,   539,   540,   541,   542,   531,   531,   531,
     531,   531,  1433,  1434,  1390,  1395,  1397,  1401,  1402,   871,
     534,   535,   872,   873,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,  1453,  1454,   846,   531,  1455,
     531,   531,   874,   531,    97,  1405,   531,  1408,  1410,   531,
    1414,   531,   531,  1416,  1461,   531,  1425,   531,  1418,  1427,
     531,   531,  1657,   875,  1429,  1505,  1506,  1456,  1458,   534,
     535,   876,   882,   536,   537,   538,   539,   540,   541,   542,
     877,  1491,   525,   526,   527,   528,   529,   530,   885,   531,
     531,   531,  1492,  1493,  1489,   534,   535,  1459,  1464,   536,
     537,   538,   539,   540,   541,   542,   531,    98,   531,   531,
     896,  1490,  1510,  1511,  1513,  1465,  1514,  1515,  1516,   531,
    1518,   531,   531,   531,  1522,   531,  1517,  1525,  1519,  1520,
    1521,  1529,  1523,   531,  1532,  1534,   892,   916,   531,   531,
    1524,   531,  1542,  1543,  1544,  1528,  1531,  1547,  1536,   922,
    1550,  1552,   994,   543,   544,   545,   546,   531,   531,  1560,
     531,   581,   995,  1000,  1537,  1538,   531,  1539,  1568,  1569,
    1570,  1501,  1572,  1573,  1574,   531,  1576,   543,   544,   545,
     546,   531,  1541,  1095,   531,  1096,   531,   531,  1545,   531,
     531,  1553,   531,  1557,  1559,  1592,  1562,  1565,   531,  1566,
    1001,  1595,  1597,  1598,   531,  1567,   531,  1601,  1602,  1603,
    1604,  1578,   531,  1579,   531,   531,   531,   531,   531,  1593,
    1691,  1594,  1607,  1612,  1628,  1630,   543,   544,   545,   546,
    1610,   531,  1439,  1611,  1440,   531,   531,   531,  1632,   558,
     531,   531,  1634,  1666,  1642,  1699,   531,  1622,  1652,   531,
     531,  1702,   543,   544,   545,   546,  1675,  1676,  1472,  1631,
    1473,   531,  1633,   531,   531,   531,  1637,   531,  1694,  1639,
    1695,  1696,  1718,  1641,  1723,  1706,  1644,  1003,   531,  1008,
     531,  1009,  1647,  1648,  1649,  1725,  1651,  1727,   534,   535,
    1653,  1010,   536,   537,   538,   539,   540,   541,   542,   531,
    1011,   531,   531,   531,  1665,   531,  1730,  1668,  1733,  1734,
    1736,   531,  1749,   531,   531,   531,   223,  1022,  1752,  1033,
    1763,  1771,  1785,  1679,  1680,  1681,  1682,  1683,   531,   244,
     531,  1025,  1039,   253,  1026,  1787,   257,  1810,  1692,  1693,
     531,   273,   273,   273,   277,   534,   535,  1816,  1027,   536,
     537,   538,   539,   540,   541,   542,  1034,  1704,   536,   537,
     538,   539,   540,   541,   542,   531,  1776,   531,  1035,  1779,
    1036,   531,  1835,  1715,  1838,  1717,   531,  1719,  1847,  1720,
      97,   534,   535,  1861,  1037,   536,   537,   538,   539,   540,
     541,   542,  1038,   273,   531,   531,  1040,  1737,  1067,   534,
     535,  1862,  1885,   536,   537,   538,   539,   540,   541,   542,
    1081,  1750,  1751,   404,   537,   538,   539,   540,   541,   542,
    1759,  1760,  1761,   531,   531,  1114,   542,   531,  1820,  1703,
    1890,  1821,  1713,   531,  1139,   418,  1142,  1160,  1875,  1772,
    1773,  1774,  1161,    98,  1162,   543,   544,   545,   546,  1163,
    1164,  1167,  1466,   956,  1165,  1781,  1166,  1168,   739,  1174,
    1186,  1192,  1196,  1786,  1201,  1204,  1788,  1789,  1790,  1791,
    1792,    97,  1208,  1209,    97,  1795,  1210,  1797,  1214,  1799,
    1220,  1801,  1231,  1237,  1246,  1858,  1248,  1268,  1804,  1285,
    1286,  1349,  1808,  1336,  1809,  1337,  1338,  1811,  1339,  1340,
    1341,  1813,   543,   544,   545,   546,  1342,  1359,  1818,  1819,
     997,   543,   544,   545,   546,  1357,  1822,  1358,  1495,  1496,
      -4,  1367,  1399,  1423,   522,   524,  1428,  1431,  1432,  1441,
    1833,  1436,  1834,    97,    98,  1463,    97,    98,   543,   544,
     545,   546,  1500,  1580,  1581,  1508,  1028,   559,  1509,  1615,
    1582,  1845,  1621,  1625,   571,  1848,   543,   544,   545,   546,
    1851,  1852,  1853,  1626,  1029,  1685,   543,   544,   545,   546,
    1678,  1708,  1686,  1710,  1859,  1712,   591,  1764,  1765,  1817,
    1863,  1766,  -492,  1865,  1882,  1866,   278,   742,  1274,   279,
      97,   909,  1868,  1276,  1869,  1135,    98,  1138,  1613,    98,
     907,   898,  1768,  1884,   534,   535,  1877,  1878,   536,   537,
     538,   539,   540,   541,   542,  1784,     0,  1352,     0,     0,
       0,     0,     0,     0,  1886,     0,  1888,     0,     0,     0,
       0,     0,  1891,     0,     0,  1893,     0,  1894,     0,     0,
       0,   647,     0,     0,     0,     0,     0,     0,     0,     0,
     534,   535,     0,    98,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,     0,   536,   537,   538,   539,   540,
     541,   542,     0,     0,     0,     0,     0,     0,   686,   688,
       0,     0,     0,     0,   694,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   534,   535,     0,   710,   536,
     537,   538,   539,   540,   541,   542,   716,     0,     0,     0,
       0,   721,     0,     0,     0,   726,     0,     0,     0,     0,
       0,   732,   733,     0,   734,   273,   273,     0,     0,     0,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,     0,     0,     0,     0,     0,   760,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,     0,     0,
       0,   543,   544,   545,   546,     0,     0,     0,   781,  1030,
       0,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   273,   798,   799,   800,   801,   802,   804,     0,
       0,     0,     0,     0,   810,   811,   812,   814,   815,     0,
     817,     0,   819,     0,     0,     0,     0,   543,   544,   545,
     546,     0,   273,     0,     0,  1050,     0,     0,   543,   544,
     545,   546,     0,     0,     0,     0,  1064,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     867,   868,   543,   544,   545,   546,     0,     0,     0,     0,
    1068,     0,     0,     0,     0,     0,     0,     0,     0,   884,
       0,     0,     0,     0,   887,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   903,   543,   544,   545,
     546,     0,     0,     0,     0,  1086,   120,   121,   122,   913,
     123,   124,     0,     0,   543,   544,   545,   546,     0,     0,
       0,     0,  1093,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,   133,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,     0,   983,     0,     0,   137,     0,     0,   138,
     990,     0,   991,   139,   140,   141,     0,     0,     0,   142,
     143,     0,     0,     0,   144,     0,   145,     0,   146,  1007,
     147,     0,     0,     0,   148,   149,   150,  1015,  1017,     0,
     151,   152,     0,     0,     0,   153,     0,     0,   154,   155,
     156,   157,     0,   158,   159,   160,     0,     0,     0,   161,
     162,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   208,   209,   210,   211,
     212,   213,     0,   214,   215,     0,   216,   217,   218,     0,
       0,   219,     0,     0,     0,     0,   220,     0,     0,     0,
     271,     0,     0,     0,     0,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,     0,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,     0,     0,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,  1131,  1132,     0,   534,   535,     0,     0,   536,   537,
     538,   539,   540,   541,   542,     0,     0,     0,     0,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
    1144,     0,     0,     0,     0,     0,  1151,  1152,     0,     0,
    1155,     0,     0,     0,     0,     0,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,     0,     0,     0,
       0,     0,     0,     0,  1177,     0,  1179,     0,     0,  1182,
       0,  1185,     0,  1188,  1190,  1191,     0,     0,  1194,  1195,
       0,     0,     0,  1200,     0,  1203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1212,  1213,     0,     0,     0,
       0,   903,     0,     0,     0,     0,     0,  1223,     0,     0,
    1227,  1228,     0,     0,     0,     0,  1233,  1234,     0,  1236,
       0,  1238,   543,   544,   545,   546,     0,     0,     0,     0,
    1094,  1247,     0,  1249,   543,   544,   545,   546,     0,     0,
    1256,  1258,  1143,     0,     0,     0,  1263,   543,   544,   545,
     546,     0,     0,  1012,  1271,  1272,  1273,     0,     0,     0,
       0,   543,   544,   545,   546,     0,     0,   721,  1277,  1170,
    1279,     0,     0,  1280,  1281,  1282,   543,   544,   545,   546,
       0,     0,  1024,     0,  1287,  1288,     0,     0,     0,  1292,
    1293,     0,  1296,     0,     0,  1299,     0,     0,     0,     0,
    1304,     0,  1306,   543,   544,   545,   546,  1311,     0,  1313,
       0,  1244,     0,  1317,     0,     0,     0,   120,   121,   122,
    1318,   123,   124,  1319,     0,     0,     0,     0,     0,     0,
       0,  1320,     0,     0,     0,  1321,  1322,  1323,  1324,  1325,
       0,     0,   125,   126,     0,     0,     0,  1327,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1347,   132,
       0,     0,   133,     0,     0,     0,     0,     0,     0,   134,
     135,     0,   136,     0,     0,     0,     0,   137,     0,     0,
     138,     0,   273,   273,   139,   140,   141,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,   145,     0,   146,
       0,   147,     0,     0,     0,   148,   149,   150,     0,     0,
       0,   151,   152,     0,     0,     0,   153,     0,     0,   154,
     155,   156,   157,     0,   158,   159,   160,     0,     0,     0,
     161,   162,     0,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,  1435,   206,   207,   208,   209,   210,
     211,   212,   213,     0,   214,   215,     0,   216,   217,   218,
       0,     0,   219,     0,     0,   534,   535,   220,   709,   536,
     537,   538,   539,   540,   541,   542,     0,     0,     0,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
       0,     0,     0,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,     0,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,     0,     0,     0,     0,
       0,     0,     0,  1499,     0,   534,   535,     0,  1503,   536,
     537,   538,   539,   540,   541,   542,     0,     0,     0,     0,
       0,     0,     0,  1512,     0,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,     0,     0,  1526,  1527,
       0,     0,  1530,     0,  1533,  1535,     0,     0,     0,     0,
    1540,     0,     0,     0,     0,     0,  1546,  1548,  1549,     0,
    1551,     0,     0,  1554,  1555,  1556,     0,  1558,     0,  1561,
       0,  1563,     0,  1564,     0,     0,     0,     0,     0,     0,
       0,  1571,   534,   535,     0,  1575,   536,   537,   538,   539,
     540,   541,   542,     0,     0,  1583,     0,  1588,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,     0,     0,
    1269,  1596,     0,     0,  1599,  1600,   543,   544,   545,   546,
       0,  1605,     0,     0,  1348,     0,     0,     0,  1606,     0,
     543,   544,   545,   546,     0,  1608,     0,  1609,  1353,     0,
       0,     0,   543,   544,   545,   546,     0,     0,     0,   559,
    1373,     0,     0,     0,     0,  1620,     0,     0,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,     0,     0,
    1379,     0,     0,     0,  1635,  1636,     0,     0,  1638,     0,
       0,     0,   543,   544,   545,   546,     0,     0,     0,   289,
    1387,  1646,   295,   297,   300,   306,   311,     0,   316,   318,
       0,   324,   327,   328,   332,   334,   337,   338,  1659,   342,
     350,   357,  1663,   361,     0,     0,     0,   368,   370,   372,
    1671,  1672,  1673,   387,     0,     0,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,     0,     0,   543,
     544,   545,   546,     0,   534,   535,     0,  1403,   536,   537,
     538,   539,   540,   541,   542,     0,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,     0,     0,     0,
    1707,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   534,   535,     0,  1716,   536,   537,   538,   539,   540,
     541,   542,     0,     0,     0,  1726,     0,  1728,  1729,   457,
    1731,     0,     0,     0,     0,  1735,     0,     0,     0,  1738,
    1739,  1740,  1741,  1742,     0,  1744,  1745,  1746,     0,  1748,
       0,     0,     0,     0,  1753,  1754,     0,     0,     0,  1758,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,  1769,   536,   537,   538,   539,   540,
     541,   542,  1775,     0,   534,   535,     0,   517,   536,   537,
     538,   539,   540,   541,   542,     0,  1782,  1783,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1794,   543,   544,   545,   546,     0,  1798,   534,
     535,  1409,     0,   536,   537,   538,   539,   540,   541,   542,
       0,   543,   544,   545,   546,     0,     0,     0,     0,  1412,
    1812,     0,  1814,   543,   544,   545,   546,     0,     0,     0,
       0,  1424,     0,     0,     0,     0,   595,     0,     0,     0,
       0,   599,     0,     0,     0,     0,     0,   605,   543,   544,
     545,   546,     0,     0,     0,     0,  1426,     0,  1836,     0,
       0,  1839,     0,     0,     0,  1841,     0,  1842,  1843,   534,
    1844,     0,  1846,   536,   537,   538,   539,   540,   541,   542,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   648,
       0,     0,     0,     0,     0,     0,  1860,   543,   544,   545,
     546,     0,  1864,     0,     0,  1430,     0,     0,   543,   544,
     545,   546,     0,     0,     0,  1870,  1457,     0,     0,     0,
       0,   543,   544,   545,   546,     0,     0,  1069,     0,   690,
     691,   692,  1880,   695,   696,     0,   698,   699,   700,     0,
     120,   121,   122,     0,   123,   124,     0,     0,     0,     0,
    1889,     0,     0,     0,     0,     0,   543,   544,   545,   546,
       0,     0,     0,     0,  1460,   125,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,   133,   782,     0,   785,     0,
       0,     0,   134,   135,     0,   136,   543,   544,   545,   546,
     137,     0,     0,   138,     0,     0,     0,   139,   140,   141,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
     145,     0,   146,     0,   147,     0,     0,     0,   148,   149,
     150,     0,     0,     0,   151,   152,     0,     0,     0,   153,
       0,     0,   154,   155,   156,   157,     0,   158,   159,   160,
       0,     0,     0,   161,   162,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   904,   206,   207,
     208,   209,   210,   211,   212,   213,     0,   214,   215,     0,
     216,   217,   218,   917,     0,   219,     0,     0,     0,     0,
     220,   803,     0,     0,   927,     0,     0,   120,   121,   122,
     931,   123,   124,     0,     0,   935,     0,     0,     0,   939,
       0,   941,     0,     0,     0,     0,     0,   946,     0,     0,
     947,   948,   125,   126,     0,   952,     0,     0,     0,     0,
       0,     0,     0,   959,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   969,     0,     0,     0,     0,
       0,     0,   975,     0,     0,   128,   129,   130,   131,     0,
       0,     0,     0,   985,     0,   987,     0,     0,     0,   132,
       0,     0,   133,     0,     0,     0,     0,     0,     0,   134,
     135,     0,   136,     0,     0,     0,  1006,   137,     0,     0,
     138,     0,     0,     0,   139,   140,   141,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,   145,     0,   146,
       0,   147,     0,     0,     0,   148,   149,   150,     0,     0,
       0,   151,   152,     0,     0,     0,   153,     0,     0,   154,
     155,   156,   157,     0,   158,   159,   160,     0,     0,     0,
     161,   162,     0,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   207,   208,   209,   210,
     211,   212,   213,     0,   214,   215,     0,   216,   217,   218,
       0,     0,   219,     0,     0,     0,     0,   220,   813,     0,
       0,     0,     0,  1124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,   122,     0,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,     0,  1171,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,   133,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
       0,     0,   343,     0,   137,     0,     0,   138,     0,     0,
       0,   139,   140,   141,   344,   345,     0,   142,   143,     0,
    1219,     0,   144,     0,   145,     0,   146,     0,   147,     0,
       0,     0,   148,   149,   150,     0,   346,     0,   151,   152,
       0,     0,   347,   153,   348,   349,   154,   155,   156,   157,
       0,   158,   159,   160,     0,     0,  1254,   161,   162,     0,
       0,     0,  1261,     0,   163,  1264,  1265,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   207,   208,   209,   210,   211,   212,   213,
       0,   214,   215,     0,   216,   217,   218,     0,  1314,   219,
       0,   120,   121,   122,   220,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,   128,
     129,   130,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,   133,     0,     0,     0,
       0,     0,     0,   134,   135,     0,   136,     0,     0,   352,
       0,   137,     0,     0,   138,     0,     0,     0,   139,   140,
     141,   353,   354,     0,   142,   143,     0,     0,     0,   144,
       0,   145,     0,   146,     0,   147,     0,     0,     0,   148,
     149,   150,   355,     0,     0,   151,   152,     0,     0,   356,
     153,     0,     0,   154,   155,   156,   157,     0,   158,   159,
     160,     0,     0,     0,   161,   162,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   208,   209,   210,   211,   212,   213,     0,   214,   215,
       0,   216,   217,   218,     0,     0,   219,     0,   120,   121,
     122,   220,   123,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,     0,   133,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,     0,     0,   301,     0,   137,     0,
       0,   138,     0,     0,     0,   139,   140,   141,   302,   303,
       0,   142,   143,     0,     0,     0,   144,     0,   145,     0,
     146,     0,   147,     0,     0,     0,   148,   149,   150,     0,
     304,     0,   151,   152,     0,     0,   305,   153,     0,     0,
     154,   155,   156,   157,     0,   158,   159,   160,     0,     0,
       0,   161,   162,     0,     0,  1577,     0,     0,   163,     0,
       0,     0,     0,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,   207,   208,   209,
     210,   211,   212,   213,     0,   214,   215,     0,   216,   217,
     218,     0,     0,   219,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,     0,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,     0,   120,   121,   122,
       0,   123,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,   133,     0,     0,     0,     0,     0,     0,   134,
     135,     0,   136,     0,     0,   307,     0,   137,     0,     0,
     138,     0,     0,     0,   139,   140,   141,   308,   309,     0,
     142,   143,     0,     0,     0,   144,     0,   145,     0,   146,
       0,   147,     0,     0,     0,   148,   149,   150,     0,     0,
       0,   151,   152,     0,     0,   310,   153,     0,     0,   154,
     155,   156,   157,     0,   158,   159,   160,     0,     0,     0,
     161,   162,   543,   544,   545,   546,     0,   163,     0,     0,
    1462,  1762,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   207,   208,   209,   210,
     211,   212,   213,     0,   214,   215,     0,   216,   217,   218,
       0,     0,   219,     0,   120,   121,   122,   220,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   320,   128,   129,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,   133,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
       0,     0,   321,     0,   137,     0,     0,   138,     0,     0,
       0,   139,   140,   141,   322,     0,     0,   142,   143,     0,
       0,   323,   144,     0,   145,     0,   146,     0,   147,     0,
       0,     0,   148,   149,   150,     0,     0,     0,   151,   152,
       0,     0,     0,   153,     0,     0,   154,   155,   156,   157,
       0,   158,   159,   160,     0,     0,     0,   161,   162,     0,
       0,     0,     0,     0,   163,     0,     0,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   207,   208,   209,   210,   211,   212,   213,
       0,   214,   215,     0,   216,   217,   218,     0,     0,   219,
       0,   120,   121,   122,   220,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   313,     0,
       0,     0,     0,     0,     0,     0,   125,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   314,   128,
     129,   130,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,   133,     0,     0,     0,
       0,     0,     0,   134,   135,     0,   136,     0,     0,     0,
       0,   137,     0,     0,   138,     0,     0,     0,   139,   140,
     141,     0,     0,     0,   142,   143,     0,     0,   315,   144,
       0,   145,     0,   146,     0,   147,     0,     0,     0,   148,
     149,   150,     0,     0,     0,   151,   152,     0,     0,     0,
     153,     0,     0,   154,   155,   156,   157,     0,   158,   159,
     160,     0,     0,     0,   161,   162,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   208,   209,   210,   211,   212,   213,     0,   214,   215,
       0,   216,   217,   218,     0,     0,   219,     0,   120,   121,
     122,   220,   123,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,     0,   133,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,     0,     0,     0,     0,   137,     0,
       0,   138,     0,     0,     0,   139,   140,   141,   329,   330,
       0,   142,   143,     0,     0,   331,   144,     0,   145,     0,
     146,     0,   147,     0,     0,     0,   148,   149,   150,     0,
       0,     0,   151,   152,     0,     0,     0,   153,     0,     0,
     154,   155,   156,   157,     0,   158,   159,   160,     0,     0,
       0,   161,   162,     0,     0,     0,     0,     0,   163,     0,
       0,     0,     0,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,   207,   208,   209,
     210,   211,   212,   213,     0,   214,   215,     0,   216,   217,
     218,     0,     0,   219,     0,   120,   121,   122,   220,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,     0,     0,
     133,     0,     0,     0,     0,     0,     0,   134,   135,     0,
     136,     0,     0,     0,     0,   137,     0,     0,   138,     0,
       0,     0,   139,   140,   141,     0,     0,     0,   142,   143,
       0,     0,   293,   144,     0,   145,     0,   146,     0,   147,
       0,     0,     0,   148,   149,   150,     0,     0,     0,   151,
     152,     0,     0,     0,   153,     0,     0,   154,   155,   156,
     157,     0,   158,   159,   160,     0,     0,     0,   161,   162,
       0,     0,     0,     0,     0,   163,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,   208,   209,   210,   211,   212,
     213,   294,   214,   215,     0,   216,   217,   218,     0,     0,
     219,     0,   120,   121,   122,   220,   123,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,   133,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,     0,     0,
     298,     0,   137,     0,     0,   138,     0,     0,     0,   139,
     140,   141,     0,     0,     0,   142,   143,     0,     0,   299,
     144,     0,   145,     0,   146,     0,   147,     0,     0,     0,
     148,   149,   150,     0,     0,     0,   151,   152,     0,     0,
       0,   153,     0,     0,   154,   155,   156,   157,     0,   158,
     159,   160,     0,     0,     0,   161,   162,     0,     0,     0,
       0,     0,   163,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,   207,   208,   209,   210,   211,   212,   213,     0,   214,
     215,     0,   216,   217,   218,     0,     0,   219,     0,   120,
     121,   122,   220,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,   133,     0,     0,     0,     0,     0,
       0,   134,   135,     0,   136,     0,     0,     0,     0,   137,
       0,     0,   138,     0,     0,     0,   139,   140,   141,     0,
     325,     0,   142,   143,     0,     0,     0,   144,     0,   145,
       0,   146,     0,   147,     0,     0,   326,   148,   149,   150,
       0,     0,     0,   151,   152,     0,     0,     0,   153,     0,
       0,   154,   155,   156,   157,     0,   158,   159,   160,     0,
       0,     0,   161,   162,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   207,   208,
     209,   210,   211,   212,   213,     0,   214,   215,     0,   216,
     217,   218,     0,     0,   219,     0,   120,   121,   122,   220,
     123,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,   133,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,     0,     0,     0,     0,   137,     0,     0,   138,
       0,     0,     0,   139,   140,   141,     0,   335,     0,   142,
     143,     0,     0,     0,   144,     0,   145,     0,   146,     0,
     147,     0,     0,     0,   148,   149,   150,     0,     0,     0,
     151,   152,     0,     0,     0,   153,     0,     0,   154,   155,
     156,   157,     0,   158,   159,   160,     0,     0,     0,   161,
     162,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   208,   209,   210,   211,
     212,   213,     0,   214,   215,     0,   216,   217,   218,     0,
     336,   219,     0,   120,   121,   122,   220,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,   129,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,     0,     0,   133,     0,
       0,     0,     0,     0,     0,   134,   135,     0,   136,     0,
       0,     0,     0,   137,     0,     0,   138,     0,     0,     0,
     139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
       0,   144,     0,   145,     0,   146,     0,   147,     0,     0,
       0,   148,   149,   150,     0,     0,     0,   151,   152,     0,
       0,     0,   153,     0,     0,   154,   155,   156,   157,     0,
     158,   159,   160,     0,     0,     0,   161,   162,     0,     0,
       0,     0,     0,   163,     0,     0,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,   207,   208,   209,   210,   211,   212,   213,     0,
     214,   215,     0,   216,   217,   218,     0,     0,   219,     0,
     120,   121,   122,   220,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,   133,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,     0,     0,     0,     0,
     137,     0,     0,   138,     0,     0,     0,   139,   140,   141,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
     145,     0,   146,     0,   147,     0,     0,     0,   148,   149,
     150,     0,     0,     0,   151,   152,     0,     0,     0,   153,
       0,     0,   154,   155,   156,   157,     0,   158,   159,   160,
       0,     0,     0,   161,   162,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
     208,   209,   210,   211,   212,   213,   288,   214,   215,     0,
     216,   217,   218,     0,     0,   219,     0,   120,   121,   122,
     220,   123,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,   133,     0,     0,     0,     0,     0,     0,   134,
     135,     0,   136,     0,     0,     0,     0,   137,     0,     0,
     138,     0,     0,     0,   139,   140,   141,     0,     0,     0,
     142,   143,     0,     0,   296,   144,     0,   145,     0,   146,
       0,   147,     0,     0,     0,   148,   149,   150,     0,     0,
       0,   151,   152,     0,     0,     0,   153,     0,     0,   154,
     155,   156,   157,     0,   158,   159,   160,     0,     0,     0,
     161,   162,     0,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   207,   208,   209,   210,
     211,   212,   213,     0,   214,   215,     0,   216,   217,   218,
       0,     0,   219,     0,   120,   121,   122,   220,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,   133,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
       0,     0,     0,     0,   137,     0,     0,   138,     0,     0,
       0,   139,   140,   141,     0,     0,     0,   142,   143,     0,
       0,   317,   144,     0,   145,     0,   146,     0,   147,     0,
       0,     0,   148,   149,   150,     0,     0,     0,   151,   152,
       0,     0,     0,   153,     0,     0,   154,   155,   156,   157,
       0,   158,   159,   160,     0,     0,     0,   161,   162,     0,
       0,     0,     0,     0,   163,     0,     0,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   207,   208,   209,   210,   211,   212,   213,
       0,   214,   215,     0,   216,   217,   218,     0,     0,   219,
       0,   120,   121,   122,   220,   123,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,   128,
     129,   130,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,     0,   133,     0,     0,     0,
       0,     0,     0,   134,   135,     0,   136,     0,     0,     0,
       0,   137,     0,     0,   138,     0,     0,     0,   139,   140,
     141,     0,     0,     0,   142,   143,     0,     0,     0,   144,
       0,   145,     0,   146,     0,   147,     0,     0,     0,   148,
     149,   150,     0,     0,     0,   151,   152,     0,     0,     0,
     153,     0,     0,   154,   155,   156,   157,     0,   158,   159,
     160,     0,     0,     0,   161,   162,     0,     0,     0,     0,
       0,   163,     0,     0,     0,     0,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     0,   206,
     207,   208,   209,   210,   211,   212,   213,     0,   214,   215,
       0,   216,   217,   218,     0,     0,   219,     0,   120,   121,
     122,   220,   123,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   125,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,     0,     0,   133,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,     0,     0,     0,     0,   137,     0,
       0,   138,     0,     0,     0,   139,   140,   141,     0,     0,
       0,   142,   143,     0,     0,   341,   144,     0,   145,     0,
     146,     0,   147,     0,     0,     0,   148,   149,   150,     0,
       0,     0,   151,   152,     0,     0,     0,   153,     0,     0,
     154,   155,   156,   157,     0,   158,   159,   160,     0,     0,
       0,   161,   162,     0,     0,     0,     0,     0,   163,     0,
       0,     0,     0,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,   206,   207,   208,   209,
     210,   211,   212,   213,     0,   214,   215,     0,   216,   217,
     218,     0,     0,   219,     0,   120,   121,   122,   220,   123,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     125,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   132,     0,     0,
     133,     0,     0,     0,     0,     0,     0,   134,   135,     0,
     136,     0,     0,     0,     0,   137,     0,     0,   138,     0,
       0,     0,   139,   140,   141,     0,     0,     0,   142,   143,
       0,     0,   360,   144,     0,   145,     0,   146,     0,   147,
       0,     0,     0,   148,   149,   150,     0,     0,     0,   151,
     152,     0,     0,     0,   153,     0,     0,   154,   155,   156,
     157,     0,   158,   159,   160,     0,     0,     0,   161,   162,
       0,     0,     0,     0,     0,   163,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,     0,   206,   207,   208,   209,   210,   211,   212,
     213,     0,   214,   215,     0,   216,   217,   218,     0,     0,
     219,     0,   120,   121,   122,   220,   123,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,     0,     0,   133,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,     0,     0,
       0,     0,   137,     0,     0,   138,     0,     0,     0,   139,
     140,   141,     0,     0,     0,   142,   143,     0,     0,   367,
     144,     0,   145,     0,   146,     0,   147,     0,     0,     0,
     148,   149,   150,     0,     0,     0,   151,   152,     0,     0,
       0,   153,     0,     0,   154,   155,   156,   157,     0,   158,
     159,   160,     0,     0,     0,   161,   162,     0,     0,     0,
       0,     0,   163,     0,     0,     0,     0,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     206,   207,   208,   209,   210,   211,   212,   213,     0,   214,
     215,     0,   216,   217,   218,     0,     0,   219,     0,   120,
     121,   122,   220,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   125,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,   129,   130,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,   133,     0,     0,     0,     0,     0,
       0,   134,   135,     0,   136,     0,     0,     0,     0,   137,
       0,     0,   138,     0,     0,     0,   139,   140,   141,     0,
       0,     0,   142,   143,     0,     0,   369,   144,     0,   145,
       0,   146,     0,   147,     0,     0,     0,   148,   149,   150,
       0,     0,     0,   151,   152,     0,     0,     0,   153,     0,
       0,   154,   155,   156,   157,     0,   158,   159,   160,     0,
       0,     0,   161,   162,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,     0,   206,   207,   208,
     209,   210,   211,   212,   213,     0,   214,   215,     0,   216,
     217,   218,     0,     0,   219,     0,   120,   121,   122,   220,
     123,   124,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,   133,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,     0,     0,     0,     0,   137,     0,     0,   138,
       0,     0,     0,   139,   140,   141,     0,     0,     0,   142,
     143,     0,     0,   371,   144,     0,   145,     0,   146,     0,
     147,     0,     0,     0,   148,   149,   150,     0,     0,     0,
     151,   152,     0,     0,     0,   153,     0,     0,   154,   155,
     156,   157,     0,   158,   159,   160,     0,     0,     0,   161,
     162,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   206,   207,   208,   209,   210,   211,
     212,   213,     0,   214,   215,     0,   216,   217,   218,     0,
       0,   219,     0,   120,   121,   122,   220,   123,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   125,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,   129,   130,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   132,     0,     0,   133,     0,
       0,     0,     0,     0,     0,   134,   135,     0,   136,     0,
       0,     0,     0,   137,     0,     0,   138,     0,     0,     0,
     139,   140,   141,     0,     0,     0,   142,   143,     0,     0,
     386,   144,     0,   145,     0,   146,     0,   147,     0,     0,
       0,   148,   149,   150,     0,     0,     0,   151,   152,     0,
       0,     0,   153,     0,     0,   154,   155,   156,   157,     0,
     158,   159,   160,     0,     0,     0,   161,   162,     0,     0,
       0,     0,     0,   163,     0,     0,     0,     0,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
       0,   206,   207,   208,   209,   210,   211,   212,   213,     0,
     214,   215,     0,   216,   217,   218,     0,     0,   219,     0,
     120,   121,   122,   220,   123,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   132,     0,     0,   133,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,     0,     0,     0,     0,
     137,     0,     0,   138,     0,     0,     0,   139,   140,   141,
       0,     0,     0,   142,   143,     0,     0,     0,   144,     0,
     145,     0,   146,     0,   147,     0,     0,     0,   148,   149,
     150,     0,     0,     0,   151,   152,     0,     0,     0,   153,
       0,     0,   154,   155,   156,   157,     0,   158,   159,   160,
       0,     0,     0,   161,   162,     0,     0,     0,     0,     0,
     163,     0,     0,     0,     0,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   206,   207,
     208,   209,   210,   211,   212,   213,     0,   214,   215,     0,
     216,   217,   218,     0,     0,   219,     0,   120,   121,   122,
     220,   123,   124,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,   133,     0,     0,     0,     0,     0,     0,   134,
     135,     0,   136,     0,     0,     0,     0,   137,     0,     0,
     138,     0,     0,     0,   139,   140,   141,     0,     0,     0,
     142,   143,     0,     0,     0,   144,     0,   145,     0,   146,
       0,   147,     0,     0,     0,   148,   149,   150,     0,     0,
       0,   151,   152,     0,     0,     0,   153,     0,     0,   154,
     155,   156,   157,     0,   158,   159,   160,     0,     0,     0,
     161,   162,     0,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   206,   207,   208,   209,   210,
     211,   212,   213,     0,   214,   215,     0,   216,   217,   218,
       0,     0,   219,     0,   120,   121,   122,   685,   123,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,   133,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
       0,     0,     0,     0,   137,     0,     0,   138,     0,     0,
       0,   139,   140,   141,     0,     0,     0,   142,   143,     0,
       0,     0,   144,     0,   145,     0,   146,     0,   147,     0,
       0,     0,   148,   149,   150,     0,     0,     0,   151,   152,
       0,   122,     0,   153,   124,     0,   154,   155,   156,   157,
       0,   158,   159,   160,     0,     0,     0,   161,   162,     0,
       0,     0,     0,     0,   163,   126,     0,     0,     0,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   206,   207,   208,   209,   210,   211,   212,   213,
       0,   214,   215,     0,   216,   217,   218,     0,     0,   219,
       0,     0,     0,     0,   687,     0,   139,   230,   231,     0,
       0,     0,   142,     0,   534,   535,   291,   232,   536,   537,
     538,   539,   540,   541,   542,     0,     0,   122,   233,   234,
     124,   534,   535,   151,   152,   536,   537,   538,   539,   540,
     541,   542,     0,   156,     0,     0,     0,     0,     0,     0,
       0,   126,     0,   235,     0,     0,     0,     0,     0,   163,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   358,   183,   184,   185,     0,     0,   188,   189,
     190,     0,   192,     0,   194,   195,   196,   197,   198,   199,
       0,     0,   202,     0,     0,   205,     0,   206,   207,     0,
     209,     0,   211,     0,   213,     0,     0,   215,     0,   216,
       0,   218,   139,   230,   231,     0,     0,     0,   142,   236,
     534,   535,     0,   232,   536,   537,   538,   539,   540,   541,
     542,     0,     0,   122,   233,   234,   124,   534,   535,   151,
     152,   536,   537,   538,   539,   540,   541,   542,     0,   156,
       0,     0,     0,     0,     0,     0,     0,   126,     0,   235,
       0,   543,   544,   545,   546,   163,     0,     0,     0,  1629,
       0,     0,     0,     0,     0,     0,     0,     0,   543,   544,
     545,   546,     0,     0,     0,     0,  1640,     0,     0,   183,
     184,   185,     0,     0,   188,   189,   190,     0,   192,     0,
     194,   195,   196,   197,   198,   199,     0,     0,   202,     0,
       0,   205,     0,   206,   207,     0,   209,     0,   211,     0,
     213,     0,     0,   215,     0,   216,     0,   218,   139,   230,
     231,     0,     0,     0,   142,   236,   534,   535,   363,   232,
     536,   537,   538,   539,   540,   541,   542,     0,     0,   122,
     233,   234,   124,   534,   535,   151,   152,   536,   537,   538,
     539,   540,   541,   542,     0,   156,     0,     0,     0,     0,
       0,     0,     0,   126,     0,   235,     0,   543,   544,   545,
     546,   163,     0,     0,     0,  1643,     0,     0,     0,     0,
       0,     0,     0,     0,   543,   544,   545,   546,     0,     0,
       0,     0,  1645,     0,     0,   183,   184,   185,     0,     0,
     188,   189,   190,     0,   192,     0,   194,   195,   196,   197,
     198,   199,     0,     0,   202,     0,     0,   205,     0,   206,
     207,     0,   209,     0,   211,     0,   213,     0,     0,   215,
       0,   216,     0,   218,   139,   230,   231,     0,     0,     0,
     142,   236,   534,   535,   365,   232,   536,   537,   538,   539,
     540,   541,   542,     0,     0,   122,   233,   234,   124,   534,
     535,   151,   152,   536,   537,   538,   539,   540,   541,   542,
       0,   156,     0,     0,     0,     0,     0,     0,     0,   126,
       0,   235,     0,   543,   544,   545,   546,   163,     0,     0,
       0,  1650,     0,     0,     0,     0,     0,     0,     0,     0,
     543,   544,   545,   546,     0,     0,     0,     0,  1654,     0,
       0,   183,   184,   185,     0,     0,   188,   189,   190,     0,
     192,     0,   194,   195,   196,   197,   198,   199,     0,     0,
     202,     0,     0,   205,     0,   206,   207,     0,   209,     0,
     211,     0,   213,     0,     0,   215,     0,   216,     0,   218,
     139,   230,   231,     0,     0,     0,   142,   236,   534,   535,
       0,   232,   536,   537,   538,   539,   540,   541,   542,     0,
       0,   122,   233,   234,   124,   534,   535,   151,   152,   536,
     537,   538,   539,   540,   541,   542,     0,   156,     0,     0,
       0,     0,     0,     0,     0,   126,     0,   235,     0,   543,
     544,   545,   546,   163,     0,     0,     0,  1655,     0,     0,
       0,     0,     0,     0,     0,     0,   543,   544,   545,   546,
       0,     0,     0,     0,  1656,     0,     0,   183,   184,   185,
       0,     0,   188,   189,   190,     0,   192,     0,   194,   195,
     196,   197,   198,   199,     0,     0,   202,     0,     0,   205,
       0,   206,   207,     0,   209,     0,   211,     0,   213,     0,
       0,   215,     0,   216,     0,   218,   139,   230,   231,     0,
       0,     0,   142,   236,   534,   535,     0,   232,   536,   537,
     538,   539,   540,   541,   542,     0,     0,   122,   233,   234,
     124,   534,   535,   151,   152,   536,   537,   538,   539,   540,
     541,   542,     0,   156,     0,     0,     0,     0,     0,     0,
       0,   126,     0,   235,     0,   543,   544,   545,   546,   163,
       0,     0,     0,  1658,     0,     0,     0,     0,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,     0,     0,
    1660,     0,     0,   183,   184,   185,     0,     0,   188,   189,
     190,     0,   192,     0,   194,   195,   196,   197,   198,   199,
       0,     0,   202,     0,     0,   205,     0,   206,   207,     0,
     209,     0,   211,     0,   213,     0,     0,   215,     0,   216,
       0,   218,   139,   230,   231,     0,     0,     0,   142,   842,
       0,     0,     0,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,   234,     0,     0,     0,   151,
     152,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   235,
       0,   543,   544,   545,   546,   163,     0,     0,     0,  1661,
       0,     0,     0,     0,     0,     0,     0,     0,   543,   544,
     545,   546,     0,     0,     0,     0,  1662,     0,     0,   183,
     184,   185,     0,     0,   188,   189,   190,     0,   192,     0,
     194,   195,   196,   197,   198,   199,     0,     0,   202,     0,
       0,   205,     0,   206,   207,     0,   209,     0,   211,     0,
     213,     0,     0,   215,     0,   216,     0,   218,     1,     2,
       3,     0,     0,     4,     0,  1148,     0,     5,     0,     6,
       0,     7,     8,     9,    10,    11,  -446,     0,    12,    13,
      14,    15,    16,    17,    18,    19,     0,    20,    21,    22,
       0,     0,     0,     0,    23,     0,     0,    24,     0,     0,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
       0,     0,    32,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,     0,     0,    33,    34,    35,    36,
      37,    38,     0,     0,     0,     0,    39,    40,    41,     0,
       0,    42,    43,     0,     0,    44,     0,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,    55,    56,    57,     0,    58,     0,    59,    60,    61,
      62,    63,    64,    65,     0,    66,    67,    68,     0,     0,
      69,    70,    71,     0,    72,     0,    73,     0,     0,    74,
      75,     0,    76,     0,     0,     0,    77,     0,     0,    78,
       0,    79,    80,     0,     0,     0,     0,     0,    81,   534,
     535,    82,     0,   536,   537,   538,   539,   540,   541,   542,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,    83,    84,    85,   534,   535,     0,    86,   536,   537,
     538,   539,   540,   541,   542,     0,     0,     0,     0,     0,
       0,    87,   534,   535,    88,     0,   536,   537,   538,   539,
     540,   541,   542,     0,     0,     0,     0,    89,     0,     0,
     543,   544,   545,   546,     0,   534,   535,     0,  1664,   536,
     537,   538,   539,   540,   541,   542,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,   534,   535,
       0,     0,   536,   537,   538,   539,   540,   541,   542,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,     0,   536,   537,   538,   539,   540,
     541,   542,   534,   535,     0,     0,   536,   537,   538,   539,
     540,   541,   542,     0,     0,     0,   543,   544,   545,   546,
       0,     0,     0,     0,  1667,     0,     0,   543,   544,   545,
     546,     0,     0,     0,     0,  1669,     0,     0,     0,     0,
       0,   543,   544,   545,   546,     0,   534,   535,     0,  1670,
     536,   537,   538,   539,   540,   541,   542,     0,     0,   543,
     544,   545,   546,     0,   534,   535,     0,  1674,   536,   537,
     538,   539,   540,   541,   542,     0,     0,     0,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,     0,     0,
    1677,     0,     0,   543,   544,   545,   546,     0,     0,     0,
       0,  1697,     0,     0,   543,   544,   545,   546,     0,     0,
       0,     0,  1711,     0,     0,   543,   544,   545,   546,     0,
       0,     0,     0,  1721,     0,     0,   543,   544,   545,   546,
       0,     0,     0,     0,  1722,     0,     0,   543,   544,   545,
     546,     0,     0,     0,     0,  1724,     0,     0,   543,   544,
     545,   546,     0,     0,     0,     0,  1732,     0,     0,   543,
     544,   545,   546,     0,   534,   535,     0,  1743,   536,   537,
     538,   539,   540,   541,   542,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,     0,     0,     0,
       0,     0,     0,   543,   544,   545,   546,     0,   534,   535,
       0,  1747,   536,   537,   538,   539,   540,   541,   542,     0,
       0,   543,   544,   545,   546,     0,   534,   535,     0,  1755,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,   534,   535,
       0,     0,   536,   537,   538,   539,   540,   541,   542,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,     0,   536,   537,   538,   539,   540,
     541,   542,   534,   535,     0,     0,   536,   537,   538,   539,
     540,   541,   542,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,     0,     0,     0,     0,     0,     0,
       0,   543,   544,   545,   546,     0,     0,     0,     0,  1756,
       0,     0,   543,   544,   545,   546,     0,     0,     0,     0,
    1757,     0,     0,   543,   544,   545,   546,     0,   534,   535,
       0,  1793,   536,   537,   538,   539,   540,   541,   542,     0,
       0,     0,     0,     0,     0,   543,   544,   545,   546,     0,
     534,   535,     0,  1796,   536,   537,   538,   539,   540,   541,
     542,     0,     0,   543,   544,   545,   546,     0,     0,     0,
       0,  1800,     0,     0,   543,   544,   545,   546,     0,     0,
       0,     0,  1802,     0,     0,   543,   544,   545,   546,     0,
       0,     0,     0,  1803,     0,     0,   543,   544,   545,   546,
       0,     0,     0,     0,  1805,     0,     0,   543,   544,   545,
     546,     0,     0,     0,     0,  1806,     0,     0,   543,   544,
     545,   546,     0,     0,     0,     0,  1807,     0,     0,   543,
     544,   545,   546,     0,     0,     0,     0,  1815,     0,     0,
     543,   544,   545,   546,     0,   534,   535,     0,  1831,   536,
     537,   538,   539,   540,   541,   542,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,     0,     0,
       0,     0,     0,     0,     0,   543,   544,   545,   546,     0,
     534,   535,     0,  1837,   536,   537,   538,   539,   540,   541,
     542,     0,     0,     0,     0,     0,     0,   543,   544,   545,
     546,     0,   534,   535,     0,  1840,   536,   537,   538,   539,
     540,   541,   542,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,   534,   535,     0,     0,   536,   537,
     538,   539,   540,   541,   542,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,   534,   535,
       0,     0,   536,   537,   538,   539,   540,   541,   542,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
       0,     0,   543,   544,   545,   546,     0,     0,     0,     0,
    1849,     0,     0,   543,   544,   545,   546,     0,     0,     0,
       0,  1850,     0,     0,   543,   544,   545,   546,     0,   534,
     535,     0,  1867,   536,   537,   538,   539,   540,   541,   542,
       0,     0,     0,     0,     0,     0,     0,   543,   544,   545,
     546,     0,   534,   535,     0,  1879,   536,   537,   538,   539,
     540,   541,   542,     0,     0,     0,     0,     0,     0,   543,
     544,   545,   546,     0,     0,     0,     0,  1881,     0,     0,
     543,   544,   545,   546,     0,     0,     0,     0,  1887,     0,
       0,   543,   544,   545,   546,     0,     0,     0,     0,  1892,
       0,     0,   543,   544,   545,   546,     0,     0,  1070,     0,
       0,     0,     0,   543,   544,   545,   546,     0,     0,  1071,
       0,     0,     0,     0,   543,   544,   545,   546,     0,     0,
    1072,     0,     0,     0,     0,   543,   544,   545,   546,     0,
       0,  1073,     0,     0,     0,     0,   543,   544,   545,   546,
     534,   535,  1076,     0,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,     0,   536,   537,   538,   539,   540,
     541,   542,   534,   535,     0,     0,   536,   537,   538,   539,
     540,   541,   542,     0,     0,     0,   543,   544,   545,   546,
     534,   535,  1079,     0,   536,   537,   538,   539,   540,   541,
     542,     0,     0,     0,     0,     0,     0,     0,     0,   543,
     544,   545,   546,   534,   535,  1080,     0,   536,   537,   538,
     539,   540,   541,   542,   534,   535,     0,     0,   536,   537,
     538,   539,   540,   541,   542,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,   534,   535,
       0,     0,   536,   537,   538,   539,   540,   541,   542,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,     0,     0,     0,     0,     0,     0,   543,   544,   545,
     546,     0,     0,  1082,     0,     0,     0,     0,   543,   544,
     545,   546,     0,     0,  1083,     0,     0,     0,     0,   543,
     544,   545,   546,   534,   535,  1084,     0,   536,   537,   538,
     539,   540,   541,   542,     0,     0,     0,   543,   544,   545,
     546,   534,   535,  1085,     0,   536,   537,   538,   539,   540,
     541,   542,     0,     0,     0,     0,     0,     0,     0,     0,
     543,   544,   545,   546,     0,     0,  1087,     0,     0,     0,
       0,   543,   544,   545,   546,     0,     0,  1097,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,  1098,     0,
       0,     0,     0,   543,   544,   545,   546,     0,     0,  1100,
       0,     0,     0,     0,   543,   544,   545,   546,     0,     0,
    1103,     0,     0,     0,     0,   543,   544,   545,   546,     0,
       0,  1147,     0,     0,     0,     0,   543,   544,   545,   546,
       0,     0,  1251,     0,     0,     0,     0,   543,   544,   545,
     546,   534,   535,  1252,     0,   536,   537,   538,   539,   540,
     541,   542,   534,   535,     0,     0,   536,   537,   538,   539,
     540,   541,   542,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,     0,     0,     0,     0,     0,     0,
     543,   544,   545,   546,   534,   535,  1356,     0,   536,   537,
     538,   539,   540,   541,   542,     0,     0,     0,   543,   544,
     545,   546,   534,   535,  1437,     0,   536,   537,   538,   539,
     540,   541,   542,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,   534,   535,     0,     0,   536,   537,
     538,   539,   540,   541,   542,   534,   535,     0,     0,   536,
     537,   538,   539,   540,   541,   542,   534,   535,     0,     0,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,   534,   535,
       0,     0,   536,   537,   538,   539,   540,   541,   542,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
       0,     0,     0,     0,     0,     0,     0,     0,   543,   544,
     545,   546,     0,     0,  1438,     0,     0,     0,     0,   543,
     544,   545,   546,     0,     0,  1444,     0,     0,     0,     0,
     543,   544,   545,   546,   534,   535,  1445,     0,   536,   537,
     538,   539,   540,   541,   542,     0,     0,     0,     0,     0,
       0,   543,   544,   545,   546,   534,   535,  1446,     0,   536,
     537,   538,   539,   540,   541,   542,     0,     0,     0,   543,
     544,   545,   546,     0,     0,  1447,     0,     0,     0,     0,
     543,   544,   545,   546,     0,     0,  1451,     0,     0,     0,
       0,   543,   544,   545,   546,     0,     0,  1452,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,  1467,     0,
       0,     0,     0,   543,   544,   545,   546,     0,     0,  1468,
       0,     0,     0,     0,   543,   544,   545,   546,     0,     0,
    1469,     0,     0,     0,     0,   543,   544,   545,   546,     0,
       0,  1470,     0,     0,     0,     0,   543,   544,   545,   546,
     534,   535,  1471,     0,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,     0,   536,   537,   538,   539,   540,
     541,   542,   534,   535,     0,     0,   536,   537,   538,   539,
     540,   541,   542,     0,     0,     0,     0,     0,     0,     0,
       0,   543,   544,   545,   546,   534,   535,  1474,     0,   536,
     537,   538,   539,   540,   541,   542,     0,     0,     0,     0,
       0,     0,   543,   544,   545,   546,   534,   535,  1475,     0,
     536,   537,   538,   539,   540,   541,   542,   534,   535,     0,
       0,   536,   537,   538,   539,   540,   541,   542,   534,   535,
       0,     0,   536,   537,   538,   539,   540,   541,   542,   534,
     535,     0,     0,   536,   537,   538,   539,   540,   541,   542,
     534,   535,     0,     0,   536,   537,   538,   539,   540,   541,
     542,   534,   535,     0,     0,   536,   537,   538,   539,   540,
     541,   542,   534,   535,     0,     0,   536,   537,   538,   539,
     540,   541,   542,   534,   535,     0,     0,   536,   537,   538,
     539,   540,   541,   542,     0,     0,     0,   543,   544,   545,
     546,     0,     0,  1478,     0,     0,     0,     0,   543,   544,
     545,   546,     0,     0,  1498,     0,     0,     0,     0,   543,
     544,   545,   546,  -328,  -328,  1619,     0,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,     0,     0,     0,     0,     0,     0,
       0,     0,   543,   544,   545,   546,     0,     0,  1623,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   543,   544,   545,   546,     0,     0,  1684,
       0,     0,     0,     0,   543,   544,   545,   546,     0,     0,
    1698,     0,     0,     0,     0,   543,   544,   545,   546,     0,
       0,  1700,     0,     0,     0,     0,   543,   544,   545,   546,
       0,     0,  1701,     0,     0,     0,     0,   543,   544,   545,
     546,     0,     0,  1823,     0,     0,     0,     0,   543,   544,
     545,   546,     0,     0,  1830,     0,     0,     0,     0,   543,
     544,   545,   546,     0,     0,  1876,     0,     0,     0,     0,
     543,   544,   545,   546,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -328,  -328,  -328,  -328
};

static const yytype_int16 yycheck[] =
{
      15,    34,    10,    18,     9,    10,     0,   423,    10,    10,
      10,  1153,  1154,    28,    56,   114,     4,     4,    71,     7,
       7,    36,     4,     5,    70,    70,    60,    42,   223,    10,
      35,     3,    47,    48,   104,     7,     8,   223,    12,    54,
       3,   112,    57,    11,     7,     8,    56,    41,    26,    59,
      60,    71,   391,   392,    69,    14,    10,    72,    73,   111,
      50,    75,    76,    78,    82,    60,    81,    82,    42,     0,
      94,   112,    23,    88,   112,     9,   110,    37,    38,    16,
      61,    62,    57,    42,    65,    66,    67,    68,    69,    70,
      71,    42,   129,    61,    62,   110,   110,    65,    66,    67,
      68,    69,    70,    71,   212,    42,   223,    61,    62,   217,
      41,    65,    66,    67,    68,    69,    70,    71,   219,   223,
     114,   209,   137,   138,   212,   226,   144,   142,    88,   217,
     223,    65,    66,    67,    68,    69,    70,    65,    66,    67,
      68,    69,    70,   112,   243,     3,   217,   217,   223,     7,
      65,    66,    67,    68,    69,    70,   151,     4,     5,    65,
      66,    67,    68,    69,    70,   218,   219,   220,   221,     4,
     110,   212,     7,   512,   212,   514,   217,   223,   223,   217,
     224,     0,   226,   114,   223,   227,   238,   239,    65,    66,
      67,    68,    69,    70,   219,   177,   178,   179,    42,   224,
     220,   221,   217,   219,    42,   220,   219,    70,   224,    47,
     226,   219,   219,   226,   209,   219,    70,   227,   226,   226,
     224,   236,   217,   219,   226,   226,   226,   242,   224,    22,
     226,     4,   265,   266,   249,   223,   223,   218,   219,   220,
     221,    39,   212,   212,    42,   226,   218,   219,   217,   243,
     218,   219,   220,   221,   219,   218,   219,    69,    70,    71,
     224,   226,   226,   112,   218,   219,   220,   221,   223,   284,
     285,   224,   287,   226,   219,   219,   291,   223,   293,   224,
     224,   296,   226,   298,   299,   219,   301,   302,   303,   304,
     305,   219,   307,   308,   309,   310,   224,   223,   313,   314,
     315,   224,   317,   226,   219,   320,   321,   322,   323,   224,
     325,   326,   243,   219,   329,   330,   331,   219,   333,   223,
     335,   336,   224,   223,   339,   340,   341,   223,   343,   344,
     345,   346,   347,   348,   349,   223,   351,   352,   353,   354,
     355,   356,   219,   358,   223,   360,   219,   362,   363,   226,
     365,   224,   367,   226,   369,   224,   371,   226,   223,   219,
     412,   413,  1504,   212,   379,  1507,   226,   382,   217,   219,
     223,   386,     4,     5,   224,   223,   226,   219,   219,   394,
      70,    71,   397,   224,   226,   226,   219,   402,    33,    34,
     217,   406,   223,   226,    65,    66,    67,    68,    69,    70,
       4,     5,     4,     5,   219,   420,   218,   219,   220,   221,
     425,   226,   217,   428,   429,   430,   431,   432,   433,   434,
     217,   436,   437,   438,   439,   440,   217,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   212,   454,
     455,   456,   217,   458,   459,   460,   461,   462,   216,   464,
     465,    65,    66,    67,    68,    69,    70,   219,   219,   219,
     420,   421,   224,   224,   563,   226,   226,   219,   217,   484,
     485,   486,   487,   488,   226,   219,     4,     5,   217,   494,
     224,   496,   226,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   219,   219,   511,   217,   513,   224,
     515,   226,   226,   518,   519,   143,   521,   225,   226,   223,
     525,   526,   527,   528,   529,   530,   531,   477,   219,    65,
      66,    67,    68,    69,    70,   226,   578,   579,   218,   219,
     220,   221,   139,   585,   586,    65,    66,    67,    68,    69,
      70,    44,   219,   219,   223,   219,   208,   507,   219,   226,
     226,   566,   226,   224,   219,   226,   223,   590,    61,    62,
     223,   226,    65,    66,    67,    68,    69,    70,    71,   563,
     219,   219,    18,    19,   226,   224,   224,    44,   593,    65,
      66,    67,    68,    69,    70,   219,   601,   223,   603,   219,
     219,   606,   226,   608,    61,    62,   226,   226,    65,    66,
      67,    68,    69,    70,    71,   219,   219,    80,    81,   208,
     219,   219,   226,   226,   629,    61,    62,   226,   226,    65,
      66,    67,    68,    69,    70,    71,   219,    48,   223,   644,
     212,   224,   563,    66,   649,    68,    69,    70,    71,   654,
      61,    62,  1784,   223,    65,    66,    67,    68,    69,    70,
      71,   223,   219,     4,     5,   219,   671,   223,   673,   226,
       5,   676,   226,     8,   289,   223,     4,     5,   223,   684,
     685,   219,   687,   219,   689,   300,   219,   219,   226,   223,
     226,   306,   224,   226,    29,   219,   311,   702,   219,   219,
     223,   316,   226,   318,   223,   226,   226,   712,   713,   324,
     223,  1117,   327,   328,  1120,   219,   219,   332,     4,     5,
     212,   224,   226,   338,   219,   218,   219,   220,   221,   219,
     219,   226,   219,     4,     5,   350,   226,   226,   219,   226,
     745,   746,   357,   219,   219,   226,   223,   219,   212,   754,
     226,   226,   223,   368,   226,   370,    68,    69,    70,    71,
     212,   218,   219,   220,   221,   100,   101,   102,   219,   223,
     775,   106,   387,   388,   219,   226,   111,    37,    38,   219,
     223,   226,   218,   219,   220,   221,   226,   122,   123,    59,
      60,   223,   127,   128,   219,   218,   219,   220,   221,   219,
     219,   226,   137,   219,   219,   224,   226,   218,   219,   220,
     221,   226,   147,   223,   223,   223,   223,   223,   153,   219,
      65,    66,    67,    68,    69,    70,   226,   869,   870,   219,
     872,   873,   219,   219,   219,   223,   226,   842,   219,   226,
     226,   226,   177,   178,   179,   226,   223,   182,   183,   184,
     223,   186,   223,   188,   189,   190,   191,   192,   193,   854,
     855,   196,   223,   219,   199,   219,   201,   202,   219,   204,
     226,   206,   226,   208,   219,   226,   211,   219,   213,   223,
     215,   226,    56,   888,   226,   219,   891,   219,   223,   224,
     219,   212,   226,   223,   226,   224,    65,    66,    67,    68,
      69,    70,   517,   223,   223,   219,   218,   219,   220,   221,
     915,   916,   226,   219,   919,   219,   223,   922,   219,   219,
     226,   926,   226,   928,   929,   226,   226,   932,   223,   219,
     219,   936,   937,   938,   219,   940,   226,   226,   943,   944,
     945,   226,   219,   223,   949,   219,   219,   219,   953,   226,
     955,   956,   226,   226,   226,   960,   961,   219,   223,   964,
     965,   212,   967,   968,   226,   970,  1008,   219,   973,   219,
     223,   219,   224,   978,   219,   980,   226,   982,   226,   984,
     595,   226,   223,    65,    66,    67,    68,    69,    70,   994,
     219,   996,   997,   998,   226,  1000,   223,   226,   219,  1004,
     223,    51,   226,    61,    62,   226,   223,    65,    66,    67,
      68,    69,    70,    71,   223,   223,   223,  1022,    65,    66,
      67,    68,    69,    70,   219,   219,   223,  1032,  1033,     5,
     219,   226,   226,   648,  1018,   223,  1041,   226,   219,    89,
      90,   223,  1047,  1048,  1049,   226,  1051,  1052,  1053,  1054,
     219,  1056,  1141,  1058,  1059,   223,  1061,   226,  1063,   219,
     110,  1066,  1067,   226,    61,    62,   226,   117,    65,    66,
      67,    68,    69,    70,    71,   690,   219,   223,   219,   219,
     695,   219,   219,   226,   699,   226,   226,   219,   226,   226,
     219,  1096,   223,   223,   226,   224,   219,  1018,   148,   149,
     150,   219,   152,   226,  1109,  1110,   156,   223,   226,   219,
     223,  1116,   219,   224,  1119,   219,   226,  1122,  1123,   226,
    1162,  1163,   226,   223,    61,    62,   223,   223,    65,    66,
      67,    68,    69,    70,    71,   219,   226,   219,   226,   226,
     226,  1146,   226,  1148,   226,    65,    66,    67,    68,    69,
      70,    65,    66,    67,    68,    69,    70,  1141,   226,  1164,
     218,   219,   220,   221,  1169,  1170,   224,   782,   226,  1174,
    1175,   226,   219,  1178,   226,   219,  1181,   219,  1183,   226,
     226,  1186,   226,   219,   226,   219,   219,  1192,   219,  1278,
     226,  1196,   226,   226,   219,   226,  1201,   219,   226,  1204,
     219,   226,   224,  1208,  1209,  1210,   219,   226,    41,  1214,
     224,  1216,    70,   226,   226,  1220,   224,  1167,  1168,  1224,
    1141,   218,   219,   220,   221,   219,  1231,   224,   224,   226,
     224,   219,  1237,   219,   224,  1240,   223,  1242,   226,  1244,
     226,  1246,   219,  1248,   223,  1250,    61,    62,  1253,   226,
      65,    66,    67,    68,    69,    70,    71,   219,   219,   219,
     219,   219,  1267,  1268,   226,   226,   226,   226,   226,   226,
      61,    62,   223,   223,    65,    66,    67,    68,    69,    70,
      71,   218,   219,   220,   221,  1290,  1291,   224,   219,  1294,
     219,   219,   226,   219,  1278,   226,   219,   226,   226,   219,
     226,   219,   219,   226,  1309,   219,   226,   219,   226,   226,
     219,   219,   226,   224,   226,  1357,  1358,   226,   226,    61,
      62,   224,    44,    65,    66,    67,    68,    69,    70,    71,
      41,  1336,    65,    66,    67,    68,    69,    70,   223,   219,
     219,   219,  1337,  1338,   224,    61,    62,   226,   226,    65,
      66,    67,    68,    69,    70,    71,   219,  1278,   219,   219,
       8,   224,  1367,  1368,  1369,   226,   226,  1372,  1373,   219,
    1375,   219,   219,   219,  1379,   219,   226,  1382,   226,   226,
     226,  1386,   226,   219,  1389,  1390,   223,   226,   219,   219,
     226,   219,  1397,  1398,  1399,   226,   226,  1402,   226,   226,
    1405,  1406,   226,   218,   219,   220,   221,   219,   219,  1414,
     219,   226,   226,   226,   226,   226,   219,   226,  1423,  1424,
    1425,   224,  1427,  1428,  1429,   219,  1431,   218,   219,   220,
     221,   219,   226,   224,   219,   226,   219,   219,   226,   219,
     219,   226,   219,   226,   226,  1450,   226,   226,   219,   226,
     226,  1456,  1457,  1458,   219,   226,   219,  1462,  1463,  1464,
    1465,   226,   219,   226,   219,   219,   219,   219,   219,   226,
     224,   226,  1477,   226,   226,   226,   218,   219,   220,   221,
    1485,   219,   224,  1488,   226,   219,   219,   219,   226,  1494,
     219,   219,   226,   226,   226,   224,   219,  1502,   226,   219,
     219,   224,   218,   219,   220,   221,   226,   226,   224,  1514,
     226,   219,  1517,   219,   219,   219,  1521,   219,   226,  1524,
     226,   226,   226,  1528,   226,  1614,  1531,   226,   219,   223,
     219,   226,  1537,  1538,  1539,   226,  1541,   226,    61,    62,
    1545,   226,    65,    66,    67,    68,    69,    70,    71,   219,
     226,   219,   219,   219,  1559,   219,   226,  1562,   226,   226,
     226,   219,   226,   219,   219,   219,    11,   226,   226,   226,
     226,   226,   226,  1578,  1579,  1580,  1581,  1582,   219,    24,
     219,   223,   226,    28,   224,   226,    31,   226,  1593,  1594,
     219,    36,    37,    38,    39,    61,    62,   226,   224,    65,
      66,    67,    68,    69,    70,    71,   224,  1612,    65,    66,
      67,    68,    69,    70,    71,   219,  1705,   219,   223,  1708,
     223,   219,   226,  1628,   226,  1630,   219,  1632,   226,  1634,
    1614,    61,    62,   226,   224,    65,    66,    67,    68,    69,
      70,    71,   224,    88,   219,   219,   226,  1652,   226,    61,
      62,   226,   226,    65,    66,    67,    68,    69,    70,    71,
     224,  1666,  1667,   108,    66,    67,    68,    69,    70,    71,
    1675,  1676,  1677,   219,   219,   224,    71,   219,  1767,   224,
     226,  1770,   224,   219,    41,   130,    47,   224,   224,  1694,
    1695,  1696,   224,  1614,   223,   218,   219,   220,   221,   223,
     226,    79,  1317,   226,   224,  1710,   224,    79,     5,   226,
     226,   226,   226,  1718,   226,   226,  1721,  1722,  1723,  1724,
    1725,  1705,   226,   226,  1708,  1730,   226,  1732,   226,  1734,
     226,  1736,   226,   226,   226,  1824,   226,   226,  1743,   224,
     224,    56,  1747,   226,  1749,   226,   226,  1752,   224,   224,
     224,  1756,   218,   219,   220,   221,   224,   226,  1763,  1764,
     226,   218,   219,   220,   221,   223,  1771,   223,    41,    36,
      41,   226,   226,   226,   219,   220,   226,   226,   226,   223,
    1785,   224,  1787,  1767,  1705,   226,  1770,  1708,   218,   219,
     220,   221,   223,    70,    70,   224,   226,   242,   224,    46,
      70,  1806,    56,   224,   249,  1810,   218,   219,   220,   221,
    1815,  1816,  1817,   224,   226,   223,   218,   219,   220,   221,
     226,    45,   223,   223,  1829,   223,   271,    70,   224,   226,
    1835,   224,    36,  1838,     4,  1840,    41,   423,  1018,    41,
    1824,   590,  1847,  1022,  1849,   871,  1767,   874,  1494,  1770,
     587,   577,  1688,  1874,    61,    62,  1861,  1862,    65,    66,
      67,    68,    69,    70,    71,  1714,    -1,  1151,    -1,    -1,
      -1,    -1,    -1,    -1,  1879,    -1,  1881,    -1,    -1,    -1,
      -1,    -1,  1887,    -1,    -1,  1890,    -1,  1892,    -1,    -1,
      -1,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,  1824,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,   373,   374,
      -1,    -1,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,   393,    65,
      66,    67,    68,    69,    70,    71,   401,    -1,    -1,    -1,
      -1,   406,    -1,    -1,    -1,   410,    -1,    -1,    -1,    -1,
      -1,   416,   417,    -1,   419,   420,   421,    -1,    -1,    -1,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,   441,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,    -1,   463,   226,
      -1,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,    -1,
      -1,    -1,    -1,    -1,   489,   490,   491,   492,   493,    -1,
     495,    -1,   497,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,   507,    -1,    -1,   226,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   564,
      -1,    -1,    -1,    -1,   569,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   581,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,     3,     4,     5,   594,
       7,     8,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,   678,    -1,    -1,    93,    -1,    -1,    96,
     685,    -1,   687,   100,   101,   102,    -1,    -1,    -1,   106,
     107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,   704,
     117,    -1,    -1,    -1,   121,   122,   123,   712,   713,    -1,
     127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,
     137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,   210,   211,    -1,   213,   214,   215,    -1,
      -1,   218,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,   856,   857,    -1,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
     885,    -1,    -1,    -1,    -1,    -1,   891,   892,    -1,    -1,
     895,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   919,    -1,   921,    -1,    -1,   924,
      -1,   926,    -1,   928,   929,   930,    -1,    -1,   933,   934,
      -1,    -1,    -1,   938,    -1,   940,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   950,   951,    -1,    -1,    -1,
      -1,   956,    -1,    -1,    -1,    -1,    -1,   962,    -1,    -1,
     965,   966,    -1,    -1,    -1,    -1,   971,   972,    -1,   974,
      -1,   976,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,   986,    -1,   988,   218,   219,   220,   221,    -1,    -1,
     995,   996,   226,    -1,    -1,    -1,  1001,   218,   219,   220,
     221,    -1,    -1,   224,  1009,  1010,  1011,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,  1022,  1023,   226,
    1025,    -1,    -1,  1028,  1029,  1030,   218,   219,   220,   221,
      -1,    -1,   224,    -1,  1039,  1040,    -1,    -1,    -1,  1044,
    1045,    -1,  1047,    -1,    -1,  1050,    -1,    -1,    -1,    -1,
    1055,    -1,  1057,   218,   219,   220,   221,  1062,    -1,  1064,
      -1,   226,    -1,  1068,    -1,    -1,    -1,     3,     4,     5,
    1075,     7,     8,  1078,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1086,    -1,    -1,    -1,  1090,  1091,  1092,  1093,  1094,
      -1,    -1,    28,    29,    -1,    -1,    -1,  1102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1143,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,  1167,  1168,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,  1269,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,    -1,   213,   214,   215,
      -1,    -1,   218,    -1,    -1,    61,    62,   223,   224,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1348,    -1,    61,    62,    -1,  1353,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1368,    -1,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,  1383,  1384,
      -1,    -1,  1387,    -1,  1389,  1390,    -1,    -1,    -1,    -1,
    1395,    -1,    -1,    -1,    -1,    -1,  1401,  1402,  1403,    -1,
    1405,    -1,    -1,  1408,  1409,  1410,    -1,  1412,    -1,  1414,
      -1,  1416,    -1,  1418,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1426,    61,    62,    -1,  1430,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,  1440,    -1,  1442,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,  1456,    -1,    -1,  1459,  1460,   218,   219,   220,   221,
      -1,  1466,    -1,    -1,   226,    -1,    -1,    -1,  1473,    -1,
     218,   219,   220,   221,    -1,  1480,    -1,  1482,   226,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,  1494,
     226,    -1,    -1,    -1,    -1,  1500,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,  1519,  1520,    -1,    -1,  1523,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    46,
     226,  1536,    49,    50,    51,    52,    53,    -1,    55,    56,
      -1,    58,    59,    60,    61,    62,    63,    64,  1553,    66,
      67,    68,  1557,    70,    -1,    -1,    -1,    74,    75,    76,
    1565,  1566,  1567,    80,    -1,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,   218,
     219,   220,   221,    -1,    61,    62,    -1,   226,    65,    66,
      67,    68,    69,    70,    71,    -1,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
    1615,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,  1629,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,  1640,    -1,  1642,  1643,   156,
    1645,    -1,    -1,    -1,    -1,  1650,    -1,    -1,    -1,  1654,
    1655,  1656,  1657,  1658,    -1,  1660,  1661,  1662,    -1,  1664,
      -1,    -1,    -1,    -1,  1669,  1670,    -1,    -1,    -1,  1674,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,  1689,    65,    66,    67,    68,    69,
      70,    71,  1697,    -1,    61,    62,    -1,   214,    65,    66,
      67,    68,    69,    70,    71,    -1,  1711,  1712,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1727,   218,   219,   220,   221,    -1,  1733,    61,
      62,   226,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
    1755,    -1,  1757,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,
      -1,   288,    -1,    -1,    -1,    -1,    -1,   294,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,  1793,    -1,
      -1,  1796,    -1,    -1,    -1,  1800,    -1,  1802,  1803,    61,
    1805,    -1,  1807,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,
      -1,    -1,    -1,    -1,    -1,    -1,  1831,   218,   219,   220,
     221,    -1,  1837,    -1,    -1,   226,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,    -1,  1850,   226,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,   376,
     377,   378,  1867,   380,   381,    -1,   383,   384,   385,    -1,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
    1885,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,   463,    -1,   465,    -1,
      -1,    -1,    85,    86,    -1,    88,   218,   219,   220,   221,
      93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,
     113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,
      -1,    -1,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   584,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,   210,   211,    -1,
     213,   214,   215,   600,    -1,   218,    -1,    -1,    -1,    -1,
     223,   224,    -1,    -1,   611,    -1,    -1,     3,     4,     5,
     617,     7,     8,    -1,    -1,   622,    -1,    -1,    -1,   626,
      -1,   628,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,
     637,   638,    28,    29,    -1,   642,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   650,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   662,    -1,    -1,    -1,    -1,
      -1,    -1,   669,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,   680,    -1,   682,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,   703,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,    -1,   213,   214,   215,
      -1,    -1,   218,    -1,    -1,    -1,    -1,   223,   224,    -1,
      -1,    -1,    -1,   840,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    -1,   914,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      -1,   100,   101,   102,   103,   104,    -1,   106,   107,    -1,
     957,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,   125,    -1,   127,   128,
      -1,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,    -1,    -1,   993,   146,   147,    -1,
      -1,    -1,   999,    -1,   153,  1002,  1003,    -1,    -1,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,   210,   211,    -1,   213,   214,   215,    -1,  1065,   218,
      -1,     3,     4,     5,   223,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,   103,   104,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,   124,    -1,    -1,   127,   128,    -1,    -1,   131,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
      -1,   213,   214,   215,    -1,    -1,   218,    -1,     3,     4,
       5,   223,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,
      -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,   104,
      -1,   106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,    -1,   127,   128,    -1,    -1,   131,   132,    -1,    -1,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,   147,    -1,    -1,  1432,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,    -1,   213,   214,
     215,    -1,    -1,   218,    -1,    -1,    -1,    -1,   223,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,   103,   104,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,   131,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,   218,   219,   220,   221,    -1,   153,    -1,    -1,
     226,  1678,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,    -1,   213,   214,   215,
      -1,    -1,   218,    -1,     3,     4,     5,   223,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      -1,   100,   101,   102,   103,    -1,    -1,   106,   107,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,   210,   211,    -1,   213,   214,   215,    -1,    -1,   218,
      -1,     3,     4,     5,   223,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
      -1,   213,   214,   215,    -1,    -1,   218,    -1,     3,     4,
       5,   223,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    -1,   100,   101,   102,   103,   104,
      -1,   106,   107,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,    -1,   213,   214,
     215,    -1,    -1,   218,    -1,     3,     4,     5,   223,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,    -1,   213,   214,   215,    -1,    -1,
     218,    -1,     3,     4,     5,   223,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,
     101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,    -1,   210,
     211,    -1,   213,   214,   215,    -1,    -1,   218,    -1,     3,
       4,     5,   223,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,    -1,
     104,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,   120,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,    -1,   213,
     214,   215,    -1,    -1,   218,    -1,     3,     4,     5,   223,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,
      -1,    -1,    -1,   100,   101,   102,    -1,   104,    -1,   106,
     107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,
     137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,   210,   211,    -1,   213,   214,   215,    -1,
     217,   218,    -1,     3,     4,     5,   223,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
      -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,    -1,   213,   214,   215,    -1,    -1,   218,    -1,
       3,     4,     5,   223,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,
     113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,
      -1,    -1,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,    -1,
     213,   214,   215,    -1,    -1,   218,    -1,     3,     4,     5,
     223,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,    -1,   213,   214,   215,
      -1,    -1,   218,    -1,     3,     4,     5,   223,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,
      -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,
      -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,   210,   211,    -1,   213,   214,   215,    -1,    -1,   218,
      -1,     3,     4,     5,   223,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,
     102,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,
      -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,
     132,    -1,    -1,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,   210,   211,
      -1,   213,   214,   215,    -1,    -1,   218,    -1,     3,     4,
       5,   223,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    96,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,
      -1,   106,   107,    -1,    -1,   110,   111,    -1,   113,    -1,
     115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,    -1,
      -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,   210,   211,    -1,   213,   214,
     215,    -1,    -1,   218,    -1,     3,     4,     5,   223,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,
      -1,    -1,   110,   111,    -1,   113,    -1,   115,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,   137,
     138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,    -1,   210,   211,    -1,   213,   214,   215,    -1,    -1,
     218,    -1,     3,     4,     5,   223,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,   100,
     101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,   110,
     111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,    -1,
      -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,   140,
     141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,    -1,   210,
     211,    -1,   213,   214,   215,    -1,    -1,   218,    -1,     3,
       4,     5,   223,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,   107,    -1,    -1,   110,   111,    -1,   113,
      -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,    -1,
      -1,   135,   136,   137,   138,    -1,   140,   141,   142,    -1,
      -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,    -1,   210,   211,    -1,   213,
     214,   215,    -1,    -1,   218,    -1,     3,     4,     5,   223,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,
      -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,   106,
     107,    -1,    -1,   110,   111,    -1,   113,    -1,   115,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,
     127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,   136,
     137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,   146,
     147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,
      -1,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,    -1,   210,   211,    -1,   213,   214,   215,    -1,
      -1,   218,    -1,     3,     4,     5,   223,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
     100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,    -1,
     110,   111,    -1,   113,    -1,   115,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,    -1,
      -1,    -1,   132,    -1,    -1,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
     210,   211,    -1,   213,   214,   215,    -1,    -1,   218,    -1,
       3,     4,     5,   223,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    -1,    88,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    96,    -1,    -1,    -1,   100,   101,   102,
      -1,    -1,    -1,   106,   107,    -1,    -1,    -1,   111,    -1,
     113,    -1,   115,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,   128,    -1,    -1,    -1,   132,
      -1,    -1,   135,   136,   137,   138,    -1,   140,   141,   142,
      -1,    -1,    -1,   146,   147,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,   210,   211,    -1,
     213,   214,   215,    -1,    -1,   218,    -1,     3,     4,     5,
     223,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    -1,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      96,    -1,    -1,    -1,   100,   101,   102,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,   111,    -1,   113,    -1,   115,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,    -1,    -1,    -1,   132,    -1,    -1,   135,
     136,   137,   138,    -1,   140,   141,   142,    -1,    -1,    -1,
     146,   147,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,    -1,   210,   211,    -1,   213,   214,   215,
      -1,    -1,   218,    -1,     3,     4,     5,   223,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    -1,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    -1,    -1,
      -1,   100,   101,   102,    -1,    -1,    -1,   106,   107,    -1,
      -1,    -1,   111,    -1,   113,    -1,   115,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,
      -1,     5,    -1,   132,     8,    -1,   135,   136,   137,   138,
      -1,   140,   141,   142,    -1,    -1,    -1,   146,   147,    -1,
      -1,    -1,    -1,    -1,   153,    29,    -1,    -1,    -1,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
      -1,   210,   211,    -1,   213,   214,   215,    -1,    -1,   218,
      -1,    -1,    -1,    -1,   223,    -1,   100,   101,   102,    -1,
      -1,    -1,   106,    -1,    61,    62,   110,   111,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,     5,   122,   123,
       8,    61,    62,   127,   128,    65,    66,    67,    68,    69,
      70,    71,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,   177,   178,   179,    -1,    -1,   182,   183,
     184,    -1,   186,    -1,   188,   189,   190,   191,   192,   193,
      -1,    -1,   196,    -1,    -1,   199,    -1,   201,   202,    -1,
     204,    -1,   206,    -1,   208,    -1,    -1,   211,    -1,   213,
      -1,   215,   100,   101,   102,    -1,    -1,    -1,   106,   223,
      61,    62,    -1,   111,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,     5,   122,   123,     8,    61,    62,   127,
     128,    65,    66,    67,    68,    69,    70,    71,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,   147,
      -1,   218,   219,   220,   221,   153,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   177,
     178,   179,    -1,    -1,   182,   183,   184,    -1,   186,    -1,
     188,   189,   190,   191,   192,   193,    -1,    -1,   196,    -1,
      -1,   199,    -1,   201,   202,    -1,   204,    -1,   206,    -1,
     208,    -1,    -1,   211,    -1,   213,    -1,   215,   100,   101,
     102,    -1,    -1,    -1,   106,   223,    61,    62,   110,   111,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,     5,
     122,   123,     8,    61,    62,   127,   128,    65,    66,    67,
      68,    69,    70,    71,    -1,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   147,    -1,   218,   219,   220,
     221,   153,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,   177,   178,   179,    -1,    -1,
     182,   183,   184,    -1,   186,    -1,   188,   189,   190,   191,
     192,   193,    -1,    -1,   196,    -1,    -1,   199,    -1,   201,
     202,    -1,   204,    -1,   206,    -1,   208,    -1,    -1,   211,
      -1,   213,    -1,   215,   100,   101,   102,    -1,    -1,    -1,
     106,   223,    61,    62,   110,   111,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,     5,   122,   123,     8,    61,
      62,   127,   128,    65,    66,    67,    68,    69,    70,    71,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,   147,    -1,   218,   219,   220,   221,   153,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,   177,   178,   179,    -1,    -1,   182,   183,   184,    -1,
     186,    -1,   188,   189,   190,   191,   192,   193,    -1,    -1,
     196,    -1,    -1,   199,    -1,   201,   202,    -1,   204,    -1,
     206,    -1,   208,    -1,    -1,   211,    -1,   213,    -1,   215,
     100,   101,   102,    -1,    -1,    -1,   106,   223,    61,    62,
      -1,   111,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,     5,   122,   123,     8,    61,    62,   127,   128,    65,
      66,    67,    68,    69,    70,    71,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,   147,    -1,   218,
     219,   220,   221,   153,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,   177,   178,   179,
      -1,    -1,   182,   183,   184,    -1,   186,    -1,   188,   189,
     190,   191,   192,   193,    -1,    -1,   196,    -1,    -1,   199,
      -1,   201,   202,    -1,   204,    -1,   206,    -1,   208,    -1,
      -1,   211,    -1,   213,    -1,   215,   100,   101,   102,    -1,
      -1,    -1,   106,   223,    61,    62,    -1,   111,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,     5,   122,   123,
       8,    61,    62,   127,   128,    65,    66,    67,    68,    69,
      70,    71,    -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,   147,    -1,   218,   219,   220,   221,   153,
      -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,   177,   178,   179,    -1,    -1,   182,   183,
     184,    -1,   186,    -1,   188,   189,   190,   191,   192,   193,
      -1,    -1,   196,    -1,    -1,   199,    -1,   201,   202,    -1,
     204,    -1,   206,    -1,   208,    -1,    -1,   211,    -1,   213,
      -1,   215,   100,   101,   102,    -1,    -1,    -1,   106,   223,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,   123,    -1,    -1,    -1,   127,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,   218,   219,   220,   221,   153,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   177,
     178,   179,    -1,    -1,   182,   183,   184,    -1,   186,    -1,
     188,   189,   190,   191,   192,   193,    -1,    -1,   196,    -1,
      -1,   199,    -1,   201,   202,    -1,   204,    -1,   206,    -1,
     208,    -1,    -1,   211,    -1,   213,    -1,   215,     4,     5,
       6,    -1,    -1,     9,    -1,   223,    -1,    13,    -1,    15,
      -1,    17,    18,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      -1,    -1,    58,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    82,    83,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    -1,    93,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,   105,
      -1,   107,   108,   109,    -1,   111,    -1,   113,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,   123,    -1,    -1,
     126,   127,   128,    -1,   130,    -1,   132,    -1,    -1,   135,
     136,    -1,   138,    -1,    -1,    -1,   142,    -1,    -1,   145,
      -1,   147,   148,    -1,    -1,    -1,    -1,    -1,   154,    61,
      62,   157,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,   177,   178,   179,    61,    62,    -1,   183,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,   197,    61,    62,   200,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,   213,    -1,    -1,
     218,   219,   220,   221,    -1,    61,    62,    -1,   226,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    61,    62,    -1,   226,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,   218,
     219,   220,   221,    -1,    61,    62,    -1,   226,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   218,
     219,   220,   221,    -1,    61,    62,    -1,   226,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    -1,   218,   219,   220,   221,    -1,    61,    62,
      -1,   226,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,   218,   219,   220,   221,    -1,    61,    62,    -1,   226,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,   218,   219,   220,   221,    -1,    61,    62,
      -1,   226,    65,    66,    67,    68,    69,    70,    71,    -1,
      -1,    -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,
      61,    62,    -1,   226,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
      -1,    -1,   226,    -1,    -1,   218,   219,   220,   221,    -1,
      -1,    -1,    -1,   226,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,   226,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
     218,   219,   220,   221,    -1,    61,    62,    -1,   226,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,
      61,    62,    -1,   226,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,    61,    62,    -1,   226,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,   218,   219,   220,   221,    -1,    61,
      62,    -1,   226,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,    61,    62,    -1,   226,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,   218,
     219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,
      -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,
      -1,   224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
      61,    62,   224,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,   218,   219,   220,   221,
      61,    62,   224,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,
     219,   220,   221,    61,    62,   224,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,
     219,   220,   221,    61,    62,   224,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,   218,   219,   220,
     221,    61,    62,   224,    -1,    65,    66,    67,    68,    69,
      70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,    -1,    -1,   224,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,
      -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,
      -1,   224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,   224,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,    61,    62,   224,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,    61,    62,   224,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,   218,   219,
     220,   221,    61,    62,   224,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    61,    62,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    61,    62,    -1,    -1,    65,
      66,    67,    68,    69,    70,    71,    61,    62,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,
     219,   220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,    61,    62,   224,    -1,    65,    66,
      67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    61,    62,   224,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,   218,
     219,   220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,    -1,    -1,   224,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,
      -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,
      -1,   224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
      61,    62,   224,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   218,   219,   220,   221,    61,    62,   224,    -1,    65,
      66,    67,    68,    69,    70,    71,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    61,    62,   224,    -1,
      65,    66,    67,    68,    69,    70,    71,    61,    62,    -1,
      -1,    65,    66,    67,    68,    69,    70,    71,    61,    62,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    61,
      62,    -1,    -1,    65,    66,    67,    68,    69,    70,    71,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      71,    61,    62,    -1,    -1,    65,    66,    67,    68,    69,
      70,    71,    61,    62,    -1,    -1,    65,    66,    67,    68,
      69,    70,    71,    61,    62,    -1,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,
     219,   220,   221,    61,    62,   224,    -1,    65,    66,    67,
      68,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,   224,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,    -1,
     224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,    -1,
      -1,   224,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
      -1,    -1,   224,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,   218,
     219,   220,   221,    -1,    -1,   224,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     9,    13,    15,    17,    18,    19,
      20,    21,    24,    25,    26,    27,    28,    29,    30,    31,
      33,    34,    35,    40,    43,    49,    50,    51,    52,    53,
      54,    55,    58,    72,    73,    74,    75,    76,    77,    82,
      83,    84,    87,    88,    91,    93,    95,    96,    97,    98,
      99,   100,   101,   102,   105,   107,   108,   109,   111,   113,
     114,   115,   116,   117,   118,   119,   121,   122,   123,   126,
     127,   128,   130,   132,   135,   136,   138,   142,   145,   147,
     148,   154,   157,   177,   178,   179,   183,   197,   200,   213,
     229,   230,   233,   240,   242,   243,   247,   259,   260,   265,
     271,   278,   286,   295,   298,   302,   305,   311,    70,   223,
      70,   223,   279,   299,   303,     4,     7,   257,   257,   257,
       3,     4,     5,     7,     8,    28,    29,    32,    61,    62,
      63,    64,    75,    78,    85,    86,    88,    93,    96,   100,
     101,   102,   106,   107,   111,   113,   115,   117,   121,   122,
     123,   127,   128,   132,   135,   136,   137,   138,   140,   141,
     142,   146,   147,   153,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   201,   202,   203,   204,
     205,   206,   207,   208,   210,   211,   213,   214,   215,   218,
     223,   245,   246,   248,   254,   256,   259,   260,   234,   235,
     101,   102,   111,   122,   123,   147,   223,   245,   223,   223,
     245,    26,   287,   296,   248,    56,    59,    60,   227,   333,
     238,    50,   245,   248,     4,     5,   258,   248,   248,   253,
       4,     5,   321,   322,     8,   218,   219,   255,   256,   323,
     257,   227,   245,   248,   334,   334,   334,   248,   240,   247,
     259,   260,   245,    75,    76,   110,    57,    94,   209,   253,
     245,   110,   245,   110,   209,   253,   110,   253,    91,   110,
     253,    91,   103,   104,   125,   131,   253,    91,   103,   104,
     131,   253,   245,    20,    60,   110,   253,   110,   253,   245,
      60,    91,   103,   110,   253,   104,   120,   253,   253,   103,
     104,   110,   253,    60,   253,   104,   217,   253,   253,    60,
     110,   110,   253,    91,   103,   104,   125,   131,   133,   134,
     253,    60,    91,   103,   104,   124,   131,   253,    60,   245,
     110,   253,   129,   110,   245,   110,   245,   110,   253,   110,
     253,   110,   253,    82,   144,   245,    51,    89,    90,   110,
     117,   148,   149,   150,   152,   156,   110,   253,   245,   245,
     223,   223,   223,   223,   223,   245,   334,   110,     0,    42,
     231,    70,    70,    22,   248,   261,   262,   245,   261,     4,
     223,   230,   223,   223,    33,    34,   223,   223,   248,   223,
     223,   223,   223,   223,   112,   217,   245,   245,   212,   112,
     212,   217,   112,   212,   217,   245,   217,   212,   217,   217,
     217,    60,   151,   209,   217,   217,   112,   212,   217,   112,
     212,   217,   212,   216,   217,   217,   217,   253,   217,   139,
     104,   217,   143,   209,   212,   217,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   253,   223,   208,
     245,   208,   248,   245,   248,    65,    66,    67,    68,    69,
      70,   219,    18,    19,    61,    62,    65,    66,    67,    68,
      69,    70,    71,   218,   219,   220,   221,     4,     5,   272,
     273,     4,     5,   274,   275,   245,   261,   261,   245,   248,
     289,   230,   306,   312,   223,    56,   223,     4,     7,   223,
     245,   248,   324,    56,   227,   326,   331,   239,   223,   223,
     226,   226,    10,   226,   241,   223,   223,   226,   256,   256,
     226,   248,     9,   226,   226,   253,   245,   245,   245,   253,
     241,   226,   245,   226,   245,   253,   226,   245,   226,   245,
     245,   241,   245,   245,   245,   245,   245,   241,   245,   245,
     245,   245,   241,   245,   245,   245,   241,   245,   241,   226,
     245,   245,   245,   245,   241,   245,   245,   241,   241,   245,
     245,   245,   241,   245,   226,   245,   245,   248,   253,   226,
     241,   245,   245,   245,   226,   245,   245,   245,   245,   245,
     245,   245,   241,   245,   245,   245,   245,   245,   245,   241,
     245,   226,   245,   226,   245,   245,   226,   245,   226,   245,
     241,   245,   241,   245,   226,   223,   248,   223,   248,   226,
     253,   253,   253,   245,   248,   253,   253,   245,   253,   253,
     253,   245,   226,   241,   241,     5,   244,   244,   244,   224,
     248,   245,   226,   226,   245,    41,   248,   245,   266,   224,
     245,   248,   263,   264,   224,    70,   248,    16,    42,   304,
     261,   261,   248,   248,   248,   245,   334,   334,     4,     5,
     251,   252,   251,   252,   245,   226,   226,   245,   245,   245,
     245,   245,   245,   245,   226,   245,   245,   245,   245,   245,
     248,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   226,   245,   245,   245,   245,
     245,   248,   253,   245,   245,   253,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   334,   248,   248,
     248,   248,   248,   224,   248,   245,   245,   245,   245,   245,
     248,   248,   248,   224,   248,   248,   245,   248,   245,   248,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     334,   245,   224,   224,   245,   244,   245,   244,   245,   224,
     241,   245,   223,   245,   245,   224,   224,   245,   245,   245,
     245,   245,   245,   245,   236,   237,   250,   249,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   223,
     223,   226,   223,   223,   226,   224,   224,    41,   288,    39,
      42,   297,    44,   230,   248,   223,   245,   248,    48,   325,
     225,   226,   223,     4,     7,   223,     8,   332,   326,   261,
     261,     4,     5,   248,   253,   261,   261,   322,     8,   255,
      80,    81,   245,   248,   241,   226,   226,   253,   245,   226,
     245,   226,   226,   245,   226,   245,   226,   253,   226,   226,
     226,   253,   226,   226,   226,   253,   226,   226,   226,   253,
     226,   253,   245,   226,   226,   226,   253,   253,   253,   226,
     226,   226,   253,   226,   245,   226,   226,   241,   245,   253,
     226,   226,   226,   245,   226,   226,   226,   226,   226,   253,
     226,   226,   226,   226,   226,   253,   226,   245,   226,   245,
     226,   245,   226,   248,   226,   253,   226,   253,   226,   245,
     248,   248,   245,   241,   226,   226,   226,   226,   226,   241,
     226,   226,   241,   226,   226,   245,   253,   248,   223,   226,
     226,   226,   224,   224,   245,   248,   245,   248,   232,     4,
       5,   270,   226,   280,   224,   223,   224,   224,   226,   226,
     226,   224,   226,   226,   224,   223,   223,   224,   224,   226,
     226,   226,   245,   245,   226,   226,   245,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,   226,
     245,   226,   226,   226,   226,   241,   226,   226,   226,   224,
     224,   224,   224,   224,   224,   226,   224,   224,   226,   224,
     224,   224,   224,   224,   224,   224,   226,   224,   224,   224,
     226,   226,   226,   226,   226,   224,   226,   224,   224,   224,
     224,   224,   226,   224,   224,   224,   224,   224,   224,   226,
     226,   224,   224,   224,   224,   224,   226,   226,   224,   226,
     226,   224,   226,   226,   253,   224,   224,   257,   335,   257,
     336,   248,   248,   261,   261,   273,   261,   261,   275,    41,
     290,   307,    47,   226,   248,   224,   226,   224,   223,   245,
     245,   248,   248,   327,   328,   248,     4,     5,   318,   320,
     224,   224,   223,   223,   226,   224,   224,    79,    79,   226,
     226,   253,   245,   245,   226,   226,   245,   248,   226,   248,
     245,   226,   248,   226,   245,   248,   226,   245,   248,   245,
     248,   248,   226,   245,   248,   248,   226,   245,   245,   245,
     248,   226,   245,   248,   226,   245,   245,   245,   226,   226,
     226,   245,   248,   248,   226,   245,   226,   245,   245,   253,
     226,   245,   245,   248,   226,   245,   245,   248,   248,   245,
     245,   226,   245,   248,   248,   245,   248,   226,   248,   245,
     226,   245,   226,   245,   226,   245,   226,   248,   226,   248,
     226,   224,   224,   226,   253,   245,   248,   245,   248,   245,
     245,   253,   245,   248,   253,   253,   245,   226,   226,   226,
     261,   248,   248,   248,   233,   267,   264,   248,   300,   248,
     248,   248,   248,   245,   245,   224,   224,   248,   248,   245,
     226,   226,   248,   248,   226,   245,   248,   245,   245,   248,
     245,   245,   245,   245,   248,   245,   248,   245,   245,   226,
     245,   248,   245,   248,   253,   245,   245,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   245,   248,   245,   245,
     245,   252,   245,   252,   245,   245,   226,   226,   226,   224,
     224,   224,   224,    37,    38,   293,   230,   248,   226,    56,
     245,   245,   325,   226,   318,   318,   224,   223,   223,   226,
     261,   261,   245,   334,   334,   245,   245,   226,   226,   226,
     245,   245,   226,   226,   245,   226,   245,   245,   245,   226,
     245,   245,   226,   226,   226,   245,   226,   226,   245,   226,
     226,   245,   245,   245,   245,   226,   245,   226,   226,   226,
     245,   226,   226,   226,   245,   226,   226,   245,   226,   226,
     226,   245,   226,   245,   226,   245,   226,   245,   226,   245,
     245,   245,   245,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   245,   245,   248,   224,   224,   224,   224,
     226,   223,    10,   230,   224,   224,   224,   224,   224,   224,
     226,   224,   224,   245,   245,   245,   226,   226,   226,   226,
     226,   245,   226,   226,   226,   226,   241,   224,   224,   224,
     224,   224,   224,   226,   224,   224,   224,   226,   224,   224,
     226,   224,   226,   224,   224,   226,   224,   224,   226,   224,
     224,   245,   257,   257,   291,    41,    36,   308,   224,   248,
     223,   224,   226,   248,   329,   261,   261,   319,   224,   224,
     245,   245,   248,   245,   226,   245,   245,   226,   245,   226,
     226,   226,   245,   226,   226,   245,   248,   248,   226,   245,
     248,   226,   245,   248,   245,   248,   226,   226,   226,   226,
     248,   226,   245,   245,   245,   226,   248,   245,   248,   248,
     245,   248,   245,   226,   248,   248,   248,   226,   248,   226,
     245,   248,   226,   248,   248,   226,   226,   226,   245,   245,
     245,   248,   245,   245,   245,   248,   245,   253,   226,   226,
      70,    70,    70,   248,     4,     5,   276,   277,   248,    14,
      42,   301,   245,   226,   226,   245,   248,   245,   245,   248,
     248,   245,   245,   245,   245,   248,   248,   245,   248,   248,
     245,   245,   226,   289,   294,    46,   314,    59,    60,   224,
     248,    56,   245,   224,   318,   224,   224,   318,   226,   226,
     226,   245,   226,   245,   226,   248,   248,   245,   248,   245,
     226,   245,   226,   226,   245,   226,   248,   245,   245,   245,
     226,   245,   226,   245,   226,   226,   226,   226,   226,   248,
     226,   226,   226,   248,   226,   245,   226,   226,   245,   226,
     226,   248,   248,   248,   226,   226,   226,   226,   226,   245,
     245,   245,   245,   245,   224,   223,   223,   224,   226,    11,
     284,   224,   245,   245,   226,   226,   226,   226,   224,   224,
     224,   224,   224,   224,   245,   292,   230,   248,    45,   313,
     223,   226,   223,   224,   330,   245,   248,   245,   226,   245,
     245,   226,   226,   226,   226,   226,   248,   226,   248,   248,
     226,   248,   226,   226,   226,   248,   226,   245,   248,   248,
     248,   248,   248,   226,   248,   248,   248,   226,   248,   226,
     245,   245,   226,   248,   248,   226,   226,   226,   248,   245,
     245,   245,   253,   226,    70,   224,   224,   268,   277,   248,
     281,   226,   245,   245,   245,   248,   230,    44,   317,   230,
     309,   245,   248,   248,   332,   226,   245,   226,   245,   245,
     245,   245,   245,   226,   248,   245,   226,   245,   248,   245,
     226,   245,   226,   226,   245,   226,   226,   226,   245,   245,
     226,   245,   248,   245,   248,   226,   226,   226,   245,   245,
     230,   230,   245,   224,   315,    42,    47,   310,   224,   226,
     224,   226,   318,   245,   245,   226,   248,   226,   226,   248,
     226,   248,   248,   248,   248,   245,   248,   226,   245,   226,
     226,   245,   245,   245,    23,    42,   269,   282,   230,   245,
     248,   226,   226,   245,   248,   245,   245,   226,   245,   245,
     248,    12,    42,   283,   316,   224,   224,   245,   245,   226,
     248,   226,     4,   285,   314,   226,   245,   226,   245,   248,
     226,   245,   226,   245,   245
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

    {YYACCEPT;;}
    break;

  case 4:

    {if (errorlevel<=ERROR) {YYABORT;};}
    break;

  case 5:

    {if ((yyvsp[(3) - (3)].sep)>=0) yylineno+=(yyvsp[(3) - (3)].sep); else switchlib();;}
    break;

  case 12:

    {report_missing(ERROR,"do not import a library in a loop or an if-statement");switchlib();;}
    break;

  case 13:

    {add_command(cERROR,NULL);;}
    break;

  case 19:

    {add_command(cBREAK,NULL);if (!in_loop) error(ERROR,"break outside loop");;}
    break;

  case 20:

    {add_command(cCONTINUE,NULL);if (!in_loop) error(ERROR,"continue outside loop");;}
    break;

  case 22:

    {create_call((yyvsp[(1) - (1)].symbol));add_command(cPOP,NULL);;}
    break;

  case 23:

    {create_call((yyvsp[(1) - (1)].symbol));add_command(cPOP,NULL);;}
    break;

  case 24:

    {if (function_type==ftNONE) error(ERROR,"no use for 'local' outside functions");;}
    break;

  case 26:

    {if (function_type==ftNONE) error(ERROR,"no use for 'static' outside functions");;}
    break;

  case 30:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[(2) - (2)].symbol),TRUE):(yyvsp[(2) - (2)].symbol));;}
    break;

  case 31:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[(2) - (2)].symbol),TRUE):(yyvsp[(2) - (2)].symbol));;}
    break;

  case 32:

    {create_exception(TRUE);;}
    break;

  case 33:

    {create_exception(FALSE);;}
    break;

  case 34:

    {add_command(cSKIPPER,NULL);;}
    break;

  case 35:

    {add_command(cNOP,NULL);;}
    break;

  case 36:

    {add_command(cSKIPPER,NULL);;}
    break;

  case 37:

    {add_command(cNOP,NULL);;}
    break;

  case 38:

    {create_label((function_type!=ftNONE)?dotify((yyvsp[(2) - (2)].symbol),TRUE):(yyvsp[(2) - (2)].symbol),cLABEL);;}
    break;

  case 39:

    {add_command(cCHECKOPEN,NULL);;}
    break;

  case 40:

    {add_command(cCLOSE,NULL);;}
    break;

  case 41:

    {add_command(cCHECKSEEK,NULL);;}
    break;

  case 42:

    {add_command(cCOMPILE,NULL);;}
    break;

  case 43:

    {create_execute(0);add_command(cPOP,NULL);add_command(cPOP,NULL);;}
    break;

  case 44:

    {create_execute(1);add_command(cPOP,NULL);add_command(cPOP,NULL);;}
    break;

  case 45:

    {create_colour(0);create_print('n');create_pps(cPOPSTREAM,0);;}
    break;

  case 46:

    {create_colour(0);create_pps(cPOPSTREAM,0);;}
    break;

  case 47:

    {create_colour(0);create_print('t');create_pps(cPOPSTREAM,0);;}
    break;

  case 48:

    {tileol=FALSE;;}
    break;

  case 50:

    {tileol=TRUE;;}
    break;

  case 54:

    {create_restore("");;}
    break;

  case 55:

    {create_restore((function_type!=ftNONE)?dotify((yyvsp[(2) - (2)].symbol),TRUE):(yyvsp[(2) - (2)].symbol));;}
    break;

  case 56:

    {if (get_switch_id()) create_clean_switch_mark(0,TRUE);
             if (function_type!=ftNONE) {
	       add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;
	       add_command(cPOPSYMLIST,NULL);
               create_retval(ftNONE,function_type);
               add_command(cRET_FROM_FUN,NULL);
            } else {
               add_command(cRETURN,NULL);
            };}
    break;

  case 57:

    {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNUMBER,function_type);add_command(cRET_FROM_FUN,NULL);;}
    break;

  case 58:

    {if (get_switch_id()) create_clean_switch_mark(1,TRUE); if (function_type==ftNONE) {error(ERROR,"can not return value"); YYABORT;} add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftSTRING,function_type);add_command(cRET_FROM_FUN,NULL);;}
    break;

  case 60:

    {create_openwin(TRUE);;}
    break;

  case 61:

    {add_command(cBUTTON,NULL);;}
    break;

  case 62:

    {add_command(cMENU,NULL);;}
    break;

  case 63:

    {add_command(cCHECKBOX,NULL);;}
    break;

  case 64:

    {add_command(cRADIOBUTTON,NULL);;}
    break;

  case 65:

    {add_command(cTEXTCONTROL,NULL);;}
    break;

  case 66:

    {add_command(cLISTBOX,NULL);;}
    break;

  case 67:

    {add_command(cITEMCLEAR, NULL);;}
    break;

  case 68:

    {add_command(cLISTBOXADD1, NULL);;}
    break;

  case 69:

    {add_command(cLISTBOXADD2, NULL);;}
    break;

  case 70:

    {add_command(cDROPBOX,NULL);;}
    break;

  case 71:

    {add_command(cITEMADD,NULL);;}
    break;

  case 72:

    {add_command(cDROPBOXCLEAR,NULL);;}
    break;

  case 73:

    {add_command(cDROPBOXREMOVE,NULL);;}
    break;

  case 74:

    {add_command(cITEMDEL,NULL);;}
    break;

  case 75:

    {add_command(cLISTBOXDEL2,NULL);;}
    break;

  case 76:

    {add_command(cLISTBOXSELECT,NULL);;}
    break;

  case 77:

    {add_command(cALERT,NULL);;}
    break;

  case 78:

    {add_command(cTEXT,NULL);;}
    break;

  case 79:

    {add_command(cTEXT2, NULL);;}
    break;

  case 80:

    {add_command(cTEXTALIGN,NULL);;}
    break;

  case 81:

    {add_command(cLOCALIZE,NULL);;}
    break;

  case 82:

    {add_command(cLOCALIZE2,NULL);;}
    break;

  case 83:

    {add_command(cDRAWTEXT,NULL);;}
    break;

  case 84:

    {add_command(cDRAWRECT,NULL);;}
    break;

  case 85:

    {add_command(cDRAWCLEAR,NULL);;}
    break;

  case 86:

    {add_command(cCLOSEWIN,NULL);;}
    break;

  case 87:

    {add_command(cLAYOUT,NULL);;}
    break;

  case 88:

    {add_command(cWINSET4,NULL);;}
    break;

  case 89:

    {add_command(cWINSET1,NULL);;}
    break;

  case 90:

    {add_command(cWINSET3,NULL);;}
    break;

  case 91:

    {add_command(cSHORTCUT,NULL);;}
    break;

  case 92:

    {add_command(cTEXTEDIT,NULL);;}
    break;

  case 93:

    {add_command(cTEXTADD,NULL);;}
    break;

  case 94:

    {add_command(cTEXTSET,NULL);;}
    break;

  case 95:

    {add_command(cTEXTSET2,NULL);;}
    break;

  case 96:

    {add_command(cTEXTSET3,NULL);;}
    break;

  case 97:

    {add_command(cTEXTCOLOR1,NULL);;}
    break;

  case 98:

    {add_command(cTEXTCOLOR2,NULL);;}
    break;

  case 99:

    {add_command(cTEXTCLEAR,NULL);;}
    break;

  case 100:

    {add_command(cDRAWSET1,NULL);;}
    break;

  case 101:

    {add_command(cDRAWSET2,NULL);;}
    break;

  case 102:

    {add_command(cWINSET2,NULL);;}
    break;

  case 103:

    {add_command(cDRAWSET3,NULL);;}
    break;

  case 104:

    {add_command(cDRAWSET4,NULL);;}
    break;

  case 105:

    {add_command(cVIEW,NULL);;}
    break;

  case 106:

    {add_command(cWINCLEAR,NULL);;}
    break;

  case 107:

    {add_command(cBOXVIEW,NULL);;}
    break;

  case 108:

    {add_command(cTAB,NULL);;}
    break;

  case 109:

    {add_command(cTABSET,NULL);;}
    break;

  case 110:

    {add_command(cTABADD, NULL);;}
    break;

  case 111:

    {add_command(cTABDEL, NULL);;}
    break;

  case 112:

    {add_command(cDOT,NULL);;}
    break;

  case 113:

    {add_command(cLINE,NULL);;}
    break;

  case 114:

    {add_command(cCIRCLE,NULL);;}
    break;

  case 115:

    {add_command(cELLIPSE,NULL);;}
    break;

  case 116:

    {add_command(cCURVE,NULL);;}
    break;

  case 117:

    {add_command(cSLIDER1,NULL);;}
    break;

  case 118:

    {add_command(cSLIDER2,NULL);;}
    break;

  case 119:

    {add_command(cSLIDER3,NULL);;}
    break;

  case 120:

    {add_command(cSLIDER4,NULL);;}
    break;

  case 121:

    {add_command(cSLIDER5,NULL);;}
    break;

  case 122:

    {add_command(cSLIDER6,NULL);;}
    break;

  case 123:

    {add_command(cLAUNCH,NULL);;}
    break;

  case 124:

    {add_command(cOPTION1,NULL);;}
    break;

  case 125:

    {add_command(cOPTION2,NULL);;}
    break;

  case 126:

    {add_command(cOPTION4,NULL);;}
    break;

  case 127:

    {add_command(cOPTION5,NULL);;}
    break;

  case 128:

    {add_command(cOPTION3,NULL);;}
    break;

  case 129:

    {add_command(cBITMAP,NULL);;}
    break;

  case 130:

    {add_command(cBITMAPGET, NULL);;}
    break;

  case 131:

    {add_command(cBITMAPGET2, NULL);;}
    break;

  case 132:

    {add_command(cBITMAPGETICON, NULL);;}
    break;

  case 133:

    {add_command(cBITMAPDRAW,NULL);;}
    break;

  case 134:

    {add_command(cBITMAPDRAW2,NULL);;}
    break;

  case 135:

    {add_command(cBITMAPREMOVE,NULL);;}
    break;

  case 136:

    {add_command(cSCREENSHOT,NULL);;}
    break;

  case 137:

    {add_command(cCANVAS,NULL);;}
    break;

  case 138:

    {add_command(cDROPZONE,NULL);;}
    break;

  case 139:

    {add_command(cCOLORCONTROL1,NULL);;}
    break;

  case 140:

    {add_command(cCOLORCONTROL2,NULL);;}
    break;

  case 141:

    {add_command(cTEXTCONTROL2,NULL);;}
    break;

  case 142:

    {add_command(cTEXTCONTROL3,NULL);;}
    break;

  case 143:

    {add_command(cTEXTCONTROL4,NULL);;}
    break;

  case 144:

    {add_command(cTREEBOX1,NULL);;}
    break;

  case 145:

    {add_command(cTREEBOX2,NULL);;}
    break;

  case 146:

    {add_command(cTREEBOX3,NULL);;}
    break;

  case 147:

    {add_command(cTREEBOX13,NULL);;}
    break;

  case 148:

    {add_command(cTREEBOX12,NULL);;}
    break;

  case 149:

    {add_command(cTREEBOX4,NULL);;}
    break;

  case 150:

    {add_command(cTREEBOX5,NULL);;}
    break;

  case 151:

    {add_command(cTREEBOX7,NULL);;}
    break;

  case 152:

    {add_command(cTREEBOX8,NULL);;}
    break;

  case 153:

    {add_command(cTREEBOX9,NULL);;}
    break;

  case 154:

    {add_command(cTREEBOX10,NULL);;}
    break;

  case 155:

    {add_command(cTREEBOX11,NULL);;}
    break;

  case 156:

    {add_command(cBUTTONIMAGE,NULL);;}
    break;

  case 157:

    {add_command(cCHECKBOXIMAGE,NULL);;}
    break;

  case 158:

    {add_command(cCHECKBOXSET,NULL);;}
    break;

  case 159:

    {add_command(cRADIOSET,NULL);;}
    break;

  case 160:

    {add_command(cTOOLTIP,NULL);;}
    break;

  case 161:

    {add_command(cTOOLTIPCOLOR,NULL);;}
    break;

  case 162:

    {add_command(cLISTSORT,NULL);;}
    break;

  case 163:

    {add_command(cTREESORT,NULL);;}
    break;

  case 164:

    {add_command(cFILEBOX,NULL);;}
    break;

  case 165:

    {add_command(cCOLUMNBOXADD,NULL);;}
    break;

  case 166:

    {add_command(cFILEBOXADD2,NULL);;}
    break;

  case 167:

    {add_command(cFILEBOXCLEAR,NULL);;}
    break;

  case 168:

    {add_command(cCOLUMNBOXREMOVE,NULL);;}
    break;

  case 169:

    {add_command(cCOLUMNBOXSELECT,NULL);;}
    break;

  case 170:

    {add_command(cCOLUMNBOXCOLOR,NULL);;}
    break;

  case 171:

    {add_command(cCALENDAR,NULL);;}
    break;

  case 172:

    {add_command(cCALENDARSET,NULL);;}
    break;

  case 173:

    {add_command(cSCROLLBAR,NULL);;}
    break;

  case 174:

    {add_command(cSCROLLBARSET1,NULL);;}
    break;

  case 175:

    {add_command(cSCROLLBARSET2,NULL);;}
    break;

  case 176:

    {add_command(cSCROLLBARSET3,NULL);;}
    break;

  case 177:

    {add_command(cDROPBOXSELECT,NULL);;}
    break;

  case 178:

    {add_command(cMENU2,NULL);;}
    break;

  case 179:

    {add_command(cMENU3,NULL);;}
    break;

  case 180:

    {add_command(cSUBMENU1,NULL);;}
    break;

  case 181:

    {add_command(cSUBMENU2,NULL);;}
    break;

  case 182:

    {add_command(cSUBMENU3,NULL);;}
    break;

  case 183:

    {add_command(cSTATUSBAR,NULL);;}
    break;

  case 184:

    {add_command(cSTATUSBARSET,NULL);;}
    break;

  case 185:

    {add_command(cSTATUSBARSET3,NULL);;}
    break;

  case 186:

    {add_command(cSPINCONTROL1,NULL);;}
    break;

  case 187:

    {add_command(cSPINCONTROL2,NULL);;}
    break;

  case 188:

    {add_command(cCLIPBOARDCOPY,NULL);;}
    break;

  case 189:

    {add_command(cPRINTERCONFIG,NULL);;}
    break;

  case 190:

    {add_command(cMOUSESET,NULL);;}
    break;

  case 191:

    {add_command(cSOUNDSTOP,NULL);;}
    break;

  case 192:

    {add_command(cSOUNDSTOP,NULL);;}
    break;

  case 193:

    {add_command(cSOUNDWAIT,NULL);;}
    break;

  case 194:

    {add_command(cSOUNDWAIT,NULL);;}
    break;

  case 195:

    {add_command(cSPLITVIEW1,NULL);;}
    break;

  case 196:

    {add_command(cSPLITVIEW2,NULL);;}
    break;

  case 197:

    {add_command(cSPLITVIEW3,NULL);;}
    break;

  case 198:

    {add_command(cSTACKVIEW1,NULL);;}
    break;

  case 199:

    {add_command(cSTACKVIEW2,NULL);;}
    break;

  case 200:

    {add_command(cTEXTURL1, NULL);;}
    break;

  case 201:

    {add_command(cTEXTURL2, NULL);;}
    break;

  case 202:

    {add_command(cPUTCHAR,NULL);;}
    break;

  case 203:

    {add_command(cCLEARSCR,NULL);;}
    break;

  case 204:

    {add_command(cWAIT,NULL);;}
    break;

  case 205:

    {add_command(cBELL,NULL);;}
    break;

  case 206:

    {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);;}
    break;

  case 207:

    {create_pushdbl(-1);create_function(fINKEY);add_command(cPOP,NULL);;}
    break;

  case 208:

    {create_function(fINKEY);add_command(cPOP,NULL);;}
    break;

  case 209:

    {create_function(fSYSTEM2);
	add_command(cPOP,NULL);;}
    break;

  case 210:

    {create_poke('s');;}
    break;

  case 211:

    {create_poke('d');;}
    break;

  case 212:

    {create_poke('S');;}
    break;

  case 213:

    {create_poke('D');;}
    break;

  case 214:

    {add_command(cEND,NULL);;}
    break;

  case 215:

    {create_pushdbl(0);add_command(cEXIT,NULL);;}
    break;

  case 216:

    {add_command(cEXIT,NULL);;}
    break;

  case 217:

    {create_docu((yyvsp[(1) - (1)].symbol));;}
    break;

  case 218:

    {add_command(cBIND,NULL);;}
    break;

  case 219:

    {add_command(cPOPSTRSYM,dotify((yyvsp[(1) - (3)].symbol),FALSE));;}
    break;

  case 220:

    {create_changestring(fMID);;}
    break;

  case 221:

    {create_changestring(fMID2);;}
    break;

  case 222:

    {create_changestring(fLEFT);;}
    break;

  case 223:

    {create_changestring(fRIGHT);;}
    break;

  case 224:

    {create_doarray(dotify((yyvsp[(1) - (3)].symbol),FALSE),ASSIGNSTRINGARRAY);;}
    break;

  case 227:

    {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);;}
    break;

  case 228:

    {create_myopen(OPEN_HAS_STREAM);;}
    break;

  case 229:

    {add_command(cSWAP,NULL);create_pushstr("r");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);;}
    break;

  case 230:

    {add_command(cSWAP,NULL);create_pushstr("w");create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);;}
    break;

  case 231:

    {add_command(cSEEK,NULL);;}
    break;

  case 232:

    {add_command(cSEEK2,NULL);;}
    break;

  case 233:

    {add_command(cPUSHSTRPTR,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 234:

    {create_doarray(dotify((yyvsp[(1) - (4)].symbol),FALSE),GETSTRINGPOINTER);;}
    break;

  case 235:

    {add_command(cPUSHSTRSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 237:

    {add_command(cSTRINGFUNCTION_OR_ARRAY,(yyvsp[(1) - (1)].symbol));;}
    break;

  case 238:

    {if ((yyvsp[(1) - (1)].string)==NULL) {error(ERROR,"String not terminated");create_pushstr("");} else {create_pushstr((yyvsp[(1) - (1)].string));};}
    break;

  case 239:

    {add_command(cCONCAT,NULL);;}
    break;

  case 241:

    {create_function(fLEFT);;}
    break;

  case 242:

    {create_function(fRIGHT);;}
    break;

  case 243:

    {create_function(fMID);;}
    break;

  case 244:

    {create_function(fMID2);;}
    break;

  case 245:

    {create_function(fSTR);;}
    break;

  case 246:

    {create_function(fSTR2);;}
    break;

  case 247:

    {create_function(fSTR3);;}
    break;

  case 248:

    {create_pushdbl(-1);create_function(fINKEY);;}
    break;

  case 249:

    {create_pushdbl(-1);create_function(fINKEY);;}
    break;

  case 250:

    {create_function(fINKEY);;}
    break;

  case 251:

    {create_function(fCHR);;}
    break;

  case 252:

    {create_function(fUPPER);;}
    break;

  case 253:

    {create_function(fLOWER);;}
    break;

  case 254:

    {create_function(fLTRIM);;}
    break;

  case 255:

    {create_function(fRTRIM);;}
    break;

  case 256:

    {create_function(fTRIM);;}
    break;

  case 257:

    {create_function(fSYSTEM);;}
    break;

  case 258:

    {create_function(fDATE);;}
    break;

  case 259:

    {create_function(fDATE);;}
    break;

  case 260:

    {create_function(fTIME);;}
    break;

  case 261:

    {create_function(fTIME);;}
    break;

  case 262:

    {create_function(fPEEK2);;}
    break;

  case 263:

    {create_function(fPEEK3);;}
    break;

  case 264:

    {add_command(cTOKENALT2,NULL);;}
    break;

  case 265:

    {add_command(cTOKENALT,NULL);;}
    break;

  case 266:

    {add_command(cSPLITALT2,NULL);;}
    break;

  case 267:

    {add_command(cSPLITALT,NULL);;}
    break;

  case 268:

    {create_function(fGETCHAR);;}
    break;

  case 269:

    {create_function(fHEX);;}
    break;

  case 270:

    {create_function(fBIN);;}
    break;

  case 271:

    {create_execute(1);add_command(cSWAP,NULL);add_command(cPOP,NULL);;}
    break;

  case 272:

    {create_function(fMESSAGE);;}
    break;

  case 273:

    {create_function(fMESSAGE);;}
    break;

  case 274:

    {create_function(fMOUSEMOVE);;}
    break;

  case 275:

    {create_function(fMOUSEMOVE);;}
    break;

  case 276:

    {create_function(fTRANSLATE);;}
    break;

  case 277:

    {create_function(fTEXTGET);;}
    break;

  case 278:

    {create_function(fTEXTGET3);;}
    break;

  case 279:

    {create_function(fTEXTGET6);;}
    break;

  case 280:

    {create_function(fTEXTCONTROLGET);;}
    break;

  case 281:

    {create_function(fLOAD);;}
    break;

  case 282:

    {create_function(fSAVE);;}
    break;

  case 283:

    {create_function(fMOUSE);;}
    break;

  case 284:

    {create_function(fKEYBOARD);;}
    break;

  case 285:

    {create_function(fCLIPBOARDPASTE);;}
    break;

  case 286:

    {create_function(fCOLUMNBOXGET);;}
    break;

  case 287:

    {create_function(fCALENDAR);;}
    break;

  case 288:

    {create_function(fLISTBOXGET);;}
    break;

  case 289:

    {create_function(fTREEBOXGET);;}
    break;

  case 290:

    {create_function(fPOPUPMENU);;}
    break;

  case 291:

    {create_function(fDROPBOXGET);;}
    break;

  case 292:

    {create_function(fDRAWGET3);;}
    break;

  case 293:

    {add_command(cPOPDBLSYM,dotify((yyvsp[(1) - (3)].symbol),FALSE));;}
    break;

  case 294:

    {create_doarray((yyvsp[(1) - (3)].symbol),ASSIGNARRAY);;}
    break;

  case 295:

    {add_command(cORSHORT,NULL);pushlabel();;}
    break;

  case 296:

    {poplabel();create_boole('|');;}
    break;

  case 297:

    {add_command(cANDSHORT,NULL);pushlabel();;}
    break;

  case 298:

    {poplabel();create_boole('&');;}
    break;

  case 299:

    {create_boole('!');;}
    break;

  case 300:

    {create_dblrelop('=');;}
    break;

  case 301:

    {create_dblrelop('!');;}
    break;

  case 302:

    {create_dblrelop('<');;}
    break;

  case 303:

    {create_dblrelop('{');;}
    break;

  case 304:

    {create_dblrelop('>');;}
    break;

  case 305:

    {create_dblrelop('}');;}
    break;

  case 306:

    {add_command(cTESTEOF,NULL);;}
    break;

  case 307:

    {add_command(cGLOB,NULL);;}
    break;

  case 308:

    {create_pushdbl((yyvsp[(1) - (1)].fnum));;}
    break;

  case 309:

    {add_command(cARDIM,"");;}
    break;

  case 310:

    {add_command(cARDIM,"");;}
    break;

  case 311:

    {add_command(cARSIZE,"");;}
    break;

  case 312:

    {add_command(cARSIZE,"");;}
    break;

  case 313:

    {add_command(cFUNCTION_OR_ARRAY,(yyvsp[(1) - (1)].symbol));;}
    break;

  case 314:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 315:

    {create_dblbin('+');;}
    break;

  case 316:

    {create_dblbin('-');;}
    break;

  case 317:

    {create_dblbin('*');;}
    break;

  case 318:

    {create_dblbin('/');;}
    break;

  case 319:

    {create_dblbin('^');;}
    break;

  case 320:

    {add_command(cNEGATE,NULL);;}
    break;

  case 321:

    {create_strrelop('=');;}
    break;

  case 322:

    {create_strrelop('!');;}
    break;

  case 323:

    {create_strrelop('<');;}
    break;

  case 324:

    {create_strrelop('{');;}
    break;

  case 325:

    {create_strrelop('>');;}
    break;

  case 326:

    {create_strrelop('}');;}
    break;

  case 329:

    {create_pusharrayref(dotify((yyvsp[(1) - (3)].symbol),FALSE),stNUMBERARRAYREF);;}
    break;

  case 330:

    {create_pusharrayref(dotify((yyvsp[(1) - (3)].symbol),FALSE),stSTRINGARRAYREF);;}
    break;

  case 332:

    {create_function(fSIN);;}
    break;

  case 333:

    {create_function(fASIN);;}
    break;

  case 334:

    {create_function(fCOS);;}
    break;

  case 335:

    {create_function(fACOS);;}
    break;

  case 336:

    {create_function(fTAN);;}
    break;

  case 337:

    {create_function(fATAN);;}
    break;

  case 338:

    {create_function(fATAN2);;}
    break;

  case 339:

    {create_function(fEXP);;}
    break;

  case 340:

    {create_function(fLOG);;}
    break;

  case 341:

    {create_function(fLOG2);;}
    break;

  case 342:

    {create_function(fSQRT);;}
    break;

  case 343:

    {create_function(fSQR);;}
    break;

  case 344:

    {create_function(fINT);;}
    break;

  case 345:

    {create_function(fFRAC);;}
    break;

  case 346:

    {create_function(fABS);;}
    break;

  case 347:

    {create_function(fSIG);;}
    break;

  case 348:

    {create_function(fMOD);;}
    break;

  case 349:

    {create_function(fRAN);;}
    break;

  case 350:

    {create_function(fRAN2);;}
    break;

  case 351:

    {create_function(fMIN);;}
    break;

  case 352:

    {create_function(fMAX);;}
    break;

  case 353:

    {create_function(fLEN);;}
    break;

  case 354:

    {create_function(fVAL);;}
    break;

  case 355:

    {create_function(fASC);;}
    break;

  case 356:

    {create_function(fDEC);;}
    break;

  case 357:

    {create_function(fDEC2);;}
    break;

  case 358:

    {if (check_compat) error(WARNING,"instr() has changed in version 2.712"); create_function(fINSTR);;}
    break;

  case 359:

    {create_function(fINSTR2);;}
    break;

  case 360:

    {create_function(fRINSTR);;}
    break;

  case 361:

    {create_function(fRINSTR2);;}
    break;

  case 362:

    {create_function(fSYSTEM2);;}
    break;

  case 363:

    {create_function(fPEEK4);;}
    break;

  case 364:

    {create_function(fPEEK);;}
    break;

  case 365:

    {create_function(fAND);;}
    break;

  case 366:

    {create_function(fOR);;}
    break;

  case 367:

    {create_function(fEOR);;}
    break;

  case 368:

    {create_function(fTELL);;}
    break;

  case 369:

    {add_command(cTOKEN2,NULL);;}
    break;

  case 370:

    {add_command(cTOKEN,NULL);;}
    break;

  case 371:

    {add_command(cSPLIT2,NULL);;}
    break;

  case 372:

    {add_command(cSPLIT,NULL);;}
    break;

  case 373:

    {create_execute(0);add_command(cSWAP,NULL);add_command(cPOP,NULL);;}
    break;

  case 374:

    {create_myopen(0);;}
    break;

  case 375:

    {create_myopen(OPEN_HAS_MODE);;}
    break;

  case 376:

    {create_myopen(OPEN_HAS_STREAM);;}
    break;

  case 377:

    {create_myopen(OPEN_HAS_STREAM+OPEN_HAS_MODE);;}
    break;

  case 378:

    {create_function(fDRAWIMAGE);;}
    break;

  case 379:

    {create_function(fDRAWIMAGE2);;}
    break;

  case 380:

    {create_function(fDRAWSVG);;}
    break;

  case 381:

    {create_function(fNUMWINDOWS);;}
    break;

  case 382:

    {create_function(fISMOUSEIN);;}
    break;

  case 383:

    {create_function(fCOLUMNBOXCOUNT);;}
    break;

  case 384:

    {create_function(fWINDOWGET);;}
    break;

  case 385:

    {create_function(fVIEWGET);;}
    break;

  case 386:

    {create_function(fALERT);;}
    break;

  case 387:

    {create_function(fLISTBOXCOUNT);;}
    break;

  case 388:

    {create_function(fTREEBOXCOUNT);;}
    break;

  case 389:

    {create_function(fSCROLLBARGET);;}
    break;

  case 390:

    {create_function(fSPLITVIEWGET);;}
    break;

  case 391:

    {create_function(fSTACKVIEWGET);;}
    break;

  case 392:

    {create_function(fTABVIEWGET);;}
    break;

  case 393:

    {create_function(fSPINCONTROLGET);;}
    break;

  case 394:

    {create_function(fDROPBOXCOUNT);;}
    break;

  case 395:

    {create_function(fSLIDERGET);;}
    break;

  case 396:

    {create_function(fCOLORCONTROLGET);;}
    break;

  case 397:

    {create_function(fTEXTGET2);;}
    break;

  case 398:

    {create_function(fTEXTGET4);;}
    break;

  case 399:

    {create_function(fTEXTGET5);;}
    break;

  case 400:

    {create_function(fDRAWGET1);;}
    break;

  case 401:

    {create_function(fDRAWGET2);;}
    break;

  case 402:

    {create_function(fDRAWGET4);;}
    break;

  case 403:

    {create_function(fMESSAGESEND);;}
    break;

  case 404:

    {create_function(fTHREADKILL);;}
    break;

  case 405:

    {create_function(fTHREADGET);;}
    break;

  case 406:

    {create_function(fPRINTER);;}
    break;

  case 407:

    {create_function(fSOUND);;}
    break;

  case 408:

    {create_function(fISCOMPUTERON);;}
    break;

  case 409:

    {create_function(fLISTBOXGETNUM);;}
    break;

  case 410:

    {create_function(fDROPBOXGETNUM);;}
    break;

  case 411:

    {create_function(fTREEBOXGETNUM);;}
    break;

  case 412:

    {create_function(fCOLUMNBOXGETNUM);;}
    break;

  case 413:

    {create_function(fTREEBOXGETOPT);;}
    break;

  case 414:

    {create_function(fBITMAPSAVE);;}
    break;

  case 415:

    {create_function(fBITMAPLOAD);;}
    break;

  case 416:

    {create_function(fBITMAPGET);;}
    break;

  case 417:

    {create_function(fBITMAPCOLOR);;}
    break;

  case 418:

    {(yyval.fnum)=(yyvsp[(1) - (1)].fnum);;}
    break;

  case 419:

    {(yyval.fnum)=(yyvsp[(2) - (2)].fnum);;}
    break;

  case 420:

    {(yyval.fnum)=-(yyvsp[(2) - (2)].fnum);;}
    break;

  case 421:

    {(yyval.fnum)=(yyvsp[(1) - (1)].fnum);;}
    break;

  case 422:

    {(yyval.fnum)=strtod((yyvsp[(1) - (1)].digits),NULL);;}
    break;

  case 423:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[(1) - (1)].digits),FALSE));;}
    break;

  case 424:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 425:

    {create_dim(dotify((yyvsp[(1) - (4)].symbol),FALSE),'D');;}
    break;

  case 426:

    {create_dim(dotify((yyvsp[(3) - (6)].symbol),FALSE),'D');;}
    break;

  case 427:

    {create_dim(dotify((yyvsp[(1) - (4)].symbol),FALSE),'S');;}
    break;

  case 428:

    {create_dim(dotify((yyvsp[(3) - (6)].symbol),FALSE),'S');;}
    break;

  case 429:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[(1) - (4)].symbol),FALSE));;}
    break;

  case 430:

    {(yyval.symbol)=my_strdup(dotify((yyvsp[(1) - (4)].symbol),FALSE));;}
    break;

  case 431:

    {add_command(cPUSHFREE,NULL);;}
    break;

  case 438:

    {missing_endsub++;missing_endsub_line=yylineno;pushlabel();report_missing(WARNING,"do not define a function in a loop or an if-statement");if (function_type!=ftNONE) {error(ERROR,"nested functions not allowed");YYABORT;};}
    break;

  case 439:

    {if (exported) create_sublink((yyvsp[(4) - (4)].symbol)); create_label((yyvsp[(4) - (4)].symbol),cUSER_FUNCTION);
	               add_command(cPUSHSYMLIST,NULL);add_command(cCLEARREFS,NULL);firstref=lastref=lastcmd;
		       create_numparam();;}
    break;

  case 440:

    {create_require(stFREE);add_command(cPOP,NULL);;}
    break;

  case 441:

    {add_command(cCLEARREFS,NULL);lastcmd->nextref=firstref;add_command(cPOPSYMLIST,NULL);create_retval(ftNONE,function_type);function_type=ftNONE;add_command(cRET_FROM_FUN,NULL);lastref=NULL;create_endfunction();poplabel();;}
    break;

  case 442:

    {if (missing_endsub) {sprintf(string,"%d end-sub(s) are missing (last at line %d)",missing_endsub,missing_endsub_line);error(ERROR,string);} YYABORT;;}
    break;

  case 443:

    {missing_endsub--;;}
    break;

  case 444:

    {function_type=ftNUMBER;current_function=my_strdup(dotify((yyvsp[(1) - (1)].symbol),FALSE));(yyval.symbol)=my_strdup(dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 445:

    {function_type=ftSTRING;current_function=my_strdup(dotify((yyvsp[(1) - (1)].symbol),FALSE));(yyval.symbol)=my_strdup(dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 446:

    {exported=FALSE;;}
    break;

  case 447:

    {exported=TRUE;;}
    break;

  case 448:

    {exported=FALSE;;}
    break;

  case 449:

    {exported=TRUE;;}
    break;

  case 452:

    {create_makelocal(dotify((yyvsp[(1) - (1)].symbol),FALSE),syNUMBER);;}
    break;

  case 453:

    {create_makelocal(dotify((yyvsp[(1) - (1)].symbol),FALSE),sySTRING);;}
    break;

  case 454:

    {create_makelocal(dotify((yyvsp[(1) - (4)].symbol),FALSE),syARRAY);create_dim(dotify((yyvsp[(1) - (4)].symbol),FALSE),'d');;}
    break;

  case 455:

    {create_makelocal(dotify((yyvsp[(1) - (4)].symbol),FALSE),syARRAY);create_dim(dotify((yyvsp[(1) - (4)].symbol),FALSE),'s');;}
    break;

  case 458:

    {create_makestatic(dotify((yyvsp[(1) - (1)].symbol),TRUE),syNUMBER);;}
    break;

  case 459:

    {create_makestatic(dotify((yyvsp[(1) - (1)].symbol),TRUE),sySTRING);;}
    break;

  case 460:

    {create_makestatic(dotify((yyvsp[(1) - (4)].symbol),TRUE),syARRAY);create_dim(dotify((yyvsp[(1) - (4)].symbol),TRUE),'D');;}
    break;

  case 461:

    {create_makestatic(dotify((yyvsp[(1) - (4)].symbol),TRUE),syARRAY);create_dim(dotify((yyvsp[(1) - (4)].symbol),TRUE),'S');;}
    break;

  case 465:

    {create_require(stNUMBER);create_makelocal(dotify((yyvsp[(1) - (1)].symbol),FALSE),syNUMBER);add_command(cPOPDBLSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 466:

    {create_require(stSTRING);create_makelocal(dotify((yyvsp[(1) - (1)].symbol),FALSE),sySTRING);add_command(cPOPSTRSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 467:

    {create_require(stNUMBERARRAYREF);create_arraylink(dotify((yyvsp[(1) - (3)].symbol),FALSE),stNUMBERARRAYREF);;}
    break;

  case 468:

    {create_require(stSTRINGARRAYREF);create_arraylink(dotify((yyvsp[(1) - (3)].symbol),FALSE),stSTRINGARRAYREF);;}
    break;

  case 469:

    {missing_next++;missing_next_line=yylineno;;}
    break;

  case 470:

    {pushname(dotify((yyvsp[(3) - (4)].symbol),FALSE)); /* will be used by next_symbol to check equality */
	     add_command(cRESETSKIPONCE,NULL);
	     pushgoto();add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);;}
    break;

  case 471:

    { /* pushes another expression */
	     add_command(cSKIPONCE,NULL);
	     pushlabel();
	     add_command(cSTARTFOR,NULL);
	     add_command(cPOPDBLSYM,dotify((yyvsp[(3) - (9)].symbol),FALSE));
	     poplabel();
	     add_command(cPUSHDBLSYM,dotify((yyvsp[(3) - (9)].symbol),FALSE));
	     add_command(cFORINCREMENT,NULL);
	     add_command(cPOPDBLSYM,dotify((yyvsp[(3) - (9)].symbol),FALSE));
	     add_command(cPUSHDBLSYM,dotify((yyvsp[(3) - (9)].symbol),FALSE));
	     add_command(cFORCHECK,NULL);
	     add_command(cDECIDE,NULL);
             pushlabel();;}
    break;

  case 472:

    {
             swap();popgoto();poplabel();;}
    break;

  case 473:

    {create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);;}
    break;

  case 474:

    {if (missing_next) {sprintf(string,"%d next(s) are missing (last at line %d)",missing_next,missing_next_line);error(ERROR,string);} YYABORT;;}
    break;

  case 475:

    {missing_next--;;}
    break;

  case 476:

    {create_pushdbl(1);;}
    break;

  case 478:

    {pop(stSTRING);;}
    break;

  case 479:

    {if (strcmp(pop(stSTRING)->pointer,dotify((yyvsp[(1) - (1)].symbol),FALSE))) 
             {error(ERROR,"'for' and 'next' do not match"); YYABORT;}
           ;}
    break;

  case 480:

    {push_switch_id();add_command(cPUSH_SWITCH_MARK,NULL);create_break_mark(0,1);
	add_command(cCONTINUE_CORRECTION,NULL);;}
    break;

  case 481:

    {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);create_clean_switch_mark(0,FALSE);pop_switch_id();;}
    break;

  case 482:

    {if ((yyvsp[(1) - (1)].sep)>=0) yylineno+=(yyvsp[(1) - (1)].sep);;}
    break;

  case 483:

    {if ((yyvsp[(2) - (2)].sep)>=0) yylineno+=(yyvsp[(2) - (2)].sep);;}
    break;

  case 487:

    {create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);;}
    break;

  case 488:

    {add_command(cSWITCH_COMPARE,NULL);add_command(cDECIDE,NULL);add_command(cMINOR_BREAK,NULL);create_break_mark(1,0);;}
    break;

  case 489:

    {add_command(cNEXT_CASE,NULL);;}
    break;

  case 491:

    {if ((yyvsp[(2) - (2)].sep)>=0) yylineno+=(yyvsp[(2) - (2)].sep); create_break_mark(-1,0);add_command(cBREAK_HERE,NULL);;}
    break;

  case 493:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_loop++;missing_loop_line=yylineno;pushgoto();;}
    break;

  case 495:

    {if (missing_loop) {sprintf(string,"%d loop(s) are missing (last at line %d)",missing_loop,missing_loop_line);error(ERROR,string);} YYABORT;;}
    break;

  case 496:

    {missing_loop--;popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);;}
    break;

  case 497:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_wend++;missing_wend_line=yylineno;pushgoto();}
    break;

  case 498:

    {add_command(cDECIDE,NULL);
	      pushlabel();;}
    break;

  case 500:

    {if (missing_wend) {sprintf(string,"%d wend(s) are missing (last at line %d)",missing_wend,missing_wend_line);error(ERROR,string);} YYABORT;;}
    break;

  case 501:

    {missing_wend--;swap();popgoto();poplabel();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);;}
    break;

  case 502:

    {add_command(cCONTINUE_HERE,NULL);create_break_mark(0,1);missing_until++;missing_until_line=yylineno;pushgoto();;}
    break;

  case 504:

    {if (missing_until) {sprintf(string,"%d until(s) are missing (last at line %d)",missing_until,missing_until_line);error(ERROR,string);} YYABORT;;}
    break;

  case 505:

    {missing_until--;add_command(cDECIDE,NULL);popgoto();create_break_mark(0,-1);add_command(cBREAK_HERE,NULL);;}
    break;

  case 506:

    {add_command(cDECIDE,NULL);storelabel();pushlabel();;}
    break;

  case 507:

    {missing_endif++;missing_endif_line=yylineno;;}
    break;

  case 508:

    {swap();matchgoto();swap();poplabel();;}
    break;

  case 509:

    {poplabel();;}
    break;

  case 511:

    {if (missing_endif) {sprintf(string,"%d endif(s) are missing (last at line %d)",missing_endif,missing_endif_line);error(ERROR,string);} YYABORT;;}
    break;

  case 512:

    {missing_endif--;;}
    break;

  case 513:

    {fi_pending++;add_command(cDECIDE,NULL);pushlabel();;}
    break;

  case 514:

    {poplabel();;}
    break;

  case 518:

    {add_command(cDECIDE,NULL);pushlabel();;}
    break;

  case 519:

    {swap();matchgoto();swap();poplabel();;}
    break;

  case 524:

    {add_command(cCHKPROMPT,NULL);;}
    break;

  case 526:

    {create_myread('d',tileol);add_command(cPOPDBLSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 527:

    {create_myread('d',tileol);create_doarray(dotify((yyvsp[(1) - (4)].symbol),FALSE),ASSIGNARRAY);;}
    break;

  case 528:

    {create_myread('s',tileol);add_command(cPOPSTRSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 529:

    {create_myread('s',tileol);create_doarray(dotify((yyvsp[(1) - (4)].symbol),FALSE),ASSIGNSTRINGARRAY);;}
    break;

  case 532:

    {create_readdata('d');add_command(cPOPDBLSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 533:

    {create_readdata('d');create_doarray(dotify((yyvsp[(1) - (4)].symbol),FALSE),ASSIGNARRAY);;}
    break;

  case 534:

    {create_readdata('s');add_command(cPOPSTRSYM,dotify((yyvsp[(1) - (1)].symbol),FALSE));;}
    break;

  case 535:

    {create_readdata('s');create_doarray(dotify((yyvsp[(1) - (4)].symbol),FALSE),ASSIGNSTRINGARRAY);;}
    break;

  case 536:

    {create_strdata((yyvsp[(1) - (1)].string));;}
    break;

  case 537:

    {create_dbldata((yyvsp[(1) - (1)].fnum));;}
    break;

  case 538:

    {create_strdata((yyvsp[(3) - (3)].string));;}
    break;

  case 539:

    {create_dbldata((yyvsp[(3) - (3)].fnum));;}
    break;

  case 543:

    {create_print('s');;}
    break;

  case 544:

    {create_print('s');;}
    break;

  case 545:

    {create_print('d');;}
    break;

  case 546:

    {create_print('u');;}
    break;

  case 547:

    {create_print('U');;}
    break;

  case 548:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[(2) - (2)].symbol),FALSE));create_pps(cPUSHSTREAM,1);;}
    break;

  case 549:

    {create_pps(cPOPSTREAM,0);;}
    break;

  case 550:

    {create_pushdbl(atoi((yyvsp[(2) - (2)].digits)));create_pps(cPUSHSTREAM,1);;}
    break;

  case 551:

    {create_pps(cPOPSTREAM,0);;}
    break;

  case 552:

    {create_pps(cPUSHSTREAM,1);;}
    break;

  case 553:

    {create_pps(cPOPSTREAM,0);;}
    break;

  case 554:

    {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);;}
    break;

  case 555:

    {create_pps(cPOPSTREAM,0);;}
    break;

  case 556:

    {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,1);;}
    break;

  case 557:

    {create_pps(cPOPSTREAM,0);;}
    break;

  case 558:

    {create_pushstr("?");create_print('s');;}
    break;

  case 559:

    {create_pushstr((yyvsp[(1) - (1)].string));create_print('s');;}
    break;

  case 560:

    {create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 561:

    {add_command(cPUSHDBLSYM,dotify((yyvsp[(2) - (2)].symbol),FALSE));create_pps(cPUSHSTREAM,0);;}
    break;

  case 562:

    {create_pushdbl(atoi((yyvsp[(2) - (2)].digits)));create_pps(cPUSHSTREAM,0);;}
    break;

  case 563:

    {create_pps(cPUSHSTREAM,0);;}
    break;

  case 564:

    {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 565:

    {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 566:

    {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 567:

    {add_command(cMOVE,NULL);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 568:

    {add_command(cMOVE,NULL);create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 569:

    {add_command(cMOVE,NULL);create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 570:

    {add_command(cMOVE,NULL);create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);;}
    break;

  case 571:

    {create_colour(1);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);;}
    break;

  case 572:

    {create_colour(2);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);;}
    break;

  case 573:

    {create_colour(3);create_pushdbl(STDIO_STREAM);create_pps(cPUSHSTREAM,0);add_command(cMOVE,NULL);;}
    break;

  case 576:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[(1) - (1)].symbol),TRUE):(yyvsp[(1) - (1)].symbol));add_command(cFINDNOP,NULL);;}
    break;

  case 577:

    {create_goto((function_type!=ftNONE)?dotify((yyvsp[(3) - (3)].symbol),TRUE):(yyvsp[(3) - (3)].symbol));add_command(cFINDNOP,NULL);;}
    break;

  case 578:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[(1) - (1)].symbol),TRUE):(yyvsp[(1) - (1)].symbol));add_command(cFINDNOP,NULL);;}
    break;

  case 579:

    {create_gosub((function_type!=ftNONE)?dotify((yyvsp[(3) - (3)].symbol),TRUE):(yyvsp[(3) - (3)].symbol));add_command(cFINDNOP,NULL);;}
    break;



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



