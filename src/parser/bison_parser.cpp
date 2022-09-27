/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs


/* Copy the first part of user declarations.  */
#line 2 "bison_parser.y" /* yacc.c:339  */

  // clang-format on
  /**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
  /*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"

#include <stdio.h>
#include <string.h>

  using namespace hsql;

  int yyerror(YYLTYPE * llocp, SQLParserResult * result, yyscan_t scanner, const char* msg) {
    result->setIsValid(false);
    result->setErrorDetails(strdup(msg), llocp->first_line, llocp->first_column);
    return 0;
  }
  // clang-format off

#line 104 "bison_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison_parser.tab.h".  */
#ifndef YY_HSQL_BISON_PARSER_TAB_H_INCLUDED
# define YY_HSQL_BISON_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 38 "bison_parser.y" /* yacc.c:355  */

  // clang-format on
  // %code requires block

#include "../SQLParserResult.h"
#include "../sql/statements.h"
#include "parser_typedef.h"

// Auto update column and line number
#define YY_USER_ACTION                        \
  yylloc->first_line = yylloc->last_line;     \
  yylloc->first_column = yylloc->last_column; \
  for (int i = 0; yytext[i] != '\0'; i++) {   \
    yylloc->total_column++;                   \
    yylloc->string_length++;                  \
    if (yytext[i] == '\n') {                  \
      yylloc->last_line++;                    \
      yylloc->last_column = 0;                \
    } else {                                  \
      yylloc->last_column++;                  \
    }                                         \
  }

#line 166 "bison_parser.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_IDENTIFIER = 258,
    SQL_STRING = 259,
    SQL_FLOATVAL = 260,
    SQL_INTVAL = 261,
    SQL_DEALLOCATE = 262,
    SQL_PARAMETERS = 263,
    SQL_INTERSECT = 264,
    SQL_TEMPORARY = 265,
    SQL_TIMESTAMP = 266,
    SQL_DISTINCT = 267,
    SQL_NVARCHAR = 268,
    SQL_RESTRICT = 269,
    SQL_TRUNCATE = 270,
    SQL_ANALYZE = 271,
    SQL_BETWEEN = 272,
    SQL_CASCADE = 273,
    SQL_COLUMNS = 274,
    SQL_CONTROL = 275,
    SQL_DEFAULT = 276,
    SQL_EXECUTE = 277,
    SQL_EXPLAIN = 278,
    SQL_INTEGER = 279,
    SQL_NATURAL = 280,
    SQL_PREPARE = 281,
    SQL_PRIMARY = 282,
    SQL_SCHEMAS = 283,
    SQL_CHARACTER_VARYING = 284,
    SQL_REAL = 285,
    SQL_DECIMAL = 286,
    SQL_SMALLINT = 287,
    SQL_BIGINT = 288,
    SQL_SPATIAL = 289,
    SQL_VARCHAR = 290,
    SQL_VIRTUAL = 291,
    SQL_DESCRIBE = 292,
    SQL_BEFORE = 293,
    SQL_COLUMN = 294,
    SQL_CREATE = 295,
    SQL_DELETE = 296,
    SQL_DIRECT = 297,
    SQL_DOUBLE = 298,
    SQL_ESCAPE = 299,
    SQL_EXCEPT = 300,
    SQL_EXISTS = 301,
    SQL_EXTRACT = 302,
    SQL_CAST = 303,
    SQL_FORMAT = 304,
    SQL_GLOBAL = 305,
    SQL_HAVING = 306,
    SQL_IMPORT = 307,
    SQL_INSERT = 308,
    SQL_ISNULL = 309,
    SQL_OFFSET = 310,
    SQL_RENAME = 311,
    SQL_SCHEMA = 312,
    SQL_SELECT = 313,
    SQL_SORTED = 314,
    SQL_TABLES = 315,
    SQL_UNIQUE = 316,
    SQL_UNLOAD = 317,
    SQL_UPDATE = 318,
    SQL_VALUES = 319,
    SQL_AFTER = 320,
    SQL_ALTER = 321,
    SQL_CROSS = 322,
    SQL_DATABASES = 323,
    SQL_DATABASE = 324,
    SQL_DELTA = 325,
    SQL_FLOAT = 326,
    SQL_GROUP = 327,
    SQL_INDEX = 328,
    SQL_INNER = 329,
    SQL_LIMIT = 330,
    SQL_LOCAL = 331,
    SQL_MERGE = 332,
    SQL_MINUS = 333,
    SQL_ORDER = 334,
    SQL_OUTER = 335,
    SQL_RIGHT = 336,
    SQL_TABLE = 337,
    SQL_UNION = 338,
    SQL_USING = 339,
    SQL_WHERE = 340,
    SQL_CALL = 341,
    SQL_CASE = 342,
    SQL_CHAR = 343,
    SQL_COPY = 344,
    SQL_DATE = 345,
    SQL_DATETIME = 346,
    SQL_DESC = 347,
    SQL_DROP = 348,
    SQL_ELSE = 349,
    SQL_FILE = 350,
    SQL_FROM = 351,
    SQL_FULL = 352,
    SQL_HASH = 353,
    SQL_HINT = 354,
    SQL_INTO = 355,
    SQL_JOIN = 356,
    SQL_LEFT = 357,
    SQL_LIKE = 358,
    SQL_LOAD = 359,
    SQL_LONG = 360,
    SQL_NULL = 361,
    SQL_PLAN = 362,
    SQL_SHOW = 363,
    SQL_TEXT = 364,
    SQL_THEN = 365,
    SQL_TIME = 366,
    SQL_VIEW = 367,
    SQL_WHEN = 368,
    SQL_WITH = 369,
    SQL_ADD = 370,
    SQL_ALL = 371,
    SQL_AND = 372,
    SQL_ASC = 373,
    SQL_END = 374,
    SQL_FOR = 375,
    SQL_INT = 376,
    SQL_KEY = 377,
    SQL_NOT = 378,
    SQL_OFF = 379,
    SQL_SET = 380,
    SQL_TOP = 381,
    SQL_AS = 382,
    SQL_BY = 383,
    SQL_IF = 384,
    SQL_IN = 385,
    SQL_IS = 386,
    SQL_OF = 387,
    SQL_ON = 388,
    SQL_OR = 389,
    SQL_TO = 390,
    SQL_NO = 391,
    SQL_ARRAY = 392,
    SQL_CONCAT = 393,
    SQL_ILIKE = 394,
    SQL_SECOND = 395,
    SQL_MINUTE = 396,
    SQL_HOUR = 397,
    SQL_DAY = 398,
    SQL_MONTH = 399,
    SQL_YEAR = 400,
    SQL_SECONDS = 401,
    SQL_MINUTES = 402,
    SQL_HOURS = 403,
    SQL_DAYS = 404,
    SQL_MONTHS = 405,
    SQL_YEARS = 406,
    SQL_INTERVAL = 407,
    SQL_TRUE = 408,
    SQL_FALSE = 409,
    SQL_BOOLEAN = 410,
    SQL_TRANSACTION = 411,
    SQL_BEGIN = 412,
    SQL_COMMIT = 413,
    SQL_ROLLBACK = 414,
    SQL_NOWAIT = 415,
    SQL_SKIP = 416,
    SQL_LOCKED = 417,
    SQL_SHARE = 418,
    SQL_EQUALS = 419,
    SQL_NOTEQUALS = 420,
    SQL_LESS = 421,
    SQL_GREATER = 422,
    SQL_LESSEQ = 423,
    SQL_GREATEREQ = 424,
    SQL_NOTNULL = 425,
    SQL_UMINUS = 426
  };
#endif
/* Tokens.  */
#define SQL_IDENTIFIER 258
#define SQL_STRING 259
#define SQL_FLOATVAL 260
#define SQL_INTVAL 261
#define SQL_DEALLOCATE 262
#define SQL_PARAMETERS 263
#define SQL_INTERSECT 264
#define SQL_TEMPORARY 265
#define SQL_TIMESTAMP 266
#define SQL_DISTINCT 267
#define SQL_NVARCHAR 268
#define SQL_RESTRICT 269
#define SQL_TRUNCATE 270
#define SQL_ANALYZE 271
#define SQL_BETWEEN 272
#define SQL_CASCADE 273
#define SQL_COLUMNS 274
#define SQL_CONTROL 275
#define SQL_DEFAULT 276
#define SQL_EXECUTE 277
#define SQL_EXPLAIN 278
#define SQL_INTEGER 279
#define SQL_NATURAL 280
#define SQL_PREPARE 281
#define SQL_PRIMARY 282
#define SQL_SCHEMAS 283
#define SQL_CHARACTER_VARYING 284
#define SQL_REAL 285
#define SQL_DECIMAL 286
#define SQL_SMALLINT 287
#define SQL_BIGINT 288
#define SQL_SPATIAL 289
#define SQL_VARCHAR 290
#define SQL_VIRTUAL 291
#define SQL_DESCRIBE 292
#define SQL_BEFORE 293
#define SQL_COLUMN 294
#define SQL_CREATE 295
#define SQL_DELETE 296
#define SQL_DIRECT 297
#define SQL_DOUBLE 298
#define SQL_ESCAPE 299
#define SQL_EXCEPT 300
#define SQL_EXISTS 301
#define SQL_EXTRACT 302
#define SQL_CAST 303
#define SQL_FORMAT 304
#define SQL_GLOBAL 305
#define SQL_HAVING 306
#define SQL_IMPORT 307
#define SQL_INSERT 308
#define SQL_ISNULL 309
#define SQL_OFFSET 310
#define SQL_RENAME 311
#define SQL_SCHEMA 312
#define SQL_SELECT 313
#define SQL_SORTED 314
#define SQL_TABLES 315
#define SQL_UNIQUE 316
#define SQL_UNLOAD 317
#define SQL_UPDATE 318
#define SQL_VALUES 319
#define SQL_AFTER 320
#define SQL_ALTER 321
#define SQL_CROSS 322
#define SQL_DATABASES 323
#define SQL_DATABASE 324
#define SQL_DELTA 325
#define SQL_FLOAT 326
#define SQL_GROUP 327
#define SQL_INDEX 328
#define SQL_INNER 329
#define SQL_LIMIT 330
#define SQL_LOCAL 331
#define SQL_MERGE 332
#define SQL_MINUS 333
#define SQL_ORDER 334
#define SQL_OUTER 335
#define SQL_RIGHT 336
#define SQL_TABLE 337
#define SQL_UNION 338
#define SQL_USING 339
#define SQL_WHERE 340
#define SQL_CALL 341
#define SQL_CASE 342
#define SQL_CHAR 343
#define SQL_COPY 344
#define SQL_DATE 345
#define SQL_DATETIME 346
#define SQL_DESC 347
#define SQL_DROP 348
#define SQL_ELSE 349
#define SQL_FILE 350
#define SQL_FROM 351
#define SQL_FULL 352
#define SQL_HASH 353
#define SQL_HINT 354
#define SQL_INTO 355
#define SQL_JOIN 356
#define SQL_LEFT 357
#define SQL_LIKE 358
#define SQL_LOAD 359
#define SQL_LONG 360
#define SQL_NULL 361
#define SQL_PLAN 362
#define SQL_SHOW 363
#define SQL_TEXT 364
#define SQL_THEN 365
#define SQL_TIME 366
#define SQL_VIEW 367
#define SQL_WHEN 368
#define SQL_WITH 369
#define SQL_ADD 370
#define SQL_ALL 371
#define SQL_AND 372
#define SQL_ASC 373
#define SQL_END 374
#define SQL_FOR 375
#define SQL_INT 376
#define SQL_KEY 377
#define SQL_NOT 378
#define SQL_OFF 379
#define SQL_SET 380
#define SQL_TOP 381
#define SQL_AS 382
#define SQL_BY 383
#define SQL_IF 384
#define SQL_IN 385
#define SQL_IS 386
#define SQL_OF 387
#define SQL_ON 388
#define SQL_OR 389
#define SQL_TO 390
#define SQL_NO 391
#define SQL_ARRAY 392
#define SQL_CONCAT 393
#define SQL_ILIKE 394
#define SQL_SECOND 395
#define SQL_MINUTE 396
#define SQL_HOUR 397
#define SQL_DAY 398
#define SQL_MONTH 399
#define SQL_YEAR 400
#define SQL_SECONDS 401
#define SQL_MINUTES 402
#define SQL_HOURS 403
#define SQL_DAYS 404
#define SQL_MONTHS 405
#define SQL_YEARS 406
#define SQL_INTERVAL 407
#define SQL_TRUE 408
#define SQL_FALSE 409
#define SQL_BOOLEAN 410
#define SQL_TRANSACTION 411
#define SQL_BEGIN 412
#define SQL_COMMIT 413
#define SQL_ROLLBACK 414
#define SQL_NOWAIT 415
#define SQL_SKIP 416
#define SQL_LOCKED 417
#define SQL_SHARE 418
#define SQL_EQUALS 419
#define SQL_NOTEQUALS 420
#define SQL_LESS 421
#define SQL_GREATER 422
#define SQL_LESSEQ 423
#define SQL_GREATEREQ 424
#define SQL_NOTNULL 425
#define SQL_UMINUS 426

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED

union HSQL_STYPE
{
#line 98 "bison_parser.y" /* yacc.c:355  */

  // clang-format on
  bool bval;
  char* sval;
  double fval;
  int64_t ival;
  uintmax_t uval;

  // statements
  hsql::AlterStatement* alter_stmt;
  hsql::CreateStatement* create_stmt;
  hsql::DeleteStatement* delete_stmt;
  hsql::DropStatement* drop_stmt;
  hsql::ExecuteStatement* exec_stmt;
  hsql::ExportStatement* export_stmt;
  hsql::ImportStatement* import_stmt;
  hsql::InsertStatement* insert_stmt;
  hsql::PrepareStatement* prep_stmt;
  hsql::SelectStatement* select_stmt;
  hsql::ShowStatement* show_stmt;
  hsql::SQLStatement* statement;
  hsql::TransactionStatement* transaction_stmt;
  hsql::UpdateStatement* update_stmt;

  hsql::Alias* alias_t;
  hsql::AlterAction* alter_action_t;
  hsql::ColumnDefinition* column_t;
  hsql::ColumnType column_type_t;
  hsql::ConstraintType column_constraint_t;
  hsql::DatetimeField datetime_field;
  hsql::DropColumnAction* drop_action_t;
  hsql::Expr* expr;
  hsql::GroupByDescription* group_t;
  hsql::ImportType import_type_t;
  hsql::JoinType join_type;
  hsql::LimitDescription* limit;
  hsql::OrderDescription* order;
  hsql::OrderType order_type;
  hsql::SetOperation* set_operator_t;
  hsql::TableConstraint* table_constraint_t;
  hsql::TableElement* table_element_t;
  hsql::TableName table_name;
  hsql::TableRef* table;
  hsql::UpdateClause* update_t;
  hsql::WithDescription* with_description_t;
  hsql::LockingClause* locking_t;

  std::vector<char*>* str_vec;
  std::set<hsql::ConstraintType>* column_constraint_set;
  std::vector<hsql::Expr*>* expr_vec;
  std::vector<hsql::OrderDescription*>* order_vec;
  std::vector<hsql::SQLStatement*>* stmt_vec;
  std::vector<hsql::TableElement*>* table_element_vec;
  std::vector<hsql::TableRef*>* table_vec;
  std::vector<hsql::UpdateClause*>* update_vec;
  std::vector<hsql::WithDescription*>* with_description_vec;
  std::vector<hsql::LockingClause*>* locking_clause_vec;

  std::pair<int64_t, int64_t>* ival_pair;

  hsql::RowLockMode lock_mode_t;
  hsql::RowLockWaitPolicy lock_wait_policy_t;

#line 584 "bison_parser.tab.c" /* yacc.c:355  */
};

typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (hsql::SQLParserResult* result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 614 "bison_parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   858

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  189
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  584

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   426

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   178,     2,     2,
     183,   184,   176,   174,   187,   175,   185,   177,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   186,
     167,   164,   168,   188,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   181,     2,   182,   179,     2,     2,     2,     2,     2,
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
     155,   156,   157,   158,   159,   160,   161,   162,   163,   165,
     166,   169,   170,   171,   172,   173,   180
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   304,   304,   323,   329,   336,   340,   344,   345,   346,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     363,   364,   366,   370,   375,   379,   389,   390,   391,   393,
     393,   399,   405,   407,   411,   422,   428,   435,   450,   455,
     456,   462,   474,   475,   476,   480,   485,   496,   509,   521,
     528,   535,   544,   545,   547,   551,   556,   557,   559,   566,
     567,   568,   569,   570,   571,   572,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   588,   589,   591,
     592,   593,   595,   596,   598,   602,   607,   608,   609,   610,
     612,   613,   621,   627,   633,   639,   645,   646,   653,   659,
     661,   671,   678,   689,   696,   704,   705,   712,   719,   723,
     728,   738,   742,   746,   758,   758,   760,   761,   770,   771,
     773,   787,   799,   804,   808,   812,   817,   818,   820,   830,
     835,   836,   838,   840,   841,   843,   845,   846,   848,   853,
     855,   856,   858,   859,   861,   865,   870,   872,   873,   874,
     878,   879,   881,   882,   883,   884,   885,   886,   887,   892,
     896,   901,   902,   904,   908,   913,   921,   921,   921,   921,
     921,   923,   924,   924,   924,   924,   924,   924,   924,   924,
     925,   925,   929,   929,   931,   932,   933,   934,   935,   937,
     937,   938,   939,   940,   941,   942,   943,   944,   945,   946,
     948,   949,   951,   952,   953,   954,   958,   959,   960,   961,
     963,   964,   966,   967,   969,   970,   971,   972,   973,   974,
     975,   977,   978,   980,   982,   984,   985,   986,   987,   988,
     989,   991,   992,   993,   994,   995,   996,   998,   998,  1000,
    1002,  1004,  1006,  1007,  1008,  1009,  1011,  1011,  1011,  1011,
    1011,  1011,  1011,  1011,  1013,  1015,  1017,  1018,  1020,  1021,
    1023,  1025,  1027,  1038,  1042,  1053,  1085,  1094,  1094,  1101,
    1101,  1103,  1103,  1110,  1114,  1119,  1127,  1133,  1137,  1142,
    1143,  1145,  1145,  1147,  1147,  1149,  1150,  1152,  1152,  1158,
    1159,  1161,  1165,  1170,  1176,  1183,  1184,  1185,  1186,  1188,
    1189,  1190,  1196,  1196,  1198,  1200,  1204,  1209,  1219,  1226,
    1234,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1261,  1267,  1267,  1270,  1274
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING", "FLOATVAL",
  "INTVAL", "DEALLOCATE", "PARAMETERS", "INTERSECT", "TEMPORARY",
  "TIMESTAMP", "DISTINCT", "NVARCHAR", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT", "EXECUTE",
  "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY", "SCHEMAS",
  "CHARACTER_VARYING", "REAL", "DECIMAL", "SMALLINT", "BIGINT", "SPATIAL",
  "VARCHAR", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN", "CREATE", "DELETE",
  "DIRECT", "DOUBLE", "ESCAPE", "EXCEPT", "EXISTS", "EXTRACT", "CAST",
  "FORMAT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL", "OFFSET",
  "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE", "UNLOAD",
  "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DATABASES", "DATABASE",
  "DELTA", "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE",
  "MINUS", "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE",
  "CALL", "CASE", "CHAR", "COPY", "DATE", "DATETIME", "DESC", "DROP",
  "ELSE", "FILE", "FROM", "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT",
  "LIKE", "LOAD", "LONG", "NULL", "PLAN", "SHOW", "TEXT", "THEN", "TIME",
  "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC", "END", "FOR", "INT",
  "KEY", "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF",
  "ON", "OR", "TO", "NO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE",
  "HOUR", "DAY", "MONTH", "YEAR", "SECONDS", "MINUTES", "HOURS", "DAYS",
  "MONTHS", "YEARS", "INTERVAL", "TRUE", "FALSE", "BOOLEAN", "TRANSACTION",
  "BEGIN", "COMMIT", "ROLLBACK", "NOWAIT", "SKIP", "LOCKED", "SHARE",
  "'='", "EQUALS", "NOTEQUALS", "'<'", "'>'", "LESS", "GREATER", "LESSEQ",
  "GREATEREQ", "NOTNULL", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "UMINUS", "'['", "']'", "'('", "')'", "'.'", "';'", "','", "'?'",
  "$accept", "input", "statement_list", "statement",
  "preparable_statement", "opt_hints", "hint_list", "hint",
  "transaction_statement", "opt_transaction_keyword", "prepare_statement",
  "prepare_target_query", "execute_statement", "import_statement",
  "file_type", "file_path", "opt_file_type", "export_statement",
  "show_statement", "create_statement", "opt_not_exists",
  "table_elem_commalist", "table_elem", "column_def", "column_type",
  "opt_time_precision", "opt_decimal_specification",
  "opt_column_constraints", "column_constraint_set", "column_constraint",
  "table_constraint", "drop_statement", "opt_exists", "alter_statement",
  "alter_action", "drop_action", "delete_statement", "truncate_statement",
  "insert_statement", "opt_column_list", "update_statement",
  "update_clause_commalist", "update_clause", "select_statement",
  "select_within_set_operation",
  "select_within_set_operation_no_parentheses", "select_with_paren",
  "select_no_paren", "set_operator", "set_type", "opt_all",
  "select_clause", "opt_distinct", "select_list", "opt_from_clause",
  "from_clause", "opt_where", "opt_group", "opt_having", "opt_order",
  "order_list", "order_desc", "opt_order_type", "opt_top", "opt_limit",
  "expr_list", "opt_literal_list", "literal_list", "expr_alias", "expr",
  "operand", "scalar_expr", "unary_expr", "binary_expr", "logic_expr",
  "in_expr", "case_expr", "case_list", "exists_expr", "comp_expr",
  "function_expr", "extract_expr", "cast_expr", "datetime_field",
  "datetime_field_plural", "duration_field", "array_expr", "array_index",
  "between_expr", "column_name", "literal", "identifier_literal",
  "string_literal", "bool_literal", "num_literal", "int_literal",
  "null_literal", "date_literal", "interval_literal", "param_expr",
  "table_ref", "table_ref_atomic", "nonjoin_table_ref_atomic",
  "table_ref_commalist", "table_ref_name", "table_ref_name_no_alias",
  "table_name", "opt_index_name", "table_alias", "opt_table_alias",
  "alias", "opt_alias", "opt_locking_clause", "opt_locking_clause_list",
  "locking_clause", "row_lock_mode", "opt_row_lock_policy",
  "opt_with_clause", "with_clause", "with_description_list",
  "with_description", "join_clause", "opt_join_type", "join_condition",
  "opt_semicolon", "ident_commalist", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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
     415,   416,   417,   418,    61,   419,   420,    60,    62,   421,
     422,   423,   424,   425,    43,    45,    42,    47,    37,    94,
     426,    91,    93,    40,    41,    46,    59,    44,    63
};
# endif

#define YYPACT_NINF -459

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-459)))

#define YYTABLE_NINF -323

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-323)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     598,    14,    62,   154,   179,    62,   -20,   124,   158,   136,
      62,   146,    62,   -19,   193,   249,   100,   100,   100,   273,
      91,  -459,   196,  -459,   196,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,   -28,  -459,   295,
     129,  -459,   134,   227,  -459,   190,   190,   190,    62,   318,
      62,   206,  -459,   205,   -51,   205,   205,   205,    62,   258,
    -459,  -459,   219,   160,  -459,  -459,  -459,  -459,  -459,  -459,
     570,  -459,   256,  -459,  -459,   -26,   -28,   140,  -459,   147,
    -459,   363,    19,   376,   265,   387,    62,    62,   311,  -459,
     308,   222,   406,   371,    62,   414,   414,   417,    62,    62,
    -459,    62,   238,   249,  -459,   240,   243,   421,   419,   250,
     251,  -459,  -459,  -459,   -28,   325,   319,   -28,     6,  -459,
    -459,  -459,  -459,  -459,   442,  -459,   444,  -459,  -459,  -459,
     266,   269,  -459,  -459,  -459,  -459,  -459,   707,  -459,  -459,
    -459,  -459,  -459,  -459,   407,  -459,   324,   -44,   222,   291,
    -459,   414,   455,   177,   297,   -41,  -459,  -459,   369,   349,
    -459,   349,  -459,  -459,  -459,  -459,  -459,  -459,   461,   281,
    -459,  -459,   291,  -459,  -459,   389,  -459,  -459,   140,  -459,
    -459,   291,   389,   291,   128,   352,  -459,   231,  -459,    19,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,    62,   470,   361,   156,
     351,    57,   293,   298,   299,   132,   346,   304,   364,  -459,
     254,   -66,   423,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,   380,
    -459,   -82,   303,  -459,   291,   406,  -459,   449,  -459,  -459,
     445,  -459,  -459,   313,    80,  -459,  -459,   401,   315,  -459,
      43,     6,   -28,   317,  -459,   145,     6,   -66,   450,    24,
      28,  -459,   352,  -459,  -459,  -459,   323,   412,  -459,   460,
     386,   326,   141,  -459,  -459,  -459,   361,    26,    18,   452,
     231,   291,   291,   112,    74,   328,   364,   594,   291,   223,
     329,   -57,   291,   291,   364,  -459,   364,    37,   331,   -33,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   421,    62,  -459,   509,    19,
     -66,  -459,   205,   318,    19,  -459,   461,    17,   311,  -459,
     291,  -459,   512,  -459,  -459,  -459,  -459,   291,  -459,  -459,
    -459,   352,   291,   291,   291,  -459,   356,   398,  -459,   -85,
    -459,   455,   414,  -459,  -459,   340,  -459,   341,  -459,  -459,
     342,  -459,  -459,   344,  -459,  -459,  -459,  -459,   345,  -459,
    -459,    42,   347,   455,  -459,   156,  -459,  -459,   291,  -459,
    -459,   348,   437,   -60,    52,   130,   291,   291,  -459,   452,
     432,   -21,  -459,  -459,  -459,   420,   571,   650,   364,   353,
     254,  -459,   435,   357,   650,   650,   650,   650,   665,   665,
     665,   665,   223,   223,  -109,  -109,  -109,   -96,   360,  -459,
    -459,   161,   540,  -459,   169,  -459,   361,  -459,   262,  -459,
     362,  -459,    25,  -459,   472,  -459,  -459,  -459,  -459,   -66,
     -66,   -66,  -459,   492,   455,  -459,   394,  -459,   170,  -459,
     551,   552,  -459,   553,   554,   557,  -459,   446,  -459,  -459,
     458,  -459,    42,  -459,   455,   178,  -459,   195,  -459,   291,
     460,   291,   291,  -459,   155,    79,   382,  -459,   364,   650,
     254,   383,   200,  -459,  -459,  -459,  -459,  -459,   388,   473,
    -459,  -459,  -459,   493,   495,   496,   477,    17,   576,  -459,
    -459,  -459,   454,  -459,  -459,  -105,  -459,  -459,   396,   202,
     399,   400,   402,  -459,  -459,  -459,   211,  -459,  -459,   -37,
     409,   -66,   159,  -459,   291,  -459,   594,   422,   226,  -459,
    -459,    25,    17,  -459,  -459,  -459,    17,   358,   425,   291,
    -459,  -459,  -459,   597,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,   -66,  -459,  -459,  -459,  -459,   225,   455,   -24,   428,
     426,   291,   232,   291,  -459,  -459,    23,   -66,  -459,  -459,
     -66,   429,   433,  -459
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    30,    30,     0,
     323,     3,    21,    19,    21,    18,     8,     9,     7,    11,
      16,    17,    13,    14,    12,    15,    10,     0,   302,     0,
     277,   102,    33,     0,    46,    53,    53,    53,     0,     0,
       0,     0,   276,    97,     0,    97,    97,    97,     0,     0,
      42,    43,     0,   304,   305,    29,    26,    28,    27,     1,
     303,     2,     0,     6,     5,   151,     0,   111,   112,   143,
      94,     0,   162,     0,     0,   280,     0,     0,   137,    37,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     4,     0,     0,     0,   131,     0,
       0,   124,   125,   123,     0,   127,     0,     0,   158,   278,
     254,   255,   258,   260,     0,   261,     0,   256,   257,   266,
       0,   161,   163,   246,   247,   248,   249,   259,   250,   251,
     252,   253,    32,    31,     0,   279,     0,     0,   106,     0,
     101,     0,     0,     0,     0,   137,   108,    96,     0,    40,
      38,    40,    95,    92,    93,    44,   307,   306,     0,     0,
     150,   130,     0,   119,   118,   143,   115,   114,   116,   126,
     122,     0,   143,     0,     0,   290,   262,   265,    34,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   263,    52,     0,     0,   303,     0,
       0,   242,     0,     0,     0,     0,     0,     0,     0,   244,
       0,   136,   166,   173,   174,   175,   168,   170,   176,   169,
     189,   177,   178,   179,   180,   172,   167,   182,   183,     0,
     324,     0,     0,   104,     0,     0,   107,     0,    98,    99,
       0,    36,    41,    24,     0,    22,   129,   134,   132,   159,
     288,   158,     0,   142,   144,   149,   158,   153,   156,   152,
       0,   120,   289,   291,   264,   164,     0,     0,    49,     0,
       0,     0,     0,    54,    56,    57,   303,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   185,     0,   184,
       0,     0,     0,     0,     0,   186,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,     0,
     110,   109,    97,     0,     0,    20,     0,     0,   137,   133,
       0,   286,     0,   287,   165,   113,   117,     0,   148,   147,
     146,   290,     0,     0,     0,   295,     0,     0,   297,   301,
     292,     0,     0,    75,    69,     0,    71,    81,    72,    59,
       0,    66,    67,     0,    63,    64,    70,    73,    78,    68,
      60,    83,     0,     0,    48,     0,    51,   221,     0,   243,
     245,     0,     0,     0,     0,     0,     0,     0,   208,     0,
       0,     0,   181,   171,   200,   201,     0,   196,     0,     0,
       0,   187,     0,   199,   198,   214,   215,   216,   217,   218,
     219,   220,   191,   190,   193,   192,   194,   195,     0,    35,
     325,     0,     0,    39,     0,    23,   303,   135,   267,   269,
       0,   271,   284,   270,   139,   160,   285,   145,   121,   157,
     154,   155,   298,     0,     0,   300,     0,   293,     0,    47,
       0,     0,    65,     0,     0,     0,    74,     0,    87,    88,
       0,    58,    82,    84,     0,     0,    55,     0,   212,     0,
       0,     0,     0,   206,     0,     0,     0,   239,     0,   197,
       0,     0,     0,   188,   240,   103,   100,    25,     0,     0,
     319,   311,   317,   315,   318,   313,     0,     0,     0,   283,
     275,   281,     0,   128,   296,   301,   299,    50,     0,     0,
       0,     0,     0,    86,    89,    85,     0,    91,   222,     0,
       0,   210,     0,   209,     0,   213,   241,     0,     0,   204,
     202,   284,     0,   314,   316,   312,     0,   268,   285,     0,
     294,    62,    80,     0,    76,    61,    77,    90,   223,   224,
     207,   211,   205,   203,   272,   308,   320,     0,   141,     0,
       0,     0,     0,     0,   138,    79,     0,   321,   309,   282,
     140,   242,     0,   310
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -459,  -459,  -459,   546,  -459,   595,  -459,   282,  -459,   184,
    -459,  -459,  -459,  -459,   288,   -87,   465,  -459,  -459,  -459,
     244,  -459,   242,  -459,   148,  -459,  -459,  -459,  -459,   157,
    -459,  -459,   -49,  -459,  -459,  -459,  -459,  -459,  -459,   482,
    -459,  -459,   392,  -197,   -78,  -459,   114,   -75,   -48,  -459,
    -459,   -81,   354,  -459,  -459,  -459,  -141,  -459,  -459,    13,
    -459,   284,  -459,  -459,   -34,  -281,  -459,   -16,   292,  -149,
    -200,  -459,  -459,  -459,  -459,  -459,  -459,   350,  -459,  -459,
    -459,  -459,  -459,  -146,  -459,  -459,  -459,  -459,  -459,    58,
     -63,  -459,   -92,  -459,  -459,   -94,  -459,  -459,  -459,  -459,
    -459,  -458,    98,  -459,  -459,  -459,     0,  -459,  -459,   101,
     384,  -459,   294,  -459,   374,  -459,   137,  -459,  -459,  -459,
     544,  -459,  -459,  -459,  -459,  -346
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    21,    22,    73,   254,   255,    23,    66,
      24,   143,    25,    26,    90,   159,   251,    27,    28,    29,
      85,   282,   283,   284,   381,   466,   462,   471,   472,   473,
     285,    30,    94,    31,   248,   249,    32,    33,    34,   153,
      35,   155,   156,    36,   175,   176,   177,    78,   114,   115,
     180,    79,   172,   257,   338,   339,   150,   513,   574,   118,
     263,   264,   350,   108,   185,   258,   130,   131,   259,   260,
     222,   223,   224,   225,   226,   227,   228,   294,   229,   230,
     231,   232,   233,   202,   203,   204,   234,   235,   236,   237,
     238,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     437,   438,   439,   440,   441,    51,   442,   146,   509,   510,
     511,   344,   271,   272,   273,   359,   457,    37,    38,    63,
      64,   443,   506,   578,    71,   241
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     221,   110,    41,   160,   160,    44,    97,    98,    99,   161,
      52,   278,    54,   170,   246,   458,   297,   401,   299,   132,
      40,   389,   120,   121,   122,   123,   581,   573,   341,   310,
      75,   117,   265,   178,   267,   269,   178,   475,   171,   182,
      39,   274,   310,   106,   149,    95,   341,   454,    88,   547,
      91,   302,   207,    45,    55,   455,   456,   302,   100,   160,
     302,   183,    46,    56,   239,    40,   293,   480,   303,   467,
     324,   301,   325,   411,   303,   455,   456,   303,   243,   353,
     302,   184,   328,   208,    96,   325,   147,   148,   566,   386,
     412,   355,    47,    57,   158,   330,   297,   303,   163,   164,
     107,   165,   327,   468,   406,   328,   407,   477,   515,   124,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   125,   275,   403,   526,   492,
     262,   211,   121,   122,   123,   211,   121,   122,   123,   209,
     408,   302,   393,   394,   392,   300,   245,   558,   469,   111,
     356,    77,   508,   404,   405,    76,   111,    42,   303,   279,
     302,   487,   481,   340,   357,   470,   340,   409,   396,   302,
     342,   126,   127,   128,   212,   213,   214,   303,   212,   213,
     214,   178,    43,   280,   346,   112,   303,   397,   261,   534,
     109,   358,   112,   398,   390,   266,   302,   444,   265,   219,
     436,    67,    68,   449,   450,   451,   276,   129,   489,   538,
     387,   354,    58,   303,   391,   215,   166,   281,   124,   215,
      48,   572,   124,   113,   482,   292,   116,   345,    53,   302,
     113,   428,   351,    59,   125,    75,    50,   348,   125,   498,
     287,   242,   288,   397,   268,   292,   303,   484,   485,   483,
     499,   216,    62,    60,    49,   216,    65,   211,   121,   122,
     123,    61,   302,   349,   335,   217,   132,   336,   568,   217,
     160,   132,   302,    69,   533,   459,   302,    70,   560,   303,
     126,   127,   128,   432,   126,   127,   128,   499,   536,   303,
      86,    87,   500,   303,   211,   121,   122,   123,    80,   501,
     212,   213,   214,   218,   219,   502,   503,   218,   219,   570,
      72,   220,    75,   431,    81,   220,   129,    82,   434,    84,
     129,    89,   504,    83,   486,   384,   429,   505,   385,   500,
     529,    92,   531,   532,    93,   491,   501,   212,   213,   214,
     101,   215,   502,   503,   124,   495,   102,   103,   189,   211,
     121,   122,   123,   497,   517,   105,   189,   328,   571,   504,
     125,   310,   527,  -320,   505,   328,   119,   211,   121,   122,
     123,   190,   191,   192,   193,   194,   195,   216,   215,   528,
     142,   124,   340,   499,   540,   561,   552,   340,   144,   553,
     145,   217,   295,   213,   214,   557,   149,   125,   328,   321,
     322,   323,   324,   151,   325,   152,   126,   127,   128,   154,
     563,   213,   214,   340,   216,   537,   579,   157,   121,   328,
     162,    76,   577,   168,   580,   500,   169,   123,   217,   218,
     219,   171,   501,   215,   173,   174,   124,   220,   502,   503,
     304,   179,   129,   126,   127,   128,   186,   181,   187,  -273,
     188,   215,   125,   205,   124,   504,   189,   206,   240,  -320,
     505,   244,   247,   250,   253,   256,   218,   219,   116,   296,
     125,   363,   270,   277,   220,    15,   289,   305,   286,   129,
     326,   290,   291,   217,   364,   298,   329,   296,   332,   365,
     366,   367,   368,   369,   333,   370,   334,   337,   126,   127,
     128,   217,   340,   371,   347,   352,   361,   362,   382,   383,
      75,   399,   430,   402,   410,   446,   126,   127,   128,   452,
     453,   218,   219,   460,   461,   463,   306,   464,   465,   220,
     474,   372,   478,   479,   129,   408,   490,   302,   325,   218,
     219,   493,   494,   496,   512,  -274,   307,   220,   373,   507,
     374,   375,   129,   308,   309,   514,   516,   518,   519,   520,
     521,   310,   311,   522,   524,   376,   535,   539,   523,   377,
    -322,   378,   541,   543,   542,   544,   545,     1,   546,   548,
     551,   379,   549,   554,   555,     2,   556,   312,   313,   314,
     315,   316,     3,   559,   317,   318,     4,   319,   320,   321,
     322,   323,   324,   569,   325,     1,   562,     5,   567,   576,
       6,     7,   575,     2,   288,   380,   104,   583,   435,    74,
       3,   433,     8,     9,     4,   305,   252,   476,   530,   525,
     210,   447,   445,    10,   582,     5,    11,   331,     6,     7,
     565,   388,   564,   395,   343,   448,   360,   167,   305,     0,
       8,     9,   550,     0,     0,     0,     0,     0,     0,    12,
       0,    10,     0,    13,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,     0,     0,     0,    14,     0,
       0,     0,     0,     0,    15,     0,     0,    12,   488,     0,
       0,    13,     0,     0,   400,     0,     0,   306,     0,     0,
       0,     0,   309,     0,   305,     0,    14,     0,     0,   310,
     311,     0,    15,     0,     0,     0,     0,   400,     0,   305,
       0,     0,     0,     0,     0,   309,     0,    16,    17,    18,
       0,     0,   310,   311,     0,   312,   313,   314,   315,   316,
       0,     0,   317,   318,     0,   319,   320,   321,   322,   323,
     324,     0,   325,  -323,     0,    16,    17,    18,   312,   313,
     314,   315,   316,     0,     0,   317,   318,     0,   319,   320,
     321,   322,   323,   324,     0,   325,     0,     0,     0,     0,
       0,   309,     0,     0,     0,     0,     0,     0,   310,  -323,
       0,     0,     0,     0,     0,     0,   309,     0,     0,     0,
       0,     0,     0,   310,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -323,  -323,  -323,   315,   316,     0,
       0,   317,   318,     0,   319,   320,   321,   322,   323,   324,
       0,   325,  -323,  -323,     0,     0,  -323,  -323,     0,   319,
     320,   321,   322,   323,   324,     0,   325,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201
};

static const yytype_int16 yycheck[] =
{
     149,    76,     2,    95,    96,     5,    55,    56,    57,    96,
      10,   208,    12,   107,   155,   361,   216,   298,   218,    82,
       3,     3,     3,     4,     5,     6,     3,    51,     3,   138,
      58,    79,   181,   114,   183,   184,   117,   383,    12,   117,
      26,   187,   138,    69,    85,    96,     3,   132,    48,   507,
      50,   117,    96,    73,    73,   160,   161,   117,    58,   151,
     117,    55,    82,    82,   151,     3,   215,   127,   134,    27,
     179,   220,   181,   106,   134,   160,   161,   134,   153,    55,
     117,    75,   187,   127,   135,   181,    86,    87,   546,   286,
     123,    63,   112,   112,    94,   244,   296,   134,    98,    99,
     126,   101,   184,    61,   304,   187,   306,   388,   454,    90,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   106,   189,   184,   474,   410,
     178,     3,     4,     5,     6,     3,     4,     5,     6,   183,
     103,   117,   291,   292,   290,   220,   187,   184,   106,     9,
     122,    37,   127,   302,   303,   183,     9,     3,   134,     3,
     117,   182,   110,   187,   136,   123,   187,   130,    94,   117,
     127,   152,   153,   154,    46,    47,    48,   134,    46,    47,
      48,   262,     3,    27,   262,    45,   134,   113,   175,   110,
      76,   163,    45,   119,   176,   182,   117,   338,   347,   176,
     183,    17,    18,   352,   353,   354,   206,   188,   408,   490,
     184,   187,    19,   134,   289,    87,   102,    61,    90,    87,
      96,   567,    90,    83,    94,   113,    79,   261,    82,   117,
      83,   325,   266,    40,   106,    58,   100,    92,   106,   436,
     183,    64,   185,   113,   116,   113,   134,   396,   397,   119,
      25,   123,     3,    60,    96,   123,   156,     3,     4,     5,
       6,    68,   117,   118,   184,   137,   329,   187,   549,   137,
     362,   334,   117,     0,   119,   362,   117,   186,   119,   134,
     152,   153,   154,   332,   152,   153,   154,    25,   488,   134,
      46,    47,    67,   134,     3,     4,     5,     6,     3,    74,
      46,    47,    48,   175,   176,    80,    81,   175,   176,    84,
     114,   183,    58,   329,   185,   183,   188,   183,   334,   129,
     188,     3,    97,    96,   399,   184,   326,   102,   187,    67,
     479,   125,   481,   482,   129,   410,    74,    46,    47,    48,
      82,    87,    80,    81,    90,   184,   127,   187,   187,     3,
       4,     5,     6,   184,   184,    99,   187,   187,   133,    97,
     106,   138,   184,   101,   102,   187,     3,     3,     4,     5,
       6,   140,   141,   142,   143,   144,   145,   123,    87,   184,
       4,    90,   187,    25,   184,   534,   184,   187,   123,   187,
       3,   137,    46,    47,    48,   184,    85,   106,   187,   176,
     177,   178,   179,    95,   181,   183,   152,   153,   154,     3,
     184,    47,    48,   187,   123,   490,   184,    46,     4,   187,
       3,   183,   571,   183,   573,    67,   183,     6,   137,   175,
     176,    12,    74,    87,   184,   184,    90,   183,    80,    81,
      17,   116,   188,   152,   153,   154,     4,   128,     4,   187,
     184,    87,   106,    46,    90,    97,   187,   133,     3,   101,
     102,   164,    93,   114,     3,   184,   175,   176,    79,   123,
     106,    11,   120,     3,   183,   114,   183,    54,   127,   188,
     100,   183,   183,   137,    24,   181,   183,   123,    39,    29,
      30,    31,    32,    33,    49,    35,   183,    96,   152,   153,
     154,   137,   187,    43,   187,    55,   183,    95,   122,   183,
      58,   183,     3,   184,   183,     3,   152,   153,   154,   163,
     122,   175,   176,   183,   183,   183,   103,   183,   183,   183,
     183,    71,   184,    96,   188,   103,   183,   117,   181,   175,
     176,   106,   182,     3,    72,   187,   123,   183,    88,   187,
      90,    91,   188,   130,   131,    63,   162,     6,     6,     6,
       6,   138,   139,     6,   106,   105,   184,   184,   122,   109,
       0,   111,   184,    80,   101,    80,    80,     7,   101,     3,
     184,   121,   128,   184,   184,    15,   184,   164,   165,   166,
     167,   168,    22,   184,   171,   172,    26,   174,   175,   176,
     177,   178,   179,     6,   181,     7,   184,    37,   183,   183,
      40,    41,   184,    15,   185,   155,    70,   184,   336,    24,
      22,   333,    52,    53,    26,    54,   161,   385,   480,   472,
     148,   347,   340,    63,   576,    37,    66,   245,    40,    41,
     542,   287,   541,   293,   260,   351,   272,   103,    54,    -1,
      52,    53,   515,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    63,    -1,    93,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,    -1,    -1,    89,   117,    -1,
      -1,    93,    -1,    -1,   123,    -1,    -1,   103,    -1,    -1,
      -1,    -1,   131,    -1,    54,    -1,   108,    -1,    -1,   138,
     139,    -1,   114,    -1,    -1,    -1,    -1,   123,    -1,    54,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   157,   158,   159,
      -1,    -1,   138,   139,    -1,   164,   165,   166,   167,   168,
      -1,    -1,   171,   172,    -1,   174,   175,   176,   177,   178,
     179,    -1,   181,   103,    -1,   157,   158,   159,   164,   165,
     166,   167,   168,    -1,    -1,   171,   172,    -1,   174,   175,
     176,   177,   178,   179,    -1,   181,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,   138,   139,
      -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   164,   165,   166,   167,   168,    -1,
      -1,   171,   172,    -1,   174,   175,   176,   177,   178,   179,
      -1,   181,   167,   168,    -1,    -1,   171,   172,    -1,   174,
     175,   176,   177,   178,   179,    -1,   181,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     7,    15,    22,    26,    37,    40,    41,    52,    53,
      63,    66,    89,    93,   108,   114,   157,   158,   159,   190,
     191,   192,   193,   197,   199,   201,   202,   206,   207,   208,
     220,   222,   225,   226,   227,   229,   232,   306,   307,    26,
       3,   295,     3,     3,   295,    73,    82,   112,    96,    96,
     100,   294,   295,    82,   295,    73,    82,   112,    19,    40,
      60,    68,     3,   308,   309,   156,   198,   198,   198,     0,
     186,   313,   114,   194,   194,    58,   183,   235,   236,   240,
       3,   185,   183,    96,   129,   209,   209,   209,   295,     3,
     203,   295,   125,   129,   221,    96,   135,   221,   221,   221,
     295,    82,   127,   187,   192,    99,    69,   126,   252,   235,
     236,     9,    45,    83,   237,   238,    79,   237,   248,     3,
       3,     4,     5,     6,    90,   106,   152,   153,   154,   188,
     255,   256,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,     4,   200,   123,     3,   296,   295,   295,    85,
     245,    95,   183,   228,     3,   230,   231,    46,   295,   204,
     281,   204,     3,   295,   295,   295,   235,   309,   183,   183,
     284,    12,   241,   184,   184,   233,   234,   235,   240,   116,
     239,   128,   233,    55,    75,   253,     4,     4,   184,   187,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   272,   273,   274,    46,   133,    96,   127,   183,
     228,     3,    46,    47,    48,    87,   123,   137,   175,   176,
     183,   258,   259,   260,   261,   262,   263,   264,   265,   267,
     268,   269,   270,   271,   275,   276,   277,   278,   279,   204,
       3,   314,    64,   236,   164,   187,   245,    93,   223,   224,
     114,   205,   205,     3,   195,   196,   184,   242,   254,   257,
     258,   248,   237,   249,   250,   258,   248,   258,   116,   258,
     120,   301,   302,   303,   272,   279,   295,     3,   232,     3,
      27,    61,   210,   211,   212,   219,   127,   183,   185,   183,
     183,   183,   113,   258,   266,    46,   123,   259,   181,   259,
     236,   258,   117,   134,    17,    54,   103,   123,   130,   131,
     138,   139,   164,   165,   166,   167,   168,   171,   172,   174,
     175,   176,   177,   178,   179,   181,   100,   184,   187,   183,
     258,   231,    39,    49,   183,   184,   187,    96,   243,   244,
     187,     3,   127,   299,   300,   253,   233,   187,    92,   118,
     251,   253,    55,    55,   187,    63,   122,   136,   163,   304,
     303,   183,    95,    11,    24,    29,    30,    31,    32,    33,
      35,    43,    71,    88,    90,    91,   105,   109,   111,   121,
     155,   213,   122,   183,   184,   187,   232,   184,   241,     3,
     176,   236,   272,   258,   258,   266,    94,   113,   119,   183,
     123,   254,   184,   184,   258,   258,   259,   259,   103,   130,
     183,   106,   123,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   284,   295,
       3,   256,   221,   203,   256,   196,   183,   289,   290,   291,
     292,   293,   295,   310,   245,   257,     3,   250,   301,   258,
     258,   258,   163,   122,   132,   160,   161,   305,   314,   204,
     183,   183,   215,   183,   183,   183,   214,    27,    61,   106,
     123,   216,   217,   218,   183,   314,   211,   254,   184,    96,
     127,   110,    94,   119,   258,   258,   236,   182,   117,   259,
     183,   236,   254,   106,   182,   184,     3,   184,   232,    25,
      67,    74,    80,    81,    97,   102,   311,   187,   127,   297,
     298,   299,    72,   246,    63,   314,   162,   184,     6,     6,
       6,     6,     6,   122,   106,   218,   314,   184,   184,   258,
     213,   258,   258,   119,   110,   184,   259,   236,   254,   184,
     184,   184,   101,    80,    80,    80,   101,   290,     3,   128,
     305,   184,   184,   187,   184,   184,   184,   184,   184,   184,
     119,   258,   184,   184,   298,   291,   290,   183,   254,     6,
      84,   133,   314,    51,   247,   184,   183,   258,   312,   184,
     258,     3,   278,   184
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   189,   190,   191,   191,   192,   192,   192,   192,   192,
     193,   193,   193,   193,   193,   193,   193,   193,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   197,   198,
     198,   199,   200,   201,   201,   202,   202,   203,   204,   205,
     205,   206,   207,   207,   207,   207,   207,   208,   208,   208,
     208,   208,   209,   209,   210,   210,   211,   211,   212,   213,
     213,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   215,
     215,   215,   216,   216,   217,   217,   218,   218,   218,   218,
     219,   219,   220,   220,   220,   220,   221,   221,   222,   223,
     224,   225,   226,   227,   227,   228,   228,   229,   230,   230,
     231,   232,   232,   232,   233,   233,   234,   234,   235,   235,
     236,   236,   237,   238,   238,   238,   239,   239,   240,   240,
     241,   241,   242,   243,   243,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   251,   251,   251,
     252,   252,   253,   253,   253,   253,   253,   253,   253,   254,
     254,   255,   255,   256,   256,   257,   258,   258,   258,   258,
     258,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   260,   260,   261,   261,   261,   261,   261,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   264,   264,   264,   264,   265,   265,   265,   265,
     266,   266,   267,   267,   268,   268,   268,   268,   268,   268,
     268,   269,   269,   270,   271,   272,   272,   272,   272,   272,
     272,   273,   273,   273,   273,   273,   273,   274,   274,   275,
     276,   277,   278,   278,   278,   278,   279,   279,   279,   279,
     279,   279,   279,   279,   280,   281,   282,   282,   283,   283,
     284,   285,   286,   287,   287,   287,   288,   289,   289,   290,
     290,   291,   291,   292,   292,   293,   294,   295,   295,   296,
     296,   297,   297,   298,   298,   299,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   304,   304,   304,   304,   305,
     305,   305,   306,   306,   307,   308,   308,   309,   310,   310,
     310,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   312,   313,   313,   314,   314
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     3,     1,     4,     2,     2,     2,     1,
       0,     4,     1,     2,     5,     7,     5,     1,     1,     3,
       0,     5,     2,     2,     4,     3,     2,     8,     7,     6,
       9,     7,     3,     0,     1,     3,     1,     1,     3,     1,
       1,     4,     4,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     4,     3,     0,     5,
       3,     0,     1,     0,     1,     2,     2,     1,     1,     2,
       5,     4,     4,     4,     3,     4,     2,     0,     5,     1,
       4,     4,     2,     8,     5,     3,     0,     5,     1,     3,
       3,     2,     2,     6,     1,     1,     1,     3,     3,     3,
       4,     6,     2,     1,     1,     1,     1,     0,     7,     4,
       1,     0,     1,     1,     0,     2,     2,     0,     4,     0,
       2,     0,     3,     0,     1,     3,     2,     1,     1,     0,
       2,     0,     2,     2,     4,     4,     2,     4,     0,     1,
       3,     1,     0,     1,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     2,     2,     2,     3,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       3,     3,     5,     6,     5,     6,     4,     6,     3,     5,
       4,     5,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     6,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     2,     1,     1,     3,     1,
       1,     1,     4,     1,     3,     2,     1,     1,     3,     1,
       0,     1,     5,     1,     0,     2,     1,     1,     0,     1,
       0,     1,     2,     3,     5,     1,     3,     1,     2,     2,
       1,     0,     1,     0,     2,     1,     3,     3,     4,     6,
       8,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       0,     1,     1,     0,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, hsql::SQLParserResult* result, yyscan_t scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, hsql::SQLParserResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* IDENTIFIER  */
#line 168 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2058 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 168 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2064 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 5: /* FLOATVAL  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2070 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 6: /* INTVAL  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2076 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 191: /* statement_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).stmt_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).stmt_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).stmt_vec));
    }
#line 2089 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 192: /* statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 2095 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 193: /* preparable_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).statement)); }
#line 2101 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 194: /* opt_hints  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2114 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 195: /* hint_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2127 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 196: /* hint  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2133 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 197: /* transaction_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).transaction_stmt)); }
#line 2139 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 199: /* prepare_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).prep_stmt)); }
#line 2145 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 200: /* prepare_target_query  */
#line 168 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2151 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 201: /* execute_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).exec_stmt)); }
#line 2157 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 202: /* import_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).import_stmt)); }
#line 2163 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 203: /* file_type  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2169 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 204: /* file_path  */
#line 168 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2175 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 205: /* opt_file_type  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2181 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 206: /* export_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).export_stmt)); }
#line 2187 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 207: /* show_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).show_stmt)); }
#line 2193 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 208: /* create_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).create_stmt)); }
#line 2199 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 209: /* opt_not_exists  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2205 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 210: /* table_elem_commalist  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).table_element_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_element_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_element_vec));
    }
#line 2218 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 211: /* table_elem  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_element_t)); }
#line 2224 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 212: /* column_def  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).column_t)); }
#line 2230 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 213: /* column_type  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2236 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 214: /* opt_time_precision  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2242 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 215: /* opt_decimal_specification  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).ival_pair)); }
#line 2248 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 216: /* opt_column_constraints  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2254 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 217: /* column_constraint_set  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2260 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 218: /* column_constraint  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2266 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 219: /* table_constraint  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table_constraint_t)); }
#line 2272 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 220: /* drop_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_stmt)); }
#line 2278 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 221: /* opt_exists  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2284 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 222: /* alter_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_stmt)); }
#line 2290 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 223: /* alter_action  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alter_action_t)); }
#line 2296 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 224: /* drop_action  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).drop_action_t)); }
#line 2302 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 225: /* delete_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2308 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 226: /* truncate_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).delete_stmt)); }
#line 2314 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 227: /* insert_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).insert_stmt)); }
#line 2320 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 228: /* opt_column_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2333 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 229: /* update_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_stmt)); }
#line 2339 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 230: /* update_clause_commalist  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).update_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).update_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).update_vec));
    }
#line 2352 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 231: /* update_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).update_t)); }
#line 2358 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 232: /* select_statement  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2364 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 233: /* select_within_set_operation  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2370 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 234: /* select_within_set_operation_no_parentheses  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2376 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 235: /* select_with_paren  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2382 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 236: /* select_no_paren  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2388 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 237: /* set_operator  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2394 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 238: /* set_type  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).set_operator_t)); }
#line 2400 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 239: /* opt_all  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2406 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 240: /* select_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).select_stmt)); }
#line 2412 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 241: /* opt_distinct  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2418 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 242: /* select_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2431 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 243: /* opt_from_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2437 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 244: /* from_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2443 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 245: /* opt_where  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2449 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 246: /* opt_group  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).group_t)); }
#line 2455 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 247: /* opt_having  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2461 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 248: /* opt_order  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2474 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 249: /* order_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).order_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).order_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).order_vec));
    }
#line 2487 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 250: /* order_desc  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).order)); }
#line 2493 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 251: /* opt_order_type  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2499 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 252: /* opt_top  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2505 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 253: /* opt_limit  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).limit)); }
#line 2511 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 254: /* expr_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2524 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 255: /* opt_literal_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2537 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 256: /* literal_list  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).expr_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).expr_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).expr_vec));
    }
#line 2550 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 257: /* expr_alias  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2556 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 258: /* expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2562 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 259: /* operand  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2568 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 260: /* scalar_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2574 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 261: /* unary_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2580 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 262: /* binary_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2586 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 263: /* logic_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2592 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 264: /* in_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2598 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 265: /* case_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2604 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 266: /* case_list  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2610 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 267: /* exists_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2616 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 268: /* comp_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2622 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 269: /* function_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2628 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 270: /* extract_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2634 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 271: /* cast_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2640 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 272: /* datetime_field  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2646 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 273: /* datetime_field_plural  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2652 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 274: /* duration_field  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2658 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 275: /* array_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2664 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 276: /* array_index  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2670 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 277: /* between_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2676 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 278: /* column_name  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2682 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 279: /* literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2688 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 280: /* identifier_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2694 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 281: /* string_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2700 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 282: /* bool_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2706 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 283: /* num_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2712 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 284: /* int_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2718 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 285: /* null_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2724 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 286: /* date_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2730 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 287: /* interval_literal  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2736 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 288: /* param_expr  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2742 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 289: /* table_ref  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2748 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 290: /* table_ref_atomic  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2754 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 291: /* nonjoin_table_ref_atomic  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2760 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 292: /* table_ref_commalist  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).table_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).table_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).table_vec));
    }
#line 2773 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 293: /* table_ref_name  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2779 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 294: /* table_ref_name_no_alias  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2785 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 295: /* table_name  */
#line 167 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).table_name).name) ); free( (((*yyvaluep).table_name).schema) ); }
#line 2791 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 296: /* opt_index_name  */
#line 168 "bison_parser.y" /* yacc.c:1257  */
      { free( (((*yyvaluep).sval)) ); }
#line 2797 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 297: /* table_alias  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2803 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 298: /* opt_table_alias  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2809 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 299: /* alias  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2815 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 300: /* opt_alias  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).alias_t)); }
#line 2821 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 301: /* opt_locking_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_clause_vec)); }
#line 2827 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 302: /* opt_locking_clause_list  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_clause_vec)); }
#line 2833 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 303: /* locking_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).locking_t)); }
#line 2839 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 304: /* row_lock_mode  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2845 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 305: /* opt_row_lock_policy  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2851 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 306: /* opt_with_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2857 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 307: /* with_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2863 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 308: /* with_description_list  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_vec)); }
#line 2869 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 309: /* with_description  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).with_description_t)); }
#line 2875 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 310: /* join_clause  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).table)); }
#line 2881 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 311: /* opt_join_type  */
#line 166 "bison_parser.y" /* yacc.c:1257  */
      { }
#line 2887 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 312: /* join_condition  */
#line 177 "bison_parser.y" /* yacc.c:1257  */
      { delete (((*yyvaluep).expr)); }
#line 2893 "bison_parser.tab.c" /* yacc.c:1257  */
        break;

    case 314: /* ident_commalist  */
#line 169 "bison_parser.y" /* yacc.c:1257  */
      {
      if ((((*yyvaluep).str_vec)) != nullptr) {
        for (auto ptr : *(((*yyvaluep).str_vec))) {
          delete ptr;
        }
      }
      delete (((*yyvaluep).str_vec));
    }
#line 2906 "bison_parser.tab.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (hsql::SQLParserResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 77 "bison_parser.y" /* yacc.c:1429  */
{
  // Initialize
  yylloc.first_column = 0;
  yylloc.last_column = 0;
  yylloc.first_line = 0;
  yylloc.last_line = 0;
  yylloc.total_column = 0;
  yylloc.string_length = 0;
}

#line 3025 "bison_parser.tab.c" /* yacc.c:1429  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 304 "bison_parser.y" /* yacc.c:1646  */
    {
  for (SQLStatement* stmt : *(yyvsp[-1].stmt_vec)) {
    // Transfers ownership of the statement.
    result->addStatement(stmt);
  }

  unsigned param_id = 0;
  for (void* param : yyloc.param_list) {
    if (param != nullptr) {
      Expr* expr = (Expr*)param;
      expr->ival = param_id;
      result->addParameter(expr);
      ++param_id;
    }
  }
    delete (yyvsp[-1].stmt_vec);
  }
#line 3230 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 323 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyval.stmt_vec) = new std::vector<SQLStatement*>();
  (yyval.stmt_vec)->push_back((yyvsp[0].statement));
}
#line 3241 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 329 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[0].statement)->stringLength = yylloc.string_length;
  yylloc.string_length = 0;
  (yyvsp[-2].stmt_vec)->push_back((yyvsp[0].statement));
  (yyval.stmt_vec) = (yyvsp[-2].stmt_vec);
}
#line 3252 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 336 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].prep_stmt);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3261 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 340 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.statement) = (yyvsp[-1].statement);
  (yyval.statement)->hints = (yyvsp[0].expr_vec);
}
#line 3270 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 344 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].show_stmt); }
#line 3276 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 345 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].import_stmt); }
#line 3282 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 346 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].export_stmt); }
#line 3288 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 348 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].select_stmt); }
#line 3294 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 349 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].create_stmt); }
#line 3300 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 350 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].insert_stmt); }
#line 3306 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 351 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3312 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 352 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].delete_stmt); }
#line 3318 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 353 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].update_stmt); }
#line 3324 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 354 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].drop_stmt); }
#line 3330 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 355 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].alter_stmt); }
#line 3336 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 356 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].exec_stmt); }
#line 3342 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 357 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.statement) = (yyvsp[0].transaction_stmt); }
#line 3348 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 363 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[-1].expr_vec); }
#line 3354 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 364 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 3360 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 366 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 3369 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 370 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 3378 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 375 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[0].sval);
}
#line 3387 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 379 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::make(kExprHint);
  (yyval.expr)->name = (yyvsp[-3].sval);
  (yyval.expr)->exprList = (yyvsp[-1].expr_vec);
}
#line 3397 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 389 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kBeginTransaction); }
#line 3403 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 390 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kRollbackTransaction); }
#line 3409 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 391 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.transaction_stmt) = new TransactionStatement(kCommitTransaction); }
#line 3415 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 399 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.prep_stmt) = new PrepareStatement();
  (yyval.prep_stmt)->name = (yyvsp[-2].sval);
  (yyval.prep_stmt)->query = (yyvsp[0].sval);
}
#line 3425 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 407 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[0].sval);
}
#line 3434 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 411 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.exec_stmt) = new ExecuteStatement();
  (yyval.exec_stmt)->name = (yyvsp[-3].sval);
  (yyval.exec_stmt)->parameters = (yyvsp[-1].expr_vec);
}
#line 3444 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 422 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[-4].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-2].sval);
  (yyval.import_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3455 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 428 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.import_stmt) = new ImportStatement((yyvsp[0].import_type_t));
  (yyval.import_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.import_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.import_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3466 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 435 "bison_parser.y" /* yacc.c:1646  */
    {
  if (strcasecmp((yyvsp[0].sval), "csv") == 0) {
    (yyval.import_type_t) = kImportCSV;
  } else if (strcasecmp((yyvsp[0].sval), "tbl") == 0) {
    (yyval.import_type_t) = kImportTbl;
  } else if (strcasecmp((yyvsp[0].sval), "binary") == 0 || strcasecmp((yyvsp[0].sval), "bin") == 0) {
    (yyval.import_type_t) = kImportBinary;
  } else {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[0].sval));
}
#line 3485 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 450 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.sval) = strdup((yyvsp[0].expr)->name);
  delete (yyvsp[0].expr);
}
#line 3494 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 455 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = (yyvsp[0].import_type_t); }
#line 3500 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 456 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.import_type_t) = kImportAuto; }
#line 3506 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 462 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.export_stmt) = new ExportStatement((yyvsp[0].import_type_t));
  (yyval.export_stmt)->filePath = (yyvsp[-1].sval);
  (yyval.export_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.export_stmt)->tableName = (yyvsp[-3].table_name).name;
}
#line 3517 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 474 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.show_stmt) = new ShowStatement(kShowTables); }
#line 3523 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 475 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.show_stmt) = new ShowStatement(kShowDatabases); }
#line 3529 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 476 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowCreateTables);
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3538 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 480 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3548 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 485 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.show_stmt) = new ShowStatement(kShowColumns);
  (yyval.show_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.show_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3558 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 496 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTableFromTbl);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-5].bval);
  (yyval.create_stmt)->schema = (yyvsp[-4].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-4].table_name).name;
  if (strcasecmp((yyvsp[-2].sval), "tbl") != 0) {
    free((yyvsp[-2].sval));
    yyerror(&yyloc, result, scanner, "File type is unknown.");
    YYERROR;
  }
  free((yyvsp[-2].sval));
  (yyval.create_stmt)->filePath = (yyvsp[0].sval);
}
#line 3576 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 509 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->setColumnDefsAndConstraints((yyvsp[-1].table_element_vec));
  delete (yyvsp[-1].table_element_vec);
  if (result->errorMsg()) {
    delete (yyval.create_stmt);
    YYERROR;
  }
}
#line 3593 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 521 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateTable);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-3].bval);
  (yyval.create_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3605 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 528 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateIndex);
  (yyval.create_stmt)->indexName = (yyvsp[-5].sval);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-6].bval);
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->indexColumns = (yyvsp[-1].str_vec);
}
#line 3617 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 535 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.create_stmt) = new CreateStatement(kCreateView);
  (yyval.create_stmt)->ifNotExists = (yyvsp[-4].bval);
  (yyval.create_stmt)->schema = (yyvsp[-3].table_name).schema;
  (yyval.create_stmt)->tableName = (yyvsp[-3].table_name).name;
  (yyval.create_stmt)->viewColumns = (yyvsp[-2].str_vec);
  (yyval.create_stmt)->select = (yyvsp[0].select_stmt);
}
#line 3630 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 544 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3636 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 545 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3642 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 547 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_element_vec) = new std::vector<TableElement*>();
  (yyval.table_element_vec)->push_back((yyvsp[0].table_element_t));
}
#line 3651 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 551 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_element_vec)->push_back((yyvsp[0].table_element_t));
  (yyval.table_element_vec) = (yyvsp[-2].table_element_vec);
}
#line 3660 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 556 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].column_t); }
#line 3666 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 557 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_element_t) = (yyvsp[0].table_constraint_t); }
#line 3672 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 559 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_t) = new ColumnDefinition((yyvsp[-2].sval), (yyvsp[-1].column_type_t), (yyvsp[0].column_constraint_set));
  if (!(yyval.column_t)->trySetNullableExplicit()) {
    yyerror(&yyloc, result, scanner, ("Conflicting nullability constraints for " + std::string{(yyvsp[-2].sval)}).c_str());
  }
}
#line 3683 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 566 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::BIGINT}; }
#line 3689 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 567 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::BOOLEAN}; }
#line 3695 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 568 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::CHAR, (yyvsp[-1].ival)}; }
#line 3701 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 569 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3707 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 570 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATE}; }
#line 3713 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 571 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3719 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 572 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_type_t) = ColumnType{DataType::DECIMAL, 0, (yyvsp[0].ival_pair)->first, (yyvsp[0].ival_pair)->second};
  delete (yyvsp[0].ival_pair);
}
#line 3728 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 576 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DOUBLE}; }
#line 3734 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 577 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::FLOAT}; }
#line 3740 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 578 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3746 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 579 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::INT}; }
#line 3752 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 580 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::LONG}; }
#line 3758 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 581 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::REAL}; }
#line 3764 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 582 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::SMALLINT}; }
#line 3770 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 583 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TEXT}; }
#line 3776 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 584 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::TIME, 0, (yyvsp[0].ival)}; }
#line 3782 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 585 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::DATETIME}; }
#line 3788 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 586 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_type_t) = ColumnType{DataType::VARCHAR, (yyvsp[-1].ival)}; }
#line 3794 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 588 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival); }
#line 3800 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 589 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3806 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 591 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-3].ival), (yyvsp[-1].ival)}; }
#line 3812 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 592 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{(yyvsp[-1].ival), 0}; }
#line 3818 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 593 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.ival_pair) = new std::pair<int64_t, int64_t>{0, 0}; }
#line 3824 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 595 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_set) = (yyvsp[0].column_constraint_set); }
#line 3830 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 596 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_set) = new std::set<ConstraintType>(); }
#line 3836 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 598 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.column_constraint_set) = new std::set<ConstraintType>();
  (yyval.column_constraint_set)->insert((yyvsp[0].column_constraint_t));
}
#line 3845 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 602 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].column_constraint_set)->insert((yyvsp[0].column_constraint_t));
  (yyval.column_constraint_set) = (yyvsp[-1].column_constraint_set);
}
#line 3854 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 607 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::PrimaryKey; }
#line 3860 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 608 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Unique; }
#line 3866 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 609 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::Null; }
#line 3872 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 610 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.column_constraint_t) = ConstraintType::NotNull; }
#line 3878 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 612 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::PrimaryKey, (yyvsp[-1].str_vec)); }
#line 3884 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 613 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table_constraint_t) = new TableConstraint(ConstraintType::Unique, (yyvsp[-1].str_vec)); }
#line 3890 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 621 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropTable);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3901 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 627 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropView);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.drop_stmt)->name = (yyvsp[0].table_name).name;
}
#line 3912 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 633 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropPreparedStatement);
  (yyval.drop_stmt)->ifExists = false;
  (yyval.drop_stmt)->name = (yyvsp[0].sval);
}
#line 3922 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 639 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_stmt) = new DropStatement(kDropIndex);
  (yyval.drop_stmt)->ifExists = (yyvsp[-1].bval);
  (yyval.drop_stmt)->indexName = (yyvsp[0].sval);
}
#line 3932 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 645 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 3938 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 646 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 3944 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 653 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.alter_stmt) = new AlterStatement((yyvsp[-1].table_name).name, (yyvsp[0].alter_action_t));
  (yyval.alter_stmt)->ifTableExists = (yyvsp[-2].bval);
  (yyval.alter_stmt)->schema = (yyvsp[-1].table_name).schema;
}
#line 3954 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 659 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alter_action_t) = (yyvsp[0].drop_action_t); }
#line 3960 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 661 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.drop_action_t) = new DropColumnAction((yyvsp[0].sval));
  (yyval.drop_action_t)->ifExists = (yyvsp[-1].bval);
}
#line 3969 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 671 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[-1].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[-1].table_name).name;
  (yyval.delete_stmt)->expr = (yyvsp[0].expr);
}
#line 3980 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 678 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.delete_stmt) = new DeleteStatement();
  (yyval.delete_stmt)->schema = (yyvsp[0].table_name).schema;
  (yyval.delete_stmt)->tableName = (yyvsp[0].table_name).name;
}
#line 3990 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 689 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertValues);
  (yyval.insert_stmt)->schema = (yyvsp[-5].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-5].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-4].str_vec);
  (yyval.insert_stmt)->values = (yyvsp[-1].expr_vec);
}
#line 4002 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 696 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.insert_stmt) = new InsertStatement(kInsertSelect);
  (yyval.insert_stmt)->schema = (yyvsp[-2].table_name).schema;
  (yyval.insert_stmt)->tableName = (yyvsp[-2].table_name).name;
  (yyval.insert_stmt)->columns = (yyvsp[-1].str_vec);
  (yyval.insert_stmt)->select = (yyvsp[0].select_stmt);
}
#line 4014 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 704 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = (yyvsp[-1].str_vec); }
#line 4020 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 705 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.str_vec) = nullptr; }
#line 4026 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 712 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_stmt) = new UpdateStatement();
  (yyval.update_stmt)->table = (yyvsp[-3].table);
  (yyval.update_stmt)->updates = (yyvsp[-1].update_vec);
  (yyval.update_stmt)->where = (yyvsp[0].expr);
}
#line 4037 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 719 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_vec) = new std::vector<UpdateClause*>();
  (yyval.update_vec)->push_back((yyvsp[0].update_t));
}
#line 4046 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 723 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].update_vec)->push_back((yyvsp[0].update_t));
  (yyval.update_vec) = (yyvsp[-2].update_vec);
}
#line 4055 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 728 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.update_t) = new UpdateClause();
  (yyval.update_t)->column = (yyvsp[-2].sval);
  (yyval.update_t)->value = (yyvsp[0].expr);
}
#line 4065 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 738 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4074 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 742 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[0].select_stmt);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-1].with_description_vec);
}
#line 4083 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 746 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-4].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-3].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-2].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-1].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[0].limit);
  (yyval.select_stmt)->withDescriptions = (yyvsp[-5].with_description_vec);
}
#line 4099 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 760 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[0].select_stmt); }
#line 4105 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 761 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-2].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-1].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[0].select_stmt);
}
#line 4118 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 770 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4124 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 771 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.select_stmt) = (yyvsp[-1].select_stmt); }
#line 4130 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 773 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->order = (yyvsp[-2].order_vec);

  // Limit could have been set by TOP.
  if ((yyvsp[-1].limit) != nullptr) {
    delete (yyval.select_stmt)->limit;
    (yyval.select_stmt)->limit = (yyvsp[-1].limit);
  }

  if ((yyvsp[0].locking_clause_vec) != nullptr) {
    (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
  }
}
#line 4149 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 787 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = (yyvsp[-5].select_stmt);
  if ((yyval.select_stmt)->setOperations == nullptr) {
    (yyval.select_stmt)->setOperations = new std::vector<SetOperation*>();
  }
  (yyval.select_stmt)->setOperations->push_back((yyvsp[-4].set_operator_t));
  (yyval.select_stmt)->setOperations->back()->nestedSelectStatement = (yyvsp[-3].select_stmt);
  (yyval.select_stmt)->setOperations->back()->resultOrder = (yyvsp[-2].order_vec);
  (yyval.select_stmt)->setOperations->back()->resultLimit = (yyvsp[-1].limit);
  (yyval.select_stmt)->lockings = (yyvsp[0].locking_clause_vec);
}
#line 4165 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 799 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = (yyvsp[-1].set_operator_t);
  (yyval.set_operator_t)->isAll = (yyvsp[0].bval);
}
#line 4174 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 804 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetUnion;
}
#line 4183 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 808 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetIntersect;
}
#line 4192 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 812 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.set_operator_t) = new SetOperation();
  (yyval.set_operator_t)->setType = SetType::kSetExcept;
}
#line 4201 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 817 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4207 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 818 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4213 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 820 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->select_object_type = kFiled;
  (yyval.select_stmt)->limit = (yyvsp[-5].limit);
  (yyval.select_stmt)->selectDistinct = (yyvsp[-4].bval);
  (yyval.select_stmt)->selectList = (yyvsp[-3].expr_vec);
  (yyval.select_stmt)->fromTable = (yyvsp[-2].table);
  (yyval.select_stmt)->whereClause = (yyvsp[-1].expr);
  (yyval.select_stmt)->groupBy = (yyvsp[0].group_t);
}
#line 4228 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 830 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.select_stmt) = new SelectStatement();
  (yyval.select_stmt)->select_object_type = kDataBase;
}
#line 4237 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 835 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = true; }
#line 4243 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 836 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.bval) = false; }
#line 4249 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 840 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4255 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 841 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = nullptr; }
#line 4261 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 843 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.table) = (yyvsp[0].table); }
#line 4267 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 845 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4273 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 846 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4279 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 848 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.group_t) = new GroupByDescription();
  (yyval.group_t)->columns = (yyvsp[-1].expr_vec);
  (yyval.group_t)->having = (yyvsp[0].expr);
}
#line 4289 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 853 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.group_t) = nullptr; }
#line 4295 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 855 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 4301 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 856 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = nullptr; }
#line 4307 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 858 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = (yyvsp[0].order_vec); }
#line 4313 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 859 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_vec) = nullptr; }
#line 4319 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 861 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.order_vec) = new std::vector<OrderDescription*>();
  (yyval.order_vec)->push_back((yyvsp[0].order));
}
#line 4328 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 865 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].order_vec)->push_back((yyvsp[0].order));
  (yyval.order_vec) = (yyvsp[-2].order_vec);
}
#line 4337 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 870 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order) = new OrderDescription((yyvsp[0].order_type), (yyvsp[-1].expr)); }
#line 4343 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 872 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4349 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 873 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderDesc; }
#line 4355 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 874 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.order_type) = kOrderAsc; }
#line 4361 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 878 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4367 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 879 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4373 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 881 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), nullptr); }
#line 4379 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 882 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4385 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 883 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4391 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 884 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription((yyvsp[0].expr), (yyvsp[-2].expr)); }
#line 4397 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 885 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, nullptr); }
#line 4403 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 886 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = new LimitDescription(nullptr, (yyvsp[0].expr)); }
#line 4409 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 887 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.limit) = nullptr; }
#line 4415 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 892 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4424 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 896 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4433 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 901 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = (yyvsp[0].expr_vec); }
#line 4439 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 902 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr_vec) = nullptr; }
#line 4445 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 904 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr_vec) = new std::vector<Expr*>();
  (yyval.expr_vec)->push_back((yyvsp[0].expr));
}
#line 4454 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 908 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].expr_vec)->push_back((yyvsp[0].expr));
  (yyval.expr_vec) = (yyvsp[-2].expr_vec);
}
#line 4463 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 913 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = (yyvsp[-1].expr);
  if ((yyvsp[0].alias_t)) {
    (yyval.expr)->alias = strdup((yyvsp[0].alias_t)->name);
    delete (yyvsp[0].alias_t);
  }
}
#line 4475 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 923 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 4481 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 925 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeSelect((yyvsp[-1].select_stmt));
}
#line 4489 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 931 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpUnaryMinus, (yyvsp[0].expr)); }
#line 4495 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 932 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, (yyvsp[0].expr)); }
#line 4501 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 933 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-1].expr)); }
#line 4507 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 934 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpIsNull, (yyvsp[-2].expr)); }
#line 4513 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 935 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeOpUnary(kOpIsNull, (yyvsp[-3].expr))); }
#line 4519 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 937 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpMinus, (yyvsp[0].expr)); }
#line 4525 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 938 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPlus, (yyvsp[0].expr)); }
#line 4531 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 939 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpSlash, (yyvsp[0].expr)); }
#line 4537 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 940 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAsterisk, (yyvsp[0].expr)); }
#line 4543 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 941 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpPercentage, (yyvsp[0].expr)); }
#line 4549 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 942 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpCaret, (yyvsp[0].expr)); }
#line 4555 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 943 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLike, (yyvsp[0].expr)); }
#line 4561 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 944 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-3].expr), kOpNotLike, (yyvsp[0].expr)); }
#line 4567 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 945 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpILike, (yyvsp[0].expr)); }
#line 4573 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 946 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpConcat, (yyvsp[0].expr)); }
#line 4579 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 948 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpAnd, (yyvsp[0].expr)); }
#line 4585 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 949 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpOr, (yyvsp[0].expr)); }
#line 4591 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 951 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].expr_vec)); }
#line 4597 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 952 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].expr_vec))); }
#line 4603 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 953 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeInOperator((yyvsp[-4].expr), (yyvsp[-1].select_stmt)); }
#line 4609 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 954 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeInOperator((yyvsp[-5].expr), (yyvsp[-1].select_stmt))); }
#line 4615 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 958 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-2].expr), (yyvsp[-1].expr), nullptr); }
#line 4621 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 959 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4627 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 960 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-1].expr), nullptr); }
#line 4633 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 961 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCase(nullptr, (yyvsp[-3].expr), (yyvsp[-1].expr)); }
#line 4639 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 963 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCaseList(Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4645 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 964 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::caseListAppend((yyvsp[-4].expr), Expr::makeCaseListElement((yyvsp[-2].expr), (yyvsp[0].expr))); }
#line 4651 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 966 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExists((yyvsp[-1].select_stmt)); }
#line 4657 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 967 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpUnary(kOpNot, Expr::makeExists((yyvsp[-1].select_stmt))); }
#line 4663 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 969 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4669 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 970 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpEquals, (yyvsp[0].expr)); }
#line 4675 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 971 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpNotEquals, (yyvsp[0].expr)); }
#line 4681 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 972 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLess, (yyvsp[0].expr)); }
#line 4687 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 973 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreater, (yyvsp[0].expr)); }
#line 4693 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 974 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpLessEq, (yyvsp[0].expr)); }
#line 4699 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 975 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeOpBinary((yyvsp[-2].expr), kOpGreaterEq, (yyvsp[0].expr)); }
#line 4705 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 977 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-2].sval), new std::vector<Expr*>(), false); }
#line 4711 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 978 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeFunctionRef((yyvsp[-4].sval), (yyvsp[-1].expr_vec), (yyvsp[-2].bval)); }
#line 4717 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 980 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeExtract((yyvsp[-3].datetime_field), (yyvsp[-1].expr)); }
#line 4723 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 982 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeCast((yyvsp[-3].expr), (yyvsp[-1].column_type_t)); }
#line 4729 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 984 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4735 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 985 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4741 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 986 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4747 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 987 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4753 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 988 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4759 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 989 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4765 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 991 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeSecond; }
#line 4771 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 992 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMinute; }
#line 4777 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 993 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeHour; }
#line 4783 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 994 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeDay; }
#line 4789 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 995 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeMonth; }
#line 4795 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 996 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.datetime_field) = kDatetimeYear; }
#line 4801 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1000 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArray((yyvsp[-1].expr_vec)); }
#line 4807 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1002 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeArrayIndex((yyvsp[-3].expr), (yyvsp[-1].expr)->ival); }
#line 4813 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1004 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeBetween((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 4819 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1006 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[0].sval)); }
#line 4825 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1007 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeColumnRef((yyvsp[-2].sval), (yyvsp[0].sval)); }
#line 4831 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1008 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar(); }
#line 4837 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1009 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeStar((yyvsp[-2].sval)); }
#line 4843 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 1013 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4849 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 1015 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].sval)); }
#line 4855 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 1017 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(true); }
#line 4861 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1018 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral(false); }
#line 4867 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1020 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].fval)); }
#line 4873 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1023 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeLiteral((yyvsp[0].ival)); }
#line 4879 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1025 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.expr) = Expr::makeNullLiteral(); }
#line 4885 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1027 "bison_parser.y" /* yacc.c:1646  */
    {
  int day{0}, month{0}, year{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%4d-%2d-%2d%n", &day, &month, &year, &chars_parsed) != 3 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect date format. Expected format: YYYY-MM-DD");
    YYERROR;
  }
  (yyval.expr) = Expr::makeDateLiteral((yyvsp[0].sval));
}
#line 4900 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1038 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeIntervalLiteral((yyvsp[-1].expr)->ival, (yyvsp[0].datetime_field));
  delete (yyvsp[-1].expr);
}
#line 4909 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1042 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[-1].sval), "%d%n", &duration, &chars_parsed) != 1 || (yyvsp[-1].sval)[chars_parsed] != 0) {
    free((yyvsp[-1].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER");
    YYERROR;
  }
  free((yyvsp[-1].sval));
  (yyval.expr) = Expr::makeIntervalLiteral(duration, (yyvsp[0].datetime_field));
}
#line 4925 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1053 "bison_parser.y" /* yacc.c:1646  */
    {
  int duration{0}, chars_parsed{0};
  // 'seconds' and 'minutes' are the longest accepted interval qualifiers (7 chars) + null byte
  char unit_string[8];
  // If the whole string is parsed, chars_parsed points to the terminating null byte after the last character
  if (sscanf((yyvsp[0].sval), "%d %7s%n", &duration, unit_string, &chars_parsed) != 2 || (yyvsp[0].sval)[chars_parsed] != 0) {
    free((yyvsp[0].sval));
    yyerror(&yyloc, result, scanner, "Found incorrect interval format. Expected format: INTEGER INTERVAL_QUALIIFIER");
    YYERROR;
  }
  free((yyvsp[0].sval));

  DatetimeField unit;
  if (strcasecmp(unit_string, "second") == 0 || strcasecmp(unit_string, "seconds") == 0) {
    unit = kDatetimeSecond;
  } else if (strcasecmp(unit_string, "minute") == 0 || strcasecmp(unit_string, "minutes") == 0) {
    unit = kDatetimeMinute;
  } else if (strcasecmp(unit_string, "hour") == 0 || strcasecmp(unit_string, "hours") == 0) {
    unit = kDatetimeHour;
  } else if (strcasecmp(unit_string, "day") == 0 || strcasecmp(unit_string, "days") == 0) {
    unit = kDatetimeDay;
  } else if (strcasecmp(unit_string, "month") == 0 || strcasecmp(unit_string, "months") == 0) {
    unit = kDatetimeMonth;
  } else if (strcasecmp(unit_string, "year") == 0 || strcasecmp(unit_string, "years") == 0) {
    unit = kDatetimeYear;
  } else {
    yyerror(&yyloc, result, scanner, "Interval qualifier is unknown.");
    YYERROR;
  }
  (yyval.expr) = Expr::makeIntervalLiteral(duration, unit);
}
#line 4961 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1085 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.expr) = Expr::makeParameter(yylloc.total_column);
  (yyval.expr)->ival2 = yyloc.param_list.size();
  yyloc.param_list.push_back((yyval.expr));
}
#line 4971 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1094 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  auto tbl = new TableRef(kTableCrossProduct);
  tbl->list = (yyvsp[-2].table_vec);
  (yyval.table) = tbl;
}
#line 4982 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1103 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableSelect);
  tbl->select = (yyvsp[-2].select_stmt);
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 4993 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1110 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_vec) = new std::vector<TableRef*>();
  (yyval.table_vec)->push_back((yyvsp[0].table));
}
#line 5002 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1114 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].table_vec)->push_back((yyvsp[0].table));
  (yyval.table_vec) = (yyvsp[-2].table_vec);
}
#line 5011 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1119 "bison_parser.y" /* yacc.c:1646  */
    {
  auto tbl = new TableRef(kTableName);
  tbl->schema = (yyvsp[-1].table_name).schema;
  tbl->name = (yyvsp[-1].table_name).name;
  tbl->alias = (yyvsp[0].alias_t);
  (yyval.table) = tbl;
}
#line 5023 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1127 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableName);
  (yyval.table)->schema = (yyvsp[0].table_name).schema;
  (yyval.table)->name = (yyvsp[0].table_name).name;
}
#line 5033 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1133 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = nullptr;
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5042 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1137 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table_name).schema = (yyvsp[-2].sval);
  (yyval.table_name).name = (yyvsp[0].sval);
}
#line 5051 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1142 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = (yyvsp[0].sval); }
#line 5057 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1143 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.sval) = nullptr; }
#line 5063 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1145 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[-3].sval), (yyvsp[-1].str_vec)); }
#line 5069 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1147 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 5075 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1149 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5081 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1150 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = new Alias((yyvsp[0].sval)); }
#line 5087 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1152 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.alias_t) = nullptr; }
#line 5093 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1158 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.locking_clause_vec) = (yyvsp[0].locking_clause_vec); }
#line 5099 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1159 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.locking_clause_vec) = nullptr; }
#line 5105 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1161 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_clause_vec) = new std::vector<LockingClause*>();
  (yyval.locking_clause_vec)->push_back((yyvsp[0].locking_t));
}
#line 5114 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1165 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-1].locking_clause_vec)->push_back((yyvsp[0].locking_t));
  (yyval.locking_clause_vec) = (yyvsp[-1].locking_clause_vec);
}
#line 5123 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1170 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-1].lock_mode_t);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
  (yyval.locking_t)->tables = nullptr;
}
#line 5134 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1176 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.locking_t) = new LockingClause();
  (yyval.locking_t)->rowLockMode = (yyvsp[-3].lock_mode_t);
  (yyval.locking_t)->tables = (yyvsp[-1].str_vec);
  (yyval.locking_t)->rowLockWaitPolicy = (yyvsp[0].lock_wait_policy_t);
}
#line 5145 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1183 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForUpdate; }
#line 5151 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1184 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForNoKeyUpdate; }
#line 5157 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1185 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForShare; }
#line 5163 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1186 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_mode_t) = RowLockMode::ForKeyShare; }
#line 5169 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1188 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::SkipLocked; }
#line 5175 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1189 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::NoWait; }
#line 5181 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1190 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.lock_wait_policy_t) = RowLockWaitPolicy::None; }
#line 5187 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1196 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = nullptr; }
#line 5193 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1198 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.with_description_vec) = (yyvsp[0].with_description_vec); }
#line 5199 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1200 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_vec) = new std::vector<WithDescription*>();
  (yyval.with_description_vec)->push_back((yyvsp[0].with_description_t));
}
#line 5208 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1204 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].with_description_vec)->push_back((yyvsp[0].with_description_t));
  (yyval.with_description_vec) = (yyvsp[-2].with_description_vec);
}
#line 5217 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1209 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.with_description_t) = new WithDescription();
  (yyval.with_description_t)->alias = (yyvsp[-2].sval);
  (yyval.with_description_t)->select = (yyvsp[0].select_stmt);
}
#line 5227 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1219 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = kJoinNatural;
  (yyval.table)->join->left = (yyvsp[-3].table);
  (yyval.table)->join->right = (yyvsp[0].table);
}
#line 5239 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1226 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-4].join_type);
  (yyval.table)->join->left = (yyvsp[-5].table);
  (yyval.table)->join->right = (yyvsp[-2].table);
  (yyval.table)->join->condition = (yyvsp[0].expr);
}
#line 5252 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 1234 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.table) = new TableRef(kTableJoin);
  (yyval.table)->join = new JoinDefinition();
  (yyval.table)->join->type = (JoinType)(yyvsp[-6].join_type);
  (yyval.table)->join->left = (yyvsp[-7].table);
  (yyval.table)->join->right = (yyvsp[-4].table);
  auto left_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) left_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-7].table)->getName() != nullptr) left_col->table = strdup((yyvsp[-7].table)->getName());
  auto right_col = Expr::makeColumnRef(strdup((yyvsp[-1].expr)->name));
  if ((yyvsp[-1].expr)->alias != nullptr) right_col->alias = strdup((yyvsp[-1].expr)->alias);
  if ((yyvsp[-4].table)->getName() != nullptr) right_col->table = strdup((yyvsp[-4].table)->getName());
  (yyval.table)->join->condition = Expr::makeOpBinary(left_col, kOpEquals, right_col);
  delete (yyvsp[-1].expr);
}
#line 5272 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1250 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 5278 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1251 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 5284 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1252 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinLeft; }
#line 5290 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1253 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 5296 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1254 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinRight; }
#line 5302 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1255 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5308 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1256 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5314 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1257 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinFull; }
#line 5320 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1258 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinCross; }
#line 5326 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1259 "bison_parser.y" /* yacc.c:1646  */
    { (yyval.join_type) = kJoinInner; }
#line 5332 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1270 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyval.str_vec) = new std::vector<char*>();
  (yyval.str_vec)->push_back((yyvsp[0].sval));
}
#line 5341 "bison_parser.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1274 "bison_parser.y" /* yacc.c:1646  */
    {
  (yyvsp[-2].str_vec)->push_back((yyvsp[0].sval));
  (yyval.str_vec) = (yyvsp[-2].str_vec);
}
#line 5350 "bison_parser.tab.c" /* yacc.c:1646  */
    break;


#line 5354 "bison_parser.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, result, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
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
  return yyresult;
}
#line 1280 "bison_parser.y" /* yacc.c:1906  */

    // clang-format on
    /*********************************
 ** Section 4: Additional C code
 *********************************/

    /* empty */
