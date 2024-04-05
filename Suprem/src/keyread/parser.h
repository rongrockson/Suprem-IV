/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CARD = 258,                    /* CARD  */
    BG_GRP = 259,                  /* BG_GRP  */
    END_GRP = 260,                 /* END_GRP  */
    PARTYPE = 261,                 /* PARTYPE  */
    EOL = 262,                     /* EOL  */
    BOOLSTART = 263,               /* BOOLSTART  */
    GRT = 264,                     /* GRT  */
    LES = 265,                     /* LES  */
    GRTE = 266,                    /* GRTE  */
    LESE = 267,                    /* LESE  */
    OR = 268,                      /* OR  */
    AND = 269,                     /* AND  */
    EQU = 270,                     /* EQU  */
    NOTEQU = 271,                  /* NOTEQU  */
    NOT = 272,                     /* NOT  */
    PLUS = 273,                    /* PLUS  */
    TIMES = 274,                   /* TIMES  */
    RCONST = 275,                  /* RCONST  */
    STRING = 276,                  /* STRING  */
    INTEGER = 277,                 /* INTEGER  */
    NUMB = 278,                    /* NUMB  */
    NAME = 279,                    /* NAME  */
    UNITS = 280,                   /* UNITS  */
    ERR_MSG = 281,                 /* ERR_MSG  */
    COMMENT = 282,                 /* COMMENT  */
    PARNAME = 283                  /* PARNAME  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define CARD 258
#define BG_GRP 259
#define END_GRP 260
#define PARTYPE 261
#define EOL 262
#define BOOLSTART 263
#define GRT 264
#define LES 265
#define GRTE 266
#define LESE 267
#define OR 268
#define AND 269
#define EQU 270
#define NOTEQU 271
#define NOT 272
#define PLUS 273
#define TIMES 274
#define RCONST 275
#define STRING 276
#define INTEGER 277
#define NUMB 278
#define NAME 279
#define UNITS 280
#define ERR_MSG 281
#define COMMENT 282
#define PARNAME 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "parser.y"

    int ival;
    float dval;
    char *sval;
    struct bool_exp *bval;
    

#line 131 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
