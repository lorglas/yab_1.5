
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


