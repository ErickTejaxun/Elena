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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 5 "parser.y" /* yacc.c:339  */

#include <iostream>
#include <math.h>
#include "simbolo.h"
#include <stdio.h>
#include <string.h>
#include <vector>
#include <fstream>
using namespace std;
extern int n_lineas;
extern int yylex();
extern FILE* yyin;
extern FILE* yyout;
NodoAST *raiz;
extern int yylineno;

vector<Error> listaErrores;
Entorno global = new Entorno(NULL);



//definición de procedimientos auxiliares
void yyerror(const char* s)
{
      listaErrores.push_back(Error(n_lineas, n_lineas, string("Sintáctico"), string(s),string(s)));
} 


#line 95 "parser.c" /* yacc.c:339  */

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
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 2 "parser.y" /* yacc.c:355  */

      #include "simbolo.h"

#line 129 "parser.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ESCRIBIR = 258,
    DEFINICIONES = 259,
    CONFIGURACION = 260,
    OBSTACULOS = 261,
    EJEMPLOS = 262,
    TENTERO = 263,
    TREAL = 264,
    TPOSICION = 265,
    TCADENA = 266,
    DIMENSION = 267,
    ENTRADA = 268,
    SALIDA = 269,
    PAUSA = 270,
    OBSTACULO = 271,
    NORTE = 272,
    SUR = 273,
    ESTE = 274,
    OESTE = 275,
    EJEMPLO = 276,
    FINEJEMPLO = 277,
    REPITE = 278,
    FINREPITE = 279,
    SI = 280,
    ENTONCES = 281,
    FINSI = 282,
    SINO = 283,
    NUMERO = 284,
    REAL = 285,
    SALIR = 286,
    ID = 287,
    CADENA = 288,
    MAYORIGUAL = 289,
    MENORIGUAL = 290,
    AND = 291,
    OR = 292,
    VERDADERO = 293,
    FALSO = 294,
    DESIGUAL = 295,
    IGUAL = 296,
    menos = 297,
    SI_SIMPLE = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "parser.y" /* yacc.c:355  */

      int valor_entero;
      float valor_real;      
      char valor_cadena[100];   
      bool valor_booleano;   
      Expresion *expresion;
      Instruccion *instruccion;
      listaId * lista_id;
      Type * tipo;
      Bloque * bloque_instrucciones;
      Programa * programa_gala;

#line 198 "parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 215 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   739

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  239

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,     2,     2,     2,    47,     2,     2,
      56,    57,    48,    45,    54,    46,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    55,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    50,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    43,    44,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   106,   107,   108,   109,   111,   112,   113,
     114,   115,   115,   121,   125,   126,   127,   128,   129,   130,
     131,   132,   138,   141,   142,   143,   144,   148,   149,   153,
     154,   159,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   174,   179,   183,   184,   188,   189,
     193,   199,   203,   204,   208,   209,   210,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   225,   226,   231,   235,
     236,   237,   238,   238,   242,   247,   248,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   263,   267,   268,   272,
     276,   277,   288,   294,   295,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ESCRIBIR", "DEFINICIONES",
  "CONFIGURACION", "OBSTACULOS", "EJEMPLOS", "TENTERO", "TREAL",
  "TPOSICION", "TCADENA", "DIMENSION", "ENTRADA", "SALIDA", "PAUSA",
  "OBSTACULO", "NORTE", "SUR", "ESTE", "OESTE", "EJEMPLO", "FINEJEMPLO",
  "REPITE", "FINREPITE", "SI", "ENTONCES", "FINSI", "SINO", "NUMERO",
  "REAL", "SALIR", "ID", "CADENA", "MAYORIGUAL", "MENORIGUAL", "AND", "OR",
  "VERDADERO", "FALSO", "'!'", "'<'", "'>'", "DESIGUAL", "IGUAL", "'+'",
  "'-'", "'%'", "'*'", "'/'", "'^'", "menos", "SI_SIMPLE", "'\\n'", "','",
  "'='", "'('", "')'", "$accept", "inicio", "programa", "$@1",
  "definiciones", "ldefinicion", "declaracion", "tipo", "listaid",
  "constante", "configuracion", "lconfiguracion", "$@2", "dimension",
  "entrada", "salida", "pausa", "obstaculos", "lobstaculos", "obstaculo",
  "asignacion", "ejemplos", "lejemplos", "$@3", "ejemplo",
  "bloque_ejemplo", "instruccion_ejemplo", "instruccion", "bloque",
  "repetir", "si", "coodernada", "escribir", "expr", YY_NULLPTR
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
      33,    60,    62,   295,   296,    43,    45,    37,    42,    47,
      94,   297,   298,    10,    44,    61,    40,    41
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,   -37,   -22,   -10,    -8,    70,    69,  -191,    66,    80,
      82,  -191,   132,    41,   200,    66,    80,    82,  -191,    80,
      82,    82,    38,  -191,  -191,    46,   237,  -191,  -191,  -191,
    -191,    48,    99,  -191,    62,  -191,    68,    81,   252,   237,
     237,   252,   710,  -191,  -191,  -191,  -191,  -191,    84,   218,
     252,   252,   252,   252,   252,   252,    60,   129,  -191,    85,
      86,    91,    97,    80,    82,    82,  -191,    82,  -191,  -191,
      26,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   252,   252,
     252,   252,  -191,   626,   237,   102,  -191,  -191,   103,  -191,
      42,  -191,  -191,   306,   104,   326,   106,   346,   366,   107,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   109,   386,   406,
     426,   446,   466,   486,   506,   237,  -191,  -191,  -191,  -191,
    -191,    82,  -191,  -191,  -191,  -191,   131,   112,  -191,   626,
     285,  -191,   268,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   118,   526,  -191,
    -191,  -191,   140,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   200,    75,  -191,
     626,  -191,  -191,   123,    39,   252,  -191,   683,   683,   660,
     660,   683,   683,   689,   689,    64,    64,   127,   127,   127,
     127,  -191,  -191,  -191,  -191,  -191,   150,   126,   221,   128,
    -191,   643,  -191,  -191,   200,   130,   252,   252,   252,   252,
     134,   211,  -191,   135,   145,   152,  -191,   252,    65,  -191,
     546,   566,   586,   606,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,   153,  -191,  -191,  -191,  -191,   200,   177,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,    10,    12,     0,     0,    23,    26,    25,
      24,     0,     0,    19,     0,    18,     0,     0,     0,     0,
       0,     0,     0,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     7,     6,
       0,    21,    95,    96,   116,   117,    97,    98,     0,     0,
       0,     0,    94,    93,     0,     0,    14,    15,     0,    28,
       0,    20,    43,     0,     0,     0,     0,     0,     0,     0,
      32,    33,    34,    35,    36,    65,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    61,    63,    64,
      62,     0,     8,     5,     3,    72,     0,    68,    71,   111,
       0,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      16,    22,     0,    44,    45,    47,    46,    49,    48,    50,
      37,    55,    54,    58,    57,    60,    59,     0,     0,    67,
      66,     4,    73,     0,     0,     0,   115,   109,   110,   112,
     113,   105,   106,   108,   107,    99,   100,   103,   101,   102,
     104,    30,    29,    27,    86,    88,     0,     0,     0,     0,
      69,     0,    89,    87,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,    70,    92,     0,    85,
       0,     0,     0,     0,    81,    74,    75,    83,    84,    82,
      90,     0,    78,    77,    80,    79,     0,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,  -191,   179,  -191,   175,  -191,  -191,   176,
      72,  -191,  -191,   143,   168,   169,   171,    10,  -191,    -6,
    -170,   -15,  -191,  -191,    47,  -191,     4,  -179,  -190,  -141,
    -133,   -36,   -12,   -17
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,    24,     8,    32,    33,    34,    90,    35,
       9,    42,   153,    43,    44,    45,    46,    10,    57,   194,
      59,    23,   127,   172,   128,   211,   212,   195,   196,    60,
      61,    82,    62,   182
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    47,    66,    94,    96,    68,    69,     1,    58,    83,
       2,     3,     4,   107,   218,    17,    11,   203,    20,    21,
      88,    93,    95,    97,    98,    64,    65,   125,   210,    67,
     104,    12,   108,   109,   110,   111,   112,   113,   114,   203,
     199,   210,    37,    13,    26,    14,   237,   126,   147,   122,
     123,   116,   124,    38,    39,    40,    41,   213,   203,     5,
     126,   129,   130,   131,   132,   214,    48,   148,    26,    18,
     213,     3,     4,   121,     2,     3,     4,    16,   214,   169,
      19,    49,    50,    51,    52,    53,     4,    63,    54,    22,
      55,    70,   230,   231,    89,   151,   152,    56,   170,    71,
      85,   197,    26,    84,   -13,   -13,   171,    27,    28,    29,
      30,   143,   144,   145,   146,   115,   177,   178,   179,   180,
     181,    91,   183,   184,   185,   186,   187,   188,   189,   190,
      48,    31,    26,    25,    92,    26,   -51,   105,   117,   118,
      27,    28,    29,    30,   119,    49,    50,    51,    52,    53,
     120,    48,    54,    26,    55,   149,   150,   155,   201,   157,
     160,    56,   161,   173,    31,   174,    49,    50,    51,    52,
      53,   191,   193,    54,   202,    55,   198,   146,    48,   204,
      26,   216,    56,   219,    15,   100,   215,   224,   227,   220,
     221,   222,   223,    49,    50,    51,    52,    53,   228,   215,
      54,    48,    55,    26,   238,   229,   236,    86,    87,    56,
     101,   102,   205,   103,    26,   226,    49,    50,    51,    52,
      53,   200,   205,    54,    26,    55,     0,     0,   206,   207,
     208,   209,    56,   225,    54,     0,    55,     0,   206,   207,
     208,   209,     0,    56,    54,     0,    55,    72,    73,     0,
      74,    75,     0,    56,     0,     0,    76,    77,    78,    79,
       0,     0,     0,     0,    80,     0,    72,    73,     0,    74,
      75,   106,     0,     0,    81,    76,    77,    78,    79,     0,
       0,    72,    73,    80,    74,    75,     0,     0,     0,     0,
      76,    77,    78,    81,     0,     0,     0,     0,    80,     0,
       0,     0,   133,   134,   135,   136,     0,     0,    81,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   133,
     134,   135,   136,     0,     0,   176,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,     0,     0,   175,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   154,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   156,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   158,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   159,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   162,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   163,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   164,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   165,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   166,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   167,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   168,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   192,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   232,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   233,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   234,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,   235,
     133,   134,   135,   136,     0,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   133,   134,   135,
     136,     0,     0,     0,   137,   217,   139,   140,   141,   142,
     143,   144,   145,   146,   133,   134,     0,     0,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,    99,     0,    26,     0,     0,   -31,     0,     0,     0,
       0,     0,    38,    39,    40,    41,   139,   140,   141,   142,
     143,   144,   145,   146,   141,   142,   143,   144,   145,   146
};

static const yytype_int16 yycheck[] =
{
      12,    13,    17,    39,    40,    20,    21,     1,    14,    26,
       4,     5,     6,    49,   204,     5,    53,   196,     8,     9,
      32,    38,    39,    40,    41,    15,    16,     1,   198,    19,
      42,    53,    49,    50,    51,    52,    53,    54,    55,   218,
       1,   211,     1,    53,     3,    53,   236,    21,    84,    64,
      65,    57,    67,    12,    13,    14,    15,   198,   237,    53,
      21,    78,    79,    80,    81,   198,     1,    84,     3,     0,
     211,     5,     6,    63,     4,     5,     6,     5,   211,   115,
       8,    16,    17,    18,    19,    20,     6,    15,    23,     7,
      25,    53,    27,    28,    32,    53,    54,    32,   115,    53,
       1,    26,     3,    55,     5,     6,   121,     8,     9,    10,
      11,    47,    48,    49,    50,    55,   133,   134,   135,   136,
     137,    53,   139,   140,   141,   142,   143,   144,   145,   146,
       1,    32,     3,     1,    53,     3,     7,    53,    53,    53,
       8,     9,    10,    11,    53,    16,    17,    18,    19,    20,
      53,     1,    23,     3,    25,    53,    53,    53,   175,    53,
      53,    32,    53,    32,    32,    53,    16,    17,    18,    19,
      20,    53,    32,    23,    24,    25,    53,    50,     1,    53,
       3,    53,    32,    53,     5,    42,   198,    53,    53,   206,
     207,   208,   209,    16,    17,    18,    19,    20,    53,   211,
      23,     1,    25,     3,    27,    53,    53,    32,    32,    32,
      42,    42,     1,    42,     3,   211,    16,    17,    18,    19,
      20,   174,     1,    23,     3,    25,    -1,    -1,    17,    18,
      19,    20,    32,    22,    23,    -1,    25,    -1,    17,    18,
      19,    20,    -1,    32,    23,    -1,    25,    29,    30,    -1,
      32,    33,    -1,    32,    -1,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    29,    30,    -1,    32,
      33,    53,    -1,    -1,    56,    38,    39,    40,    41,    -1,
      -1,    29,    30,    46,    32,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    56,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    34,    35,    36,    37,    -1,    -1,    56,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    34,
      35,    36,    37,    -1,    -1,    57,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    -1,    54,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    34,    35,    36,
      37,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     1,    -1,     3,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    43,    44,    45,    46,
      47,    48,    49,    50,    45,    46,    47,    48,    49,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,     5,     6,    53,    59,    60,    62,    68,
      75,    53,    53,    53,    53,    62,    68,    75,     0,    68,
      75,    75,     7,    79,    61,     1,     3,     8,     9,    10,
      11,    32,    63,    64,    65,    67,    90,     1,    12,    13,
      14,    15,    69,    71,    72,    73,    74,    90,     1,    16,
      17,    18,    19,    20,    23,    25,    32,    76,    77,    78,
      87,    88,    90,    68,    75,    75,    79,    75,    79,    79,
      53,    53,    29,    30,    32,    33,    38,    39,    40,    41,
      46,    56,    89,    91,    55,     1,    64,    67,    90,    32,
      66,    53,    53,    91,    89,    91,    89,    91,    91,     1,
      71,    72,    73,    74,    90,    53,    53,    89,    91,    91,
      91,    91,    91,    91,    91,    55,    77,    53,    53,    53,
      53,    75,    79,    79,    79,     1,    21,    80,    82,    91,
      91,    91,    91,    34,    35,    36,    37,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    89,    91,    53,
      53,    53,    54,    70,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    89,
      91,    79,    81,    32,    53,    54,    57,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    53,    53,    32,    77,    85,    86,    26,    53,     1,
      82,    91,    24,    85,    53,     1,    17,    18,    19,    20,
      78,    83,    84,    87,    88,    90,    53,    42,    86,    53,
      91,    91,    91,    91,    53,    22,    84,    53,    53,    53,
      27,    28,    53,    53,    53,    53,    53,    86,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    61,    60,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    64,    65,    65,    65,    65,    66,    66,    67,
      67,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    70,    69,    71,    72,    72,    73,    73,
      74,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    80,
      80,    80,    81,    80,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    86,    86,    87,
      88,    88,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     5,     4,     3,     3,     4,     3,
       2,     0,     3,     3,     2,     2,     3,     3,     1,     1,
       2,     2,     3,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     2,     2,     2,     2,     2,     3,     1,     1,
       1,     1,     1,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     1,     3,     3,     2,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       4,     1,     0,     2,     5,     2,     1,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     1,     2,     1,     5,
       7,    10,     5,     2,     2,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     2,     3,     1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 102 "parser.y" /* yacc.c:1646  */
    {raiz = (yyvsp[0].programa_gala);}
#line 1556 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 106 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setDefiniciones((yyvsp[-3].bloque_instrucciones)); (yyval.programa_gala)->setConfiguraciones((yyvsp[-2].bloque_instrucciones)); (yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1562 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 107 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setDefiniciones((yyvsp[-3].bloque_instrucciones)); (yyval.programa_gala)->setConfiguraciones((yyvsp[-2].bloque_instrucciones)); (yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1568 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setConfiguraciones((yyvsp[-2].bloque_instrucciones)); (yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1574 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 109 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setConfiguraciones((yyvsp[-2].bloque_instrucciones)); (yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1580 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 111 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setDefiniciones((yyvsp[-2].bloque_instrucciones)); (yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1586 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setDefiniciones((yyvsp[-2].bloque_instrucciones)); (yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1592 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 113 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1598 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 114 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);(yyval.programa_gala)->setObstaculos((yyvsp[-1].bloque_instrucciones)); (yyval.programa_gala)->setEjemplos((yyvsp[0].bloque_instrucciones));}
#line 1604 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 115 "parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1610 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "parser.y" /* yacc.c:1646  */
    {(yyval.programa_gala) = new Programa(n_lineas, n_lineas);}
#line 1616 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[0].bloque_instrucciones);}
#line 1622 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1628 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 126 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1634 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 127 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-2].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[-1].instruccion));}
#line 1640 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 128 "parser.y" /* yacc.c:1646  */
    {yyerrok; (yyval.bloque_instrucciones)=(yyvsp[-2].bloque_instrucciones);}
#line 1646 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 129 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1652 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1658 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 131 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[-1].instruccion));}
#line 1664 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 132 "parser.y" /* yacc.c:1646  */
    {yyerrok; (yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); }
#line 1670 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 138 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Declaracion(n_lineas, n_lineas, *(yyvsp[-2].tipo), (yyvsp[-1].lista_id)); }
#line 1676 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo)= new Type(TIPOENTERO);}
#line 1682 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo)= new Type(TIPOCADENA);}
#line 1688 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo)= new Type(TIPOPOSICION);}
#line 1694 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "parser.y" /* yacc.c:1646  */
    {(yyval.tipo)= new Type(TIPOREAL);}
#line 1700 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.lista_id)=(yyvsp[-2].lista_id);  string id((yyvsp[0].valor_cadena)); (yyval.lista_id)->add(id);}
#line 1706 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 149 "parser.y" /* yacc.c:1646  */
    {listaId *l = new listaId(n_lineas); string id((yyvsp[0].valor_cadena)); l->add(id); (yyval.lista_id)=l; }
#line 1712 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "parser.y" /* yacc.c:1646  */
    { string id((yyvsp[-3].valor_cadena)); (yyval.instruccion)= new Constante(n_lineas, n_lineas, id, (yyvsp[-1].expresion)); }
#line 1718 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "parser.y" /* yacc.c:1646  */
    { string id((yyvsp[-3].valor_cadena)); (yyval.instruccion)= new Constante(n_lineas, n_lineas, id, (yyvsp[-1].expresion)); }
#line 1724 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)=(yyvsp[0].bloque_instrucciones);}
#line 1730 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1736 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1742 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1748 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1754 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1760 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 168 "parser.y" /* yacc.c:1646  */
    {yyerrok; (yyval.bloque_instrucciones)=(yyvsp[-2].bloque_instrucciones);}
#line 1766 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 169 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1772 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 170 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1778 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1784 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1790 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1796 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 174 "parser.y" /* yacc.c:1646  */
    {yyerrok; }
#line 1802 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "parser.y" /* yacc.c:1646  */
    {yyerrok;(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); }
#line 1808 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Establecer_dimension(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1814 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 183 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Establecer_entrada(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1820 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 184 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Establecer_entrada(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1826 "parser.c" /* yacc.c:1646  */
    break;

  case 48:
#line 188 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Establecer_salida(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1832 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 189 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Establecer_salida(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1838 "parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 193 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion) = new Establecer_pausa(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1844 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 199 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[0].bloque_instrucciones);}
#line 1850 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 203 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1856 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 204 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1862 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 208 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)= new PonerObstaculo(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1868 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 209 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)= new PonerObstaculo(n_lineas, n_lineas, (yyvsp[-1].expresion));}
#line 1874 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 210 "parser.y" /* yacc.c:1646  */
    {Literal *tmp = NULL; 
                                    (yyval.instruccion)= new PonerObstaculo(n_lineas, n_lineas, tmp);
                                    }
#line 1882 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 213 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=new Obstaculo_movimiento(n_lineas, n_lineas, "sur", (yyvsp[-1].expresion));}
#line 1888 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=new Obstaculo_movimiento(n_lineas, n_lineas, "norte", (yyvsp[-1].expresion));}
#line 1894 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 215 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=new Obstaculo_movimiento(n_lineas, n_lineas, "oeste", (yyvsp[-1].expresion));}
#line 1900 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 216 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)= new Obstaculo_movimiento(n_lineas, n_lineas, "este", (yyvsp[-1].expresion));}
#line 1906 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 217 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 1912 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 218 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 1918 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 219 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 1924 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 220 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 1930 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 221 "parser.y" /* yacc.c:1646  */
    {yyerrok; Obstaculo_movimiento * nuevo =NULL; (yyval.instruccion)=nuevo; }
#line 1936 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 225 "parser.y" /* yacc.c:1646  */
    { string id((yyvsp[-2].valor_cadena)); (yyval.instruccion)= new Asignacion(n_lineas, n_lineas, id, (yyvsp[0].expresion)); }
#line 1942 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 226 "parser.y" /* yacc.c:1646  */
    { string id((yyvsp[-2].valor_cadena)); (yyval.instruccion)= new Asignacion(n_lineas, n_lineas, id, (yyvsp[0].expresion)); }
#line 1948 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 231 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones) = (yyvsp[0].bloque_instrucciones);}
#line 1954 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 235 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-2].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1960 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 236 "parser.y" /* yacc.c:1646  */
    {yyerrok; (yyval.bloque_instrucciones)=(yyvsp[-3].bloque_instrucciones);}
#line 1966 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 237 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas, n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1972 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 238 "parser.y" /* yacc.c:1646  */
    {yyerrok;}
#line 1978 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 238 "parser.y" /* yacc.c:1646  */
    {yyerrok;(yyval.bloque_instrucciones)= new Bloque(n_lineas, n_lineas); }
#line 1984 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 242 "parser.y" /* yacc.c:1646  */
    {string id((yyvsp[-3].valor_cadena)); (yyval.instruccion) = new Ejemplo(n_lineas, n_lineas, id, (yyvsp[-1].bloque_instrucciones));}
#line 1990 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 247 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 1996 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 248 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 2002 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 252 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=new Movimiento_jugador(n_lineas, n_lineas, "sur", (yyvsp[-1].expresion));}
#line 2008 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 253 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=new Movimiento_jugador(n_lineas, n_lineas, "norte", (yyvsp[-1].expresion));}
#line 2014 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 254 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=new Movimiento_jugador(n_lineas, n_lineas, "oeste", (yyvsp[-1].expresion));}
#line 2020 "parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 255 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)= new Movimiento_jugador(n_lineas, n_lineas, "este", (yyvsp[-1].expresion));}
#line 2026 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 256 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 2032 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 257 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 2038 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 258 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 2044 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 259 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[-1].instruccion);}
#line 2050 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 260 "parser.y" /* yacc.c:1646  */
    {yyerrok; Movimiento_jugador * nuevo =NULL; (yyval.instruccion)=nuevo; }
#line 2056 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 263 "parser.y" /* yacc.c:1646  */
    {(yyval.instruccion)=(yyvsp[0].instruccion);}
#line 2062 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 267 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= (yyvsp[-1].bloque_instrucciones); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 2068 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 268 "parser.y" /* yacc.c:1646  */
    {(yyval.bloque_instrucciones)= new Bloque(n_lineas,n_lineas); (yyval.bloque_instrucciones)->addInstruccion((yyvsp[0].instruccion));}
#line 2074 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 272 "parser.y" /* yacc.c:1646  */
    { (yyval.instruccion) = new Repetir(n_lineas, n_lineas, (yyvsp[-3].expresion), (yyvsp[-1].bloque_instrucciones));}
#line 2080 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 276 "parser.y" /* yacc.c:1646  */
    {Si *sinosi =NULL; (yyval.instruccion) = new Si(n_lineas, n_lineas, (yyvsp[-5].expresion), (yyvsp[-1].bloque_instrucciones), sinosi); }
#line 2086 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 278 "parser.y" /* yacc.c:1646  */
    {
            Literal *condicionTrue = new Literal(n_lineas,n_lineas, true);
            Si *sinosiAux = NULL;
            Si *sinosi = new Si(n_lineas, n_lineas, condicionTrue, (yyvsp[-1].bloque_instrucciones), sinosiAux);
            (yyval.instruccion) = new Si(n_lineas, n_lineas, (yyvsp[-8].expresion), (yyvsp[-4].bloque_instrucciones), sinosi);            
      }
#line 2097 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 288 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Posicion(n_lineas, n_lineas, (yyvsp[-3].expresion), (yyvsp[-1].expresion)); }
#line 2103 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 294 "parser.y" /* yacc.c:1646  */
    {  (yyval.instruccion) = new Escribir(n_lineas, n_lineas, (yyvsp[0].expresion)); /**/ }
#line 2109 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 295 "parser.y" /* yacc.c:1646  */
    {  (yyval.instruccion) = new Escribir(n_lineas, n_lineas, (yyvsp[0].expresion)); /**/ }
#line 2115 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Literal(n_lineas,n_lineas, (yyvsp[0].valor_entero)); }
#line 2121 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Literal(n_lineas,n_lineas, (yyvsp[0].valor_real)); }
#line 2127 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 300 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Literal(n_lineas,n_lineas, (yyvsp[0].valor_booleano)); }
#line 2133 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Literal(n_lineas,n_lineas, (yyvsp[0].valor_booleano)); }
#line 2139 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Suma(n_lineas, n_lineas, (yyvsp[-2].expresion), (yyvsp[0].expresion)); }
#line 2145 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Resta(n_lineas, n_lineas, (yyvsp[-2].expresion), (yyvsp[0].expresion)); }
#line 2151 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Multiplicacion(n_lineas, n_lineas, (yyvsp[-2].expresion),(yyvsp[0].expresion)); }
#line 2157 "parser.c" /* yacc.c:1646  */
    break;

  case 102:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Division(n_lineas, n_lineas, (yyvsp[-2].expresion),(yyvsp[0].expresion)); }
#line 2163 "parser.c" /* yacc.c:1646  */
    break;

  case 103:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Modulo(n_lineas, n_lineas, (yyvsp[-2].expresion),(yyvsp[0].expresion)); }
#line 2169 "parser.c" /* yacc.c:1646  */
    break;

  case 104:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Potencia(n_lineas, n_lineas, (yyvsp[-2].expresion),(yyvsp[0].expresion)); }
#line 2175 "parser.c" /* yacc.c:1646  */
    break;

  case 105:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Relacional(n_lineas, n_lineas, (yyvsp[-2].expresion), "<", (yyvsp[0].expresion)); }
#line 2181 "parser.c" /* yacc.c:1646  */
    break;

  case 106:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Relacional(n_lineas, n_lineas, (yyvsp[-2].expresion), ">", (yyvsp[0].expresion)); }
#line 2187 "parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Relacional(n_lineas, n_lineas, (yyvsp[-2].expresion), "==", (yyvsp[0].expresion)); }
#line 2193 "parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 311 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Relacional(n_lineas, n_lineas, (yyvsp[-2].expresion), "!=", (yyvsp[0].expresion)); }
#line 2199 "parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 312 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Relacional(n_lineas, n_lineas, (yyvsp[-2].expresion), ">=", (yyvsp[0].expresion)); }
#line 2205 "parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 313 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Relacional(n_lineas, n_lineas, (yyvsp[-2].expresion), "<=", (yyvsp[0].expresion)); }
#line 2211 "parser.c" /* yacc.c:1646  */
    break;

  case 111:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Negacion(n_lineas,n_lineas,(yyvsp[0].expresion)); }
#line 2217 "parser.c" /* yacc.c:1646  */
    break;

  case 112:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Logica(n_lineas, n_lineas, (yyvsp[-2].expresion), "&&", (yyvsp[0].expresion)); }
#line 2223 "parser.c" /* yacc.c:1646  */
    break;

  case 113:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Logica(n_lineas, n_lineas, (yyvsp[-2].expresion), "||", (yyvsp[0].expresion)); }
#line 2229 "parser.c" /* yacc.c:1646  */
    break;

  case 114:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = new Menos(n_lineas,n_lineas,(yyvsp[0].expresion)); }
#line 2235 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.expresion) = (yyvsp[-1].expresion); }
#line 2241 "parser.c" /* yacc.c:1646  */
    break;

  case 116:
#line 319 "parser.y" /* yacc.c:1646  */
    { string id((yyvsp[0].valor_cadena));  (yyval.expresion) = new Variable(n_lineas, n_lineas, id); }
#line 2247 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 320 "parser.y" /* yacc.c:1646  */
    { string cad((yyvsp[0].valor_cadena)); (yyval.expresion) = new Literal(n_lineas, n_lineas, cad );}
#line 2253 "parser.c" /* yacc.c:1646  */
    break;


#line 2257 "parser.c" /* yacc.c:1646  */
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 322 "parser.y" /* yacc.c:1906  */

void escribirEncabezado(string path);
void escribirFinal(string path);
void crear_fichero(string path);

int main(int argc, char *argv[])
{
      n_lineas = 1;
      yylineno = 1;
      if (argc != 2) 
      {
            printf("Ejecutar de la forma %s fichero_entrada \n",argv[0]);            
      }		
      else       
      {
            yyin=fopen(argv[1],"rt");
            string path_fichero_entrada(argv[1]);
            string path = path_fichero_entrada.substr(0, path_fichero_entrada.find(".")) +".cpp"; 
            cout<< "Archivo de salida: "<<path<<endl;
            n_lineas = 1;
            if(yyin==0)
            {
                  printf("El fichero %s no existe\n",argv[1]);
                  return 0;
            }

            global.iniciarTableroEntorno();
            cout<<"-------------------------------------------------------------------------------------"<<endl;
            yyparse();
            if(raiz == NULL)
            {
                  printf("Nada que ejecutar\n");                  
            }
            else
            {                      
                  crear_fichero(path);            
                  global.path_fichero = path;
                  if(raiz->esInstruccion())
                  {
                        raiz->ejecutar(&global);                                          
                  }              
            }
            cout<<"--------------------------Tabla de símbolos------------------------------------------"<<endl;
            cout<<global.tabla.getCadenaData()<<endl;
            cout<<"--------------------------------------------------------------------------------------"<<endl;
            /*Ahora imprimimos todos los errores*/
            for(auto e: listaErrores)
            {
                  cout<< e.getMensaje()<<endl;
            }
            cout<<"-------------------------------------------------------------------------------------\n"<<endl;                        
            return 0;
      }     
      return 0;
}


void crear_fichero(string path)
{
      ofstream fichero;
      fichero.open (path);
      fichero << "";
      fichero.close();                
}


