/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asmparse.y"


// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

//
// File asmparse.y
//
#include "ilasmpch.h"

#include "grammar_before.cpp"


#line 85 "prebuilt\\asmparse.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


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
    BAD_COMMENT_ = 258,            /* BAD_COMMENT_  */
    BAD_LITERAL_ = 259,            /* BAD_LITERAL_  */
    ID = 260,                      /* ID  */
    DOTTEDNAME = 261,              /* DOTTEDNAME  */
    QSTRING = 262,                 /* QSTRING  */
    SQSTRING = 263,                /* SQSTRING  */
    INT32_V = 264,                 /* INT32_V  */
    INT64_V = 265,                 /* INT64_V  */
    FLOAT64 = 266,                 /* FLOAT64  */
    HEXBYTE = 267,                 /* HEXBYTE  */
    TYPEDEF_T = 268,               /* TYPEDEF_T  */
    TYPEDEF_M = 269,               /* TYPEDEF_M  */
    TYPEDEF_F = 270,               /* TYPEDEF_F  */
    TYPEDEF_TS = 271,              /* TYPEDEF_TS  */
    TYPEDEF_MR = 272,              /* TYPEDEF_MR  */
    TYPEDEF_CA = 273,              /* TYPEDEF_CA  */
    DCOLON = 274,                  /* DCOLON  */
    ELLIPSIS = 275,                /* ELLIPSIS  */
    VOID_ = 276,                   /* VOID_  */
    BOOL_ = 277,                   /* BOOL_  */
    CHAR_ = 278,                   /* CHAR_  */
    UNSIGNED_ = 279,               /* UNSIGNED_  */
    INT_ = 280,                    /* INT_  */
    INT8_ = 281,                   /* INT8_  */
    INT16_ = 282,                  /* INT16_  */
    INT32_ = 283,                  /* INT32_  */
    INT64_ = 284,                  /* INT64_  */
    FLOAT_ = 285,                  /* FLOAT_  */
    FLOAT32_ = 286,                /* FLOAT32_  */
    FLOAT64_ = 287,                /* FLOAT64_  */
    BYTEARRAY_ = 288,              /* BYTEARRAY_  */
    UINT_ = 289,                   /* UINT_  */
    UINT8_ = 290,                  /* UINT8_  */
    UINT16_ = 291,                 /* UINT16_  */
    UINT32_ = 292,                 /* UINT32_  */
    UINT64_ = 293,                 /* UINT64_  */
    FLAGS_ = 294,                  /* FLAGS_  */
    CALLCONV_ = 295,               /* CALLCONV_  */
    MDTOKEN_ = 296,                /* MDTOKEN_  */
    OBJECT_ = 297,                 /* OBJECT_  */
    STRING_ = 298,                 /* STRING_  */
    NULLREF_ = 299,                /* NULLREF_  */
    DEFAULT_ = 300,                /* DEFAULT_  */
    CDECL_ = 301,                  /* CDECL_  */
    VARARG_ = 302,                 /* VARARG_  */
    STDCALL_ = 303,                /* STDCALL_  */
    THISCALL_ = 304,               /* THISCALL_  */
    FASTCALL_ = 305,               /* FASTCALL_  */
    CLASS_ = 306,                  /* CLASS_  */
    BYREFLIKE_ = 307,              /* BYREFLIKE_  */
    TYPEDREF_ = 308,               /* TYPEDREF_  */
    UNMANAGED_ = 309,              /* UNMANAGED_  */
    FINALLY_ = 310,                /* FINALLY_  */
    HANDLER_ = 311,                /* HANDLER_  */
    CATCH_ = 312,                  /* CATCH_  */
    FILTER_ = 313,                 /* FILTER_  */
    FAULT_ = 314,                  /* FAULT_  */
    EXTENDS_ = 315,                /* EXTENDS_  */
    IMPLEMENTS_ = 316,             /* IMPLEMENTS_  */
    TO_ = 317,                     /* TO_  */
    AT_ = 318,                     /* AT_  */
    TLS_ = 319,                    /* TLS_  */
    TRUE_ = 320,                   /* TRUE_  */
    FALSE_ = 321,                  /* FALSE_  */
    _INTERFACEIMPL = 322,          /* _INTERFACEIMPL  */
    VALUE_ = 323,                  /* VALUE_  */
    VALUETYPE_ = 324,              /* VALUETYPE_  */
    NATIVE_ = 325,                 /* NATIVE_  */
    INSTANCE_ = 326,               /* INSTANCE_  */
    SPECIALNAME_ = 327,            /* SPECIALNAME_  */
    FORWARDER_ = 328,              /* FORWARDER_  */
    STATIC_ = 329,                 /* STATIC_  */
    PUBLIC_ = 330,                 /* PUBLIC_  */
    PRIVATE_ = 331,                /* PRIVATE_  */
    FAMILY_ = 332,                 /* FAMILY_  */
    FINAL_ = 333,                  /* FINAL_  */
    SYNCHRONIZED_ = 334,           /* SYNCHRONIZED_  */
    INTERFACE_ = 335,              /* INTERFACE_  */
    SEALED_ = 336,                 /* SEALED_  */
    NESTED_ = 337,                 /* NESTED_  */
    ABSTRACT_ = 338,               /* ABSTRACT_  */
    AUTO_ = 339,                   /* AUTO_  */
    SEQUENTIAL_ = 340,             /* SEQUENTIAL_  */
    EXPLICIT_ = 341,               /* EXPLICIT_  */
    ANSI_ = 342,                   /* ANSI_  */
    UNICODE_ = 343,                /* UNICODE_  */
    AUTOCHAR_ = 344,               /* AUTOCHAR_  */
    IMPORT_ = 345,                 /* IMPORT_  */
    ENUM_ = 346,                   /* ENUM_  */
    VIRTUAL_ = 347,                /* VIRTUAL_  */
    NOINLINING_ = 348,             /* NOINLINING_  */
    AGGRESSIVEINLINING_ = 349,     /* AGGRESSIVEINLINING_  */
    NOOPTIMIZATION_ = 350,         /* NOOPTIMIZATION_  */
    AGGRESSIVEOPTIMIZATION_ = 351, /* AGGRESSIVEOPTIMIZATION_  */
    UNMANAGEDEXP_ = 352,           /* UNMANAGEDEXP_  */
    BEFOREFIELDINIT_ = 353,        /* BEFOREFIELDINIT_  */
    STRICT_ = 354,                 /* STRICT_  */
    RETARGETABLE_ = 355,           /* RETARGETABLE_  */
    WINDOWSRUNTIME_ = 356,         /* WINDOWSRUNTIME_  */
    NOPLATFORM_ = 357,             /* NOPLATFORM_  */
    METHOD_ = 358,                 /* METHOD_  */
    FIELD_ = 359,                  /* FIELD_  */
    PINNED_ = 360,                 /* PINNED_  */
    MODREQ_ = 361,                 /* MODREQ_  */
    MODOPT_ = 362,                 /* MODOPT_  */
    SERIALIZABLE_ = 363,           /* SERIALIZABLE_  */
    PROPERTY_ = 364,               /* PROPERTY_  */
    TYPE_ = 365,                   /* TYPE_  */
    ASSEMBLY_ = 366,               /* ASSEMBLY_  */
    FAMANDASSEM_ = 367,            /* FAMANDASSEM_  */
    FAMORASSEM_ = 368,             /* FAMORASSEM_  */
    PRIVATESCOPE_ = 369,           /* PRIVATESCOPE_  */
    HIDEBYSIG_ = 370,              /* HIDEBYSIG_  */
    NEWSLOT_ = 371,                /* NEWSLOT_  */
    RTSPECIALNAME_ = 372,          /* RTSPECIALNAME_  */
    PINVOKEIMPL_ = 373,            /* PINVOKEIMPL_  */
    _CTOR = 374,                   /* _CTOR  */
    _CCTOR = 375,                  /* _CCTOR  */
    LITERAL_ = 376,                /* LITERAL_  */
    NOTSERIALIZED_ = 377,          /* NOTSERIALIZED_  */
    INITONLY_ = 378,               /* INITONLY_  */
    REQSECOBJ_ = 379,              /* REQSECOBJ_  */
    CIL_ = 380,                    /* CIL_  */
    OPTIL_ = 381,                  /* OPTIL_  */
    MANAGED_ = 382,                /* MANAGED_  */
    FORWARDREF_ = 383,             /* FORWARDREF_  */
    PRESERVESIG_ = 384,            /* PRESERVESIG_  */
    RUNTIME_ = 385,                /* RUNTIME_  */
    INTERNALCALL_ = 386,           /* INTERNALCALL_  */
    _IMPORT = 387,                 /* _IMPORT  */
    NOMANGLE_ = 388,               /* NOMANGLE_  */
    LASTERR_ = 389,                /* LASTERR_  */
    WINAPI_ = 390,                 /* WINAPI_  */
    AS_ = 391,                     /* AS_  */
    BESTFIT_ = 392,                /* BESTFIT_  */
    ON_ = 393,                     /* ON_  */
    OFF_ = 394,                    /* OFF_  */
    CHARMAPERROR_ = 395,           /* CHARMAPERROR_  */
    INSTR_NONE = 396,              /* INSTR_NONE  */
    INSTR_VAR = 397,               /* INSTR_VAR  */
    INSTR_I = 398,                 /* INSTR_I  */
    INSTR_I8 = 399,                /* INSTR_I8  */
    INSTR_R = 400,                 /* INSTR_R  */
    INSTR_BRTARGET = 401,          /* INSTR_BRTARGET  */
    INSTR_METHOD = 402,            /* INSTR_METHOD  */
    INSTR_FIELD = 403,             /* INSTR_FIELD  */
    INSTR_TYPE = 404,              /* INSTR_TYPE  */
    INSTR_STRING = 405,            /* INSTR_STRING  */
    INSTR_SIG = 406,               /* INSTR_SIG  */
    INSTR_TOK = 407,               /* INSTR_TOK  */
    INSTR_SWITCH = 408,            /* INSTR_SWITCH  */
    _CLASS = 409,                  /* _CLASS  */
    _NAMESPACE = 410,              /* _NAMESPACE  */
    _METHOD = 411,                 /* _METHOD  */
    _FIELD = 412,                  /* _FIELD  */
    _DATA = 413,                   /* _DATA  */
    _THIS = 414,                   /* _THIS  */
    _BASE = 415,                   /* _BASE  */
    _NESTER = 416,                 /* _NESTER  */
    _EMITBYTE = 417,               /* _EMITBYTE  */
    _TRY = 418,                    /* _TRY  */
    _MAXSTACK = 419,               /* _MAXSTACK  */
    _LOCALS = 420,                 /* _LOCALS  */
    _ENTRYPOINT = 421,             /* _ENTRYPOINT  */
    _ZEROINIT = 422,               /* _ZEROINIT  */
    _EVENT = 423,                  /* _EVENT  */
    _ADDON = 424,                  /* _ADDON  */
    _REMOVEON = 425,               /* _REMOVEON  */
    _FIRE = 426,                   /* _FIRE  */
    _OTHER = 427,                  /* _OTHER  */
    _PROPERTY = 428,               /* _PROPERTY  */
    _SET = 429,                    /* _SET  */
    _GET = 430,                    /* _GET  */
    _PERMISSION = 431,             /* _PERMISSION  */
    _PERMISSIONSET = 432,          /* _PERMISSIONSET  */
    REQUEST_ = 433,                /* REQUEST_  */
    DEMAND_ = 434,                 /* DEMAND_  */
    ASSERT_ = 435,                 /* ASSERT_  */
    DENY_ = 436,                   /* DENY_  */
    PERMITONLY_ = 437,             /* PERMITONLY_  */
    LINKCHECK_ = 438,              /* LINKCHECK_  */
    INHERITCHECK_ = 439,           /* INHERITCHECK_  */
    REQMIN_ = 440,                 /* REQMIN_  */
    REQOPT_ = 441,                 /* REQOPT_  */
    REQREFUSE_ = 442,              /* REQREFUSE_  */
    PREJITGRANT_ = 443,            /* PREJITGRANT_  */
    PREJITDENY_ = 444,             /* PREJITDENY_  */
    NONCASDEMAND_ = 445,           /* NONCASDEMAND_  */
    NONCASLINKDEMAND_ = 446,       /* NONCASLINKDEMAND_  */
    NONCASINHERITANCE_ = 447,      /* NONCASINHERITANCE_  */
    _LINE = 448,                   /* _LINE  */
    P_LINE = 449,                  /* P_LINE  */
    _LANGUAGE = 450,               /* _LANGUAGE  */
    _CUSTOM = 451,                 /* _CUSTOM  */
    INIT_ = 452,                   /* INIT_  */
    _SIZE = 453,                   /* _SIZE  */
    _PACK = 454,                   /* _PACK  */
    _VTABLE = 455,                 /* _VTABLE  */
    _VTFIXUP = 456,                /* _VTFIXUP  */
    FROMUNMANAGED_ = 457,          /* FROMUNMANAGED_  */
    CALLMOSTDERIVED_ = 458,        /* CALLMOSTDERIVED_  */
    _VTENTRY = 459,                /* _VTENTRY  */
    RETAINAPPDOMAIN_ = 460,        /* RETAINAPPDOMAIN_  */
    _FILE = 461,                   /* _FILE  */
    NOMETADATA_ = 462,             /* NOMETADATA_  */
    _TYPEREF = 463,                /* _TYPEREF  */
    _HASH = 464,                   /* _HASH  */
    _ASSEMBLY = 465,               /* _ASSEMBLY  */
    _PUBLICKEY = 466,              /* _PUBLICKEY  */
    _PUBLICKEYTOKEN = 467,         /* _PUBLICKEYTOKEN  */
    ALGORITHM_ = 468,              /* ALGORITHM_  */
    _VER = 469,                    /* _VER  */
    _LOCALE = 470,                 /* _LOCALE  */
    EXTERN_ = 471,                 /* EXTERN_  */
    _MRESOURCE = 472,              /* _MRESOURCE  */
    _MODULE = 473,                 /* _MODULE  */
    _EXPORT = 474,                 /* _EXPORT  */
    LEGACY_ = 475,                 /* LEGACY_  */
    LIBRARY_ = 476,                /* LIBRARY_  */
    X86_ = 477,                    /* X86_  */
    AMD64_ = 478,                  /* AMD64_  */
    ARM_ = 479,                    /* ARM_  */
    ARM64_ = 480,                  /* ARM64_  */
    MARSHAL_ = 481,                /* MARSHAL_  */
    CUSTOM_ = 482,                 /* CUSTOM_  */
    SYSSTRING_ = 483,              /* SYSSTRING_  */
    FIXED_ = 484,                  /* FIXED_  */
    VARIANT_ = 485,                /* VARIANT_  */
    CURRENCY_ = 486,               /* CURRENCY_  */
    SYSCHAR_ = 487,                /* SYSCHAR_  */
    DECIMAL_ = 488,                /* DECIMAL_  */
    DATE_ = 489,                   /* DATE_  */
    BSTR_ = 490,                   /* BSTR_  */
    TBSTR_ = 491,                  /* TBSTR_  */
    LPSTR_ = 492,                  /* LPSTR_  */
    LPWSTR_ = 493,                 /* LPWSTR_  */
    LPTSTR_ = 494,                 /* LPTSTR_  */
    OBJECTREF_ = 495,              /* OBJECTREF_  */
    IUNKNOWN_ = 496,               /* IUNKNOWN_  */
    IDISPATCH_ = 497,              /* IDISPATCH_  */
    STRUCT_ = 498,                 /* STRUCT_  */
    SAFEARRAY_ = 499,              /* SAFEARRAY_  */
    BYVALSTR_ = 500,               /* BYVALSTR_  */
    LPVOID_ = 501,                 /* LPVOID_  */
    ANY_ = 502,                    /* ANY_  */
    ARRAY_ = 503,                  /* ARRAY_  */
    LPSTRUCT_ = 504,               /* LPSTRUCT_  */
    IIDPARAM_ = 505,               /* IIDPARAM_  */
    IN_ = 506,                     /* IN_  */
    OUT_ = 507,                    /* OUT_  */
    OPT_ = 508,                    /* OPT_  */
    _PARAM = 509,                  /* _PARAM  */
    _OVERRIDE = 510,               /* _OVERRIDE  */
    WITH_ = 511,                   /* WITH_  */
    NULL_ = 512,                   /* NULL_  */
    ERROR_ = 513,                  /* ERROR_  */
    HRESULT_ = 514,                /* HRESULT_  */
    CARRAY_ = 515,                 /* CARRAY_  */
    USERDEFINED_ = 516,            /* USERDEFINED_  */
    RECORD_ = 517,                 /* RECORD_  */
    FILETIME_ = 518,               /* FILETIME_  */
    BLOB_ = 519,                   /* BLOB_  */
    STREAM_ = 520,                 /* STREAM_  */
    STORAGE_ = 521,                /* STORAGE_  */
    STREAMED_OBJECT_ = 522,        /* STREAMED_OBJECT_  */
    STORED_OBJECT_ = 523,          /* STORED_OBJECT_  */
    BLOB_OBJECT_ = 524,            /* BLOB_OBJECT_  */
    CF_ = 525,                     /* CF_  */
    CLSID_ = 526,                  /* CLSID_  */
    VECTOR_ = 527,                 /* VECTOR_  */
    _SUBSYSTEM = 528,              /* _SUBSYSTEM  */
    _CORFLAGS = 529,               /* _CORFLAGS  */
    ALIGNMENT_ = 530,              /* ALIGNMENT_  */
    _IMAGEBASE = 531,              /* _IMAGEBASE  */
    _STACKRESERVE = 532,           /* _STACKRESERVE  */
    _TYPEDEF = 533,                /* _TYPEDEF  */
    _TEMPLATE = 534,               /* _TEMPLATE  */
    _TYPELIST = 535,               /* _TYPELIST  */
    _MSCORLIB = 536,               /* _MSCORLIB  */
    P_DEFINE = 537,                /* P_DEFINE  */
    P_UNDEF = 538,                 /* P_UNDEF  */
    P_IFDEF = 539,                 /* P_IFDEF  */
    P_IFNDEF = 540,                /* P_IFNDEF  */
    P_ELSE = 541,                  /* P_ELSE  */
    P_ENDIF = 542,                 /* P_ENDIF  */
    P_INCLUDE = 543,               /* P_INCLUDE  */
    CONSTRAINT_ = 544              /* CONSTRAINT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "asmparse.y"

        CorRegTypeAttr classAttr;
        CorMethodAttr methAttr;
        CorFieldAttr fieldAttr;
        CorMethodImpl implAttr;
        CorEventAttr  eventAttr;
        CorPropertyAttr propAttr;
        CorPinvokeMap pinvAttr;
        CorDeclSecurity secAct;
        CorFileFlags fileAttr;
        CorAssemblyFlags asmAttr;
        CorAssemblyFlags asmRefAttr;
        CorTypeAttr exptAttr;
        CorManifestResourceFlags manresAttr;
        double*  float64;
        int64_t* int64;
        int32_t  int32;
        char*    string;
        BinStr*  binstr;
        Labels*  labels;
        Instr*   instr;         // instruction opcode
        NVPair*  pair;
        pTyParList typarlist;
        mdToken token;
        TypeDefDescr* tdd;
        CustomDescr*  cad;
        unsigned short opcode;

#line 450 "prebuilt\\asmparse.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BAD_COMMENT_ = 3,               /* BAD_COMMENT_  */
  YYSYMBOL_BAD_LITERAL_ = 4,               /* BAD_LITERAL_  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_DOTTEDNAME = 6,                 /* DOTTEDNAME  */
  YYSYMBOL_QSTRING = 7,                    /* QSTRING  */
  YYSYMBOL_SQSTRING = 8,                   /* SQSTRING  */
  YYSYMBOL_INT32_V = 9,                    /* INT32_V  */
  YYSYMBOL_INT64_V = 10,                   /* INT64_V  */
  YYSYMBOL_FLOAT64 = 11,                   /* FLOAT64  */
  YYSYMBOL_HEXBYTE = 12,                   /* HEXBYTE  */
  YYSYMBOL_TYPEDEF_T = 13,                 /* TYPEDEF_T  */
  YYSYMBOL_TYPEDEF_M = 14,                 /* TYPEDEF_M  */
  YYSYMBOL_TYPEDEF_F = 15,                 /* TYPEDEF_F  */
  YYSYMBOL_TYPEDEF_TS = 16,                /* TYPEDEF_TS  */
  YYSYMBOL_TYPEDEF_MR = 17,                /* TYPEDEF_MR  */
  YYSYMBOL_TYPEDEF_CA = 18,                /* TYPEDEF_CA  */
  YYSYMBOL_DCOLON = 19,                    /* DCOLON  */
  YYSYMBOL_ELLIPSIS = 20,                  /* ELLIPSIS  */
  YYSYMBOL_VOID_ = 21,                     /* VOID_  */
  YYSYMBOL_BOOL_ = 22,                     /* BOOL_  */
  YYSYMBOL_CHAR_ = 23,                     /* CHAR_  */
  YYSYMBOL_UNSIGNED_ = 24,                 /* UNSIGNED_  */
  YYSYMBOL_INT_ = 25,                      /* INT_  */
  YYSYMBOL_INT8_ = 26,                     /* INT8_  */
  YYSYMBOL_INT16_ = 27,                    /* INT16_  */
  YYSYMBOL_INT32_ = 28,                    /* INT32_  */
  YYSYMBOL_INT64_ = 29,                    /* INT64_  */
  YYSYMBOL_FLOAT_ = 30,                    /* FLOAT_  */
  YYSYMBOL_FLOAT32_ = 31,                  /* FLOAT32_  */
  YYSYMBOL_FLOAT64_ = 32,                  /* FLOAT64_  */
  YYSYMBOL_BYTEARRAY_ = 33,                /* BYTEARRAY_  */
  YYSYMBOL_UINT_ = 34,                     /* UINT_  */
  YYSYMBOL_UINT8_ = 35,                    /* UINT8_  */
  YYSYMBOL_UINT16_ = 36,                   /* UINT16_  */
  YYSYMBOL_UINT32_ = 37,                   /* UINT32_  */
  YYSYMBOL_UINT64_ = 38,                   /* UINT64_  */
  YYSYMBOL_FLAGS_ = 39,                    /* FLAGS_  */
  YYSYMBOL_CALLCONV_ = 40,                 /* CALLCONV_  */
  YYSYMBOL_MDTOKEN_ = 41,                  /* MDTOKEN_  */
  YYSYMBOL_OBJECT_ = 42,                   /* OBJECT_  */
  YYSYMBOL_STRING_ = 43,                   /* STRING_  */
  YYSYMBOL_NULLREF_ = 44,                  /* NULLREF_  */
  YYSYMBOL_DEFAULT_ = 45,                  /* DEFAULT_  */
  YYSYMBOL_CDECL_ = 46,                    /* CDECL_  */
  YYSYMBOL_VARARG_ = 47,                   /* VARARG_  */
  YYSYMBOL_STDCALL_ = 48,                  /* STDCALL_  */
  YYSYMBOL_THISCALL_ = 49,                 /* THISCALL_  */
  YYSYMBOL_FASTCALL_ = 50,                 /* FASTCALL_  */
  YYSYMBOL_CLASS_ = 51,                    /* CLASS_  */
  YYSYMBOL_BYREFLIKE_ = 52,                /* BYREFLIKE_  */
  YYSYMBOL_TYPEDREF_ = 53,                 /* TYPEDREF_  */
  YYSYMBOL_UNMANAGED_ = 54,                /* UNMANAGED_  */
  YYSYMBOL_FINALLY_ = 55,                  /* FINALLY_  */
  YYSYMBOL_HANDLER_ = 56,                  /* HANDLER_  */
  YYSYMBOL_CATCH_ = 57,                    /* CATCH_  */
  YYSYMBOL_FILTER_ = 58,                   /* FILTER_  */
  YYSYMBOL_FAULT_ = 59,                    /* FAULT_  */
  YYSYMBOL_EXTENDS_ = 60,                  /* EXTENDS_  */
  YYSYMBOL_IMPLEMENTS_ = 61,               /* IMPLEMENTS_  */
  YYSYMBOL_TO_ = 62,                       /* TO_  */
  YYSYMBOL_AT_ = 63,                       /* AT_  */
  YYSYMBOL_TLS_ = 64,                      /* TLS_  */
  YYSYMBOL_TRUE_ = 65,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 66,                    /* FALSE_  */
  YYSYMBOL__INTERFACEIMPL = 67,            /* _INTERFACEIMPL  */
  YYSYMBOL_VALUE_ = 68,                    /* VALUE_  */
  YYSYMBOL_VALUETYPE_ = 69,                /* VALUETYPE_  */
  YYSYMBOL_NATIVE_ = 70,                   /* NATIVE_  */
  YYSYMBOL_INSTANCE_ = 71,                 /* INSTANCE_  */
  YYSYMBOL_SPECIALNAME_ = 72,              /* SPECIALNAME_  */
  YYSYMBOL_FORWARDER_ = 73,                /* FORWARDER_  */
  YYSYMBOL_STATIC_ = 74,                   /* STATIC_  */
  YYSYMBOL_PUBLIC_ = 75,                   /* PUBLIC_  */
  YYSYMBOL_PRIVATE_ = 76,                  /* PRIVATE_  */
  YYSYMBOL_FAMILY_ = 77,                   /* FAMILY_  */
  YYSYMBOL_FINAL_ = 78,                    /* FINAL_  */
  YYSYMBOL_SYNCHRONIZED_ = 79,             /* SYNCHRONIZED_  */
  YYSYMBOL_INTERFACE_ = 80,                /* INTERFACE_  */
  YYSYMBOL_SEALED_ = 81,                   /* SEALED_  */
  YYSYMBOL_NESTED_ = 82,                   /* NESTED_  */
  YYSYMBOL_ABSTRACT_ = 83,                 /* ABSTRACT_  */
  YYSYMBOL_AUTO_ = 84,                     /* AUTO_  */
  YYSYMBOL_SEQUENTIAL_ = 85,               /* SEQUENTIAL_  */
  YYSYMBOL_EXPLICIT_ = 86,                 /* EXPLICIT_  */
  YYSYMBOL_ANSI_ = 87,                     /* ANSI_  */
  YYSYMBOL_UNICODE_ = 88,                  /* UNICODE_  */
  YYSYMBOL_AUTOCHAR_ = 89,                 /* AUTOCHAR_  */
  YYSYMBOL_IMPORT_ = 90,                   /* IMPORT_  */
  YYSYMBOL_ENUM_ = 91,                     /* ENUM_  */
  YYSYMBOL_VIRTUAL_ = 92,                  /* VIRTUAL_  */
  YYSYMBOL_NOINLINING_ = 93,               /* NOINLINING_  */
  YYSYMBOL_AGGRESSIVEINLINING_ = 94,       /* AGGRESSIVEINLINING_  */
  YYSYMBOL_NOOPTIMIZATION_ = 95,           /* NOOPTIMIZATION_  */
  YYSYMBOL_AGGRESSIVEOPTIMIZATION_ = 96,   /* AGGRESSIVEOPTIMIZATION_  */
  YYSYMBOL_UNMANAGEDEXP_ = 97,             /* UNMANAGEDEXP_  */
  YYSYMBOL_BEFOREFIELDINIT_ = 98,          /* BEFOREFIELDINIT_  */
  YYSYMBOL_STRICT_ = 99,                   /* STRICT_  */
  YYSYMBOL_RETARGETABLE_ = 100,            /* RETARGETABLE_  */
  YYSYMBOL_WINDOWSRUNTIME_ = 101,          /* WINDOWSRUNTIME_  */
  YYSYMBOL_NOPLATFORM_ = 102,              /* NOPLATFORM_  */
  YYSYMBOL_METHOD_ = 103,                  /* METHOD_  */
  YYSYMBOL_FIELD_ = 104,                   /* FIELD_  */
  YYSYMBOL_PINNED_ = 105,                  /* PINNED_  */
  YYSYMBOL_MODREQ_ = 106,                  /* MODREQ_  */
  YYSYMBOL_MODOPT_ = 107,                  /* MODOPT_  */
  YYSYMBOL_SERIALIZABLE_ = 108,            /* SERIALIZABLE_  */
  YYSYMBOL_PROPERTY_ = 109,                /* PROPERTY_  */
  YYSYMBOL_TYPE_ = 110,                    /* TYPE_  */
  YYSYMBOL_ASSEMBLY_ = 111,                /* ASSEMBLY_  */
  YYSYMBOL_FAMANDASSEM_ = 112,             /* FAMANDASSEM_  */
  YYSYMBOL_FAMORASSEM_ = 113,              /* FAMORASSEM_  */
  YYSYMBOL_PRIVATESCOPE_ = 114,            /* PRIVATESCOPE_  */
  YYSYMBOL_HIDEBYSIG_ = 115,               /* HIDEBYSIG_  */
  YYSYMBOL_NEWSLOT_ = 116,                 /* NEWSLOT_  */
  YYSYMBOL_RTSPECIALNAME_ = 117,           /* RTSPECIALNAME_  */
  YYSYMBOL_PINVOKEIMPL_ = 118,             /* PINVOKEIMPL_  */
  YYSYMBOL__CTOR = 119,                    /* _CTOR  */
  YYSYMBOL__CCTOR = 120,                   /* _CCTOR  */
  YYSYMBOL_LITERAL_ = 121,                 /* LITERAL_  */
  YYSYMBOL_NOTSERIALIZED_ = 122,           /* NOTSERIALIZED_  */
  YYSYMBOL_INITONLY_ = 123,                /* INITONLY_  */
  YYSYMBOL_REQSECOBJ_ = 124,               /* REQSECOBJ_  */
  YYSYMBOL_CIL_ = 125,                     /* CIL_  */
  YYSYMBOL_OPTIL_ = 126,                   /* OPTIL_  */
  YYSYMBOL_MANAGED_ = 127,                 /* MANAGED_  */
  YYSYMBOL_FORWARDREF_ = 128,              /* FORWARDREF_  */
  YYSYMBOL_PRESERVESIG_ = 129,             /* PRESERVESIG_  */
  YYSYMBOL_RUNTIME_ = 130,                 /* RUNTIME_  */
  YYSYMBOL_INTERNALCALL_ = 131,            /* INTERNALCALL_  */
  YYSYMBOL__IMPORT = 132,                  /* _IMPORT  */
  YYSYMBOL_NOMANGLE_ = 133,                /* NOMANGLE_  */
  YYSYMBOL_LASTERR_ = 134,                 /* LASTERR_  */
  YYSYMBOL_WINAPI_ = 135,                  /* WINAPI_  */
  YYSYMBOL_AS_ = 136,                      /* AS_  */
  YYSYMBOL_BESTFIT_ = 137,                 /* BESTFIT_  */
  YYSYMBOL_ON_ = 138,                      /* ON_  */
  YYSYMBOL_OFF_ = 139,                     /* OFF_  */
  YYSYMBOL_CHARMAPERROR_ = 140,            /* CHARMAPERROR_  */
  YYSYMBOL_INSTR_NONE = 141,               /* INSTR_NONE  */
  YYSYMBOL_INSTR_VAR = 142,                /* INSTR_VAR  */
  YYSYMBOL_INSTR_I = 143,                  /* INSTR_I  */
  YYSYMBOL_INSTR_I8 = 144,                 /* INSTR_I8  */
  YYSYMBOL_INSTR_R = 145,                  /* INSTR_R  */
  YYSYMBOL_INSTR_BRTARGET = 146,           /* INSTR_BRTARGET  */
  YYSYMBOL_INSTR_METHOD = 147,             /* INSTR_METHOD  */
  YYSYMBOL_INSTR_FIELD = 148,              /* INSTR_FIELD  */
  YYSYMBOL_INSTR_TYPE = 149,               /* INSTR_TYPE  */
  YYSYMBOL_INSTR_STRING = 150,             /* INSTR_STRING  */
  YYSYMBOL_INSTR_SIG = 151,                /* INSTR_SIG  */
  YYSYMBOL_INSTR_TOK = 152,                /* INSTR_TOK  */
  YYSYMBOL_INSTR_SWITCH = 153,             /* INSTR_SWITCH  */
  YYSYMBOL__CLASS = 154,                   /* _CLASS  */
  YYSYMBOL__NAMESPACE = 155,               /* _NAMESPACE  */
  YYSYMBOL__METHOD = 156,                  /* _METHOD  */
  YYSYMBOL__FIELD = 157,                   /* _FIELD  */
  YYSYMBOL__DATA = 158,                    /* _DATA  */
  YYSYMBOL__THIS = 159,                    /* _THIS  */
  YYSYMBOL__BASE = 160,                    /* _BASE  */
  YYSYMBOL__NESTER = 161,                  /* _NESTER  */
  YYSYMBOL__EMITBYTE = 162,                /* _EMITBYTE  */
  YYSYMBOL__TRY = 163,                     /* _TRY  */
  YYSYMBOL__MAXSTACK = 164,                /* _MAXSTACK  */
  YYSYMBOL__LOCALS = 165,                  /* _LOCALS  */
  YYSYMBOL__ENTRYPOINT = 166,              /* _ENTRYPOINT  */
  YYSYMBOL__ZEROINIT = 167,                /* _ZEROINIT  */
  YYSYMBOL__EVENT = 168,                   /* _EVENT  */
  YYSYMBOL__ADDON = 169,                   /* _ADDON  */
  YYSYMBOL__REMOVEON = 170,                /* _REMOVEON  */
  YYSYMBOL__FIRE = 171,                    /* _FIRE  */
  YYSYMBOL__OTHER = 172,                   /* _OTHER  */
  YYSYMBOL__PROPERTY = 173,                /* _PROPERTY  */
  YYSYMBOL__SET = 174,                     /* _SET  */
  YYSYMBOL__GET = 175,                     /* _GET  */
  YYSYMBOL__PERMISSION = 176,              /* _PERMISSION  */
  YYSYMBOL__PERMISSIONSET = 177,           /* _PERMISSIONSET  */
  YYSYMBOL_REQUEST_ = 178,                 /* REQUEST_  */
  YYSYMBOL_DEMAND_ = 179,                  /* DEMAND_  */
  YYSYMBOL_ASSERT_ = 180,                  /* ASSERT_  */
  YYSYMBOL_DENY_ = 181,                    /* DENY_  */
  YYSYMBOL_PERMITONLY_ = 182,              /* PERMITONLY_  */
  YYSYMBOL_LINKCHECK_ = 183,               /* LINKCHECK_  */
  YYSYMBOL_INHERITCHECK_ = 184,            /* INHERITCHECK_  */
  YYSYMBOL_REQMIN_ = 185,                  /* REQMIN_  */
  YYSYMBOL_REQOPT_ = 186,                  /* REQOPT_  */
  YYSYMBOL_REQREFUSE_ = 187,               /* REQREFUSE_  */
  YYSYMBOL_PREJITGRANT_ = 188,             /* PREJITGRANT_  */
  YYSYMBOL_PREJITDENY_ = 189,              /* PREJITDENY_  */
  YYSYMBOL_NONCASDEMAND_ = 190,            /* NONCASDEMAND_  */
  YYSYMBOL_NONCASLINKDEMAND_ = 191,        /* NONCASLINKDEMAND_  */
  YYSYMBOL_NONCASINHERITANCE_ = 192,       /* NONCASINHERITANCE_  */
  YYSYMBOL__LINE = 193,                    /* _LINE  */
  YYSYMBOL_P_LINE = 194,                   /* P_LINE  */
  YYSYMBOL__LANGUAGE = 195,                /* _LANGUAGE  */
  YYSYMBOL__CUSTOM = 196,                  /* _CUSTOM  */
  YYSYMBOL_INIT_ = 197,                    /* INIT_  */
  YYSYMBOL__SIZE = 198,                    /* _SIZE  */
  YYSYMBOL__PACK = 199,                    /* _PACK  */
  YYSYMBOL__VTABLE = 200,                  /* _VTABLE  */
  YYSYMBOL__VTFIXUP = 201,                 /* _VTFIXUP  */
  YYSYMBOL_FROMUNMANAGED_ = 202,           /* FROMUNMANAGED_  */
  YYSYMBOL_CALLMOSTDERIVED_ = 203,         /* CALLMOSTDERIVED_  */
  YYSYMBOL__VTENTRY = 204,                 /* _VTENTRY  */
  YYSYMBOL_RETAINAPPDOMAIN_ = 205,         /* RETAINAPPDOMAIN_  */
  YYSYMBOL__FILE = 206,                    /* _FILE  */
  YYSYMBOL_NOMETADATA_ = 207,              /* NOMETADATA_  */
  YYSYMBOL__TYPEREF = 208,                 /* _TYPEREF  */
  YYSYMBOL__HASH = 209,                    /* _HASH  */
  YYSYMBOL__ASSEMBLY = 210,                /* _ASSEMBLY  */
  YYSYMBOL__PUBLICKEY = 211,               /* _PUBLICKEY  */
  YYSYMBOL__PUBLICKEYTOKEN = 212,          /* _PUBLICKEYTOKEN  */
  YYSYMBOL_ALGORITHM_ = 213,               /* ALGORITHM_  */
  YYSYMBOL__VER = 214,                     /* _VER  */
  YYSYMBOL__LOCALE = 215,                  /* _LOCALE  */
  YYSYMBOL_EXTERN_ = 216,                  /* EXTERN_  */
  YYSYMBOL__MRESOURCE = 217,               /* _MRESOURCE  */
  YYSYMBOL__MODULE = 218,                  /* _MODULE  */
  YYSYMBOL__EXPORT = 219,                  /* _EXPORT  */
  YYSYMBOL_LEGACY_ = 220,                  /* LEGACY_  */
  YYSYMBOL_LIBRARY_ = 221,                 /* LIBRARY_  */
  YYSYMBOL_X86_ = 222,                     /* X86_  */
  YYSYMBOL_AMD64_ = 223,                   /* AMD64_  */
  YYSYMBOL_ARM_ = 224,                     /* ARM_  */
  YYSYMBOL_ARM64_ = 225,                   /* ARM64_  */
  YYSYMBOL_MARSHAL_ = 226,                 /* MARSHAL_  */
  YYSYMBOL_CUSTOM_ = 227,                  /* CUSTOM_  */
  YYSYMBOL_SYSSTRING_ = 228,               /* SYSSTRING_  */
  YYSYMBOL_FIXED_ = 229,                   /* FIXED_  */
  YYSYMBOL_VARIANT_ = 230,                 /* VARIANT_  */
  YYSYMBOL_CURRENCY_ = 231,                /* CURRENCY_  */
  YYSYMBOL_SYSCHAR_ = 232,                 /* SYSCHAR_  */
  YYSYMBOL_DECIMAL_ = 233,                 /* DECIMAL_  */
  YYSYMBOL_DATE_ = 234,                    /* DATE_  */
  YYSYMBOL_BSTR_ = 235,                    /* BSTR_  */
  YYSYMBOL_TBSTR_ = 236,                   /* TBSTR_  */
  YYSYMBOL_LPSTR_ = 237,                   /* LPSTR_  */
  YYSYMBOL_LPWSTR_ = 238,                  /* LPWSTR_  */
  YYSYMBOL_LPTSTR_ = 239,                  /* LPTSTR_  */
  YYSYMBOL_OBJECTREF_ = 240,               /* OBJECTREF_  */
  YYSYMBOL_IUNKNOWN_ = 241,                /* IUNKNOWN_  */
  YYSYMBOL_IDISPATCH_ = 242,               /* IDISPATCH_  */
  YYSYMBOL_STRUCT_ = 243,                  /* STRUCT_  */
  YYSYMBOL_SAFEARRAY_ = 244,               /* SAFEARRAY_  */
  YYSYMBOL_BYVALSTR_ = 245,                /* BYVALSTR_  */
  YYSYMBOL_LPVOID_ = 246,                  /* LPVOID_  */
  YYSYMBOL_ANY_ = 247,                     /* ANY_  */
  YYSYMBOL_ARRAY_ = 248,                   /* ARRAY_  */
  YYSYMBOL_LPSTRUCT_ = 249,                /* LPSTRUCT_  */
  YYSYMBOL_IIDPARAM_ = 250,                /* IIDPARAM_  */
  YYSYMBOL_IN_ = 251,                      /* IN_  */
  YYSYMBOL_OUT_ = 252,                     /* OUT_  */
  YYSYMBOL_OPT_ = 253,                     /* OPT_  */
  YYSYMBOL__PARAM = 254,                   /* _PARAM  */
  YYSYMBOL__OVERRIDE = 255,                /* _OVERRIDE  */
  YYSYMBOL_WITH_ = 256,                    /* WITH_  */
  YYSYMBOL_NULL_ = 257,                    /* NULL_  */
  YYSYMBOL_ERROR_ = 258,                   /* ERROR_  */
  YYSYMBOL_HRESULT_ = 259,                 /* HRESULT_  */
  YYSYMBOL_CARRAY_ = 260,                  /* CARRAY_  */
  YYSYMBOL_USERDEFINED_ = 261,             /* USERDEFINED_  */
  YYSYMBOL_RECORD_ = 262,                  /* RECORD_  */
  YYSYMBOL_FILETIME_ = 263,                /* FILETIME_  */
  YYSYMBOL_BLOB_ = 264,                    /* BLOB_  */
  YYSYMBOL_STREAM_ = 265,                  /* STREAM_  */
  YYSYMBOL_STORAGE_ = 266,                 /* STORAGE_  */
  YYSYMBOL_STREAMED_OBJECT_ = 267,         /* STREAMED_OBJECT_  */
  YYSYMBOL_STORED_OBJECT_ = 268,           /* STORED_OBJECT_  */
  YYSYMBOL_BLOB_OBJECT_ = 269,             /* BLOB_OBJECT_  */
  YYSYMBOL_CF_ = 270,                      /* CF_  */
  YYSYMBOL_CLSID_ = 271,                   /* CLSID_  */
  YYSYMBOL_VECTOR_ = 272,                  /* VECTOR_  */
  YYSYMBOL__SUBSYSTEM = 273,               /* _SUBSYSTEM  */
  YYSYMBOL__CORFLAGS = 274,                /* _CORFLAGS  */
  YYSYMBOL_ALIGNMENT_ = 275,               /* ALIGNMENT_  */
  YYSYMBOL__IMAGEBASE = 276,               /* _IMAGEBASE  */
  YYSYMBOL__STACKRESERVE = 277,            /* _STACKRESERVE  */
  YYSYMBOL__TYPEDEF = 278,                 /* _TYPEDEF  */
  YYSYMBOL__TEMPLATE = 279,                /* _TEMPLATE  */
  YYSYMBOL__TYPELIST = 280,                /* _TYPELIST  */
  YYSYMBOL__MSCORLIB = 281,                /* _MSCORLIB  */
  YYSYMBOL_P_DEFINE = 282,                 /* P_DEFINE  */
  YYSYMBOL_P_UNDEF = 283,                  /* P_UNDEF  */
  YYSYMBOL_P_IFDEF = 284,                  /* P_IFDEF  */
  YYSYMBOL_P_IFNDEF = 285,                 /* P_IFNDEF  */
  YYSYMBOL_P_ELSE = 286,                   /* P_ELSE  */
  YYSYMBOL_P_ENDIF = 287,                  /* P_ENDIF  */
  YYSYMBOL_P_INCLUDE = 288,                /* P_INCLUDE  */
  YYSYMBOL_CONSTRAINT_ = 289,              /* CONSTRAINT_  */
  YYSYMBOL_290_ = 290,                     /* '{'  */
  YYSYMBOL_291_ = 291,                     /* '}'  */
  YYSYMBOL_292_ = 292,                     /* '+'  */
  YYSYMBOL_293_ = 293,                     /* ','  */
  YYSYMBOL_294_ = 294,                     /* '.'  */
  YYSYMBOL_295_ = 295,                     /* '('  */
  YYSYMBOL_296_ = 296,                     /* ')'  */
  YYSYMBOL_297_ = 297,                     /* ';'  */
  YYSYMBOL_298_ = 298,                     /* '='  */
  YYSYMBOL_299_ = 299,                     /* '['  */
  YYSYMBOL_300_ = 300,                     /* ']'  */
  YYSYMBOL_301_ = 301,                     /* '<'  */
  YYSYMBOL_302_ = 302,                     /* '>'  */
  YYSYMBOL_303_ = 303,                     /* '-'  */
  YYSYMBOL_304_ = 304,                     /* ':'  */
  YYSYMBOL_305_ = 305,                     /* '*'  */
  YYSYMBOL_306_ = 306,                     /* '&'  */
  YYSYMBOL_307_ = 307,                     /* '/'  */
  YYSYMBOL_308_ = 308,                     /* '!'  */
  YYSYMBOL_YYACCEPT = 309,                 /* $accept  */
  YYSYMBOL_decls = 310,                    /* decls  */
  YYSYMBOL_decl = 311,                     /* decl  */
  YYSYMBOL_classNameSeq = 312,             /* classNameSeq  */
  YYSYMBOL_compQstring = 313,              /* compQstring  */
  YYSYMBOL_languageDecl = 314,             /* languageDecl  */
  YYSYMBOL_id = 315,                       /* id  */
  YYSYMBOL_dottedName = 316,               /* dottedName  */
  YYSYMBOL_int32 = 317,                    /* int32  */
  YYSYMBOL_int64 = 318,                    /* int64  */
  YYSYMBOL_float64 = 319,                  /* float64  */
  YYSYMBOL_typedefDecl = 320,              /* typedefDecl  */
  YYSYMBOL_compControl = 321,              /* compControl  */
  YYSYMBOL_customDescr = 322,              /* customDescr  */
  YYSYMBOL_customDescrWithOwner = 323,     /* customDescrWithOwner  */
  YYSYMBOL_customHead = 324,               /* customHead  */
  YYSYMBOL_customHeadWithOwner = 325,      /* customHeadWithOwner  */
  YYSYMBOL_customType = 326,               /* customType  */
  YYSYMBOL_ownerType = 327,                /* ownerType  */
  YYSYMBOL_customBlobDescr = 328,          /* customBlobDescr  */
  YYSYMBOL_customBlobArgs = 329,           /* customBlobArgs  */
  YYSYMBOL_customBlobNVPairs = 330,        /* customBlobNVPairs  */
  YYSYMBOL_fieldOrProp = 331,              /* fieldOrProp  */
  YYSYMBOL_customAttrDecl = 332,           /* customAttrDecl  */
  YYSYMBOL_serializType = 333,             /* serializType  */
  YYSYMBOL_moduleHead = 334,               /* moduleHead  */
  YYSYMBOL_vtfixupDecl = 335,              /* vtfixupDecl  */
  YYSYMBOL_vtfixupAttr = 336,              /* vtfixupAttr  */
  YYSYMBOL_vtableDecl = 337,               /* vtableDecl  */
  YYSYMBOL_vtableHead = 338,               /* vtableHead  */
  YYSYMBOL_nameSpaceHead = 339,            /* nameSpaceHead  */
  YYSYMBOL__class = 340,                   /* _class  */
  YYSYMBOL_classHeadBegin = 341,           /* classHeadBegin  */
  YYSYMBOL_classHead = 342,                /* classHead  */
  YYSYMBOL_classAttr = 343,                /* classAttr  */
  YYSYMBOL_extendsClause = 344,            /* extendsClause  */
  YYSYMBOL_implClause = 345,               /* implClause  */
  YYSYMBOL_classDecls = 346,               /* classDecls  */
  YYSYMBOL_implList = 347,                 /* implList  */
  YYSYMBOL_typeList = 348,                 /* typeList  */
  YYSYMBOL_typeListNotEmpty = 349,         /* typeListNotEmpty  */
  YYSYMBOL_typarsClause = 350,             /* typarsClause  */
  YYSYMBOL_typarAttrib = 351,              /* typarAttrib  */
  YYSYMBOL_typarAttribs = 352,             /* typarAttribs  */
  YYSYMBOL_typars = 353,                   /* typars  */
  YYSYMBOL_typarsRest = 354,               /* typarsRest  */
  YYSYMBOL_tyBound = 355,                  /* tyBound  */
  YYSYMBOL_genArity = 356,                 /* genArity  */
  YYSYMBOL_genArityNotEmpty = 357,         /* genArityNotEmpty  */
  YYSYMBOL_classDecl = 358,                /* classDecl  */
  YYSYMBOL_fieldDecl = 359,                /* fieldDecl  */
  YYSYMBOL_fieldAttr = 360,                /* fieldAttr  */
  YYSYMBOL_atOpt = 361,                    /* atOpt  */
  YYSYMBOL_initOpt = 362,                  /* initOpt  */
  YYSYMBOL_repeatOpt = 363,                /* repeatOpt  */
  YYSYMBOL_methodRef = 364,                /* methodRef  */
  YYSYMBOL_callConv = 365,                 /* callConv  */
  YYSYMBOL_callKind = 366,                 /* callKind  */
  YYSYMBOL_mdtoken = 367,                  /* mdtoken  */
  YYSYMBOL_memberRef = 368,                /* memberRef  */
  YYSYMBOL_eventHead = 369,                /* eventHead  */
  YYSYMBOL_eventAttr = 370,                /* eventAttr  */
  YYSYMBOL_eventDecls = 371,               /* eventDecls  */
  YYSYMBOL_eventDecl = 372,                /* eventDecl  */
  YYSYMBOL_propHead = 373,                 /* propHead  */
  YYSYMBOL_propAttr = 374,                 /* propAttr  */
  YYSYMBOL_propDecls = 375,                /* propDecls  */
  YYSYMBOL_propDecl = 376,                 /* propDecl  */
  YYSYMBOL_methodHeadPart1 = 377,          /* methodHeadPart1  */
  YYSYMBOL_marshalClause = 378,            /* marshalClause  */
  YYSYMBOL_marshalBlob = 379,              /* marshalBlob  */
  YYSYMBOL_marshalBlobHead = 380,          /* marshalBlobHead  */
  YYSYMBOL_methodHead = 381,               /* methodHead  */
  YYSYMBOL_methAttr = 382,                 /* methAttr  */
  YYSYMBOL_pinvAttr = 383,                 /* pinvAttr  */
  YYSYMBOL_methodName = 384,               /* methodName  */
  YYSYMBOL_paramAttr = 385,                /* paramAttr  */
  YYSYMBOL_implAttr = 386,                 /* implAttr  */
  YYSYMBOL_localsHead = 387,               /* localsHead  */
  YYSYMBOL_methodDecls = 388,              /* methodDecls  */
  YYSYMBOL_methodDecl = 389,               /* methodDecl  */
  YYSYMBOL_scopeBlock = 390,               /* scopeBlock  */
  YYSYMBOL_scopeOpen = 391,                /* scopeOpen  */
  YYSYMBOL_sehBlock = 392,                 /* sehBlock  */
  YYSYMBOL_sehClauses = 393,               /* sehClauses  */
  YYSYMBOL_tryBlock = 394,                 /* tryBlock  */
  YYSYMBOL_tryHead = 395,                  /* tryHead  */
  YYSYMBOL_sehClause = 396,                /* sehClause  */
  YYSYMBOL_filterClause = 397,             /* filterClause  */
  YYSYMBOL_filterHead = 398,               /* filterHead  */
  YYSYMBOL_catchClause = 399,              /* catchClause  */
  YYSYMBOL_finallyClause = 400,            /* finallyClause  */
  YYSYMBOL_faultClause = 401,              /* faultClause  */
  YYSYMBOL_handlerBlock = 402,             /* handlerBlock  */
  YYSYMBOL_dataDecl = 403,                 /* dataDecl  */
  YYSYMBOL_ddHead = 404,                   /* ddHead  */
  YYSYMBOL_tls = 405,                      /* tls  */
  YYSYMBOL_ddBody = 406,                   /* ddBody  */
  YYSYMBOL_ddItemList = 407,               /* ddItemList  */
  YYSYMBOL_ddItemCount = 408,              /* ddItemCount  */
  YYSYMBOL_ddItem = 409,                   /* ddItem  */
  YYSYMBOL_fieldSerInit = 410,             /* fieldSerInit  */
  YYSYMBOL_bytearrayhead = 411,            /* bytearrayhead  */
  YYSYMBOL_bytes = 412,                    /* bytes  */
  YYSYMBOL_hexbytes = 413,                 /* hexbytes  */
  YYSYMBOL_fieldInit = 414,                /* fieldInit  */
  YYSYMBOL_serInit = 415,                  /* serInit  */
  YYSYMBOL_f32seq = 416,                   /* f32seq  */
  YYSYMBOL_f64seq = 417,                   /* f64seq  */
  YYSYMBOL_i64seq = 418,                   /* i64seq  */
  YYSYMBOL_i32seq = 419,                   /* i32seq  */
  YYSYMBOL_i16seq = 420,                   /* i16seq  */
  YYSYMBOL_i8seq = 421,                    /* i8seq  */
  YYSYMBOL_boolSeq = 422,                  /* boolSeq  */
  YYSYMBOL_sqstringSeq = 423,              /* sqstringSeq  */
  YYSYMBOL_classSeq = 424,                 /* classSeq  */
  YYSYMBOL_objSeq = 425,                   /* objSeq  */
  YYSYMBOL_methodSpec = 426,               /* methodSpec  */
  YYSYMBOL_instr_none = 427,               /* instr_none  */
  YYSYMBOL_instr_var = 428,                /* instr_var  */
  YYSYMBOL_instr_i = 429,                  /* instr_i  */
  YYSYMBOL_instr_i8 = 430,                 /* instr_i8  */
  YYSYMBOL_instr_r = 431,                  /* instr_r  */
  YYSYMBOL_instr_brtarget = 432,           /* instr_brtarget  */
  YYSYMBOL_instr_method = 433,             /* instr_method  */
  YYSYMBOL_instr_field = 434,              /* instr_field  */
  YYSYMBOL_instr_type = 435,               /* instr_type  */
  YYSYMBOL_instr_string = 436,             /* instr_string  */
  YYSYMBOL_instr_sig = 437,                /* instr_sig  */
  YYSYMBOL_instr_tok = 438,                /* instr_tok  */
  YYSYMBOL_instr_switch = 439,             /* instr_switch  */
  YYSYMBOL_instr_r_head = 440,             /* instr_r_head  */
  YYSYMBOL_instr = 441,                    /* instr  */
  YYSYMBOL_labels = 442,                   /* labels  */
  YYSYMBOL_tyArgs0 = 443,                  /* tyArgs0  */
  YYSYMBOL_tyArgs1 = 444,                  /* tyArgs1  */
  YYSYMBOL_tyArgs2 = 445,                  /* tyArgs2  */
  YYSYMBOL_sigArgs0 = 446,                 /* sigArgs0  */
  YYSYMBOL_sigArgs1 = 447,                 /* sigArgs1  */
  YYSYMBOL_sigArg = 448,                   /* sigArg  */
  YYSYMBOL_className = 449,                /* className  */
  YYSYMBOL_slashedName = 450,              /* slashedName  */
  YYSYMBOL_typeSpec = 451,                 /* typeSpec  */
  YYSYMBOL_nativeType = 452,               /* nativeType  */
  YYSYMBOL_iidParamIndex = 453,            /* iidParamIndex  */
  YYSYMBOL_variantType = 454,              /* variantType  */
  YYSYMBOL_type = 455,                     /* type  */
  YYSYMBOL_simpleType = 456,               /* simpleType  */
  YYSYMBOL_bounds1 = 457,                  /* bounds1  */
  YYSYMBOL_bound = 458,                    /* bound  */
  YYSYMBOL_secDecl = 459,                  /* secDecl  */
  YYSYMBOL_secAttrSetBlob = 460,           /* secAttrSetBlob  */
  YYSYMBOL_secAttrBlob = 461,              /* secAttrBlob  */
  YYSYMBOL_psetHead = 462,                 /* psetHead  */
  YYSYMBOL_nameValPairs = 463,             /* nameValPairs  */
  YYSYMBOL_nameValPair = 464,              /* nameValPair  */
  YYSYMBOL_truefalse = 465,                /* truefalse  */
  YYSYMBOL_caValue = 466,                  /* caValue  */
  YYSYMBOL_secAction = 467,                /* secAction  */
  YYSYMBOL_esHead = 468,                   /* esHead  */
  YYSYMBOL_extSourceSpec = 469,            /* extSourceSpec  */
  YYSYMBOL_fileDecl = 470,                 /* fileDecl  */
  YYSYMBOL_fileAttr = 471,                 /* fileAttr  */
  YYSYMBOL_fileEntry = 472,                /* fileEntry  */
  YYSYMBOL_hashHead = 473,                 /* hashHead  */
  YYSYMBOL_assemblyHead = 474,             /* assemblyHead  */
  YYSYMBOL_asmAttr = 475,                  /* asmAttr  */
  YYSYMBOL_assemblyDecls = 476,            /* assemblyDecls  */
  YYSYMBOL_assemblyDecl = 477,             /* assemblyDecl  */
  YYSYMBOL_intOrWildcard = 478,            /* intOrWildcard  */
  YYSYMBOL_asmOrRefDecl = 479,             /* asmOrRefDecl  */
  YYSYMBOL_publicKeyHead = 480,            /* publicKeyHead  */
  YYSYMBOL_publicKeyTokenHead = 481,       /* publicKeyTokenHead  */
  YYSYMBOL_localeHead = 482,               /* localeHead  */
  YYSYMBOL_assemblyRefHead = 483,          /* assemblyRefHead  */
  YYSYMBOL_assemblyRefDecls = 484,         /* assemblyRefDecls  */
  YYSYMBOL_assemblyRefDecl = 485,          /* assemblyRefDecl  */
  YYSYMBOL_exptypeHead = 486,              /* exptypeHead  */
  YYSYMBOL_exportHead = 487,               /* exportHead  */
  YYSYMBOL_exptAttr = 488,                 /* exptAttr  */
  YYSYMBOL_exptypeDecls = 489,             /* exptypeDecls  */
  YYSYMBOL_exptypeDecl = 490,              /* exptypeDecl  */
  YYSYMBOL_manifestResHead = 491,          /* manifestResHead  */
  YYSYMBOL_manresAttr = 492,               /* manresAttr  */
  YYSYMBOL_manifestResDecls = 493,         /* manifestResDecls  */
  YYSYMBOL_manifestResDecl = 494           /* manifestResDecl  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3700

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  309
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  186
/* YYNRULES -- Number of rules.  */
#define YYNRULES  852
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1603

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   544


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   308,     2,     2,     2,     2,   306,     2,
     295,   296,   305,   292,   293,   303,   294,   307,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   304,   297,
     301,   298,   302,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   299,     2,   300,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   290,     2,   291,     2,     2,     2,     2,
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
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   189,   189,   190,   193,   194,   195,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   222,   223,   226,   229,   230,   231,   232,   233,   234,
     237,   238,   241,   242,   245,   246,   248,   253,   254,   257,
     258,   259,   262,   265,   266,   269,   270,   271,   275,   276,
     277,   278,   279,   284,   285,   286,   287,   290,   293,   294,
     298,   299,   303,   304,   305,   306,   309,   310,   311,   313,
     316,   319,   325,   328,   329,   333,   339,   340,   342,   345,
     346,   352,   355,   356,   359,   363,   364,   372,   373,   374,
     375,   377,   379,   384,   385,   386,   393,   397,   398,   399,
     400,   401,   402,   405,   408,   412,   415,   418,   424,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   456,   457,   460,   461,
     464,   465,   468,   469,   473,   474,   477,   478,   481,   482,
     485,   486,   487,   488,   489,   490,   491,   494,   495,   498,
     499,   502,   503,   506,   509,   510,   513,   517,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     538,   547,   548,   549,   554,   560,   561,   562,   569,   574,
     575,   576,   577,   578,   579,   580,   581,   593,   595,   596,
     597,   598,   599,   600,   601,   604,   605,   608,   609,   612,
     613,   617,   634,   640,   656,   661,   662,   663,   666,   667,
     668,   669,   672,   673,   674,   675,   676,   677,   678,   679,
     682,   685,   690,   694,   698,   700,   702,   707,   708,   712,
     713,   714,   717,   718,   721,   722,   723,   724,   725,   726,
     727,   728,   732,   738,   739,   740,   743,   744,   748,   749,
     750,   751,   752,   753,   754,   758,   764,   765,   768,   769,
     772,   775,   791,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   810,   811,   814,   817,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   840,   841,   842,   845,   846,   847,   848,   849,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   862,
     863,   864,   865,   866,   867,   870,   874,   875,   878,   879,
     880,   881,   883,   886,   887,   888,   889,   890,   891,   892,
     893,   894,   895,   896,   906,   916,   918,   921,   928,   929,
     934,   940,   941,   943,   964,   967,   971,   974,   975,   978,
     979,   980,   984,   989,   990,   991,   992,   996,   997,   999,
    1003,  1007,  1012,  1016,  1020,  1021,  1022,  1027,  1030,  1031,
    1034,  1035,  1036,  1039,  1040,  1043,  1044,  1047,  1048,  1053,
    1054,  1055,  1056,  1063,  1070,  1077,  1084,  1092,  1100,  1101,
    1102,  1103,  1104,  1105,  1109,  1112,  1114,  1116,  1118,  1120,
    1122,  1124,  1126,  1128,  1130,  1132,  1134,  1136,  1138,  1140,
    1142,  1144,  1146,  1150,  1153,  1154,  1157,  1158,  1162,  1163,
    1164,  1169,  1170,  1171,  1173,  1175,  1177,  1178,  1179,  1183,
    1187,  1191,  1195,  1199,  1203,  1207,  1211,  1215,  1219,  1223,
    1227,  1231,  1235,  1239,  1243,  1247,  1251,  1258,  1259,  1261,
    1265,  1266,  1268,  1272,  1273,  1277,  1278,  1281,  1282,  1285,
    1286,  1289,  1290,  1294,  1295,  1296,  1300,  1301,  1302,  1304,
    1308,  1309,  1313,  1319,  1322,  1325,  1328,  1331,  1334,  1337,
    1345,  1348,  1351,  1354,  1357,  1360,  1363,  1367,  1368,  1369,
    1370,  1371,  1372,  1373,  1374,  1383,  1384,  1385,  1392,  1400,
    1408,  1414,  1420,  1426,  1430,  1431,  1433,  1435,  1439,  1445,
    1448,  1449,  1450,  1451,  1452,  1456,  1457,  1460,  1461,  1464,
    1465,  1469,  1470,  1473,  1474,  1477,  1478,  1479,  1483,  1484,
    1485,  1486,  1487,  1488,  1489,  1490,  1493,  1499,  1506,  1507,
    1510,  1511,  1512,  1513,  1517,  1518,  1525,  1531,  1533,  1536,
    1538,  1539,  1541,  1543,  1544,  1545,  1546,  1547,  1548,  1549,
    1550,  1551,  1552,  1553,  1554,  1555,  1556,  1557,  1558,  1559,
    1561,  1563,  1568,  1573,  1576,  1578,  1580,  1581,  1582,  1583,
    1584,  1586,  1588,  1590,  1591,  1593,  1596,  1600,  1601,  1602,
    1603,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,  1615,
    1616,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,  1627,
    1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,
    1638,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,  1649,  1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,
    1658,  1659,  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1667,
    1671,  1677,  1678,  1679,  1680,  1681,  1682,  1683,  1684,  1685,
    1687,  1689,  1696,  1703,  1709,  1715,  1730,  1745,  1746,  1747,
    1748,  1749,  1750,  1751,  1754,  1755,  1756,  1757,  1758,  1759,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1774,  1775,  1778,  1779,  1780,  1781,  1784,  1788,
    1790,  1792,  1793,  1794,  1796,  1805,  1806,  1807,  1810,  1813,
    1818,  1819,  1823,  1824,  1827,  1830,  1831,  1834,  1837,  1840,
    1843,  1847,  1853,  1859,  1865,  1873,  1874,  1875,  1876,  1877,
    1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,  1887,
    1891,  1892,  1895,  1898,  1900,  1903,  1905,  1909,  1912,  1916,
    1919,  1923,  1926,  1932,  1934,  1937,  1938,  1941,  1942,  1945,
    1948,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,
    1960,  1963,  1964,  1967,  1968,  1969,  1970,  1971,  1972,  1973,
    1974,  1975,  1978,  1979,  1982,  1983,  1985,  1986,  1987,  1988,
    1991,  1994,  1997,  2000,  2002,  2006,  2007,  2010,  2011,  2012,
    2013,  2016,  2019,  2022,  2023,  2024,  2025,  2026,  2027,  2028,
    2029,  2030,  2031,  2034,  2035,  2038,  2039,  2040,  2041,  2043,
    2045,  2046,  2049,  2050,  2054,  2055,  2056,  2059,  2060,  2063,
    2064,  2065,  2066
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BAD_COMMENT_",
  "BAD_LITERAL_", "ID", "DOTTEDNAME", "QSTRING", "SQSTRING", "INT32_V",
  "INT64_V", "FLOAT64", "HEXBYTE", "TYPEDEF_T", "TYPEDEF_M", "TYPEDEF_F",
  "TYPEDEF_TS", "TYPEDEF_MR", "TYPEDEF_CA", "DCOLON", "ELLIPSIS", "VOID_",
  "BOOL_", "CHAR_", "UNSIGNED_", "INT_", "INT8_", "INT16_", "INT32_",
  "INT64_", "FLOAT_", "FLOAT32_", "FLOAT64_", "BYTEARRAY_", "UINT_",
  "UINT8_", "UINT16_", "UINT32_", "UINT64_", "FLAGS_", "CALLCONV_",
  "MDTOKEN_", "OBJECT_", "STRING_", "NULLREF_", "DEFAULT_", "CDECL_",
  "VARARG_", "STDCALL_", "THISCALL_", "FASTCALL_", "CLASS_", "BYREFLIKE_",
  "TYPEDREF_", "UNMANAGED_", "FINALLY_", "HANDLER_", "CATCH_", "FILTER_",
  "FAULT_", "EXTENDS_", "IMPLEMENTS_", "TO_", "AT_", "TLS_", "TRUE_",
  "FALSE_", "_INTERFACEIMPL", "VALUE_", "VALUETYPE_", "NATIVE_",
  "INSTANCE_", "SPECIALNAME_", "FORWARDER_", "STATIC_", "PUBLIC_",
  "PRIVATE_", "FAMILY_", "FINAL_", "SYNCHRONIZED_", "INTERFACE_",
  "SEALED_", "NESTED_", "ABSTRACT_", "AUTO_", "SEQUENTIAL_", "EXPLICIT_",
  "ANSI_", "UNICODE_", "AUTOCHAR_", "IMPORT_", "ENUM_", "VIRTUAL_",
  "NOINLINING_", "AGGRESSIVEINLINING_", "NOOPTIMIZATION_",
  "AGGRESSIVEOPTIMIZATION_", "UNMANAGEDEXP_", "BEFOREFIELDINIT_",
  "STRICT_", "RETARGETABLE_", "WINDOWSRUNTIME_", "NOPLATFORM_", "METHOD_",
  "FIELD_", "PINNED_", "MODREQ_", "MODOPT_", "SERIALIZABLE_", "PROPERTY_",
  "TYPE_", "ASSEMBLY_", "FAMANDASSEM_", "FAMORASSEM_", "PRIVATESCOPE_",
  "HIDEBYSIG_", "NEWSLOT_", "RTSPECIALNAME_", "PINVOKEIMPL_", "_CTOR",
  "_CCTOR", "LITERAL_", "NOTSERIALIZED_", "INITONLY_", "REQSECOBJ_",
  "CIL_", "OPTIL_", "MANAGED_", "FORWARDREF_", "PRESERVESIG_", "RUNTIME_",
  "INTERNALCALL_", "_IMPORT", "NOMANGLE_", "LASTERR_", "WINAPI_", "AS_",
  "BESTFIT_", "ON_", "OFF_", "CHARMAPERROR_", "INSTR_NONE", "INSTR_VAR",
  "INSTR_I", "INSTR_I8", "INSTR_R", "INSTR_BRTARGET", "INSTR_METHOD",
  "INSTR_FIELD", "INSTR_TYPE", "INSTR_STRING", "INSTR_SIG", "INSTR_TOK",
  "INSTR_SWITCH", "_CLASS", "_NAMESPACE", "_METHOD", "_FIELD", "_DATA",
  "_THIS", "_BASE", "_NESTER", "_EMITBYTE", "_TRY", "_MAXSTACK", "_LOCALS",
  "_ENTRYPOINT", "_ZEROINIT", "_EVENT", "_ADDON", "_REMOVEON", "_FIRE",
  "_OTHER", "_PROPERTY", "_SET", "_GET", "_PERMISSION", "_PERMISSIONSET",
  "REQUEST_", "DEMAND_", "ASSERT_", "DENY_", "PERMITONLY_", "LINKCHECK_",
  "INHERITCHECK_", "REQMIN_", "REQOPT_", "REQREFUSE_", "PREJITGRANT_",
  "PREJITDENY_", "NONCASDEMAND_", "NONCASLINKDEMAND_",
  "NONCASINHERITANCE_", "_LINE", "P_LINE", "_LANGUAGE", "_CUSTOM", "INIT_",
  "_SIZE", "_PACK", "_VTABLE", "_VTFIXUP", "FROMUNMANAGED_",
  "CALLMOSTDERIVED_", "_VTENTRY", "RETAINAPPDOMAIN_", "_FILE",
  "NOMETADATA_", "_TYPEREF", "_HASH", "_ASSEMBLY", "_PUBLICKEY",
  "_PUBLICKEYTOKEN", "ALGORITHM_", "_VER", "_LOCALE", "EXTERN_",
  "_MRESOURCE", "_MODULE", "_EXPORT", "LEGACY_", "LIBRARY_", "X86_",
  "AMD64_", "ARM_", "ARM64_", "MARSHAL_", "CUSTOM_", "SYSSTRING_",
  "FIXED_", "VARIANT_", "CURRENCY_", "SYSCHAR_", "DECIMAL_", "DATE_",
  "BSTR_", "TBSTR_", "LPSTR_", "LPWSTR_", "LPTSTR_", "OBJECTREF_",
  "IUNKNOWN_", "IDISPATCH_", "STRUCT_", "SAFEARRAY_", "BYVALSTR_",
  "LPVOID_", "ANY_", "ARRAY_", "LPSTRUCT_", "IIDPARAM_", "IN_", "OUT_",
  "OPT_", "_PARAM", "_OVERRIDE", "WITH_", "NULL_", "ERROR_", "HRESULT_",
  "CARRAY_", "USERDEFINED_", "RECORD_", "FILETIME_", "BLOB_", "STREAM_",
  "STORAGE_", "STREAMED_OBJECT_", "STORED_OBJECT_", "BLOB_OBJECT_", "CF_",
  "CLSID_", "VECTOR_", "_SUBSYSTEM", "_CORFLAGS", "ALIGNMENT_",
  "_IMAGEBASE", "_STACKRESERVE", "_TYPEDEF", "_TEMPLATE", "_TYPELIST",
  "_MSCORLIB", "P_DEFINE", "P_UNDEF", "P_IFDEF", "P_IFNDEF", "P_ELSE",
  "P_ENDIF", "P_INCLUDE", "CONSTRAINT_", "'{'", "'}'", "'+'", "','", "'.'",
  "'('", "')'", "';'", "'='", "'['", "']'", "'<'", "'>'", "'-'", "':'",
  "'*'", "'&'", "'/'", "'!'", "$accept", "decls", "decl", "classNameSeq",
  "compQstring", "languageDecl", "id", "dottedName", "int32", "int64",
  "float64", "typedefDecl", "compControl", "customDescr",
  "customDescrWithOwner", "customHead", "customHeadWithOwner",
  "customType", "ownerType", "customBlobDescr", "customBlobArgs",
  "customBlobNVPairs", "fieldOrProp", "customAttrDecl", "serializType",
  "moduleHead", "vtfixupDecl", "vtfixupAttr", "vtableDecl", "vtableHead",
  "nameSpaceHead", "_class", "classHeadBegin", "classHead", "classAttr",
  "extendsClause", "implClause", "classDecls", "implList", "typeList",
  "typeListNotEmpty", "typarsClause", "typarAttrib", "typarAttribs",
  "typars", "typarsRest", "tyBound", "genArity", "genArityNotEmpty",
  "classDecl", "fieldDecl", "fieldAttr", "atOpt", "initOpt", "repeatOpt",
  "methodRef", "callConv", "callKind", "mdtoken", "memberRef", "eventHead",
  "eventAttr", "eventDecls", "eventDecl", "propHead", "propAttr",
  "propDecls", "propDecl", "methodHeadPart1", "marshalClause",
  "marshalBlob", "marshalBlobHead", "methodHead", "methAttr", "pinvAttr",
  "methodName", "paramAttr", "implAttr", "localsHead", "methodDecls",
  "methodDecl", "scopeBlock", "scopeOpen", "sehBlock", "sehClauses",
  "tryBlock", "tryHead", "sehClause", "filterClause", "filterHead",
  "catchClause", "finallyClause", "faultClause", "handlerBlock",
  "dataDecl", "ddHead", "tls", "ddBody", "ddItemList", "ddItemCount",
  "ddItem", "fieldSerInit", "bytearrayhead", "bytes", "hexbytes",
  "fieldInit", "serInit", "f32seq", "f64seq", "i64seq", "i32seq", "i16seq",
  "i8seq", "boolSeq", "sqstringSeq", "classSeq", "objSeq", "methodSpec",
  "instr_none", "instr_var", "instr_i", "instr_i8", "instr_r",
  "instr_brtarget", "instr_method", "instr_field", "instr_type",
  "instr_string", "instr_sig", "instr_tok", "instr_switch", "instr_r_head",
  "instr", "labels", "tyArgs0", "tyArgs1", "tyArgs2", "sigArgs0",
  "sigArgs1", "sigArg", "className", "slashedName", "typeSpec",
  "nativeType", "iidParamIndex", "variantType", "type", "simpleType",
  "bounds1", "bound", "secDecl", "secAttrSetBlob", "secAttrBlob",
  "psetHead", "nameValPairs", "nameValPair", "truefalse", "caValue",
  "secAction", "esHead", "extSourceSpec", "fileDecl", "fileAttr",
  "fileEntry", "hashHead", "assemblyHead", "asmAttr", "assemblyDecls",
  "assemblyDecl", "intOrWildcard", "asmOrRefDecl", "publicKeyHead",
  "publicKeyTokenHead", "localeHead", "assemblyRefHead",
  "assemblyRefDecls", "assemblyRefDecl", "exptypeHead", "exportHead",
  "exptAttr", "exptypeDecls", "exptypeDecl", "manifestResHead",
  "manresAttr", "manifestResDecls", "manifestResDecl", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-1338)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-559)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1338,  2060, -1338, -1338,   -51,  1083, -1338,  -121,    79,  2433,
    2433, -1338, -1338,   198,   497,  -108,   -83,   -21,    43, -1338,
     300,   282,   282,   482,   482,  1655,    -7, -1338,  1083,  1083,
    1083,  1083, -1338, -1338,   292, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338,   289,   289, -1338, -1338, -1338, -1338,   289,    33,
   -1338,   250,    92, -1338, -1338, -1338, -1338,   562, -1338,   289,
     282, -1338, -1338,   122,   129,   137,   180, -1338, -1338, -1338,
   -1338, -1338,   106,   282, -1338, -1338, -1338,   679, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,  1924,   125,    52, -1338, -1338,   223,   255,
   -1338, -1338,   736,   619,   619,  1839,    71, -1338,  2947, -1338,
   -1338,   257,   282,   282,   281, -1338,   756,   525,  1083,   106,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,  2947,
   -1338, -1338, -1338,  1012, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338,   158, -1338,   429,   158,
     303, -1338,  2411, -1338, -1338, -1338,    74,    50,   106,   403,
     421, -1338,   451,   704,   456,   309,   714, -1338,   158,    77,
     106,   106,   106, -1338, -1338,   333,   628,   366,   373, -1338,
    3409,  1924,   615, -1338,  3576,  2344,   384,    78,   208,   233,
     241,   279,   287,   397,   784,   399, -1338, -1338,   289,   401,
      87, -1338, -1338, -1338, -1338,   620,  1083,   406,  2792,   414,
      93, -1338,   619, -1338,   329,   988, -1338,   419,    58,   425,
     712,   282,   282, -1338, -1338, -1338, -1338, -1338, -1338,   426,
   -1338, -1338,   163,  1029, -1338,   427, -1338, -1338,   -36,   756,
   -1338, -1338, -1338, -1338,   522, -1338, -1338, -1338, -1338,   106,
   -1338, -1338,   -10,   106,   988, -1338, -1338, -1338, -1338, -1338,
     158, -1338,   715, -1338, -1338, -1338, -1338,  1596,  1083,   469,
     -70,   488,   793,   106, -1338,  1083,  1083,  1083, -1338,  2947,
    1083,  1083, -1338,   499,   508,  1083,    57,  2947, -1338, -1338,
     514,   158,   425, -1338, -1338, -1338, -1338,  2884,   513, -1338,
   -1338, -1338, -1338, -1338, -1338,   794, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,    91,
   -1338,  1924, -1338,  1124,   529, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338,   534, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,   282, -1338,
     282, -1338, -1338, -1338,   282,   547,    23,  1997, -1338, -1338,
   -1338,   558, -1338, -1338,   -47, -1338, -1338, -1338, -1338,   970,
     203, -1338, -1338,   454,   282,   482,   234,   454,   704,  2355,
    1924,   146,   619,  1839,   569,   289, -1338, -1338, -1338,   572,
     282,   282, -1338,   282, -1338,   282, -1338,   482, -1338,   266,
   -1338,   266, -1338, -1338,   586,   602,   679,   605, -1338, -1338,
   -1338,   282,   282,  3001,  1100,  2847,   557, -1338, -1338, -1338,
     895,   106,   106, -1338,   584, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,   603,    55,
   -1338,  1083,   -26,  2947,   896,   563, -1338,  2066, -1338,   912,
     629,   632,   639,   704, -1338, -1338,   425, -1338, -1338,    84,
      31,   646,   933, -1338, -1338,   758,     9, -1338,  1083, -1338,
   -1338,    31,   956,    49,  1083,  1083,  1083,   106, -1338,   106,
     106,   106,  1446,   106,   106,  1924,  1924,   106, -1338, -1338,
     963,    20, -1338,   690,   709,   988, -1338, -1338, -1338,   282,
   -1338, -1338, -1338, -1338, -1338, -1338,   444, -1338,   716, -1338,
     908, -1338, -1338, -1338,   282,   282, -1338,    47,  2160, -1338,
   -1338, -1338, -1338,   731, -1338, -1338,   733,   746, -1338, -1338,
   -1338, -1338,   764,   282,   896,  2533, -1338, -1338,   755,   282,
      34,    63,   282,   619,  1043, -1338,   768,    90,  2507, -1338,
    1924, -1338, -1338, -1338,   970,    75,   203,    75,    75,    75,
    1006,  1007, -1338, -1338, -1338, -1338, -1338, -1338,   786,   789,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,  1596,
   -1338,   792,   425,   289,  2947, -1338,   454,   796,   896,   800,
     814,   832,   841,   845,   848,   850, -1338,   784,   851, -1338,
     849,    39,  1083,   937,   853,    26,    36, -1338, -1338, -1338,
   -1338, -1338, -1338,   289,   289, -1338,   865,   866, -1338,   289,
   -1338,   289, -1338,   870,    99,  1083,   950, -1338, -1338, -1338,
   -1338,  1083,   951, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,   282,  3329,    65,   227,  1083,  1050,   212,
     876,   881, -1338,   564,   878,   886,   888, -1338,  1174, -1338,
   -1338,   885,   894,  3298,  2896,   891,   897,   518,   568,   289,
    1083,   106,  1083,  1083,   309,   309,   309,   905,   909,   913,
     282,   209, -1338, -1338,  2947,   914,   906, -1338, -1338, -1338,
   -1338, -1338, -1338,   444,   130,   902,  1924,  1924,  1755,   846,
   -1338, -1338,   620,    97,   134,   619,  1188, -1338, -1338, -1338,
    2592, -1338,   915,   124,   877,   246,   725,   282,   916,   282,
     106,   282,   271,   917,  2947,   518,    90, -1338,  2533,   918,
     919, -1338, -1338, -1338, -1338,   454, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338,   679,   282,   282,   482,    31,  1194,
     896,   922,   941,   926,   927,   925, -1338,   343,   924, -1338,
     924,   924,   924,   924,   924, -1338, -1338,   282, -1338,   282,
     376,   282,   929, -1338, -1338,   921,   931,   425,   934,   935,
     938,   939,   936,   945,   282,  1083, -1338,   106,  1083,   105,
    1083,   947, -1338, -1338, -1338,   847, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,   940,   986,
    1002, -1338,   998,   953,    -8,  1228, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338,   940,   940, -1338,  2999,
   -1338, -1338, -1338, -1338,   955,   289,   274,   679,   954,  1083,
     443, -1338,   896,   962,   957,   964, -1338,  2066, -1338,   170,
   -1338,   354,   379,  1047,   387,   455,   457,   473,   519,   527,
     528,   552,   560,   566,   583,   585,   614, -1338,  1158, -1338,
     289, -1338,   282,   959,    90,    90,   106,   646, -1338, -1338,
     679, -1338, -1338, -1338,   960,   106,   106,   309,    90, -1338,
   -1338, -1338, -1338,   988, -1338,   282, -1338,  1924,   305,  1083,
   -1338, -1338,  1061, -1338, -1338,   630,  1083, -1338, -1338,  2947,
     106,   282,   106,   282,   367,  2947,   518,  3026,  1546,   911,
   -1338,  3095, -1338,   896,  2072,   971, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338,   961,   973, -1338,   958,
     974,   979,   983,   989,   518, -1338,  1149,   990,   991,  1924,
     954,  1596, -1338,   992,   725, -1338,  1279,  1240,  1242, -1338,
   -1338,  1009,  1010,  1083,   618, -1338,    90,   454,   454, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338,    88,  1295,  1083,
   -1338,   110,   -25, -1338, -1338,    26, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,  1011,   309,   106,   282,   106, -1338, -1338,
   -1338, -1338, -1338, -1338,  1058, -1338, -1338, -1338, -1338,   896,
    1014,  1017, -1338, -1338, -1338, -1338, -1338,   972, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338,   248, -1338,    85,    72,
   -1338, -1338,  2266, -1338,  1015, -1338, -1338,   425, -1338,  1026,
   -1338, -1338, -1338, -1338,  1034, -1338, -1338, -1338, -1338,   425,
     668,   282,   282,   282,   643,   658,   663,   678,   282,   282,
     282,   282,   282,   282,   482,   282,   549,   282,   636,   282,
     282,   282,   282,   282,   282,   282,   482,   282,  3398,   282,
     229,   282,   675,   282, -1338, -1338, -1338,  3083,  1030,  1025,
   -1338,  1031,  1033,  1036,  1037, -1338,  1170,  1042,  1044,  1045,
    1046, -1338,   444, -1338,   305,   704, -1338,   106,    55,  1048,
    1052,  1924,  1596,  1086, -1338,   704,   704,   704,   704, -1338,
   -1338, -1338, -1338, -1338, -1338,   704,   704,   704, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338,   425, -1338,   282,   642,   699,
   -1338, -1338, -1338, -1338,  3329,  1053,   679, -1338,  1051, -1338,
   -1338,  1328, -1338,   679, -1338,   679,   282, -1338, -1338,   106,
   -1338,  1057, -1338, -1338, -1338,   282, -1338,   106,  1083, -1338,
   -1338,  1177,  1055, -1338, -1338,  1062,   504,   282,   282, -1338,
   -1338, -1338, -1338, -1338, -1338,   896,  1063, -1338, -1338,   282,
   -1338,  -120,  1066,  1067,  1133,  1070,  1071,  1072,  1073,  1074,
    1075,  1076,  1077,  1078,  1079, -1338,   425, -1338, -1338,   282,
     750, -1338,  1140,  1084,  1080,  1081,  1093,  1090,   282,   282,
     282,   282,   282,   282,   482,   282,  1096,  1094,  1097,  1095,
    1102,  1103,  1104,  1105,  1106,  1108,  1113,  1118,  1121,  1119,
    1122,  1120,  1134,  1129,  1137,  1135,  1138,  1136,  1142,  1139,
    1151,  1157,  1156,  1161,  1372,  1162,  1160, -1338,   244, -1338,
     178, -1338, -1338,  1159, -1338, -1338,    90,    90, -1338, -1338,
   -1338, -1338,  1924, -1338, -1338,   594, -1338,  1171, -1338,  1377,
     619, -1338, -1338, -1338, -1338, -1338, -1338, -1338,  2226,  1167,
   -1338, -1338, -1338, -1338,  1169,  1176, -1338,  1924,   518, -1338,
   -1338, -1338, -1338,  1468,   106, -1338,    26,   282,   896,  1179,
    1180,   425, -1338,  1186,   282, -1338,  1195,  1196,  1197,  1199,
    1200,  1191,  1198,  1206,  1202,  1241, -1338, -1338, -1338,  1208,
   -1338,  1209,  1205,  1217,  1222,  1219,  1224,  1230,  1235,  1236,
   -1338,  1244, -1338,  1245, -1338,  1246, -1338,  1247, -1338, -1338,
    1248, -1338, -1338,  1249, -1338,  1250, -1338,  1251, -1338,  1252,
   -1338,  1253, -1338,  1259, -1338, -1338,  1260, -1338,  1261, -1338,
    1263,  1529, -1338,  1256,   688, -1338,  1264,  1265, -1338,    90,
    1924,   518,  2947, -1338, -1338, -1338,    90, -1338,  1258, -1338,
    1266,  1267,   436, -1338,  3369, -1338,  1262, -1338,   282,   282,
     282, -1338, -1338, -1338, -1338, -1338,  1272, -1338,  1273, -1338,
    1274, -1338,  1277, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,  3398,
   -1338, -1338,  1281, -1338,  1258,  1596,  1286,  1287,  1278, -1338,
      26, -1338,   896, -1338,   274, -1338,  1297,  1301,  1302,    51,
      25, -1338, -1338, -1338, -1338,    48,    82,   132,   138,   210,
     204,   165,   172,   185,   179,  1552,    56,   461, -1338,   954,
    1296,  1580, -1338,    90, -1338,   698, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,   189,   193,   194,   182, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
    1592, -1338, -1338, -1338,    90,   518,  2154,  1307,   896, -1338,
   -1338, -1338, -1338, -1338,  1312,  1315,  1316, -1338, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,   693,  1357,    90,   282, -1338,  1511,  1319,
    1325,   619, -1338, -1338,  2947,  1596,  1607,   518,  1258,  1334,
      90,  1339, -1338
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,     0,     1,    86,   106,     0,   265,   209,   390,     0,
       0,   760,   761,     0,   222,     0,     0,   775,   781,   844,
      93,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,    58,    59,     0,    61,     3,    25,    26,    27,
      84,    85,   434,   434,    19,    17,    10,     9,   434,     0,
     109,   136,     0,     7,   272,   336,     8,     0,    18,   434,
       0,    11,    12,     0,     0,     0,     0,   823,    37,    40,
      38,    39,   105,     0,   189,   391,   392,   389,   745,   746,
     747,   748,   749,   750,   751,   752,   753,   754,   755,   756,
     757,   758,   759,     0,     0,    34,   216,   217,     0,     0,
     223,   224,   229,   222,   222,     0,    62,    72,     0,   220,
     215,     0,     0,     0,     0,   781,     0,     0,     0,    94,
      42,    20,    21,    44,    43,    23,    24,   554,   711,     0,
     688,   696,   694,     0,   697,   698,   699,   700,   701,   702,
     707,   708,   709,   710,   671,   695,     0,   687,     0,     0,
       0,   492,     0,   555,   556,   557,     0,     0,   558,     0,
       0,   236,     0,   222,     0,   552,     0,   692,    30,    53,
      55,    56,    57,    60,   436,     0,   435,     0,     0,     2,
       0,     0,   138,   140,   222,     0,     0,   397,   397,   397,
     397,   397,   397,     0,     0,     0,   387,   394,   434,     0,
     763,   791,   815,   833,   847,     0,     0,     0,     0,     0,
       0,   553,   222,   560,   721,   563,    32,     0,     0,   723,
       0,     0,     0,   225,   226,   227,   228,   218,   219,     0,
      74,    73,     0,     0,   104,     0,    22,   776,   777,     0,
     782,   783,   784,   786,     0,   787,   788,   789,   790,   780,
     845,   846,   842,    95,   693,   703,   704,   705,   706,   670,
       0,   673,     0,   689,   691,   234,   235,     0,     0,     0,
       0,     0,     0,   686,   684,     0,     0,     0,   231,     0,
       0,     0,   678,     0,     0,     0,   714,   537,   677,   676,
       0,    30,    54,    65,   437,    69,   103,     0,     0,   112,
     133,   110,   111,   114,   115,     0,   116,   117,   118,   119,
     120,   121,   122,   123,   113,   132,   125,   124,   134,   148,
     137,     0,   108,     0,     0,   278,   273,   274,   275,   276,
     277,   281,   279,   289,   280,   282,   283,   284,   285,   286,
     287,   288,     0,   290,   314,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,     0,   372,
       0,   335,   343,   344,     0,     0,     0,     0,   365,     6,
     350,     0,   352,   351,     0,   337,   358,   336,   339,     0,
       0,   345,   507,     0,     0,     0,     0,     0,   222,     0,
       0,     0,   222,     0,     0,   434,   346,   348,   349,     0,
       0,     0,   413,     0,   412,     0,   411,     0,   410,     0,
     408,     0,   409,   433,     0,   396,     0,     0,   722,   772,
     762,     0,     0,     0,     0,     0,     0,   826,   825,   824,
       0,   821,    41,   210,     0,   196,   190,   191,   192,   193,
     198,   199,   200,   201,   195,   202,   203,   194,     0,     0,
     388,     0,     0,     0,     0,     0,   731,   725,   730,     0,
      35,     0,     0,   222,    76,    70,    63,   311,   312,   714,
     313,   535,     0,    97,   778,   774,   813,   785,     0,   672,
     690,   233,     0,     0,     0,     0,     0,   685,   683,    51,
      52,    50,     0,    49,   559,     0,     0,    48,   715,   674,
     716,     0,   712,     0,   538,   539,    28,    31,     5,     0,
     126,   127,   128,   129,   130,   131,   157,   107,   139,   143,
       0,   106,   239,   253,     0,     0,   823,     0,     0,     4,
     181,   182,   175,     0,   141,   171,     0,     0,   336,   172,
     173,   174,     0,     0,   295,     0,   338,   340,     0,     0,
       0,     0,     0,   222,     0,   347,     0,   314,     0,   382,
       0,   380,   383,   366,   368,     0,     0,     0,     0,     0,
       0,     0,   369,   509,   508,   510,   511,    45,     0,     0,
     506,   513,   512,   516,   515,   517,   521,   522,   520,     0,
     523,     0,   524,   434,     0,   528,   530,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   393,     0,     0,   401,
       0,   765,     0,     0,     0,     0,     0,    13,   809,   808,
     794,   792,   795,   434,   434,   820,     0,     0,    14,   434,
     818,   434,   816,     0,     0,     0,     0,    15,   841,   840,
     834,     0,     0,    16,   852,   851,   848,   827,   828,   829,
     830,   831,   832,     0,   564,   205,     0,   561,     0,     0,
       0,   732,    76,     0,     0,     0,   726,    33,     0,   221,
     230,    66,     0,    79,   537,     0,     0,     0,     0,   434,
       0,   843,     0,     0,   550,   548,   549,   677,     0,     0,
     718,   714,   675,   682,     0,     0,     0,   152,   154,   153,
     155,   150,   151,   157,     0,     0,     0,     0,     0,   222,
     176,   177,     0,     0,     0,   222,     0,   140,   242,   256,
       0,   833,     0,   295,     0,     0,   266,     0,     0,     0,
     360,     0,     0,     0,     0,     0,   314,   545,     0,     0,
     542,   543,   364,   381,   367,     0,   384,   374,   378,   379,
     377,   373,   375,   376,     0,     0,     0,     0,   519,     0,
       0,     0,     0,   533,   534,     0,   514,     0,   397,   398,
     397,   397,   397,   397,   397,   395,   400,     0,   764,     0,
       0,     0,     0,   803,   802,     0,     0,   806,     0,     0,
       0,     0,     0,     0,     0,     0,   839,   835,     0,     0,
       0,     0,   618,   572,   573,     0,   607,   574,   575,   576,
     577,   578,   579,   609,   585,   586,   587,   588,   619,     0,
       0,   615,     0,     0,     0,   569,   570,   571,   594,   595,
     596,   613,   597,   598,   599,   600,   619,   619,   603,   621,
     611,   617,   580,   270,     0,     0,   268,     0,   207,   562,
       0,   719,     0,     0,    38,     0,   724,   725,    36,     0,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    75,   441,
     434,    77,     0,     0,   314,   314,   313,   535,    98,    99,
       0,   100,   101,   102,     0,   814,   232,   551,   314,   679,
     680,   717,   713,   540,   135,     0,   158,   144,   161,     0,
     149,   142,     0,   241,   240,   558,     0,   255,   254,     0,
     822,     0,   184,     0,     0,     0,     0,     0,     0,     0,
     167,     0,   291,     0,     0,     0,   302,   303,   304,   305,
     297,   298,   299,   296,   300,   301,     0,     0,   294,     0,
       0,     0,     0,     0,     0,   355,   353,     0,     0,     0,
     207,     0,   356,     0,   266,   341,   314,     0,     0,   370,
     371,     0,     0,     0,     0,   526,   314,   530,   530,   529,
     399,   407,   406,   405,   404,   402,   403,   769,   767,     0,
     800,     0,     0,   793,   810,     0,   812,   804,   807,   779,
     811,   817,   819,     0,   836,   837,     0,   850,   204,   608,
     581,   582,   583,   584,     0,   604,   610,   612,   616,     0,
       0,     0,   614,   601,   602,   625,   626,     0,   653,   627,
     628,   629,   630,   631,   632,   655,   637,   638,   639,   640,
     623,   624,   645,   646,   647,   648,   649,   650,   651,   652,
     622,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   641,   605,   197,     0,     0,
     589,   206,     0,   188,     0,   735,   736,   740,   738,     0,
     737,   734,   733,   720,     0,    79,   727,    76,    71,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    83,    81,     0,     0,     0,
     536,     0,     0,     0,     0,    96,   777,     0,     0,     0,
     145,   146,   157,   160,   161,   222,   187,   237,     0,     0,
       0,     0,     0,     0,   168,   222,   222,   222,   222,   169,
     250,   251,   249,   243,   248,   222,   222,   222,   170,   263,
     264,   261,   257,   262,   178,   295,   293,     0,     0,     0,
     315,   316,   317,   318,   564,   148,     0,   359,     0,   362,
     363,     0,   342,   546,   544,     0,     0,    46,    47,   518,
     525,     0,   531,   532,   768,     0,   766,   796,     0,   801,
     798,     0,     0,   838,   849,     0,     0,     0,     0,   654,
     633,   634,   635,   636,   643,     0,     0,   644,   269,     0,
     590,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   440,   439,   438,   208,     0,
       0,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,    88,
       0,    87,   432,     0,   214,   213,   314,   314,   773,   681,
     156,   163,     0,   162,   159,     0,   183,     0,   186,     0,
     222,   244,   245,   246,   247,   260,   258,   259,     0,     0,
     306,   307,   308,   309,     0,     0,   354,     0,     0,   547,
     385,   386,   527,   771,   797,   799,     0,     0,     0,     0,
       0,   606,   642,     0,     0,   591,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   728,    68,   431,     0,
     430,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     421,     0,   420,     0,   419,     0,   418,     0,   416,   414,
       0,   417,   415,     0,   429,     0,   428,     0,   427,     0,
     426,     0,   447,     0,   443,   442,     0,   446,     0,   445,
       0,     0,    91,     0,     0,   166,     0,     0,   147,   314,
       0,     0,     0,   292,   310,   267,   314,   361,   164,   770,
       0,     0,     0,   567,   564,   593,     0,   739,     0,     0,
       0,   744,   729,   481,   477,   425,     0,   424,     0,   423,
       0,   422,     0,   479,   477,   475,   473,   467,   470,   479,
     477,   475,   473,   490,   483,   444,   486,    90,    92,     0,
     212,   211,     0,   185,   164,     0,     0,     0,     0,   165,
       0,   620,     0,   566,   568,   592,     0,     0,     0,     0,
       0,   479,   477,   475,   473,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,   207,
       0,     0,   319,   314,   805,     0,   741,   742,   743,   463,
     482,   462,   478,     0,     0,     0,     0,   453,   480,   452,
     451,   476,   450,   474,   448,   469,   468,   449,   472,   471,
     457,   456,   455,   454,   466,   491,   485,   484,   464,   487,
       0,   465,   489,   252,   314,     0,     0,     0,     0,   461,
     460,   459,   458,   488,     0,     0,     0,   324,   320,   329,
     330,   331,   332,   333,   321,   322,   323,   325,   326,   327,
     328,   271,   357,     0,     0,   314,     0,   565,     0,     0,
       0,   222,   179,   334,     0,     0,     0,     0,   164,     0,
     314,     0,   180
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1338,  1451, -1338,  1345,   -50,    27,   -41,    -5,    10,    22,
    -360, -1338,    12,   -18,  1615, -1338, -1338,  1178,  1255,  -640,
   -1338,  -998, -1338,    17, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,  -314, -1338, -1338, -1338,   928, -1338, -1338,
   -1338,   458, -1338,   943,   500,   506, -1338, -1337,  -442, -1338,
    -313, -1338, -1338,  -948, -1338,  -162,   -98, -1338,    13,  1619,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,   687,
     468, -1338,  -312, -1338,  -703,  -647,  1309, -1338, -1338,  -257,
   -1338,  -171, -1338, -1338,  1091, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,    41,     7, -1338, -1338, -1338,  1049,  -116,
    1597,   587,   -40,    19,   812, -1338, -1081, -1338, -1338, -1267,
   -1254, -1305, -1213, -1338, -1338, -1338, -1338,    16, -1338, -1338,
   -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,
   -1338, -1338, -1338,    66,   771,   993, -1338,  -688, -1338,   703,
     -22,  -432,   -74,   236,   196, -1338,   -23,   545, -1338,   982,
       3,   817, -1338, -1338,   828, -1338, -1069, -1338,  1675, -1338,
      32, -1338, -1338,   553,  1213, -1338,  1579, -1338, -1338,  -979,
    1271, -1338, -1338, -1338, -1338, -1338, -1338, -1338, -1338,  1181,
     984, -1338, -1338, -1338, -1338, -1338
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    36,   290,   659,   370,    71,   158,   784,  1533,
     582,    38,   372,    40,    41,    42,    43,   106,   229,   672,
     673,   878,  1127,   373,  1300,    45,    46,   678,    47,    48,
      49,    50,    51,    52,   180,   182,   322,   323,   518,  1139,
    1140,   517,   703,   704,   705,  1143,   909,  1478,  1479,   534,
      53,   208,   848,  1073,    74,   107,   108,   109,   211,   230,
     536,   708,   928,  1163,   537,   709,   929,  1172,    54,   954,
     844,   845,    55,   184,   724,   471,   738,  1556,   374,   185,
     375,   746,   377,   378,   563,   379,   380,   564,   565,   566,
     567,   568,   569,   747,   381,    57,    77,   196,   414,   402,
     415,   879,   880,   175,   176,  1248,   881,  1499,  1500,  1498,
    1497,  1490,  1495,  1489,  1506,  1507,  1505,   212,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   765,   676,   503,   504,   739,   740,   741,
     213,   165,   231,   846,  1015,  1066,   215,   167,   501,   502,
     397,   665,   666,    59,   660,   661,  1080,  1081,    93,    60,
     398,    62,   114,   475,   629,    63,   116,   423,   621,   785,
     622,   623,   631,   624,    64,   424,   632,    65,   542,   205,
     425,   640,    66,   117,   426,   646
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,   278,   166,   164,    58,   227,   228,   159,    56,   533,
     535,   538,  1190,    39,   376,   119,  1212,   198,    44,   214,
     934,  1254,   853,   169,   170,   171,   172,   110,    37,   675,
     887,   121,   122,    61,   120,   120,   209,  1288,   161,    68,
      69,   163,    70,   216,   219,   125,   126,   778,   963,   604,
    -558,   605,   684,   685,   686,    68,    69,   120,    70,   120,
      68,    69,   177,    70,  1546,   279,   120,   178,    68,    69,
     200,    70,   404,   406,   408,   410,   412,   498,   199,    68,
      69,   120,    70,   207,   216,   233,   344,  1252,   962,    68,
      69,   120,    70,   120,   419,   420,  1204,   294,    68,    69,
    1547,    70,    68,    69,   498,    70,   254,   320,   120,   238,
     737,   249,   252,   253,   453,    99,  1075,  1076,   161,   292,
     558,   163,   235,   236,   259,    99,   478,   261,   847,   267,
     474,   745,   216,   550,    99,    68,    69,  1510,    70,    68,
      69,   120,    70,    75,   371,   680,   291,   123,   124,  1496,
     556,   270,   273,   216,   198,  1502,  1210,   713,   217,   472,
     282,   283,   284,    68,    69,    67,    70,   274,  1006,   271,
     216,   127,  1354,  1208,   120,   319,   110,   216,    73,   193,
    1355,   120,   466,    68,    69,   449,    70,  1524,   123,   124,
     111,   123,   124,   482,   120,  1504,  1131,  1132,   120,    99,
     431,   432,   120,   120,    76,   452,    95,  1503,    68,   572,
    1137,    70,   120,   123,   124,   577,   112,   417,   120,   120,
    1020,   577,  1211,   271,   206,   685,   585,  1526,   470,   498,
     485,   461,   462,   591,   476,   578,   579,  1290,   479,  1525,
    1021,   578,   579,   123,   124,   577,  1501,   519,   557,    68,
      69,   897,    70,  1365,   113,   120,   492,   127,   206,   115,
     933,  1599,   481,   483,   505,   578,   579,   487,   206,   291,
     489,   490,   491,  1291,   657,   493,   494,   577,  1523,  1153,
     497,   720,   488,   168,   206,    99,    68,    69,  1201,    70,
    1209,   120,   268,   554,   594,  1411,   500,   578,   579,   173,
      58,   174,   451,   206,    56,    68,    69,  1185,    70,    39,
     181,   451,   551,   691,    44,   795,   590,   153,   154,   155,
     692,  1521,   552,   179,    37,   206,   540,   262,   263,    61,
     539,   783,   779,   729,   786,   531,   714,   264,  -558,   570,
     532,   592,   573,   206,  1527,   220,   583,  1519,   457,   683,
     530,   593,  1548,   458,   286,   541,   287,   499,   272,   206,
     288,   289,   731,  1004,  1229,   368,   589,  1430,   546,   232,
     547,   206,  1230,   400,   548,   608,  1228,   401,  1529,   269,
     421,  1205,   183,   664,   499,   206,  -541,   376,  1508,   269,
     571,   422,   516,   574,   575,   750,   921,   584,   269,   206,
     206,   110,   588,   153,   154,   155,   161,   576,   581,   163,
     599,   600,   201,   601,   597,   602,   459,   897,   472,   202,
    1520,   688,   689,   218,  1545,   907,   620,   203,  1530,   603,
     658,   610,   611,   923,  1532,   618,   618,   638,   644,   989,
     619,   619,   639,   645,   655,  1133,   656,  1253,    68,    69,
     216,    70,   120,   464,   716,   734,   127,   156,   465,    68,
    1087,  1540,    70,   120,   452,  1088,    68,    69,  1541,    70,
     204,  1074,  1328,   681,   127,  1543,   110,  1413,  1562,   500,
     260,  1542,   271,   696,    99,  1559,   743,   470,   237,  1560,
    1561,   123,   124,   368,   723,   697,   698,   949,   950,   951,
    1537,  1514,    99,   403,   459,  1549,  1534,   401,  1075,  1076,
     850,    96,  1550,   699,    97,   759,   118,   371,   221,   695,
    1224,   206,   726,    68,    69,   748,    70,   849,   405,   580,
      68,    69,   401,    70,   710,   711,   407,    98,    99,   275,
     401,  1225,   100,   156,   101,   730,   732,  1226,   767,   376,
     222,   102,   234,   722,  1227,   763,   990,   276,   120,   728,
     577,  1553,   733,   700,   959,   206,   787,   198,   103,    68,
      69,   762,   854,  1069,   409,     3,   749,   127,   401,  1070,
     578,   579,   411,   104,   758,   186,   401,   277,   187,   188,
     189,   190,   280,   191,   192,   193,   888,   889,  1142,   206,
     250,   251,   153,   154,   155,    99,   764,   780,   751,   752,
     753,   919,   761,   533,   535,   538,   281,   925,  1416,  1417,
     153,   154,   155,   991,   454,    68,    69,   455,    70,   293,
     797,   890,   911,   912,   916,   459,   799,   467,   468,   980,
     294,   259,   788,   789,   796,   123,   124,   577,   792,  1090,
     793,   505,   981,  1091,   982,   983,   984,   985,   986,    98,
    1151,   206,   295,   801,   100,   992,   101,   578,   579,   296,
     206,   903,   886,   102,  1092,   895,   321,   896,  1093,   371,
      68,    69,  1098,    70,    68,   877,  1099,    70,   127,   399,
     103,  1428,   413,   427,   416,   428,   429,   418,   894,   908,
     901,   500,   430,   915,   967,   104,   433,   920,   922,   924,
     974,   961,   450,   969,   456,   964,    99,   459,    96,  1293,
     460,    97,   463,   153,   154,   155,  1294,   473,   459,  1482,
     886,  1472,  1483,  1075,  1076,   952,   701,   955,  1476,   957,
     480,   958,   156,   477,    98,    99,  1275,   702,  1278,   100,
    1100,   101,  1102,    14,  1101,   968,  1103,  1551,   102,   120,
     156,    68,    69,   641,    70,   970,   971,   642,  1104,   484,
     891,   892,  1105,   893,  1474,   103,  1361,  1362,  1363,   972,
    1330,  1331,   223,   664,   224,   225,   226,   987,   486,   988,
     104,   993,   105,  1005,   495,  1007,   459,  1348,    68,    69,
    1077,    70,   120,   496,  1003,   506,  1071,   186,   509,  1089,
     187,   188,   189,   190,  1106,   191,   192,   193,  1107,   282,
     283,   284,  1108,  1110,   543,  1557,  1109,  1111,  1079,   544,
     282,   283,   284,  1141,   153,   154,   155,  1332,  1333,    28,
      29,    30,    31,    32,    33,    34,   549,  1112,   643,  1135,
     285,  1113,   194,   662,    35,  1114,   240,   241,   242,  1115,
    1078,  1116,   555,   156,   596,  1117,  1564,   598,   195,   510,
     511,   512,  1009,  1010,  1011,  1012,  1013,   606,  1118,   653,
    1120,   243,  1119,  1175,  1121,  1189,    98,  1191,   206,  1419,
    1126,   100,  1129,   101,  1146,   607,  1148,  1589,   654,  1128,
     102,   609,  1152,   216,  1144,   513,   514,   515,  1565,  1122,
     459,  1147,  1601,  1123,  1200,  1138,   935,   103,   917,   667,
    -238,   886,   668,   936,   206,   937,   938,   939,   669,     3,
     540,  1149,   104,  1150,   539,   670,   763,   763,  1258,   531,
    1161,  1170,  1259,   638,   532,  1162,  1171,   674,   639,   886,
    1598,   953,   677,  1260,   530,  1160,  1169,  1261,  1262,   541,
    1164,  1173,  1263,   918,   940,   941,   942,   626,  1199,  1216,
     647,   648,   649,  1264,   156,   682,   244,  1265,   245,   246,
     247,   248,   206,   690,  1207,   459,  1469,   764,   764,  1587,
     459,  1558,   693,  1321,  1322,  1323,  1324,  1219,  1220,  1221,
    1222,  1223,   694,  1325,  1326,  1327,   650,   651,   652,   706,
     943,   944,   945,   286,   946,   287,  1214,   947,   707,   288,
     289,   717,  1246,   718,   286,   559,   287,   560,   561,   562,
     288,   289,  1023,  1024,    68,    69,   719,    70,   255,   256,
     257,   258,   127,  1202,  1203,   128,   282,   283,   284,   129,
     130,   131,   132,   133,   721,   134,   135,   136,   137,   727,
     138,   139,   735,   736,   140,   141,   142,   143,   754,   755,
      99,   144,   145,  1094,  1095,  1096,  1097,  1318,  1319,  1231,
     146,   756,   147,  1165,   757,  1166,  1167,   760,    68,    69,
     195,    70,   766,   282,   283,   284,   768,   148,   149,   150,
    1295,  1255,  1256,  1257,    11,    12,    13,    14,  1266,  1267,
    1268,  1269,  1270,  1271,   769,  1273,  1274,  1276,     3,  1279,
    1280,  1281,  1282,  1283,  1284,  1285,  1272,  1287,   770,  1289,
    1277,  1292,   151,  1296,   282,   283,   284,   771,  1286,  1536,
    1539,   772,     3,  1315,   773,  1336,   774,   776,   467,   468,
     781,   782,  1339,   777,  1340,   282,   283,   284,   110,  1356,
    1357,  1358,  1359,   790,   791,   794,   798,   800,   110,   110,
     110,   110,   851,   948,   852,  1351,   855,   856,   110,   110,
     110,   857,   858,   859,   625,   860,   884,  1329,   153,   154,
     155,   520,   885,    28,    29,    30,    31,    32,    33,    34,
     898,   905,  1168,  1344,   910,   899,  1341,   926,    35,   900,
     904,   932,   966,   973,   965,  1343,   956,   960,   975,   977,
     978,   979,  1422,   401,   994,   995,   996,  1349,  1350,  1016,
     997,   998,  1001,   999,  1000,  1014,   976,  1017,  1418,  1353,
     286,  1002,   287,  1008,  1124,  1018,   288,   289,  1019,  1125,
    1022,  1067,  1072,  1083,  1085,  1084,  1136,  1145,  1180,  1360,
    1364,  1130,  1124,  1427,  1126,  1178,  1177,  1125,  1372,  1373,
    1374,  1375,  1376,  1377,  1181,  1379,  1412,  1179,   521,  1182,
       6,     7,     8,  1183,  1184,  1186,  1378,   286,  1192,   287,
    1187,  1188,   522,   288,   289,  1414,    14,   523,  1432,   737,
       9,    10,  1195,  1206,  1196,  1197,  1198,  1213,  1215,   626,
    1249,   614,   627,  1217,   615,   616,  1218,    11,    12,    13,
      14,  1250,   524,   525,  1251,  1303,  1302,  1304,   469,  1305,
     287,  1306,  1307,   886,   288,   289,   474,   157,  1309,  1312,
    1310,  1311,  1320,   526,  1337,  1124,  1473,  1338,  1316,   286,
    1125,   287,  1317,  1342,   516,   687,   289,  1431,  1345,  1346,
    1347,  1090,  1092,  1352,  1436,  1098,  1100,  1102,  1104,  1106,
    1108,  1110,  1112,  1114,  1116,  1367,  1368,  1126,   527,   528,
    1408,  1369,    28,    29,    30,    31,    32,    33,    34,  1370,
    1371,   628,  1380,  1382,  1381,  1383,  1421,    35,  1384,  1475,
    1386,  1511,  1388,  1385,  1389,  1387,    28,    29,    30,    31,
      32,    33,    34,  1390,  1391,   529,   886,  1392,  1394,  1393,
    1395,    35,    28,    29,    30,    31,    32,    33,    34,  1397,
    1396,  1366,  1515,  1398,  1400,  1399,  1401,    35,  1402,  1403,
      28,    29,    30,    31,    32,    33,    34,  1404,  1486,  1487,
    1488,    68,    69,  1405,    70,    35,  1406,  1407,  1409,   127,
    1410,  1415,   128,  1424,  1420,  1425,   129,   130,   131,   132,
     133,  1426,   134,   135,   136,   137,  1429,   138,   139,  1433,
    1434,   140,   141,   142,   143,  1552,  1435,    99,   144,   145,
    1258,  1260,  1262,  1594,  1264,  1438,  1437,   146,  1441,   147,
    1522,  1445,  1439,  1443,  1444,  1528,  1522,  1531,  1583,  1535,
    1440,  1528,  1522,  1531,   148,   149,   150,  1446,  1447,  1448,
    1449,  1596,  1538,    28,    29,    30,    31,    32,    33,    34,
    1450,  1451,  1442,  1528,  1522,  1531,  1452,  1467,    35,  1453,
    1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,  1462,   151,
     886,   282,   283,   284,  1463,  1464,  1468,  1465,  1466,  1477,
    1470,  1471,  1485,  1481,     3,   467,   468,  1491,  1492,  1493,
    1480,  1595,  1494,  1513,   861,   862,   863,  1509,   864,   865,
     866,   867,  1512,   868,   869,   193,   882,   870,   871,   872,
     873,  1554,   886,  1516,   874,   875,  1590,  1517,  1518,  1555,
    1563,    68,    69,  1582,    70,   153,   154,   155,  1584,   127,
    1585,  1586,   128,  1588,  1591,  1592,   129,   130,   131,   132,
     133,  1593,   134,   135,   136,   137,  1597,   138,   139,  1600,
     297,   140,   141,   142,   143,  1602,   507,    99,   144,   145,
     160,   671,  1313,  1335,   162,   927,   906,   146,   595,   147,
    1314,  1193,  1334,   545,   197,   744,   775,  1068,  1134,  1247,
      68,    69,   876,    70,   148,   149,   150,   883,   127,  1194,
    1484,   128,  1301,   902,  1086,   129,   130,   131,   132,   133,
    1082,   134,   135,   136,   137,    94,   138,   139,   679,  1308,
     140,   141,   142,   143,   239,   630,    99,   144,   145,   151,
       0,   282,   283,   284,     0,   931,   146,   712,   147,     0,
       0,     0,     0,     0,     0,  1155,  1156,  1157,  1158,     0,
       0,     0,     0,   148,   149,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,    13,    14,     0,     0,   469,     0,   287,     0,     0,
       0,   687,   289,     0,   157,   153,   154,   155,   151,   152,
      68,    69,     0,    70,     0,     0,     0,     0,   127,     0,
       0,   128,     0,     0,     0,   129,   130,   131,   132,   133,
       0,   134,   135,   136,   137,     0,   138,   139,     0,     0,
     140,   141,   142,   143,     0,     0,    99,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,     0,   147,     0,
       0,     0,     0,     0,   153,   154,   155,     0,     0,     0,
       0,     0,     0,   148,   149,   150,     0,   913,    28,    29,
      30,    31,    32,    33,    34,     0,     0,  1159,     0,     0,
       0,     0,     0,    35,    68,    69,     0,    70,  1544,     0,
       0,    14,   127,     0,     0,   128,     0,     0,   151,   129,
     130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     138,   139,   914,     0,   140,   141,   142,   143,     0,     0,
      99,   144,   145,     0,     0,     0,     0,     0,     0,     0,
     146,     0,   147,     0,     0,   469,     0,   287,     0,     0,
       0,   288,   289,     0,   157,     0,     0,   148,   149,   150,
       0,     0,     0,     0,   153,   154,   155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,     0,    70,     0,     0,     0,     0,   127,     0,     0,
     128,     0,   151,   152,   129,   130,   131,   132,   133,     0,
     134,   135,   136,   137,   156,   138,   139,     0,     0,   140,
     141,   142,   143,   157,     0,    99,   144,   145,     0,     0,
       0,     0,     0,     0,     0,   146,     0,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,   150,     0,     0,     0,   153,   154,
     155,     0,    68,    69,     0,    70,     0,     0,     0,     0,
     127,     0,     0,   128,     0,     0,     0,   129,   130,   131,
     132,   133,     0,   134,   135,   136,   137,   151,   138,   139,
       0,     0,   140,   141,   142,   143,     0,     0,    99,   144,
     145,     0,     0,     0,     0,     0,     0,     0,   146,     0,
     147,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       2,     0,     0,   157,     0,   148,   149,   150,     0,     0,
       0,    68,    69,     0,    70,     0,     0,     0,     3,   127,
       0,     0,   128,   153,   154,   155,   129,   130,   131,   132,
     133,     0,   134,   135,   136,   137,     0,   138,   139,     0,
     553,   140,   141,   142,   143,     0,     0,    99,   144,   145,
       0,   935,     0,     0,     0,     0,     0,   663,   936,   147,
     937,   938,   939,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,   149,   150,     0,   210,     0,
       0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   940,
     941,   942,     0,     0,     0,    68,    69,     0,    70,   151,
       0,     0,     0,   127,     0,     0,   128,     0,     0,     0,
     129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
       0,   138,   139,  1566,     0,   140,   141,   142,   143,     0,
       0,    99,   144,   145,     0,   943,   944,   945,  1567,   946,
       0,   146,   947,   147,     4,     5,     6,     7,     8,     0,
       0,     0,     0,   210,  1568,   153,   154,   155,   148,   149,
     150,     0,   157,  1569,     0,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1570,  1571,  1572,
    1573,     0,     0,    11,    12,    13,    14,     0,     0,     0,
      15,    16,     0,   715,     0,   935,    17,     0,     0,     0,
      18,     0,   936,   216,   937,   938,   939,    19,    20,  1574,
    1575,  1576,  1577,  1578,  1579,  1580,     0,     0,  1232,  1233,
    1234,     0,  1235,  1236,  1237,  1238,   210,  1239,  1240,   193,
       0,  1241,  1242,  1243,  1244,   157,     0,     0,     0,     0,
    1245,     0,     0,   940,   941,   942,     0,     0,     0,   153,
     154,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,    23,    24,    25,     0,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    68,
       0,     0,    70,     0,     0,     0,     0,    35,     0,   943,
     944,   945,     3,   946,     0,   210,   947,     0,  1176,     0,
     586,   128,   587,     0,   157,   129,   130,   131,   132,   133,
       0,   134,   135,   136,   137,     0,   138,   139,     0,     0,
     140,   141,   142,   143,     0,     0,    99,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,     0,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,   149,   150,   265,   128,   266,     0,
       0,   129,   130,   131,   132,   133,     0,   134,   135,   136,
     137,     0,   138,   139,  1581,     0,   140,   141,   142,   143,
       0,     0,     0,   144,   145,     0,     0,     0,   151,   210,
       0,     0,   146,     0,   147,     0,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     149,   150,     0,     0,     0,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,     0,     0,
       0,     0,     8,     0,     0,     0,   358,   359,   360,   361,
     362,   363,    68,     0,   151,    70,     0,     0,     0,     0,
       9,    10,  1423,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,   364,   128,
       0,     0,     0,   129,   130,   131,   132,   133,     0,   134,
     135,   136,   137,   365,   138,   139,     0,     0,   140,   141,
     142,   143,     0,     0,     0,   144,   145,     0,     0,     0,
       0,     0,     0,     0,   146,     0,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,   366,   367,
      70,   148,   149,   150,     0,     0,     0,     0,     0,     0,
       3,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    28,    29,    30,    31,
      32,    33,    34,     0,   368,   369,   151,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,     0,     0,   157,     0,     8,     0,     0,     0,   358,
     359,   360,   361,   362,   363,     0,     0,     0,     0,     0,
       0,     0,     0,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,   364,     0,     0,     0,     0,     0,     0,     0,   157,
       0,     0,     0,     0,     0,     0,   365,     0,     0,     0,
       0,     0,     0,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,     0,     0,     0,     0,
       8,     0,     0,     0,   358,   359,   360,   361,   362,   363,
       0,   366,   367,     0,     0,     0,     0,     0,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    28,
      29,    30,    31,    32,    33,    34,   364,   368,   742,     0,
       0,     0,     0,     0,    35,     0,     0,     0,   128,     0,
       0,   365,   129,   130,   131,   132,   133,     0,   134,   135,
     136,   137,     0,   138,   139,     0,     0,   140,   141,   142,
     143,   434,   725,     0,   144,   145,     0,     0,     0,     0,
       0,   157,     0,   146,     0,   147,   366,   367,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     148,   149,   150,     0,   435,     3,   436,   437,   438,   439,
       0,     0,     0,     0,    28,    29,    30,    31,    32,    33,
      34,     0,   368,   930,     0,     0,     0,     0,   633,    35,
       0,     0,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     3,   440,   441,   442,   443,     0,     0,   444,
       0,     0,   128,   445,   446,   447,   129,   130,   131,   132,
     133,     0,   134,   135,   136,   137,     0,   138,   139,     0,
       0,   140,   141,   142,   143,     0,     0,     0,   144,   145,
       0,     0,     0,     0,     0,     0,     0,   146,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,   148,   149,   150,   129,   130,   131,
     132,   133,     0,   134,   135,   136,   137,     0,   138,   139,
       0,     0,   140,   141,   142,   143,     0,     0,     0,   144,
     145,     0,     0,     0,     0,     0,     0,     0,   146,   151,
     147,   634,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   148,   149,   150,   448,     3,
    1025,  1026,     0,  1027,  1028,  1029,  1030,  1031,  1032,     0,
    1033,  1034,     0,  1035,  1036,  1037,  1038,  1039,     4,     5,
       6,     7,     8,    14,     3,     0,     0,     0,     0,     0,
     151,     0,     0,   635,     0,     0,     0,   636,     0,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,    13,
      14,     0,     0,     0,    15,    16,     0,     0,     0,     0,
      17,     0,     0,   520,    18,     0,     0,     0,     0,   128,
     157,    19,    20,     0,     0,   131,   132,   133,     0,   134,
     135,   136,   137,     3,   138,   139,     0,     0,   140,   141,
     142,   143,     0,     0,     0,  1297,   145,     0,     0,    28,
      29,    30,    31,    32,    33,    34,   633,     0,   637,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
      23,    24,    25,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,  1298,   508,     0,     9,    10,     0,
     521,    35,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,  1299,   522,   882,     0,    14,     0,   523,
       0,     0,     9,    10,   157,     0,     0,     0,     0,   612,
     613,     0,   614,     0,     0,   615,   616,     0,     0,    11,
      12,    13,    14,     0,   524,   525,     0,     0,     0,  1040,
    1041,     0,  1042,  1043,  1044,     0,  1045,  1046,     0,     0,
    1047,  1048,     0,  1049,     0,   526,     0,     0,     0,   634,
       0,     0,     0,     0,     0,   157,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
    1064,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     527,   528,     0,    28,    29,    30,    31,    32,    33,    34,
       0,    14,   617,     0,     0,     0,     0,     0,    35,     0,
       0,   635,     0,     0,  1065,   636,     0,     0,    28,    29,
      30,    31,    32,    33,    34,     0,     0,  1154,     0,     0,
     861,   862,   863,    35,   864,   865,   866,   867,     0,   868,
     869,   193,     0,   870,   871,   872,   873,     0,     0,     0,
     874,   875,     0,     0,     0,   802,     0,     0,     0,     0,
     803,   804,     0,   805,   806,   807,   808,   809,   810,     0,
     811,   812,     0,   813,   814,   815,   816,   817,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,    33,    34,     0,   802,  1174,     0,     0,     0,
     803,   804,    35,   805,   806,   807,   808,   809,   810,     0,
     811,   812,     0,   813,   814,   815,   816,   817,   876,   818,
       0,   819,     0,     0,    68,    69,   820,    70,     0,     0,
     861,   862,   863,     0,   864,   865,   866,   867,     0,   868,
     869,   193,   821,   870,   871,   872,   873,     0,     0,     0,
     874,   875,     0,     0,     0,     0,     0,     0,   298,   818,
       0,   819,     0,     0,     0,     0,   820,     0,     0,     0,
       0,     0,     0,     0,     0,   822,     0,     0,     0,     0,
       0,     0,   821,     0,     0,     0,     0,   299,     0,     0,
       0,   300,     0,     0,   301,   302,     0,     0,     0,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,     0,     0,     0,     0,   822,     0,   315,   876,     0,
     316,     0,     0,     0,     0,     0,     0,   317,     0,     0,
       0,     0,     0,     0,     0,     0,   318,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   823,     0,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,     0,     0,     0,   841,     0,
      28,    29,    30,    31,    32,    33,    34,   842,     0,     0,
       0,     0,     0,     0,     0,    35,   823,     0,   824,   825,
     826,   827,   828,   829,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   839,   840,   324,    98,     0,   841,   843,
       0,   100,     0,   101,     0,     0,     0,   842,     0,     0,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   103,   325,     0,
     326,   327,   328,   329,   330,     0,     0,     0,     0,   331,
       0,     0,   104,     0,     0,     0,     0,     0,   332,     0,
       0,     0,     0,   333,     0,   334,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,   336,   337,
     338,   339,   340,   341,   342,     0,     0,     0,     0,     0,
     343
};

static const yytype_int16 yycheck[] =
{
       5,   163,    25,    25,     1,   103,   104,    25,     1,   323,
     323,   323,   960,     1,   185,    20,   995,    57,     1,    93,
     723,  1090,   662,    28,    29,    30,    31,    14,     1,   471,
     677,    21,    22,     1,     9,     9,    77,  1118,    25,     5,
       6,    25,     8,     7,    94,    23,    24,     8,   736,   409,
      19,   411,   484,   485,   486,     5,     6,     9,     8,     9,
       5,     6,    43,     8,     8,   163,     9,    48,     5,     6,
      60,     8,   188,   189,   190,   191,   192,    20,    59,     5,
       6,     9,     8,    73,     7,   108,   184,  1085,   735,     5,
       6,     9,     8,     9,     7,     8,     8,    12,     5,     6,
      44,     8,     5,     6,    20,     8,   129,   181,     9,   114,
      20,   116,   117,   118,   212,    41,    65,    66,   105,   169,
     377,   105,   112,   113,   146,    41,   136,   149,    63,   152,
     166,    56,     7,   110,    41,     5,     6,  1474,     8,     5,
       6,     9,     8,    64,   185,   136,   168,     9,    10,  1454,
     197,   156,   157,     7,   194,  1460,   181,   110,    33,   233,
     105,   106,   107,     5,     6,   216,     8,   157,    63,   156,
       7,    13,   292,    63,     9,   180,   163,     7,   299,    33,
     300,     9,   232,     5,     6,   208,     8,  1492,     9,    10,
     298,     9,    10,   267,     9,  1462,   884,   885,     9,    41,
     205,   206,     9,     9,   125,   210,     8,  1461,     5,   380,
     898,     8,     9,     9,    10,    11,   299,   198,     9,     9,
     228,    11,   247,   210,   294,   657,   388,  1494,   233,    20,
     300,   221,   222,    87,   239,    31,    32,     8,   260,  1493,
     248,    31,    32,     9,    10,    11,  1459,   321,   295,     5,
       6,   683,     8,  1251,   275,     9,   279,    13,   294,   216,
     136,  1598,   267,   268,   287,    31,    32,   272,   294,   291,
     275,   276,   277,    44,   300,   280,   281,    11,  1491,   926,
     285,   538,   272,   290,   294,    41,     5,     6,   976,     8,
     180,     9,   218,   367,   392,    51,   286,    31,    32,     7,
     297,    12,   218,   294,   297,     5,     6,   954,     8,   297,
      60,   218,   289,   293,   297,   216,   390,   159,   160,   161,
     300,   296,   299,   290,   297,   294,   323,    24,    25,   297,
     323,   305,   293,   299,   298,   323,   289,    34,   307,   380,
     323,   391,   383,   294,   296,   293,   387,   296,   290,   300,
     323,   391,   296,   295,   299,   323,   301,   300,   308,   294,
     305,   306,   299,   795,   292,   290,   389,  1346,   358,   298,
     360,   294,   300,   295,   364,   416,   291,   299,   296,   305,
     293,   293,   290,   457,   300,   294,   296,   558,  1469,   305,
     380,   304,   301,   383,   384,   566,   299,   387,   305,   294,
     294,   388,   389,   159,   160,   161,   393,   385,   386,   393,
     400,   401,   290,   403,   395,   405,   292,   849,   492,   290,
    1489,   495,   496,   298,  1505,   295,   423,   290,   296,   407,
     453,   421,   422,   299,   296,   423,   424,   425,   426,    63,
     423,   424,   425,   426,   449,   887,   451,  1087,     5,     6,
       7,     8,     9,   290,   528,   553,    13,   299,   295,     5,
     290,   296,     8,     9,   469,   295,     5,     6,   296,     8,
     290,    28,  1175,   478,    13,   296,   463,   299,   296,   469,
      51,   296,   469,    39,    41,   296,   560,   492,   207,   296,
     296,     9,    10,   290,   544,    51,    52,   251,   252,   253,
     296,  1480,    41,   295,   292,    44,   296,   299,    65,    66,
     298,    14,    51,    69,    17,   589,   216,   558,   295,   509,
     272,   294,   545,     5,     6,   566,     8,   300,   295,   295,
       5,     6,   299,     8,   524,   525,   295,    40,    41,   136,
     299,   293,    45,   299,    47,   550,   551,   299,   598,   720,
     295,    54,   295,   543,   306,   596,   180,   136,     9,   549,
      11,  1509,   552,   119,   293,   294,   616,   607,    71,     5,
       6,   594,     8,   299,   295,    18,   566,    13,   299,   305,
      31,    32,   295,    86,   589,    23,   299,   136,    26,    27,
      28,    29,   136,    31,    32,    33,    28,    29,   293,   294,
      75,    76,   159,   160,   161,    41,   596,   612,   567,   568,
     569,   709,   593,   927,   927,   927,   307,   715,  1306,  1307,
     159,   160,   161,   247,   295,     5,     6,   298,     8,   296,
     635,    63,   706,   707,   708,   292,   641,   119,   120,   296,
      12,   663,   623,   624,   634,     9,    10,    11,   629,   295,
     631,   674,   768,   299,   770,   771,   772,   773,   774,    40,
     293,   294,   296,   653,    45,   289,    47,    31,    32,   296,
     294,   694,   677,    54,   295,   680,    61,   682,   299,   720,
       5,     6,   295,     8,     5,   673,   299,     8,    13,   305,
      71,  1338,   295,    73,   295,    75,    76,   296,   679,   704,
     690,   691,    82,   708,   745,    86,   300,   712,   713,   714,
     760,   734,   298,   754,   295,   738,    41,   292,    14,    44,
       8,    17,   296,   159,   160,   161,    51,   300,   292,   293,
     735,  1419,   296,    65,    66,   725,   292,   727,  1426,   729,
      25,   731,   299,   221,    40,    41,  1106,   303,  1108,    45,
     295,    47,   295,   196,   299,   745,   299,   296,    54,     9,
     299,     5,     6,   206,     8,   755,   756,   210,   295,   300,
     202,   203,   299,   205,  1421,    71,    26,    27,    28,   757,
     138,   139,    46,   857,    48,    49,    50,   777,   300,   779,
      86,   781,   295,   798,   295,   800,   292,   293,     5,     6,
     850,     8,     9,   295,   794,   291,   847,    23,   295,   859,
      26,    27,    28,    29,   295,    31,    32,    33,   299,   105,
     106,   107,   295,   295,   295,  1513,   299,   299,   850,   295,
     105,   106,   107,   907,   159,   160,   161,   138,   139,   282,
     283,   284,   285,   286,   287,   288,   299,   295,   291,   890,
     136,   299,   290,   290,   297,   295,   100,   101,   102,   299,
     850,   295,   304,   299,   295,   299,  1554,   295,   306,    75,
      76,    77,    25,    26,    27,    28,    29,   291,   295,   295,
     295,   125,   299,   933,   299,   959,    40,   961,   294,   295,
     878,    45,   882,    47,   912,   293,   919,  1585,   295,   880,
      54,   296,   925,     7,   909,   111,   112,   113,  1555,   295,
     292,   916,  1600,   299,   296,   905,    39,    71,    72,     7,
     290,   926,   293,    46,   294,    48,    49,    50,   296,    18,
     927,   921,    86,   923,   927,   296,   977,   978,   295,   927,
     928,   929,   299,   931,   927,   928,   929,   301,   931,   954,
    1597,   226,    19,   295,   927,   928,   929,   299,   295,   927,
     928,   929,   299,   117,    87,    88,    89,   209,   973,  1019,
      75,    76,    77,   295,   299,    19,   220,   299,   222,   223,
     224,   225,   294,    20,   989,   292,   298,   977,   978,   296,
     292,   293,   302,  1155,  1156,  1157,  1158,    25,    26,    27,
      28,    29,   293,  1165,  1166,  1167,   111,   112,   113,   293,
     133,   134,   135,   299,   137,   301,  1006,   140,   110,   305,
     306,   290,  1072,   290,   299,    55,   301,    57,    58,    59,
     305,   306,   836,   837,     5,     6,   290,     8,    26,    27,
      28,    29,    13,   977,   978,    16,   105,   106,   107,    20,
      21,    22,    23,    24,   290,    26,    27,    28,    29,   304,
      31,    32,    19,   295,    35,    36,    37,    38,    62,    62,
      41,    42,    43,    26,    27,    28,    29,  1151,  1152,  1069,
      51,   295,    53,   172,   295,   174,   175,   295,     5,     6,
     306,     8,   296,   105,   106,   107,   296,    68,    69,    70,
    1122,  1091,  1092,  1093,   193,   194,   195,   196,  1098,  1099,
    1100,  1101,  1102,  1103,   300,  1105,  1106,  1107,    18,  1109,
    1110,  1111,  1112,  1113,  1114,  1115,  1104,  1117,   296,  1119,
    1108,  1121,   103,  1123,   105,   106,   107,   296,  1116,  1499,
    1500,   296,    18,  1148,   296,  1186,   296,   296,   119,   120,
     213,   298,  1193,   304,  1195,   105,   106,   107,  1145,    26,
      27,    28,    29,   298,   298,   295,   216,   216,  1155,  1156,
    1157,  1158,   296,   296,   293,  1225,   298,   291,  1165,  1166,
    1167,   293,     8,   298,    84,   291,   295,  1177,   159,   160,
     161,    67,   295,   282,   283,   284,   285,   286,   287,   288,
     295,   295,   291,  1208,   302,   296,  1196,    19,   297,   296,
     296,   296,   293,    19,   296,  1205,   300,   300,   296,   293,
     293,   296,  1320,   299,   295,   304,   295,  1217,  1218,   243,
     296,   296,   296,   295,   295,   295,   295,   235,  1312,  1229,
     299,   296,   301,   296,   104,   247,   305,   306,   295,   109,
      22,   296,   298,   291,   290,   298,   296,   196,   300,  1249,
    1250,   302,   104,  1337,  1252,   304,   295,   109,  1258,  1259,
    1260,  1261,  1262,  1263,   300,  1265,  1298,   304,   154,   300,
     156,   157,   158,   300,   295,   136,  1264,   299,   296,   301,
     300,   300,   168,   305,   306,  1300,   196,   173,  1348,    20,
     176,   177,    62,     8,    62,   296,   296,   296,   250,   209,
     295,   211,   212,   299,   214,   215,   299,   193,   194,   195,
     196,   295,   198,   199,   290,   300,   296,   296,   299,   296,
     301,   295,   295,  1338,   305,   306,   166,   308,   296,   293,
     296,   296,   256,   219,   293,   104,  1420,    19,   300,   299,
     109,   301,   300,   296,   301,   305,   306,  1347,   181,   304,
     298,   295,   295,   300,  1354,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   291,   296,  1365,   254,   255,
       8,   300,   282,   283,   284,   285,   286,   287,   288,   296,
     300,   291,   296,   296,   300,   300,    19,   297,   296,  1422,
     296,  1475,   296,   300,   296,   300,   282,   283,   284,   285,
     286,   287,   288,   300,   296,   291,  1421,   296,   296,   300,
     300,   297,   282,   283,   284,   285,   286,   287,   288,   300,
     296,   291,  1482,   296,   296,   300,   300,   297,   296,   300,
     282,   283,   284,   285,   286,   287,   288,   296,  1438,  1439,
    1440,     5,     6,   296,     8,   297,   300,   296,   296,    13,
     300,   302,    16,   296,   293,   296,    20,    21,    22,    23,
      24,   295,    26,    27,    28,    29,     8,    31,    32,   300,
     300,    35,    36,    37,    38,  1507,   300,    41,    42,    43,
     295,   295,   295,  1591,   295,   304,   296,    51,   296,    53,
    1490,   296,   304,   295,   295,  1495,  1496,  1497,  1558,  1499,
     304,  1501,  1502,  1503,    68,    69,    70,   300,   296,   300,
     296,  1595,  1500,   282,   283,   284,   285,   286,   287,   288,
     300,   296,   291,  1523,  1524,  1525,   300,     8,   297,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   103,
    1555,   105,   106,   107,   295,   295,   300,   296,   295,   301,
     296,   296,   300,   296,    18,   119,   120,   295,   295,   295,
     304,  1594,   295,   295,    22,    23,    24,   296,    26,    27,
      28,    29,   296,    31,    32,    33,   299,    35,    36,    37,
      38,   295,  1597,   296,    42,    43,  1586,   296,   296,    19,
       8,     5,     6,   296,     8,   159,   160,   161,   296,    13,
     295,   295,    16,   256,   103,   296,    20,    21,    22,    23,
      24,   296,    26,    27,    28,    29,    19,    31,    32,   295,
     179,    35,    36,    37,    38,   296,   291,    41,    42,    43,
      25,   463,  1142,  1185,    25,   717,   703,    51,   393,    53,
    1144,   964,  1184,   344,    57,   564,   607,   845,   887,  1072,
       5,     6,   110,     8,    68,    69,    70,   674,    13,   966,
    1434,    16,  1127,   691,   857,    20,    21,    22,    23,    24,
     852,    26,    27,    28,    29,    10,    31,    32,   475,  1136,
      35,    36,    37,    38,   115,   424,    41,    42,    43,   103,
      -1,   105,   106,   107,    -1,   721,    51,   526,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   169,   170,   171,   172,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     194,   195,   196,    -1,    -1,   299,    -1,   301,    -1,    -1,
      -1,   305,   306,    -1,   308,   159,   160,   161,   103,   104,
       5,     6,    -1,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,   159,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    -1,    72,   282,   283,
     284,   285,   286,   287,   288,    -1,    -1,   291,    -1,    -1,
      -1,    -1,    -1,   297,     5,     6,    -1,     8,   296,    -1,
      -1,   196,    13,    -1,    -1,    16,    -1,    -1,   103,    20,
      21,    22,    23,    24,    -1,    26,    27,    28,    29,    -1,
      31,    32,   117,    -1,    35,    36,    37,    38,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    53,    -1,    -1,   299,    -1,   301,    -1,    -1,
      -1,   305,   306,    -1,   308,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,   159,   160,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,    -1,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,
      16,    -1,   103,   104,    20,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,   299,    31,    32,    -1,    -1,    35,
      36,    37,    38,   308,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    -1,    -1,    -1,   159,   160,
     161,    -1,     5,     6,    -1,     8,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    -1,    26,    27,    28,    29,   103,    31,    32,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,    -1,
       0,    -1,    -1,   308,    -1,    68,    69,    70,    -1,    -1,
      -1,     5,     6,    -1,     8,    -1,    -1,    -1,    18,    13,
      -1,    -1,    16,   159,   160,   161,    20,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    32,    -1,
     103,    35,    36,    37,    38,    -1,    -1,    41,    42,    43,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    51,    46,    53,
      48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,   160,   161,    87,
      88,    89,    -1,    -1,    -1,     5,     6,    -1,     8,   103,
      -1,    -1,    -1,    13,    -1,    -1,    16,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      -1,    31,    32,    39,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    43,    -1,   133,   134,   135,    54,   137,
      -1,    51,   140,    53,   154,   155,   156,   157,   158,    -1,
      -1,    -1,    -1,   299,    70,   159,   160,   161,    68,    69,
      70,    -1,   308,    79,    -1,    -1,   176,   177,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    -1,    -1,   193,   194,   195,   196,    -1,    -1,    -1,
     200,   201,    -1,   103,    -1,    39,   206,    -1,    -1,    -1,
     210,    -1,    46,     7,    48,    49,    50,   217,   218,   125,
     126,   127,   128,   129,   130,   131,    -1,    -1,    22,    23,
      24,    -1,    26,    27,    28,    29,   299,    31,    32,    33,
      -1,    35,    36,    37,    38,   308,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    87,    88,    89,    -1,    -1,    -1,   159,
     160,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   273,   274,    -1,   276,   277,   278,    -1,
     280,   281,   282,   283,   284,   285,   286,   287,   288,     5,
      -1,    -1,     8,    -1,    -1,    -1,    -1,   297,    -1,   133,
     134,   135,    18,   137,    -1,   299,   140,    -1,   296,    -1,
      15,    16,    17,    -1,   308,    20,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    -1,    31,    32,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    15,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    -1,    31,    32,   290,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,   103,   299,
      -1,    -1,    51,    -1,    53,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    -1,    -1,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,   162,   163,   164,   165,
     166,   167,     5,    -1,   103,     8,    -1,    -1,    -1,    -1,
     176,   177,   296,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   204,    16,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,    26,
      27,    28,    29,   219,    31,    32,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,   254,   255,
       8,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      18,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   282,   283,   284,   285,
     286,   287,   288,    -1,   290,   291,   103,    -1,    -1,    -1,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,    -1,   308,    -1,   158,    -1,    -1,    -1,   162,
     163,   164,   165,   166,   167,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,   162,   163,   164,   165,   166,   167,
      -1,   254,   255,    -1,    -1,    -1,    -1,    -1,   176,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,   196,   282,
     283,   284,   285,   286,   287,   288,   204,   290,   291,    -1,
      -1,    -1,    -1,    -1,   297,    -1,    -1,    -1,    16,    -1,
      -1,   219,    20,    21,    22,    23,    24,    -1,    26,    27,
      28,    29,    -1,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,   299,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    51,    -1,    53,   254,   255,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    -1,    72,    18,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,   282,   283,   284,   285,   286,   287,
     288,    -1,   290,   291,    -1,    -1,    -1,    -1,    41,   297,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    18,   111,   112,   113,   114,    -1,    -1,   117,
      -1,    -1,    16,   121,   122,   123,    20,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    -1,    31,    32,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    68,    69,    70,    20,    21,    22,
      23,    24,    -1,    26,    27,    28,    29,    -1,    31,    32,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,   103,
      53,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,   226,    18,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    37,    38,   154,   155,
     156,   157,   158,   196,    18,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,   206,    -1,    -1,    -1,   210,    -1,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,    -1,    -1,    -1,    -1,
     206,    -1,    -1,    67,   210,    -1,    -1,    -1,    -1,    16,
     308,   217,   218,    -1,    -1,    22,    23,    24,    -1,    26,
      27,    28,    29,    18,    31,    32,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,   282,
     283,   284,   285,   286,   287,   288,    41,    -1,   291,    -1,
      -1,    -1,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,   274,    -1,
     276,   277,   278,    -1,   280,   281,   282,   283,   284,   285,
     286,   287,   288,    -1,    91,   291,    -1,   176,   177,    -1,
     154,   297,   156,   157,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,   168,   299,    -1,   196,    -1,   173,
      -1,    -1,   176,   177,   308,    -1,    -1,    -1,    -1,   208,
     209,    -1,   211,    -1,    -1,   214,   215,    -1,    -1,   193,
     194,   195,   196,    -1,   198,   199,    -1,    -1,    -1,   230,
     231,    -1,   233,   234,   235,    -1,   237,   238,    -1,    -1,
     241,   242,    -1,   244,    -1,   219,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,   308,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     254,   255,    -1,   282,   283,   284,   285,   286,   287,   288,
      -1,   196,   291,    -1,    -1,    -1,    -1,    -1,   297,    -1,
      -1,   206,    -1,    -1,   305,   210,    -1,    -1,   282,   283,
     284,   285,   286,   287,   288,    -1,    -1,   291,    -1,    -1,
      22,    23,    24,   297,    26,    27,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,   284,
     285,   286,   287,   288,    -1,    16,   291,    -1,    -1,    -1,
      21,    22,   297,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    37,    38,   110,    80,
      -1,    82,    -1,    -1,     5,     6,    87,     8,    -1,    -1,
      22,    23,    24,    -1,    26,    27,    28,    29,    -1,    31,
      32,    33,   103,    35,    36,    37,    38,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    39,    80,
      -1,    82,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    72,    -1,    -1,    75,    76,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,   136,    -1,    98,   110,    -1,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    -1,    -1,    -1,   249,    -1,
     282,   283,   284,   285,   286,   287,   288,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   297,   227,    -1,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    39,    40,    -1,   249,   290,
      -1,    45,    -1,    47,    -1,    -1,    -1,   258,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    97,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
     124
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   310,     0,    18,   154,   155,   156,   157,   158,   176,
     177,   193,   194,   195,   196,   200,   201,   206,   210,   217,
     218,   273,   274,   276,   277,   278,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   297,   311,   314,   320,   321,
     322,   323,   324,   325,   332,   334,   335,   337,   338,   339,
     340,   341,   342,   359,   377,   381,   403,   404,   459,   462,
     468,   469,   470,   474,   483,   486,   491,   216,     5,     6,
       8,   315,   316,   299,   363,    64,   125,   405,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   467,   467,     8,    14,    17,    40,    41,
      45,    47,    54,    71,    86,   295,   326,   364,   365,   366,
     367,   298,   299,   275,   471,   216,   475,   492,   216,   316,
       9,   317,   317,     9,    10,   318,   318,    13,    16,    20,
      21,    22,    23,    24,    26,    27,    28,    29,    31,    32,
      35,    36,    37,    38,    42,    43,    51,    53,    68,    69,
      70,   103,   104,   159,   160,   161,   299,   308,   316,   322,
     323,   367,   368,   426,   449,   450,   455,   456,   290,   316,
     316,   316,   316,     7,    12,   412,   413,   412,   412,   290,
     343,    60,   344,   290,   382,   388,    23,    26,    27,    28,
      29,    31,    32,    33,   290,   306,   406,   409,   411,   412,
     317,   290,   290,   290,   290,   488,   294,   317,   360,   315,
     299,   367,   426,   449,   451,   455,     7,    33,   298,   313,
     293,   295,   295,    46,    48,    49,    50,   365,   365,   327,
     368,   451,   298,   455,   295,   317,   317,   207,   316,   475,
     100,   101,   102,   125,   220,   222,   223,   224,   225,   316,
      75,    76,   316,   316,   455,    26,    27,    28,    29,   449,
      51,   449,    24,    25,    34,    15,    17,   455,   218,   305,
     316,   367,   308,   316,   317,   136,   136,   136,   364,   365,
     136,   307,   105,   106,   107,   136,   299,   301,   305,   306,
     312,   449,   313,   296,    12,   296,   296,   310,    39,    68,
      72,    75,    76,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    98,   101,   108,   117,   316,
     451,    61,   345,   346,    39,    72,    74,    75,    76,    77,
      78,    83,    92,    97,    99,   111,   112,   113,   114,   115,
     116,   117,   118,   124,   365,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   162,   163,
     164,   165,   166,   167,   204,   219,   254,   255,   290,   291,
     314,   315,   321,   332,   387,   389,   390,   391,   392,   394,
     395,   403,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   459,   469,   305,
     295,   299,   408,   295,   408,   295,   408,   295,   408,   295,
     408,   295,   408,   295,   407,   409,   295,   412,   296,     7,
       8,   293,   304,   476,   484,   489,   493,    73,    75,    76,
      82,   316,   316,   300,    39,    72,    74,    75,    76,    77,
     111,   112,   113,   114,   117,   121,   122,   123,   226,   455,
     298,   218,   316,   365,   295,   298,   295,   290,   295,   292,
       8,   317,   317,   296,   290,   295,   313,   119,   120,   299,
     316,   384,   451,   300,   166,   472,   316,   221,   136,   449,
      25,   316,   451,   316,   300,   300,   300,   316,   317,   316,
     316,   316,   455,   316,   316,   295,   295,   316,    20,   300,
     317,   457,   458,   444,   445,   455,   291,   312,   291,   295,
      75,    76,    77,   111,   112,   113,   301,   350,   347,   451,
      67,   154,   168,   173,   198,   199,   219,   254,   255,   291,
     314,   321,   332,   342,   358,   359,   369,   373,   381,   403,
     459,   469,   487,   295,   295,   385,   317,   317,   317,   299,
     110,   289,   299,   103,   451,   304,   197,   295,   388,    55,
      57,    58,    59,   393,   396,   397,   398,   399,   400,   401,
     315,   317,   390,   315,   317,   317,   318,    11,    31,    32,
     295,   318,   319,   315,   317,   364,    15,    17,   367,   455,
     451,    87,   313,   411,   365,   327,   295,   412,   295,   317,
     317,   317,   317,   318,   319,   319,   291,   293,   315,   296,
     317,   317,   208,   209,   211,   214,   215,   291,   321,   332,
     459,   477,   479,   480,   482,    84,   209,   212,   291,   473,
     479,   481,   485,    41,   154,   206,   210,   291,   321,   332,
     490,   206,   210,   291,   321,   332,   494,    75,    76,    77,
     111,   112,   113,   295,   295,   316,   316,   300,   455,   313,
     463,   464,   290,    51,   451,   460,   461,     7,   293,   296,
     296,   326,   328,   329,   301,   357,   443,    19,   336,   473,
     136,   316,    19,   300,   450,   450,   450,   305,   451,   451,
      20,   293,   300,   302,   293,   317,    39,    51,    52,    69,
     119,   292,   303,   351,   352,   353,   293,   110,   370,   374,
     317,   317,   488,   110,   289,   103,   451,   290,   290,   290,
     388,   290,   317,   313,   383,   299,   455,   304,   317,   299,
     316,   299,   316,   317,   365,    19,   295,    20,   385,   446,
     447,   448,   291,   451,   393,    56,   390,   402,   315,   317,
     390,   402,   402,   402,    62,    62,   295,   295,   316,   451,
     295,   412,   455,   315,   317,   442,   296,   313,   296,   300,
     296,   296,   296,   296,   296,   407,   296,   304,     8,   293,
     316,   213,   298,   305,   317,   478,   298,   313,   412,   412,
     298,   298,   412,   412,   295,   216,   317,   316,   216,   316,
     216,   317,    16,    21,    22,    24,    25,    26,    27,    28,
      29,    31,    32,    34,    35,    36,    37,    38,    80,    82,
      87,   103,   136,   227,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   249,   258,   290,   379,   380,   452,    63,   361,   300,
     298,   296,   293,   328,     8,   298,   291,   293,     8,   298,
     291,    22,    23,    24,    26,    27,    28,    29,    31,    32,
      35,    36,    37,    38,    42,    43,   110,   321,   330,   410,
     411,   415,   299,   444,   295,   295,   316,   384,    28,    29,
      63,   202,   203,   205,   412,   316,   316,   450,   295,   296,
     296,   317,   458,   455,   296,   295,   352,   295,   316,   355,
     302,   451,   451,    72,   117,   316,   451,    72,   117,   365,
     316,   299,   316,   299,   316,   365,    19,   346,   371,   375,
     291,   489,   296,   136,   383,    39,    46,    48,    49,    50,
      87,    88,    89,   133,   134,   135,   137,   140,   296,   251,
     252,   253,   317,   226,   378,   317,   300,   317,   317,   293,
     300,   455,   384,   446,   455,   296,   293,   315,   317,   315,
     317,   317,   318,    19,   313,   296,   295,   293,   293,   296,
     296,   408,   408,   408,   408,   408,   408,   317,   317,    63,
     180,   247,   289,   317,   295,   304,   295,   296,   296,   295,
     295,   296,   296,   317,   450,   316,    63,   316,   296,    25,
      26,    27,    28,    29,   295,   453,   243,   235,   247,   295,
     228,   248,    22,   453,   453,    21,    22,    24,    25,    26,
      27,    28,    29,    31,    32,    34,    35,    36,    37,    38,
     230,   231,   233,   234,   235,   237,   238,   241,   242,   244,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   305,   454,   296,   413,   299,
     305,   315,   298,   362,    28,    65,    66,   313,   317,   449,
     465,   466,   463,   291,   298,   290,   460,   290,   295,   313,
     295,   299,   295,   299,    26,    27,    28,    29,   295,   299,
     295,   299,   295,   299,   295,   299,   295,   299,   295,   299,
     295,   299,   295,   299,   295,   299,   295,   299,   295,   299,
     295,   299,   295,   299,   104,   109,   321,   331,   412,   317,
     302,   446,   446,   357,   443,   315,   296,   446,   317,   348,
     349,   451,   293,   354,   316,   196,   322,   316,   455,   317,
     317,   293,   455,   384,   291,   169,   170,   171,   172,   291,
     314,   321,   332,   372,   469,   172,   174,   175,   291,   314,
     321,   332,   376,   469,   291,   313,   296,   295,   304,   304,
     300,   300,   300,   300,   295,   384,   136,   300,   300,   451,
     362,   451,   296,   378,   448,    62,    62,   296,   296,   316,
     296,   446,   442,   442,     8,   293,     8,   316,    63,   180,
     181,   247,   478,   296,   317,   250,   313,   299,   299,    25,
      26,    27,    28,    29,   272,   293,   299,   306,   291,   292,
     300,   317,    22,    23,    24,    26,    27,    28,    29,    31,
      32,    35,    36,    37,    38,    44,   313,   410,   414,   295,
     295,   290,   330,   328,   465,   317,   317,   317,   295,   299,
     295,   299,   295,   299,   295,   299,   317,   317,   317,   317,
     317,   317,   318,   317,   317,   319,   317,   318,   319,   317,
     317,   317,   317,   317,   317,   317,   318,   317,   415,   317,
       8,    44,   317,    44,    51,   449,   317,    42,    91,   110,
     333,   456,   296,   300,   296,   296,   295,   295,   472,   296,
     296,   296,   293,   353,   354,   316,   300,   300,   451,   451,
     256,   364,   364,   364,   364,   364,   364,   364,   383,   317,
     138,   139,   138,   139,   379,   350,   315,   293,    19,   315,
     315,   317,   296,   317,   316,   181,   304,   298,   293,   317,
     317,   313,   300,   317,   292,   300,    26,    27,    28,    29,
     317,    26,    27,    28,   317,   330,   291,   291,   296,   300,
     296,   300,   317,   317,   317,   317,   317,   317,   318,   317,
     296,   300,   296,   300,   296,   300,   296,   300,   296,   296,
     300,   296,   296,   300,   296,   300,   296,   300,   296,   300,
     296,   300,   296,   300,   296,   296,   300,   296,     8,   296,
     300,    51,   449,   299,   316,   302,   446,   446,   451,   295,
     293,    19,   365,   296,   296,   296,   295,   451,   384,     8,
     478,   317,   313,   300,   300,   300,   317,   296,   304,   304,
     304,   296,   291,   295,   295,   296,   300,   296,   300,   296,
     300,   296,   300,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   296,   295,     8,   300,   298,
     296,   296,   446,   451,   384,   455,   446,   301,   356,   357,
     304,   296,   293,   296,   452,   300,   317,   317,   317,   422,
     420,   295,   295,   295,   295,   421,   420,   419,   418,   416,
     417,   421,   420,   419,   418,   425,   423,   424,   415,   296,
     356,   451,   296,   295,   478,   313,   296,   296,   296,   296,
     465,   296,   317,   421,   420,   419,   418,   296,   317,   296,
     296,   317,   296,   318,   296,   317,   319,   296,   318,   319,
     296,   296,   296,   296,   296,   415,     8,    44,   296,    44,
      51,   296,   449,   362,   295,    19,   386,   446,   293,   296,
     296,   296,   296,     8,   446,   384,    39,    54,    70,    79,
      93,    94,    95,    96,   125,   126,   127,   128,   129,   130,
     131,   290,   296,   313,   296,   295,   295,   296,   256,   446,
     317,   103,   296,   296,   365,   455,   451,    19,   384,   356,
     295,   446,   296
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   309,   310,   310,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   311,   311,   311,
     312,   312,   313,   313,   314,   314,   314,   315,   315,   316,
     316,   316,   317,   318,   318,   319,   319,   319,   320,   320,
     320,   320,   320,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   322,   322,   322,   322,   323,   323,   323,   323,
     324,   325,   326,   327,   327,   328,   329,   329,   329,   330,
     330,   330,   331,   331,   332,   332,   332,   333,   333,   333,
     333,   333,   333,   334,   334,   334,   335,   336,   336,   336,
     336,   336,   336,   337,   338,   339,   340,   341,   342,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   344,   344,   345,   345,
     346,   346,   347,   347,   348,   348,   349,   349,   350,   350,
     351,   351,   351,   351,   351,   351,   351,   352,   352,   353,
     353,   354,   354,   355,   356,   356,   357,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   359,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   361,   361,   362,   362,   363,
     363,   364,   364,   364,   364,   364,   364,   364,   365,   365,
     365,   365,   366,   366,   366,   366,   366,   366,   366,   366,
     367,   368,   368,   368,   368,   368,   368,   369,   369,   370,
     370,   370,   371,   371,   372,   372,   372,   372,   372,   372,
     372,   372,   373,   374,   374,   374,   375,   375,   376,   376,
     376,   376,   376,   376,   376,   377,   378,   378,   379,   379,
     380,   381,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
     383,   384,   384,   384,   385,   385,   385,   385,   385,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   387,   388,   388,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   390,   391,   392,   393,   393,   394,
     394,   394,   395,   396,   396,   396,   396,   397,   397,   397,
     398,   399,   400,   401,   402,   402,   402,   403,   404,   404,
     405,   405,   405,   406,   406,   407,   407,   408,   408,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   411,   412,   412,   413,   413,   414,   414,
     414,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   416,   416,   416,
     417,   417,   417,   418,   418,   419,   419,   420,   420,   421,
     421,   422,   422,   423,   423,   423,   424,   424,   424,   424,
     425,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     442,   442,   442,   442,   442,   443,   443,   444,   444,   445,
     445,   446,   446,   447,   447,   448,   448,   448,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   450,   450,
     451,   451,   451,   451,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   453,
     453,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   457,   457,   458,   458,   458,   458,   458,   459,
     459,   459,   459,   459,   459,   460,   460,   460,   461,   461,
     462,   462,   463,   463,   464,   465,   465,   466,   466,   466,
     466,   466,   466,   466,   466,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     468,   468,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   470,   470,   471,   471,   472,   472,   473,
     474,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   476,   476,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   478,   478,   479,   479,   479,   479,   479,   479,
     480,   481,   482,   483,   483,   484,   484,   485,   485,   485,
     485,   486,   487,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   489,   489,   490,   490,   490,   490,   490,
     490,   490,   491,   491,   492,   492,   492,   493,   493,   494,
     494,   494,   494
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     3,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     1,     1,     1,
       2,     2,     3,     2,     2,     1,     1,     1,     4,     1,
       0,     2,     1,     3,     2,     4,     6,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     2,     3,     2,     2,     2,     1,     1,
       2,     1,     2,     4,     6,     3,     5,     7,     9,     3,
       4,     7,     1,     1,     1,     2,     0,     2,     2,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     1,     2,     3,     7,     0,     2,     2,
       2,     2,     2,     3,     3,     2,     1,     4,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     5,     0,     2,     0,     2,
       0,     2,     3,     1,     0,     1,     1,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     4,     0,     2,     4,
       3,     0,     2,     3,     0,     1,     5,     3,     4,     4,
       4,     1,     1,     1,     1,     1,     2,     2,     4,    13,
      22,     1,     1,     5,     3,     7,     5,     4,     7,     0,
       2,     2,     2,     2,     2,     2,     2,     5,     2,     2,
       2,     2,     2,     2,     5,     0,     2,     0,     2,     0,
       3,     9,     9,     7,     7,     1,     1,     1,     2,     2,
       1,     4,     0,     1,     1,     2,     2,     2,     2,     1,
       4,     2,     5,     3,     2,     2,     1,     4,     3,     0,
       2,     2,     0,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     9,     0,     2,     2,     0,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     0,     4,     1,     3,
       1,    13,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     5,     8,     6,     5,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     4,
       5,     1,     1,     1,     0,     4,     4,     4,     4,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     5,     1,     0,     2,     2,     1,
       2,     4,     5,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     4,     6,     4,     4,    11,     1,     5,
       3,     7,     5,     5,     3,     1,     2,     2,     1,     2,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     1,     1,     4,     4,     2,     4,     2,
       0,     1,     1,     3,     1,     3,     1,     0,     3,     5,
       4,     3,     5,     5,     5,     5,     5,     5,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     5,     5,     5,     4,     4,     4,     4,
       4,     4,     3,     2,     0,     1,     1,     2,     1,     1,
       1,     1,     4,     4,     5,     4,     4,     4,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     8,     8,
       8,     8,     7,     7,     7,     7,     7,     0,     2,     2,
       0,     2,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     2,     0,     2,     3,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     2,     5,     3,
       2,     2,     2,     2,     2,     5,     4,     6,     2,     4,
       0,     3,     3,     1,     1,     0,     3,     0,     1,     1,
       3,     0,     1,     1,     3,     1,     3,     4,     4,     4,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     4,     1,     0,    10,     6,     5,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     2,
       3,     4,     6,     5,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     4,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     0,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     3,     4,     2,     2,     2,     5,
       5,     7,     4,     3,     2,     3,     2,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     3,     2,     6,
       7,     3,     3,     3,     6,     0,     1,     3,     5,     6,
       4,     4,     1,     3,     3,     1,     1,     1,     1,     4,
       1,     6,     6,     6,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     5,     4,     7,     6,     7,     6,
       9,     8,     3,     8,     4,     0,     2,     0,     1,     3,
       3,     0,     2,     2,     2,     3,     2,     2,     2,     2,
       2,     0,     2,     3,     1,     1,     4,     5,     4,     5,
       3,     4,     1,     1,     3,     8,     2,     3,     1,     1,
       3,     3,     3,     4,     6,     0,     2,     3,     1,     3,
       1,     4,     3,     0,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     0,     2,     2,     3,     3,     4,     2,
       1,     1,     3,     5,     0,     2,     2,     0,     2,     4,
       3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 4: /* decl: classHead '{' classDecls '}'  */
#line 193 "asmparse.y"
                                                                                { PASM->EndClass(); }
#line 3540 "prebuilt\\asmparse.cpp"
    break;

  case 5: /* decl: nameSpaceHead '{' decls '}'  */
#line 194 "asmparse.y"
                                                                                { PASM->EndNameSpace(); }
#line 3546 "prebuilt\\asmparse.cpp"
    break;

  case 6: /* decl: methodHead methodDecls '}'  */
#line 195 "asmparse.y"
                                                                                { if(PASM->m_pCurMethod->m_ulLines[1] ==0)
                                                                                  {  PASM->m_pCurMethod->m_ulLines[1] = PASM->m_ulCurLine;
                                                                                     PASM->m_pCurMethod->m_ulColumns[1]=PASM->m_ulCurColumn;}
                                                                                  PASM->EndMethod(); }
#line 3555 "prebuilt\\asmparse.cpp"
    break;

  case 13: /* decl: assemblyHead '{' assemblyDecls '}'  */
#line 205 "asmparse.y"
                                                                                { PASMM->EndAssembly(); }
#line 3561 "prebuilt\\asmparse.cpp"
    break;

  case 14: /* decl: assemblyRefHead '{' assemblyRefDecls '}'  */
#line 206 "asmparse.y"
                                                                                { PASMM->EndAssembly(); }
#line 3567 "prebuilt\\asmparse.cpp"
    break;

  case 15: /* decl: exptypeHead '{' exptypeDecls '}'  */
#line 207 "asmparse.y"
                                                                                { PASMM->EndComType(); }
#line 3573 "prebuilt\\asmparse.cpp"
    break;

  case 16: /* decl: manifestResHead '{' manifestResDecls '}'  */
#line 208 "asmparse.y"
                                                                                { PASMM->EndManifestRes(); }
#line 3579 "prebuilt\\asmparse.cpp"
    break;

  case 20: /* decl: _SUBSYSTEM int32  */
#line 212 "asmparse.y"
                                                                                {
#ifdef _PREFAST_
#pragma warning(push)
#pragma warning(disable:22011) // Suppress PREFast warning about integer overflow/underflow
#endif
                                                                                  PASM->m_dwSubsystem = (yyvsp[0].int32);
#ifdef _PREFAST_
#pragma warning(pop)
#endif
                                                                                }
#line 3594 "prebuilt\\asmparse.cpp"
    break;

  case 21: /* decl: _CORFLAGS int32  */
#line 222 "asmparse.y"
                                                                                { PASM->m_dwComImageFlags = (yyvsp[0].int32); }
#line 3600 "prebuilt\\asmparse.cpp"
    break;

  case 22: /* decl: _FILE ALIGNMENT_ int32  */
#line 223 "asmparse.y"
                                                                                { PASM->m_dwFileAlignment = (yyvsp[0].int32);
                                                                                  if(((yyvsp[0].int32) & ((yyvsp[0].int32) - 1))||((yyvsp[0].int32) < 0x200)||((yyvsp[0].int32) > 0x10000))
                                                                                    PASM->report->error("Invalid file alignment, must be power of 2 from 0x200 to 0x10000\n");}
#line 3608 "prebuilt\\asmparse.cpp"
    break;

  case 23: /* decl: _IMAGEBASE int64  */
#line 226 "asmparse.y"
                                                                                { PASM->m_stBaseAddress = (ULONGLONG)(*((yyvsp[0].int64))); delete (yyvsp[0].int64);
                                                                                  if(PASM->m_stBaseAddress & 0xFFFF)
                                                                                    PASM->report->error("Invalid image base, must be 0x10000-aligned\n");}
#line 3616 "prebuilt\\asmparse.cpp"
    break;

  case 24: /* decl: _STACKRESERVE int64  */
#line 229 "asmparse.y"
                                                                                { PASM->m_stSizeOfStackReserve = (size_t)(*((yyvsp[0].int64))); delete (yyvsp[0].int64); }
#line 3622 "prebuilt\\asmparse.cpp"
    break;

  case 29: /* decl: _MSCORLIB  */
#line 234 "asmparse.y"
                                                                                { PASM->m_fIsMscorlib = TRUE; }
#line 3628 "prebuilt\\asmparse.cpp"
    break;

  case 32: /* compQstring: QSTRING  */
#line 241 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[0].binstr); }
#line 3634 "prebuilt\\asmparse.cpp"
    break;

  case 33: /* compQstring: compQstring '+' QSTRING  */
#line 242 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 3640 "prebuilt\\asmparse.cpp"
    break;

  case 34: /* languageDecl: _LANGUAGE SQSTRING  */
#line 245 "asmparse.y"
                                                                                { LPCSTRToGuid((yyvsp[0].string),&(PASM->m_guidLang)); }
#line 3646 "prebuilt\\asmparse.cpp"
    break;

  case 35: /* languageDecl: _LANGUAGE SQSTRING ',' SQSTRING  */
#line 246 "asmparse.y"
                                                                                { LPCSTRToGuid((yyvsp[-2].string),&(PASM->m_guidLang));
                                                                                  LPCSTRToGuid((yyvsp[0].string),&(PASM->m_guidLangVendor));}
#line 3653 "prebuilt\\asmparse.cpp"
    break;

  case 36: /* languageDecl: _LANGUAGE SQSTRING ',' SQSTRING ',' SQSTRING  */
#line 248 "asmparse.y"
                                                                                { LPCSTRToGuid((yyvsp[-4].string),&(PASM->m_guidLang));
                                                                                  LPCSTRToGuid((yyvsp[-2].string),&(PASM->m_guidLangVendor));
                                                                                  LPCSTRToGuid((yyvsp[-2].string),&(PASM->m_guidDoc));}
#line 3661 "prebuilt\\asmparse.cpp"
    break;

  case 37: /* id: ID  */
#line 253 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3667 "prebuilt\\asmparse.cpp"
    break;

  case 38: /* id: SQSTRING  */
#line 254 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3673 "prebuilt\\asmparse.cpp"
    break;

  case 39: /* dottedName: id  */
#line 257 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3679 "prebuilt\\asmparse.cpp"
    break;

  case 40: /* dottedName: DOTTEDNAME  */
#line 258 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 3685 "prebuilt\\asmparse.cpp"
    break;

  case 41: /* dottedName: dottedName '.' dottedName  */
#line 259 "asmparse.y"
                                                              { (yyval.string) = newStringWDel((yyvsp[-2].string), '.', (yyvsp[0].string)); }
#line 3691 "prebuilt\\asmparse.cpp"
    break;

  case 42: /* int32: INT32_V  */
#line 262 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[0].int32); }
#line 3697 "prebuilt\\asmparse.cpp"
    break;

  case 43: /* int64: INT64_V  */
#line 265 "asmparse.y"
                                                              { (yyval.int64) = (yyvsp[0].int64); }
#line 3703 "prebuilt\\asmparse.cpp"
    break;

  case 44: /* int64: INT32_V  */
#line 266 "asmparse.y"
                                                              { (yyval.int64) = neg ? new int64_t((yyvsp[0].int32)) : new int64_t((unsigned)(yyvsp[0].int32)); }
#line 3709 "prebuilt\\asmparse.cpp"
    break;

  case 45: /* float64: FLOAT64  */
#line 269 "asmparse.y"
                                                              { (yyval.float64) = (yyvsp[0].float64); }
#line 3715 "prebuilt\\asmparse.cpp"
    break;

  case 46: /* float64: FLOAT32_ '(' int32 ')'  */
#line 270 "asmparse.y"
                                                              { float f; *((int32_t*) (&f)) = (yyvsp[-1].int32); (yyval.float64) = new double(f); }
#line 3721 "prebuilt\\asmparse.cpp"
    break;

  case 47: /* float64: FLOAT64_ '(' int64 ')'  */
#line 271 "asmparse.y"
                                                              { (yyval.float64) = (double*) (yyvsp[-1].int64); }
#line 3727 "prebuilt\\asmparse.cpp"
    break;

  case 48: /* typedefDecl: _TYPEDEF type AS_ dottedName  */
#line 275 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].binstr),(yyvsp[0].string)); }
#line 3733 "prebuilt\\asmparse.cpp"
    break;

  case 49: /* typedefDecl: _TYPEDEF className AS_ dottedName  */
#line 276 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].token),(yyvsp[0].string)); }
#line 3739 "prebuilt\\asmparse.cpp"
    break;

  case 50: /* typedefDecl: _TYPEDEF memberRef AS_ dottedName  */
#line 277 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].token),(yyvsp[0].string)); }
#line 3745 "prebuilt\\asmparse.cpp"
    break;

  case 51: /* typedefDecl: _TYPEDEF customDescr AS_ dottedName  */
#line 278 "asmparse.y"
                                                                                { (yyvsp[-2].cad)->tkOwner = 0; PASM->AddTypeDef((yyvsp[-2].cad),(yyvsp[0].string)); }
#line 3751 "prebuilt\\asmparse.cpp"
    break;

  case 52: /* typedefDecl: _TYPEDEF customDescrWithOwner AS_ dottedName  */
#line 279 "asmparse.y"
                                                                                { PASM->AddTypeDef((yyvsp[-2].cad),(yyvsp[0].string)); }
#line 3757 "prebuilt\\asmparse.cpp"
    break;

  case 53: /* compControl: P_DEFINE dottedName  */
#line 284 "asmparse.y"
                                                                                { DefineVar((yyvsp[0].string), NULL); }
#line 3763 "prebuilt\\asmparse.cpp"
    break;

  case 54: /* compControl: P_DEFINE dottedName compQstring  */
#line 285 "asmparse.y"
                                                                                { DefineVar((yyvsp[-1].string), (yyvsp[0].binstr)); }
#line 3769 "prebuilt\\asmparse.cpp"
    break;

  case 55: /* compControl: P_UNDEF dottedName  */
#line 286 "asmparse.y"
                                                                                { UndefVar((yyvsp[0].string)); }
#line 3775 "prebuilt\\asmparse.cpp"
    break;

  case 56: /* compControl: P_IFDEF dottedName  */
#line 287 "asmparse.y"
                                                                                { SkipToken = !IsVarDefined((yyvsp[0].string));
                                                                                  IfEndif++;
                                                                                }
#line 3783 "prebuilt\\asmparse.cpp"
    break;

  case 57: /* compControl: P_IFNDEF dottedName  */
#line 290 "asmparse.y"
                                                                                { SkipToken = IsVarDefined((yyvsp[0].string));
                                                                                  IfEndif++;
                                                                                }
#line 3791 "prebuilt\\asmparse.cpp"
    break;

  case 58: /* compControl: P_ELSE  */
#line 293 "asmparse.y"
                                                                                { if(IfEndif == 1) SkipToken = !SkipToken;}
#line 3797 "prebuilt\\asmparse.cpp"
    break;

  case 59: /* compControl: P_ENDIF  */
#line 294 "asmparse.y"
                                                                                { if(IfEndif == 0)
                                                                                    PASM->report->error("Unmatched #endif\n");
                                                                                  else IfEndif--;
                                                                                }
#line 3806 "prebuilt\\asmparse.cpp"
    break;

  case 60: /* compControl: P_INCLUDE QSTRING  */
#line 298 "asmparse.y"
                                                                                { _ASSERTE(!"yylex should have dealt with this"); }
#line 3812 "prebuilt\\asmparse.cpp"
    break;

  case 61: /* compControl: ';'  */
#line 299 "asmparse.y"
                                                                                { }
#line 3818 "prebuilt\\asmparse.cpp"
    break;

  case 62: /* customDescr: _CUSTOM customType  */
#line 303 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[0].token), NULL); }
#line 3824 "prebuilt\\asmparse.cpp"
    break;

  case 63: /* customDescr: _CUSTOM customType '=' compQstring  */
#line 304 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-2].token), (yyvsp[0].binstr)); }
#line 3830 "prebuilt\\asmparse.cpp"
    break;

  case 64: /* customDescr: _CUSTOM customType '=' '{' customBlobDescr '}'  */
#line 305 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-4].token), (yyvsp[-1].binstr)); }
#line 3836 "prebuilt\\asmparse.cpp"
    break;

  case 65: /* customDescr: customHead bytes ')'  */
#line 306 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-2].int32), (yyvsp[-1].binstr)); }
#line 3842 "prebuilt\\asmparse.cpp"
    break;

  case 66: /* customDescrWithOwner: _CUSTOM '(' ownerType ')' customType  */
#line 309 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr((yyvsp[-2].token), (yyvsp[0].token), NULL); }
#line 3848 "prebuilt\\asmparse.cpp"
    break;

  case 67: /* customDescrWithOwner: _CUSTOM '(' ownerType ')' customType '=' compQstring  */
#line 310 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr((yyvsp[-4].token), (yyvsp[-2].token), (yyvsp[0].binstr)); }
#line 3854 "prebuilt\\asmparse.cpp"
    break;

  case 68: /* customDescrWithOwner: _CUSTOM '(' ownerType ')' customType '=' '{' customBlobDescr '}'  */
#line 312 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr((yyvsp[-6].token), (yyvsp[-4].token), (yyvsp[-1].binstr)); }
#line 3860 "prebuilt\\asmparse.cpp"
    break;

  case 69: /* customDescrWithOwner: customHeadWithOwner bytes ')'  */
#line 313 "asmparse.y"
                                                                                { (yyval.cad) = new CustomDescr(PASM->m_tkCurrentCVOwner, (yyvsp[-2].int32), (yyvsp[-1].binstr)); }
#line 3866 "prebuilt\\asmparse.cpp"
    break;

  case 70: /* customHead: _CUSTOM customType '=' '('  */
#line 316 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-2].token); bParsingByteArray = TRUE; }
#line 3872 "prebuilt\\asmparse.cpp"
    break;

  case 71: /* customHeadWithOwner: _CUSTOM '(' ownerType ')' customType '=' '('  */
#line 320 "asmparse.y"
                                                                                { PASM->m_pCustomDescrList = NULL;
                                                                                  PASM->m_tkCurrentCVOwner = (yyvsp[-4].token);
                                                                                  (yyval.int32) = (yyvsp[-2].token); bParsingByteArray = TRUE; }
#line 3880 "prebuilt\\asmparse.cpp"
    break;

  case 72: /* customType: methodRef  */
#line 325 "asmparse.y"
                                                            { (yyval.token) = (yyvsp[0].token); }
#line 3886 "prebuilt\\asmparse.cpp"
    break;

  case 73: /* ownerType: typeSpec  */
#line 328 "asmparse.y"
                                                            { (yyval.token) = (yyvsp[0].token); }
#line 3892 "prebuilt\\asmparse.cpp"
    break;

  case 74: /* ownerType: memberRef  */
#line 329 "asmparse.y"
                                                            { (yyval.token) = (yyvsp[0].token); }
#line 3898 "prebuilt\\asmparse.cpp"
    break;

  case 75: /* customBlobDescr: customBlobArgs customBlobNVPairs  */
#line 333 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr);
                                                                                  (yyval.binstr)->appendInt16(VAL16(nCustomBlobNVPairs));
                                                                                  (yyval.binstr)->append((yyvsp[0].binstr));
                                                                                  nCustomBlobNVPairs = 0; }
#line 3907 "prebuilt\\asmparse.cpp"
    break;

  case 76: /* customBlobArgs: %empty  */
#line 339 "asmparse.y"
                                                                                { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt16(VAL16(0x0001)); }
#line 3913 "prebuilt\\asmparse.cpp"
    break;

  case 77: /* customBlobArgs: customBlobArgs serInit  */
#line 340 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr);
                                                                                  AppendFieldToCustomBlob((yyval.binstr),(yyvsp[0].binstr)); }
#line 3920 "prebuilt\\asmparse.cpp"
    break;

  case 78: /* customBlobArgs: customBlobArgs compControl  */
#line 342 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 3926 "prebuilt\\asmparse.cpp"
    break;

  case 79: /* customBlobNVPairs: %empty  */
#line 345 "asmparse.y"
                                                                                { (yyval.binstr) = new BinStr(); }
#line 3932 "prebuilt\\asmparse.cpp"
    break;

  case 80: /* customBlobNVPairs: customBlobNVPairs fieldOrProp serializType dottedName '=' serInit  */
#line 347 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-5].binstr); (yyval.binstr)->appendInt8((yyvsp[-4].int32));
                                                                                  (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                                  AppendStringWithLength((yyval.binstr),(yyvsp[-2].string));
                                                                                  AppendFieldToCustomBlob((yyval.binstr),(yyvsp[0].binstr));
                                                                                  nCustomBlobNVPairs++; }
#line 3942 "prebuilt\\asmparse.cpp"
    break;

  case 81: /* customBlobNVPairs: customBlobNVPairs compControl  */
#line 352 "asmparse.y"
                                                                                { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 3948 "prebuilt\\asmparse.cpp"
    break;

  case 82: /* fieldOrProp: FIELD_  */
#line 355 "asmparse.y"
                                                                                { (yyval.int32) = SERIALIZATION_TYPE_FIELD; }
#line 3954 "prebuilt\\asmparse.cpp"
    break;

  case 83: /* fieldOrProp: PROPERTY_  */
#line 356 "asmparse.y"
                                                                                { (yyval.int32) = SERIALIZATION_TYPE_PROPERTY; }
#line 3960 "prebuilt\\asmparse.cpp"
    break;

  case 84: /* customAttrDecl: customDescr  */
#line 359 "asmparse.y"
                                                                                { if((yyvsp[0].cad)->tkOwner && !(yyvsp[0].cad)->tkInterfacePair)
                                                                                    PASM->DefineCV((yyvsp[0].cad));
                                                                                  else if(PASM->m_pCustomDescrList)
                                                                                    PASM->m_pCustomDescrList->PUSH((yyvsp[0].cad)); }
#line 3969 "prebuilt\\asmparse.cpp"
    break;

  case 85: /* customAttrDecl: customDescrWithOwner  */
#line 363 "asmparse.y"
                                                                                { PASM->DefineCV((yyvsp[0].cad)); }
#line 3975 "prebuilt\\asmparse.cpp"
    break;

  case 86: /* customAttrDecl: TYPEDEF_CA  */
#line 364 "asmparse.y"
                                                                                { CustomDescr* pNew = new CustomDescr((yyvsp[0].tdd)->m_pCA);
                                                                                  if(pNew->tkOwner == 0) pNew->tkOwner = PASM->m_tkCurrentCVOwner;
                                                                                  if(pNew->tkOwner)
                                                                                    PASM->DefineCV(pNew);
                                                                                  else if(PASM->m_pCustomDescrList)
                                                                                    PASM->m_pCustomDescrList->PUSH(pNew); }
#line 3986 "prebuilt\\asmparse.cpp"
    break;

  case 87: /* serializType: simpleType  */
#line 372 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); }
#line 3992 "prebuilt\\asmparse.cpp"
    break;

  case 88: /* serializType: TYPE_  */
#line 373 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE); }
#line 3998 "prebuilt\\asmparse.cpp"
    break;

  case 89: /* serializType: OBJECT_  */
#line 374 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TAGGED_OBJECT); }
#line 4004 "prebuilt\\asmparse.cpp"
    break;

  case 90: /* serializType: ENUM_ CLASS_ SQSTRING  */
#line 375 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                AppendStringWithLength((yyval.binstr),(yyvsp[0].string)); }
#line 4011 "prebuilt\\asmparse.cpp"
    break;

  case 91: /* serializType: ENUM_ className  */
#line 377 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                AppendStringWithLength((yyval.binstr),PASM->ReflectionNotation((yyvsp[0].token))); }
#line 4018 "prebuilt\\asmparse.cpp"
    break;

  case 92: /* serializType: serializType '[' ']'  */
#line 379 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 4024 "prebuilt\\asmparse.cpp"
    break;

  case 93: /* moduleHead: _MODULE  */
#line 384 "asmparse.y"
                                                                                { PASMM->SetModuleName(NULL); PASM->m_tkCurrentCVOwner=1; }
#line 4030 "prebuilt\\asmparse.cpp"
    break;

  case 94: /* moduleHead: _MODULE dottedName  */
#line 385 "asmparse.y"
                                                                                { PASMM->SetModuleName((yyvsp[0].string)); PASM->m_tkCurrentCVOwner=1; }
#line 4036 "prebuilt\\asmparse.cpp"
    break;

  case 95: /* moduleHead: _MODULE EXTERN_ dottedName  */
#line 386 "asmparse.y"
                                                                                { BinStr* pbs = new BinStr();
                                                                                  unsigned L = (unsigned)strlen((yyvsp[0].string));
                                                                                  memcpy((char*)(pbs->getBuff(L)),(yyvsp[0].string),L);
                                                                                  PASM->EmitImport(pbs); delete pbs;}
#line 4045 "prebuilt\\asmparse.cpp"
    break;

  case 96: /* vtfixupDecl: _VTFIXUP '[' int32 ']' vtfixupAttr AT_ id  */
#line 393 "asmparse.y"
                                                                                { /*PASM->SetDataSection(); PASM->EmitDataLabel($7);*/
                                                                                  PASM->m_VTFList.PUSH(new VTFEntry((USHORT)(yyvsp[-4].int32), (USHORT)(yyvsp[-2].int32), (yyvsp[0].string))); }
#line 4052 "prebuilt\\asmparse.cpp"
    break;

  case 97: /* vtfixupAttr: %empty  */
#line 397 "asmparse.y"
                                                                                { (yyval.int32) = 0; }
#line 4058 "prebuilt\\asmparse.cpp"
    break;

  case 98: /* vtfixupAttr: vtfixupAttr INT32_  */
#line 398 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_32BIT; }
#line 4064 "prebuilt\\asmparse.cpp"
    break;

  case 99: /* vtfixupAttr: vtfixupAttr INT64_  */
#line 399 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_64BIT; }
#line 4070 "prebuilt\\asmparse.cpp"
    break;

  case 100: /* vtfixupAttr: vtfixupAttr FROMUNMANAGED_  */
#line 400 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_FROM_UNMANAGED; }
#line 4076 "prebuilt\\asmparse.cpp"
    break;

  case 101: /* vtfixupAttr: vtfixupAttr CALLMOSTDERIVED_  */
#line 401 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_CALL_MOST_DERIVED; }
#line 4082 "prebuilt\\asmparse.cpp"
    break;

  case 102: /* vtfixupAttr: vtfixupAttr RETAINAPPDOMAIN_  */
#line 402 "asmparse.y"
                                                                                { (yyval.int32) = (yyvsp[-1].int32) | COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN; }
#line 4088 "prebuilt\\asmparse.cpp"
    break;

  case 103: /* vtableDecl: vtableHead bytes ')'  */
#line 405 "asmparse.y"
                                                                                { PASM->m_pVTable = (yyvsp[-1].binstr); }
#line 4094 "prebuilt\\asmparse.cpp"
    break;

  case 104: /* vtableHead: _VTABLE '=' '('  */
#line 408 "asmparse.y"
                                                                                { bParsingByteArray = TRUE; }
#line 4100 "prebuilt\\asmparse.cpp"
    break;

  case 105: /* nameSpaceHead: _NAMESPACE dottedName  */
#line 412 "asmparse.y"
                                                                                { PASM->StartNameSpace((yyvsp[0].string)); }
#line 4106 "prebuilt\\asmparse.cpp"
    break;

  case 106: /* _class: _CLASS  */
#line 415 "asmparse.y"
                                                                                { newclass = TRUE; }
#line 4112 "prebuilt\\asmparse.cpp"
    break;

  case 107: /* classHeadBegin: _class classAttr dottedName typarsClause  */
#line 418 "asmparse.y"
                                                                                { if((yyvsp[0].typarlist)) FixupConstraints();
                                                                                  PASM->StartClass((yyvsp[-1].string), (yyvsp[-2].classAttr), (yyvsp[0].typarlist));
                                                                                  TyParFixupList.RESET(false);
                                                                                  newclass = FALSE;
                                                                                }
#line 4122 "prebuilt\\asmparse.cpp"
    break;

  case 108: /* classHead: classHeadBegin extendsClause implClause  */
#line 424 "asmparse.y"
                                                                                { PASM->AddClass(); }
#line 4128 "prebuilt\\asmparse.cpp"
    break;

  case 109: /* classAttr: %empty  */
#line 427 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) 0; }
#line 4134 "prebuilt\\asmparse.cpp"
    break;

  case 110: /* classAttr: classAttr PUBLIC_  */
#line 428 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdVisibilityMask) | tdPublic); }
#line 4140 "prebuilt\\asmparse.cpp"
    break;

  case 111: /* classAttr: classAttr PRIVATE_  */
#line 429 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdVisibilityMask) | tdNotPublic); }
#line 4146 "prebuilt\\asmparse.cpp"
    break;

  case 112: /* classAttr: classAttr VALUE_  */
#line 430 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | 0x80000000 | tdSealed); }
#line 4152 "prebuilt\\asmparse.cpp"
    break;

  case 113: /* classAttr: classAttr ENUM_  */
#line 431 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | 0x40000000); }
#line 4158 "prebuilt\\asmparse.cpp"
    break;

  case 114: /* classAttr: classAttr INTERFACE_  */
#line 432 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdInterface | tdAbstract); }
#line 4164 "prebuilt\\asmparse.cpp"
    break;

  case 115: /* classAttr: classAttr SEALED_  */
#line 433 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdSealed); }
#line 4170 "prebuilt\\asmparse.cpp"
    break;

  case 116: /* classAttr: classAttr ABSTRACT_  */
#line 434 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdAbstract); }
#line 4176 "prebuilt\\asmparse.cpp"
    break;

  case 117: /* classAttr: classAttr AUTO_  */
#line 435 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdLayoutMask) | tdAutoLayout); }
#line 4182 "prebuilt\\asmparse.cpp"
    break;

  case 118: /* classAttr: classAttr SEQUENTIAL_  */
#line 436 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdLayoutMask) | tdSequentialLayout); }
#line 4188 "prebuilt\\asmparse.cpp"
    break;

  case 119: /* classAttr: classAttr EXPLICIT_  */
#line 437 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdLayoutMask) | tdExplicitLayout); }
#line 4194 "prebuilt\\asmparse.cpp"
    break;

  case 120: /* classAttr: classAttr ANSI_  */
#line 438 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdStringFormatMask) | tdAnsiClass); }
#line 4200 "prebuilt\\asmparse.cpp"
    break;

  case 121: /* classAttr: classAttr UNICODE_  */
#line 439 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdStringFormatMask) | tdUnicodeClass); }
#line 4206 "prebuilt\\asmparse.cpp"
    break;

  case 122: /* classAttr: classAttr AUTOCHAR_  */
#line 440 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-1].classAttr) & ~tdStringFormatMask) | tdAutoClass); }
#line 4212 "prebuilt\\asmparse.cpp"
    break;

  case 123: /* classAttr: classAttr IMPORT_  */
#line 441 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdImport); }
#line 4218 "prebuilt\\asmparse.cpp"
    break;

  case 124: /* classAttr: classAttr SERIALIZABLE_  */
#line 442 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdSerializable); }
#line 4224 "prebuilt\\asmparse.cpp"
    break;

  case 125: /* classAttr: classAttr WINDOWSRUNTIME_  */
#line 443 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdWindowsRuntime); }
#line 4230 "prebuilt\\asmparse.cpp"
    break;

  case 126: /* classAttr: classAttr NESTED_ PUBLIC_  */
#line 444 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedPublic); }
#line 4236 "prebuilt\\asmparse.cpp"
    break;

  case 127: /* classAttr: classAttr NESTED_ PRIVATE_  */
#line 445 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedPrivate); }
#line 4242 "prebuilt\\asmparse.cpp"
    break;

  case 128: /* classAttr: classAttr NESTED_ FAMILY_  */
#line 446 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedFamily); }
#line 4248 "prebuilt\\asmparse.cpp"
    break;

  case 129: /* classAttr: classAttr NESTED_ ASSEMBLY_  */
#line 447 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedAssembly); }
#line 4254 "prebuilt\\asmparse.cpp"
    break;

  case 130: /* classAttr: classAttr NESTED_ FAMANDASSEM_  */
#line 448 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedFamANDAssem); }
#line 4260 "prebuilt\\asmparse.cpp"
    break;

  case 131: /* classAttr: classAttr NESTED_ FAMORASSEM_  */
#line 449 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) (((yyvsp[-2].classAttr) & ~tdVisibilityMask) | tdNestedFamORAssem); }
#line 4266 "prebuilt\\asmparse.cpp"
    break;

  case 132: /* classAttr: classAttr BEFOREFIELDINIT_  */
#line 450 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdBeforeFieldInit); }
#line 4272 "prebuilt\\asmparse.cpp"
    break;

  case 133: /* classAttr: classAttr SPECIALNAME_  */
#line 451 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr) | tdSpecialName); }
#line 4278 "prebuilt\\asmparse.cpp"
    break;

  case 134: /* classAttr: classAttr RTSPECIALNAME_  */
#line 452 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].classAttr)); }
#line 4284 "prebuilt\\asmparse.cpp"
    break;

  case 135: /* classAttr: classAttr FLAGS_ '(' int32 ')'  */
#line 453 "asmparse.y"
                                                            { (yyval.classAttr) = (CorRegTypeAttr) ((yyvsp[-1].int32)); }
#line 4290 "prebuilt\\asmparse.cpp"
    break;

  case 137: /* extendsClause: EXTENDS_ typeSpec  */
#line 457 "asmparse.y"
                                                                            { PASM->m_crExtends = (yyvsp[0].token); }
#line 4296 "prebuilt\\asmparse.cpp"
    break;

  case 142: /* implList: implList ',' typeSpec  */
#line 468 "asmparse.y"
                                                            { PASM->AddToImplList((yyvsp[0].token)); }
#line 4302 "prebuilt\\asmparse.cpp"
    break;

  case 143: /* implList: typeSpec  */
#line 469 "asmparse.y"
                                                            { PASM->AddToImplList((yyvsp[0].token)); }
#line 4308 "prebuilt\\asmparse.cpp"
    break;

  case 144: /* typeList: %empty  */
#line 473 "asmparse.y"
                                                            { (yyval.binstr) = new BinStr(); }
#line 4314 "prebuilt\\asmparse.cpp"
    break;

  case 145: /* typeList: typeListNotEmpty  */
#line 474 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[0].binstr); }
#line 4320 "prebuilt\\asmparse.cpp"
    break;

  case 146: /* typeListNotEmpty: typeSpec  */
#line 477 "asmparse.y"
                                                            { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32((yyvsp[0].token)); }
#line 4326 "prebuilt\\asmparse.cpp"
    break;

  case 147: /* typeListNotEmpty: typeListNotEmpty ',' typeSpec  */
#line 478 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->appendInt32((yyvsp[0].token)); }
#line 4332 "prebuilt\\asmparse.cpp"
    break;

  case 148: /* typarsClause: %empty  */
#line 481 "asmparse.y"
                                                            { (yyval.typarlist) = NULL; PASM->m_TyParList = NULL;}
#line 4338 "prebuilt\\asmparse.cpp"
    break;

  case 149: /* typarsClause: '<' typars '>'  */
#line 482 "asmparse.y"
                                                            { (yyval.typarlist) = (yyvsp[-1].typarlist);   PASM->m_TyParList = (yyvsp[-1].typarlist);}
#line 4344 "prebuilt\\asmparse.cpp"
    break;

  case 150: /* typarAttrib: '+'  */
#line 485 "asmparse.y"
                                                            { (yyval.int32) = gpCovariant; }
#line 4350 "prebuilt\\asmparse.cpp"
    break;

  case 151: /* typarAttrib: '-'  */
#line 486 "asmparse.y"
                                                            { (yyval.int32) = gpContravariant; }
#line 4356 "prebuilt\\asmparse.cpp"
    break;

  case 152: /* typarAttrib: CLASS_  */
#line 487 "asmparse.y"
                                                            { (yyval.int32) = gpReferenceTypeConstraint; }
#line 4362 "prebuilt\\asmparse.cpp"
    break;

  case 153: /* typarAttrib: VALUETYPE_  */
#line 488 "asmparse.y"
                                                            { (yyval.int32) = gpNotNullableValueTypeConstraint; }
#line 4368 "prebuilt\\asmparse.cpp"
    break;

  case 154: /* typarAttrib: BYREFLIKE_  */
#line 489 "asmparse.y"
                                                            { (yyval.int32) = gpAllowByRefLike; }
#line 4374 "prebuilt\\asmparse.cpp"
    break;

  case 155: /* typarAttrib: _CTOR  */
#line 490 "asmparse.y"
                                                            { (yyval.int32) = gpDefaultConstructorConstraint; }
#line 4380 "prebuilt\\asmparse.cpp"
    break;

  case 156: /* typarAttrib: FLAGS_ '(' int32 ')'  */
#line 491 "asmparse.y"
                                                            { (yyval.int32) = (CorGenericParamAttr)(yyvsp[-1].int32); }
#line 4386 "prebuilt\\asmparse.cpp"
    break;

  case 157: /* typarAttribs: %empty  */
#line 494 "asmparse.y"
                                                            { (yyval.int32) = 0; }
#line 4392 "prebuilt\\asmparse.cpp"
    break;

  case 158: /* typarAttribs: typarAttrib typarAttribs  */
#line 495 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-1].int32) | (yyvsp[0].int32); }
#line 4398 "prebuilt\\asmparse.cpp"
    break;

  case 159: /* typars: typarAttribs tyBound dottedName typarsRest  */
#line 498 "asmparse.y"
                                                                     {(yyval.typarlist) = new TyParList((yyvsp[-3].int32), (yyvsp[-2].binstr), (yyvsp[-1].string), (yyvsp[0].typarlist));}
#line 4404 "prebuilt\\asmparse.cpp"
    break;

  case 160: /* typars: typarAttribs dottedName typarsRest  */
#line 499 "asmparse.y"
                                                               {(yyval.typarlist) = new TyParList((yyvsp[-2].int32), NULL, (yyvsp[-1].string), (yyvsp[0].typarlist));}
#line 4410 "prebuilt\\asmparse.cpp"
    break;

  case 161: /* typarsRest: %empty  */
#line 502 "asmparse.y"
                                                            { (yyval.typarlist) = NULL; }
#line 4416 "prebuilt\\asmparse.cpp"
    break;

  case 162: /* typarsRest: ',' typars  */
#line 503 "asmparse.y"
                                                            { (yyval.typarlist) = (yyvsp[0].typarlist); }
#line 4422 "prebuilt\\asmparse.cpp"
    break;

  case 163: /* tyBound: '(' typeList ')'  */
#line 506 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 4428 "prebuilt\\asmparse.cpp"
    break;

  case 164: /* genArity: %empty  */
#line 509 "asmparse.y"
                                                            { (yyval.int32)= 0; }
#line 4434 "prebuilt\\asmparse.cpp"
    break;

  case 165: /* genArity: genArityNotEmpty  */
#line 510 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[0].int32); }
#line 4440 "prebuilt\\asmparse.cpp"
    break;

  case 166: /* genArityNotEmpty: '<' '[' int32 ']' '>'  */
#line 513 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-2].int32); }
#line 4446 "prebuilt\\asmparse.cpp"
    break;

  case 167: /* classDecl: methodHead methodDecls '}'  */
#line 517 "asmparse.y"
                                                            { if(PASM->m_pCurMethod->m_ulLines[1] ==0)
                                                              {  PASM->m_pCurMethod->m_ulLines[1] = PASM->m_ulCurLine;
                                                                 PASM->m_pCurMethod->m_ulColumns[1]=PASM->m_ulCurColumn;}
                                                              PASM->EndMethod(); }
#line 4455 "prebuilt\\asmparse.cpp"
    break;

  case 168: /* classDecl: classHead '{' classDecls '}'  */
#line 521 "asmparse.y"
                                                            { PASM->EndClass(); }
#line 4461 "prebuilt\\asmparse.cpp"
    break;

  case 169: /* classDecl: eventHead '{' eventDecls '}'  */
#line 522 "asmparse.y"
                                                            { PASM->EndEvent(); }
#line 4467 "prebuilt\\asmparse.cpp"
    break;

  case 170: /* classDecl: propHead '{' propDecls '}'  */
#line 523 "asmparse.y"
                                                            { PASM->EndProp(); }
#line 4473 "prebuilt\\asmparse.cpp"
    break;

  case 176: /* classDecl: _SIZE int32  */
#line 529 "asmparse.y"
                                                                { PASM->m_pCurClass->m_ulSize = (yyvsp[0].int32); }
#line 4479 "prebuilt\\asmparse.cpp"
    break;

  case 177: /* classDecl: _PACK int32  */
#line 530 "asmparse.y"
                                                                { PASM->m_pCurClass->m_ulPack = (yyvsp[0].int32); }
#line 4485 "prebuilt\\asmparse.cpp"
    break;

  case 178: /* classDecl: exportHead '{' exptypeDecls '}'  */
#line 531 "asmparse.y"
                                                                { PASMM->EndComType(); }
#line 4491 "prebuilt\\asmparse.cpp"
    break;

  case 179: /* classDecl: _OVERRIDE typeSpec DCOLON methodName WITH_ callConv type typeSpec DCOLON methodName '(' sigArgs0 ')'  */
#line 533 "asmparse.y"
                                                                { BinStr *sig1 = parser->MakeSig((yyvsp[-7].int32), (yyvsp[-6].binstr), (yyvsp[-1].binstr));
                                                                  BinStr *sig2 = new BinStr(); sig2->append(sig1);
                                                                  PASM->AddMethodImpl((yyvsp[-11].token),(yyvsp[-9].string),sig1,(yyvsp[-5].token),(yyvsp[-3].string),sig2);
                                                                  PASM->ResetArgNameList();
                                                                }
#line 4501 "prebuilt\\asmparse.cpp"
    break;

  case 180: /* classDecl: _OVERRIDE METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')' WITH_ METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')'  */
#line 539 "asmparse.y"
                                                                 { PASM->AddMethodImpl((yyvsp[-17].token),(yyvsp[-15].string),
                                                                      ((yyvsp[-14].int32)==0 ? parser->MakeSig((yyvsp[-19].int32),(yyvsp[-18].binstr),(yyvsp[-12].binstr)) :
                                                                      parser->MakeSig((yyvsp[-19].int32)| IMAGE_CEE_CS_CALLCONV_GENERIC,(yyvsp[-18].binstr),(yyvsp[-12].binstr),(yyvsp[-14].int32))),
                                                                      (yyvsp[-6].token),(yyvsp[-4].string),
                                                                      ((yyvsp[-3].int32)==0 ? parser->MakeSig((yyvsp[-8].int32),(yyvsp[-7].binstr),(yyvsp[-1].binstr)) :
                                                                      parser->MakeSig((yyvsp[-8].int32)| IMAGE_CEE_CS_CALLCONV_GENERIC,(yyvsp[-7].binstr),(yyvsp[-1].binstr),(yyvsp[-3].int32))));
                                                                   PASM->ResetArgNameList();
                                                                 }
#line 4514 "prebuilt\\asmparse.cpp"
    break;

  case 183: /* classDecl: _PARAM TYPE_ '[' int32 ']'  */
#line 549 "asmparse.y"
                                                            { if(((yyvsp[-1].int32) > 0) && ((yyvsp[-1].int32) <= (int)PASM->m_pCurClass->m_NumTyPars))
                                                                PASM->m_pCustomDescrList = PASM->m_pCurClass->m_TyPars[(yyvsp[-1].int32)-1].CAList();
                                                              else
                                                                PASM->report->error("Type parameter index out of range\n");
                                                            }
#line 4524 "prebuilt\\asmparse.cpp"
    break;

  case 184: /* classDecl: _PARAM TYPE_ dottedName  */
#line 554 "asmparse.y"
                                                            { int n = PASM->m_pCurClass->FindTyPar((yyvsp[0].string));
                                                              if(n >= 0)
                                                                PASM->m_pCustomDescrList = PASM->m_pCurClass->m_TyPars[n].CAList();
                                                              else
                                                                PASM->report->error("Type parameter '%s' undefined\n",(yyvsp[0].string));
                                                            }
#line 4535 "prebuilt\\asmparse.cpp"
    break;

  case 185: /* classDecl: _PARAM CONSTRAINT_ '[' int32 ']' ',' typeSpec  */
#line 560 "asmparse.y"
                                                                        { PASM->AddGenericParamConstraint((yyvsp[-3].int32), 0, (yyvsp[0].token)); }
#line 4541 "prebuilt\\asmparse.cpp"
    break;

  case 186: /* classDecl: _PARAM CONSTRAINT_ dottedName ',' typeSpec  */
#line 561 "asmparse.y"
                                                                        { PASM->AddGenericParamConstraint(0, (yyvsp[-2].string), (yyvsp[0].token)); }
#line 4547 "prebuilt\\asmparse.cpp"
    break;

  case 187: /* classDecl: _INTERFACEIMPL TYPE_ typeSpec customDescr  */
#line 562 "asmparse.y"
                                                                      { (yyvsp[0].cad)->tkInterfacePair = (yyvsp[-1].token);
                                                                        if(PASM->m_pCustomDescrList)
                                                                            PASM->m_pCustomDescrList->PUSH((yyvsp[0].cad));
                                                                      }
#line 4556 "prebuilt\\asmparse.cpp"
    break;

  case 188: /* fieldDecl: _FIELD repeatOpt fieldAttr type dottedName atOpt initOpt  */
#line 570 "asmparse.y"
                                                            { (yyvsp[-3].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                              PASM->AddField((yyvsp[-2].string), (yyvsp[-3].binstr), (yyvsp[-4].fieldAttr), (yyvsp[-1].string), (yyvsp[0].binstr), (yyvsp[-5].int32)); }
#line 4563 "prebuilt\\asmparse.cpp"
    break;

  case 189: /* fieldAttr: %empty  */
#line 574 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) 0; }
#line 4569 "prebuilt\\asmparse.cpp"
    break;

  case 190: /* fieldAttr: fieldAttr STATIC_  */
#line 575 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdStatic); }
#line 4575 "prebuilt\\asmparse.cpp"
    break;

  case 191: /* fieldAttr: fieldAttr PUBLIC_  */
#line 576 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdPublic); }
#line 4581 "prebuilt\\asmparse.cpp"
    break;

  case 192: /* fieldAttr: fieldAttr PRIVATE_  */
#line 577 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdPrivate); }
#line 4587 "prebuilt\\asmparse.cpp"
    break;

  case 193: /* fieldAttr: fieldAttr FAMILY_  */
#line 578 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdFamily); }
#line 4593 "prebuilt\\asmparse.cpp"
    break;

  case 194: /* fieldAttr: fieldAttr INITONLY_  */
#line 579 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdInitOnly); }
#line 4599 "prebuilt\\asmparse.cpp"
    break;

  case 195: /* fieldAttr: fieldAttr RTSPECIALNAME_  */
#line 580 "asmparse.y"
                                                            { (yyval.fieldAttr) = (yyvsp[-1].fieldAttr); }
#line 4605 "prebuilt\\asmparse.cpp"
    break;

  case 196: /* fieldAttr: fieldAttr SPECIALNAME_  */
#line 581 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdSpecialName); }
#line 4611 "prebuilt\\asmparse.cpp"
    break;

  case 197: /* fieldAttr: fieldAttr MARSHAL_ '(' marshalBlob ')'  */
#line 594 "asmparse.y"
                                                            { PASM->m_pMarshal = (yyvsp[-1].binstr); }
#line 4617 "prebuilt\\asmparse.cpp"
    break;

  case 198: /* fieldAttr: fieldAttr ASSEMBLY_  */
#line 595 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdAssembly); }
#line 4623 "prebuilt\\asmparse.cpp"
    break;

  case 199: /* fieldAttr: fieldAttr FAMANDASSEM_  */
#line 596 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdFamANDAssem); }
#line 4629 "prebuilt\\asmparse.cpp"
    break;

  case 200: /* fieldAttr: fieldAttr FAMORASSEM_  */
#line 597 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdFamORAssem); }
#line 4635 "prebuilt\\asmparse.cpp"
    break;

  case 201: /* fieldAttr: fieldAttr PRIVATESCOPE_  */
#line 598 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) (((yyvsp[-1].fieldAttr) & ~mdMemberAccessMask) | fdPrivateScope); }
#line 4641 "prebuilt\\asmparse.cpp"
    break;

  case 202: /* fieldAttr: fieldAttr LITERAL_  */
#line 599 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdLiteral); }
#line 4647 "prebuilt\\asmparse.cpp"
    break;

  case 203: /* fieldAttr: fieldAttr NOTSERIALIZED_  */
#line 600 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].fieldAttr) | fdNotSerialized); }
#line 4653 "prebuilt\\asmparse.cpp"
    break;

  case 204: /* fieldAttr: fieldAttr FLAGS_ '(' int32 ')'  */
#line 601 "asmparse.y"
                                                            { (yyval.fieldAttr) = (CorFieldAttr) ((yyvsp[-1].int32)); }
#line 4659 "prebuilt\\asmparse.cpp"
    break;

  case 205: /* atOpt: %empty  */
#line 604 "asmparse.y"
                                                            { (yyval.string) = 0; }
#line 4665 "prebuilt\\asmparse.cpp"
    break;

  case 206: /* atOpt: AT_ id  */
#line 605 "asmparse.y"
                                                            { (yyval.string) = (yyvsp[0].string); }
#line 4671 "prebuilt\\asmparse.cpp"
    break;

  case 207: /* initOpt: %empty  */
#line 608 "asmparse.y"
                                                            { (yyval.binstr) = NULL; }
#line 4677 "prebuilt\\asmparse.cpp"
    break;

  case 208: /* initOpt: '=' fieldInit  */
#line 609 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[0].binstr); }
#line 4683 "prebuilt\\asmparse.cpp"
    break;

  case 209: /* repeatOpt: %empty  */
#line 612 "asmparse.y"
                                                            { (yyval.int32) = 0xFFFFFFFF; }
#line 4689 "prebuilt\\asmparse.cpp"
    break;

  case 210: /* repeatOpt: '[' int32 ']'  */
#line 613 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-1].int32); }
#line 4695 "prebuilt\\asmparse.cpp"
    break;

  case 211: /* methodRef: callConv type typeSpec DCOLON methodName tyArgs0 '(' sigArgs0 ')'  */
#line 618 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if ((yyvsp[-3].binstr) == NULL)
                                                               {
                                                                 if((iCallConv)&&(((yyvsp[-8].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 (yyval.token) = PASM->MakeMemberRef((yyvsp[-6].token), (yyvsp[-4].string), parser->MakeSig((yyvsp[-8].int32)|iCallConv, (yyvsp[-7].binstr), (yyvsp[-1].binstr)));
                                                               }
                                                               else
                                                               {
                                                                 mdToken mr;
                                                                 if((iCallConv)&&(((yyvsp[-8].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 mr = PASM->MakeMemberRef((yyvsp[-6].token), (yyvsp[-4].string),
                                                                   parser->MakeSig((yyvsp[-8].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-7].binstr), (yyvsp[-1].binstr), corCountArgs((yyvsp[-3].binstr))));
                                                                 (yyval.token) = PASM->MakeMethodSpec(mr,
                                                                   parser->MakeSig(IMAGE_CEE_CS_CALLCONV_INSTANTIATION, 0, (yyvsp[-3].binstr)));
                                                               }
                                                             }
#line 4716 "prebuilt\\asmparse.cpp"
    break;

  case 212: /* methodRef: callConv type typeSpec DCOLON methodName genArityNotEmpty '(' sigArgs0 ')'  */
#line 635 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if((iCallConv)&&(((yyvsp[-8].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                               (yyval.token) = PASM->MakeMemberRef((yyvsp[-6].token), (yyvsp[-4].string),
                                                                 parser->MakeSig((yyvsp[-8].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-7].binstr), (yyvsp[-1].binstr), (yyvsp[-3].int32)));
                                                             }
#line 4726 "prebuilt\\asmparse.cpp"
    break;

  case 213: /* methodRef: callConv type methodName tyArgs0 '(' sigArgs0 ')'  */
#line 641 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if ((yyvsp[-3].binstr) == NULL)
                                                               {
                                                                 if((iCallConv)&&(((yyvsp[-6].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 (yyval.token) = PASM->MakeMemberRef(mdTokenNil, (yyvsp[-4].string), parser->MakeSig((yyvsp[-6].int32)|iCallConv, (yyvsp[-5].binstr), (yyvsp[-1].binstr)));
                                                               }
                                                               else
                                                               {
                                                                 mdToken mr;
                                                                 if((iCallConv)&&(((yyvsp[-6].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                                 mr = PASM->MakeMemberRef(mdTokenNil, (yyvsp[-4].string), parser->MakeSig((yyvsp[-6].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-5].binstr), (yyvsp[-1].binstr), corCountArgs((yyvsp[-3].binstr))));
                                                                 (yyval.token) = PASM->MakeMethodSpec(mr,
                                                                   parser->MakeSig(IMAGE_CEE_CS_CALLCONV_INSTANTIATION, 0, (yyvsp[-3].binstr)));
                                                               }
                                                             }
#line 4746 "prebuilt\\asmparse.cpp"
    break;

  case 214: /* methodRef: callConv type methodName genArityNotEmpty '(' sigArgs0 ')'  */
#line 657 "asmparse.y"
                                                             { PASM->ResetArgNameList();
                                                               if((iCallConv)&&(((yyvsp[-6].int32) & iCallConv) != iCallConv)) parser->warn("'instance' added to method's calling convention\n");
                                                               (yyval.token) = PASM->MakeMemberRef(mdTokenNil, (yyvsp[-4].string), parser->MakeSig((yyvsp[-6].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC|iCallConv, (yyvsp[-5].binstr), (yyvsp[-1].binstr), (yyvsp[-3].int32)));
                                                             }
#line 4755 "prebuilt\\asmparse.cpp"
    break;

  case 215: /* methodRef: mdtoken  */
#line 661 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].token); }
#line 4761 "prebuilt\\asmparse.cpp"
    break;

  case 216: /* methodRef: TYPEDEF_M  */
#line 662 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec; }
#line 4767 "prebuilt\\asmparse.cpp"
    break;

  case 217: /* methodRef: TYPEDEF_MR  */
#line 663 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec; }
#line 4773 "prebuilt\\asmparse.cpp"
    break;

  case 218: /* callConv: INSTANCE_ callConv  */
#line 666 "asmparse.y"
                                                              { (yyval.int32) = ((yyvsp[0].int32) | IMAGE_CEE_CS_CALLCONV_HASTHIS); }
#line 4779 "prebuilt\\asmparse.cpp"
    break;

  case 219: /* callConv: EXPLICIT_ callConv  */
#line 667 "asmparse.y"
                                                              { (yyval.int32) = ((yyvsp[0].int32) | IMAGE_CEE_CS_CALLCONV_EXPLICITTHIS); }
#line 4785 "prebuilt\\asmparse.cpp"
    break;

  case 220: /* callConv: callKind  */
#line 668 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[0].int32); }
#line 4791 "prebuilt\\asmparse.cpp"
    break;

  case 221: /* callConv: CALLCONV_ '(' int32 ')'  */
#line 669 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32); }
#line 4797 "prebuilt\\asmparse.cpp"
    break;

  case 222: /* callKind: %empty  */
#line 672 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_DEFAULT; }
#line 4803 "prebuilt\\asmparse.cpp"
    break;

  case 223: /* callKind: DEFAULT_  */
#line 673 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_DEFAULT; }
#line 4809 "prebuilt\\asmparse.cpp"
    break;

  case 224: /* callKind: VARARG_  */
#line 674 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_VARARG; }
#line 4815 "prebuilt\\asmparse.cpp"
    break;

  case 225: /* callKind: UNMANAGED_ CDECL_  */
#line 675 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_C; }
#line 4821 "prebuilt\\asmparse.cpp"
    break;

  case 226: /* callKind: UNMANAGED_ STDCALL_  */
#line 676 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_STDCALL; }
#line 4827 "prebuilt\\asmparse.cpp"
    break;

  case 227: /* callKind: UNMANAGED_ THISCALL_  */
#line 677 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_THISCALL; }
#line 4833 "prebuilt\\asmparse.cpp"
    break;

  case 228: /* callKind: UNMANAGED_ FASTCALL_  */
#line 678 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_FASTCALL; }
#line 4839 "prebuilt\\asmparse.cpp"
    break;

  case 229: /* callKind: UNMANAGED_  */
#line 679 "asmparse.y"
                                                              { (yyval.int32) = IMAGE_CEE_CS_CALLCONV_UNMANAGED; }
#line 4845 "prebuilt\\asmparse.cpp"
    break;

  case 230: /* mdtoken: MDTOKEN_ '(' int32 ')'  */
#line 682 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[-1].int32); }
#line 4851 "prebuilt\\asmparse.cpp"
    break;

  case 231: /* memberRef: methodSpec methodRef  */
#line 685 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].token);
                                                               PASM->delArgNameList(PASM->m_firstArgName);
                                                               PASM->m_firstArgName = parser->m_ANSFirst.POP();
                                                               PASM->m_lastArgName = parser->m_ANSLast.POP();
                                                               PASM->SetMemberRefFixup((yyvsp[0].token),iOpcodeLen); }
#line 4861 "prebuilt\\asmparse.cpp"
    break;

  case 232: /* memberRef: FIELD_ type typeSpec DCOLON dottedName  */
#line 691 "asmparse.y"
                                                             { (yyvsp[-3].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               (yyval.token) = PASM->MakeMemberRef((yyvsp[-2].token), (yyvsp[0].string), (yyvsp[-3].binstr));
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4869 "prebuilt\\asmparse.cpp"
    break;

  case 233: /* memberRef: FIELD_ type dottedName  */
#line 695 "asmparse.y"
                                                             { (yyvsp[-1].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               (yyval.token) = PASM->MakeMemberRef(mdTokenNil, (yyvsp[0].string), (yyvsp[-1].binstr));
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4877 "prebuilt\\asmparse.cpp"
    break;

  case 234: /* memberRef: FIELD_ TYPEDEF_F  */
#line 698 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4884 "prebuilt\\asmparse.cpp"
    break;

  case 235: /* memberRef: FIELD_ TYPEDEF_MR  */
#line 700 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4891 "prebuilt\\asmparse.cpp"
    break;

  case 236: /* memberRef: mdtoken  */
#line 702 "asmparse.y"
                                                             { (yyval.token) = (yyvsp[0].token);
                                                               PASM->SetMemberRefFixup((yyval.token),iOpcodeLen); }
#line 4898 "prebuilt\\asmparse.cpp"
    break;

  case 237: /* eventHead: _EVENT eventAttr typeSpec dottedName  */
#line 707 "asmparse.y"
                                                                 { PASM->ResetEvent((yyvsp[0].string), (yyvsp[-1].token), (yyvsp[-2].eventAttr)); }
#line 4904 "prebuilt\\asmparse.cpp"
    break;

  case 238: /* eventHead: _EVENT eventAttr dottedName  */
#line 708 "asmparse.y"
                                                                 { PASM->ResetEvent((yyvsp[0].string), mdTypeRefNil, (yyvsp[-1].eventAttr)); }
#line 4910 "prebuilt\\asmparse.cpp"
    break;

  case 239: /* eventAttr: %empty  */
#line 712 "asmparse.y"
                                                            { (yyval.eventAttr) = (CorEventAttr) 0; }
#line 4916 "prebuilt\\asmparse.cpp"
    break;

  case 240: /* eventAttr: eventAttr RTSPECIALNAME_  */
#line 713 "asmparse.y"
                                                            { (yyval.eventAttr) = (yyvsp[-1].eventAttr); }
#line 4922 "prebuilt\\asmparse.cpp"
    break;

  case 241: /* eventAttr: eventAttr SPECIALNAME_  */
#line 714 "asmparse.y"
                                                            { (yyval.eventAttr) = (CorEventAttr) ((yyvsp[-1].eventAttr) | evSpecialName); }
#line 4928 "prebuilt\\asmparse.cpp"
    break;

  case 244: /* eventDecl: _ADDON methodRef  */
#line 721 "asmparse.y"
                                                           { PASM->SetEventMethod(0, (yyvsp[0].token)); }
#line 4934 "prebuilt\\asmparse.cpp"
    break;

  case 245: /* eventDecl: _REMOVEON methodRef  */
#line 722 "asmparse.y"
                                                           { PASM->SetEventMethod(1, (yyvsp[0].token)); }
#line 4940 "prebuilt\\asmparse.cpp"
    break;

  case 246: /* eventDecl: _FIRE methodRef  */
#line 723 "asmparse.y"
                                                           { PASM->SetEventMethod(2, (yyvsp[0].token)); }
#line 4946 "prebuilt\\asmparse.cpp"
    break;

  case 247: /* eventDecl: _OTHER methodRef  */
#line 724 "asmparse.y"
                                                           { PASM->SetEventMethod(3, (yyvsp[0].token)); }
#line 4952 "prebuilt\\asmparse.cpp"
    break;

  case 252: /* propHead: _PROPERTY propAttr callConv type dottedName '(' sigArgs0 ')' initOpt  */
#line 733 "asmparse.y"
                                                            { PASM->ResetProp((yyvsp[-4].string),
                                                              parser->MakeSig((IMAGE_CEE_CS_CALLCONV_PROPERTY |
                                                              ((yyvsp[-6].int32) & IMAGE_CEE_CS_CALLCONV_HASTHIS)),(yyvsp[-5].binstr),(yyvsp[-2].binstr)), (yyvsp[-7].propAttr), (yyvsp[0].binstr));}
#line 4960 "prebuilt\\asmparse.cpp"
    break;

  case 253: /* propAttr: %empty  */
#line 738 "asmparse.y"
                                                            { (yyval.propAttr) = (CorPropertyAttr) 0; }
#line 4966 "prebuilt\\asmparse.cpp"
    break;

  case 254: /* propAttr: propAttr RTSPECIALNAME_  */
#line 739 "asmparse.y"
                                                            { (yyval.propAttr) = (yyvsp[-1].propAttr); }
#line 4972 "prebuilt\\asmparse.cpp"
    break;

  case 255: /* propAttr: propAttr SPECIALNAME_  */
#line 740 "asmparse.y"
                                                            { (yyval.propAttr) = (CorPropertyAttr) ((yyvsp[-1].propAttr) | prSpecialName); }
#line 4978 "prebuilt\\asmparse.cpp"
    break;

  case 258: /* propDecl: _SET methodRef  */
#line 748 "asmparse.y"
                                                            { PASM->SetPropMethod(0, (yyvsp[0].token)); }
#line 4984 "prebuilt\\asmparse.cpp"
    break;

  case 259: /* propDecl: _GET methodRef  */
#line 749 "asmparse.y"
                                                            { PASM->SetPropMethod(1, (yyvsp[0].token)); }
#line 4990 "prebuilt\\asmparse.cpp"
    break;

  case 260: /* propDecl: _OTHER methodRef  */
#line 750 "asmparse.y"
                                                            { PASM->SetPropMethod(2, (yyvsp[0].token)); }
#line 4996 "prebuilt\\asmparse.cpp"
    break;

  case 265: /* methodHeadPart1: _METHOD  */
#line 758 "asmparse.y"
                                                            { PASM->ResetForNextMethod();
                                                              uMethodBeginLine = PASM->m_ulCurLine;
                                                              uMethodBeginColumn=PASM->m_ulCurColumn;
                                                            }
#line 5005 "prebuilt\\asmparse.cpp"
    break;

  case 266: /* marshalClause: %empty  */
#line 764 "asmparse.y"
                                                            { (yyval.binstr) = NULL; }
#line 5011 "prebuilt\\asmparse.cpp"
    break;

  case 267: /* marshalClause: MARSHAL_ '(' marshalBlob ')'  */
#line 765 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 5017 "prebuilt\\asmparse.cpp"
    break;

  case 268: /* marshalBlob: nativeType  */
#line 768 "asmparse.y"
                                                            { (yyval.binstr) = (yyvsp[0].binstr); }
#line 5023 "prebuilt\\asmparse.cpp"
    break;

  case 269: /* marshalBlob: marshalBlobHead hexbytes '}'  */
#line 769 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 5029 "prebuilt\\asmparse.cpp"
    break;

  case 270: /* marshalBlobHead: '{'  */
#line 772 "asmparse.y"
                                                             { bParsingByteArray = TRUE; }
#line 5035 "prebuilt\\asmparse.cpp"
    break;

  case 271: /* methodHead: methodHeadPart1 methAttr callConv paramAttr type marshalClause methodName typarsClause '(' sigArgs0 ')' implAttr '{'  */
#line 776 "asmparse.y"
                                                            { BinStr* sig;
                                                              if ((yyvsp[-5].typarlist) == NULL) sig = parser->MakeSig((yyvsp[-10].int32), (yyvsp[-8].binstr), (yyvsp[-3].binstr));
                                                              else {
                                                               FixupTyPars((yyvsp[-8].binstr));
                                                               sig = parser->MakeSig((yyvsp[-10].int32) | IMAGE_CEE_CS_CALLCONV_GENERIC, (yyvsp[-8].binstr), (yyvsp[-3].binstr), (yyvsp[-5].typarlist)->Count());
                                                               FixupConstraints();
                                                              }
                                                              PASM->StartMethod((yyvsp[-6].string), sig, (yyvsp[-11].methAttr), (yyvsp[-7].binstr), (yyvsp[-9].int32), (yyvsp[-5].typarlist));
                                                              TyParFixupList.RESET(false);
                                                              PASM->SetImplAttr((USHORT)(yyvsp[-1].implAttr));
                                                              PASM->m_pCurMethod->m_ulLines[0] = uMethodBeginLine;
                                                              PASM->m_pCurMethod->m_ulColumns[0]=uMethodBeginColumn;
                                                            }
#line 5053 "prebuilt\\asmparse.cpp"
    break;

  case 272: /* methAttr: %empty  */
#line 791 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) 0; }
#line 5059 "prebuilt\\asmparse.cpp"
    break;

  case 273: /* methAttr: methAttr STATIC_  */
#line 792 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdStatic); }
#line 5065 "prebuilt\\asmparse.cpp"
    break;

  case 274: /* methAttr: methAttr PUBLIC_  */
#line 793 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdPublic); }
#line 5071 "prebuilt\\asmparse.cpp"
    break;

  case 275: /* methAttr: methAttr PRIVATE_  */
#line 794 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdPrivate); }
#line 5077 "prebuilt\\asmparse.cpp"
    break;

  case 276: /* methAttr: methAttr FAMILY_  */
#line 795 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdFamily); }
#line 5083 "prebuilt\\asmparse.cpp"
    break;

  case 277: /* methAttr: methAttr FINAL_  */
#line 796 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdFinal); }
#line 5089 "prebuilt\\asmparse.cpp"
    break;

  case 278: /* methAttr: methAttr SPECIALNAME_  */
#line 797 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdSpecialName); }
#line 5095 "prebuilt\\asmparse.cpp"
    break;

  case 279: /* methAttr: methAttr VIRTUAL_  */
#line 798 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdVirtual); }
#line 5101 "prebuilt\\asmparse.cpp"
    break;

  case 280: /* methAttr: methAttr STRICT_  */
#line 799 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdCheckAccessOnOverride); }
#line 5107 "prebuilt\\asmparse.cpp"
    break;

  case 281: /* methAttr: methAttr ABSTRACT_  */
#line 800 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdAbstract); }
#line 5113 "prebuilt\\asmparse.cpp"
    break;

  case 282: /* methAttr: methAttr ASSEMBLY_  */
#line 801 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdAssem); }
#line 5119 "prebuilt\\asmparse.cpp"
    break;

  case 283: /* methAttr: methAttr FAMANDASSEM_  */
#line 802 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdFamANDAssem); }
#line 5125 "prebuilt\\asmparse.cpp"
    break;

  case 284: /* methAttr: methAttr FAMORASSEM_  */
#line 803 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdFamORAssem); }
#line 5131 "prebuilt\\asmparse.cpp"
    break;

  case 285: /* methAttr: methAttr PRIVATESCOPE_  */
#line 804 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) (((yyvsp[-1].methAttr) & ~mdMemberAccessMask) | mdPrivateScope); }
#line 5137 "prebuilt\\asmparse.cpp"
    break;

  case 286: /* methAttr: methAttr HIDEBYSIG_  */
#line 805 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdHideBySig); }
#line 5143 "prebuilt\\asmparse.cpp"
    break;

  case 287: /* methAttr: methAttr NEWSLOT_  */
#line 806 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdNewSlot); }
#line 5149 "prebuilt\\asmparse.cpp"
    break;

  case 288: /* methAttr: methAttr RTSPECIALNAME_  */
#line 807 "asmparse.y"
                                                            { (yyval.methAttr) = (yyvsp[-1].methAttr); }
#line 5155 "prebuilt\\asmparse.cpp"
    break;

  case 289: /* methAttr: methAttr UNMANAGEDEXP_  */
#line 808 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdUnmanagedExport); }
#line 5161 "prebuilt\\asmparse.cpp"
    break;

  case 290: /* methAttr: methAttr REQSECOBJ_  */
#line 809 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].methAttr) | mdRequireSecObject); }
#line 5167 "prebuilt\\asmparse.cpp"
    break;

  case 291: /* methAttr: methAttr FLAGS_ '(' int32 ')'  */
#line 810 "asmparse.y"
                                                            { (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-1].int32)); }
#line 5173 "prebuilt\\asmparse.cpp"
    break;

  case 292: /* methAttr: methAttr PINVOKEIMPL_ '(' compQstring AS_ compQstring pinvAttr ')'  */
#line 812 "asmparse.y"
                                                            { PASM->SetPinvoke((yyvsp[-4].binstr),0,(yyvsp[-2].binstr),(yyvsp[-1].pinvAttr));
                                                              (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-7].methAttr) | mdPinvokeImpl); }
#line 5180 "prebuilt\\asmparse.cpp"
    break;

  case 293: /* methAttr: methAttr PINVOKEIMPL_ '(' compQstring pinvAttr ')'  */
#line 815 "asmparse.y"
                                                            { PASM->SetPinvoke((yyvsp[-2].binstr),0,NULL,(yyvsp[-1].pinvAttr));
                                                              (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-5].methAttr) | mdPinvokeImpl); }
#line 5187 "prebuilt\\asmparse.cpp"
    break;

  case 294: /* methAttr: methAttr PINVOKEIMPL_ '(' pinvAttr ')'  */
#line 818 "asmparse.y"
                                                            { PASM->SetPinvoke(new BinStr(),0,NULL,(yyvsp[-1].pinvAttr));
                                                              (yyval.methAttr) = (CorMethodAttr) ((yyvsp[-4].methAttr) | mdPinvokeImpl); }
#line 5194 "prebuilt\\asmparse.cpp"
    break;

  case 295: /* pinvAttr: %empty  */
#line 822 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) 0; }
#line 5200 "prebuilt\\asmparse.cpp"
    break;

  case 296: /* pinvAttr: pinvAttr NOMANGLE_  */
#line 823 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmNoMangle); }
#line 5206 "prebuilt\\asmparse.cpp"
    break;

  case 297: /* pinvAttr: pinvAttr ANSI_  */
#line 824 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCharSetAnsi); }
#line 5212 "prebuilt\\asmparse.cpp"
    break;

  case 298: /* pinvAttr: pinvAttr UNICODE_  */
#line 825 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCharSetUnicode); }
#line 5218 "prebuilt\\asmparse.cpp"
    break;

  case 299: /* pinvAttr: pinvAttr AUTOCHAR_  */
#line 826 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCharSetAuto); }
#line 5224 "prebuilt\\asmparse.cpp"
    break;

  case 300: /* pinvAttr: pinvAttr LASTERR_  */
#line 827 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmSupportsLastError); }
#line 5230 "prebuilt\\asmparse.cpp"
    break;

  case 301: /* pinvAttr: pinvAttr WINAPI_  */
#line 828 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvWinapi); }
#line 5236 "prebuilt\\asmparse.cpp"
    break;

  case 302: /* pinvAttr: pinvAttr CDECL_  */
#line 829 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvCdecl); }
#line 5242 "prebuilt\\asmparse.cpp"
    break;

  case 303: /* pinvAttr: pinvAttr STDCALL_  */
#line 830 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvStdcall); }
#line 5248 "prebuilt\\asmparse.cpp"
    break;

  case 304: /* pinvAttr: pinvAttr THISCALL_  */
#line 831 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvThiscall); }
#line 5254 "prebuilt\\asmparse.cpp"
    break;

  case 305: /* pinvAttr: pinvAttr FASTCALL_  */
#line 832 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].pinvAttr) | pmCallConvFastcall); }
#line 5260 "prebuilt\\asmparse.cpp"
    break;

  case 306: /* pinvAttr: pinvAttr BESTFIT_ ':' ON_  */
#line 833 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmBestFitEnabled); }
#line 5266 "prebuilt\\asmparse.cpp"
    break;

  case 307: /* pinvAttr: pinvAttr BESTFIT_ ':' OFF_  */
#line 834 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmBestFitDisabled); }
#line 5272 "prebuilt\\asmparse.cpp"
    break;

  case 308: /* pinvAttr: pinvAttr CHARMAPERROR_ ':' ON_  */
#line 835 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmThrowOnUnmappableCharEnabled); }
#line 5278 "prebuilt\\asmparse.cpp"
    break;

  case 309: /* pinvAttr: pinvAttr CHARMAPERROR_ ':' OFF_  */
#line 836 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-3].pinvAttr) | pmThrowOnUnmappableCharDisabled); }
#line 5284 "prebuilt\\asmparse.cpp"
    break;

  case 310: /* pinvAttr: pinvAttr FLAGS_ '(' int32 ')'  */
#line 837 "asmparse.y"
                                                            { (yyval.pinvAttr) = (CorPinvokeMap) ((yyvsp[-1].int32)); }
#line 5290 "prebuilt\\asmparse.cpp"
    break;

  case 311: /* methodName: _CTOR  */
#line 840 "asmparse.y"
                                                            { (yyval.string) = newString(COR_CTOR_METHOD_NAME); }
#line 5296 "prebuilt\\asmparse.cpp"
    break;

  case 312: /* methodName: _CCTOR  */
#line 841 "asmparse.y"
                                                            { (yyval.string) = newString(COR_CCTOR_METHOD_NAME); }
#line 5302 "prebuilt\\asmparse.cpp"
    break;

  case 313: /* methodName: dottedName  */
#line 842 "asmparse.y"
                                                            { (yyval.string) = (yyvsp[0].string); }
#line 5308 "prebuilt\\asmparse.cpp"
    break;

  case 314: /* paramAttr: %empty  */
#line 845 "asmparse.y"
                                                            { (yyval.int32) = 0; }
#line 5314 "prebuilt\\asmparse.cpp"
    break;

  case 315: /* paramAttr: paramAttr '[' IN_ ']'  */
#line 846 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-3].int32) | pdIn; }
#line 5320 "prebuilt\\asmparse.cpp"
    break;

  case 316: /* paramAttr: paramAttr '[' OUT_ ']'  */
#line 847 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-3].int32) | pdOut; }
#line 5326 "prebuilt\\asmparse.cpp"
    break;

  case 317: /* paramAttr: paramAttr '[' OPT_ ']'  */
#line 848 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-3].int32) | pdOptional; }
#line 5332 "prebuilt\\asmparse.cpp"
    break;

  case 318: /* paramAttr: paramAttr '[' int32 ']'  */
#line 849 "asmparse.y"
                                                            { (yyval.int32) = (yyvsp[-1].int32) + 1; }
#line 5338 "prebuilt\\asmparse.cpp"
    break;

  case 319: /* implAttr: %empty  */
#line 852 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (miIL | miManaged); }
#line 5344 "prebuilt\\asmparse.cpp"
    break;

  case 320: /* implAttr: implAttr NATIVE_  */
#line 853 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFF4) | miNative); }
#line 5350 "prebuilt\\asmparse.cpp"
    break;

  case 321: /* implAttr: implAttr CIL_  */
#line 854 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFF4) | miIL); }
#line 5356 "prebuilt\\asmparse.cpp"
    break;

  case 322: /* implAttr: implAttr OPTIL_  */
#line 855 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFF4) | miOPTIL); }
#line 5362 "prebuilt\\asmparse.cpp"
    break;

  case 323: /* implAttr: implAttr MANAGED_  */
#line 856 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFFB) | miManaged); }
#line 5368 "prebuilt\\asmparse.cpp"
    break;

  case 324: /* implAttr: implAttr UNMANAGED_  */
#line 857 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) (((yyvsp[-1].implAttr) & 0xFFFB) | miUnmanaged); }
#line 5374 "prebuilt\\asmparse.cpp"
    break;

  case 325: /* implAttr: implAttr FORWARDREF_  */
#line 858 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miForwardRef); }
#line 5380 "prebuilt\\asmparse.cpp"
    break;

  case 326: /* implAttr: implAttr PRESERVESIG_  */
#line 859 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miPreserveSig); }
#line 5386 "prebuilt\\asmparse.cpp"
    break;

  case 327: /* implAttr: implAttr RUNTIME_  */
#line 860 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miRuntime); }
#line 5392 "prebuilt\\asmparse.cpp"
    break;

  case 328: /* implAttr: implAttr INTERNALCALL_  */
#line 861 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miInternalCall); }
#line 5398 "prebuilt\\asmparse.cpp"
    break;

  case 329: /* implAttr: implAttr SYNCHRONIZED_  */
#line 862 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miSynchronized); }
#line 5404 "prebuilt\\asmparse.cpp"
    break;

  case 330: /* implAttr: implAttr NOINLINING_  */
#line 863 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miNoInlining); }
#line 5410 "prebuilt\\asmparse.cpp"
    break;

  case 331: /* implAttr: implAttr AGGRESSIVEINLINING_  */
#line 864 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miAggressiveInlining); }
#line 5416 "prebuilt\\asmparse.cpp"
    break;

  case 332: /* implAttr: implAttr NOOPTIMIZATION_  */
#line 865 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miNoOptimization); }
#line 5422 "prebuilt\\asmparse.cpp"
    break;

  case 333: /* implAttr: implAttr AGGRESSIVEOPTIMIZATION_  */
#line 866 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].implAttr) | miAggressiveOptimization); }
#line 5428 "prebuilt\\asmparse.cpp"
    break;

  case 334: /* implAttr: implAttr FLAGS_ '(' int32 ')'  */
#line 867 "asmparse.y"
                                                            { (yyval.implAttr) = (CorMethodImpl) ((yyvsp[-1].int32)); }
#line 5434 "prebuilt\\asmparse.cpp"
    break;

  case 335: /* localsHead: _LOCALS  */
#line 870 "asmparse.y"
                                                            { PASM->delArgNameList(PASM->m_firstArgName); PASM->m_firstArgName = NULL;PASM->m_lastArgName = NULL;
                                                            }
#line 5441 "prebuilt\\asmparse.cpp"
    break;

  case 338: /* methodDecl: _EMITBYTE int32  */
#line 878 "asmparse.y"
                                                            { PASM->EmitByte((yyvsp[0].int32)); }
#line 5447 "prebuilt\\asmparse.cpp"
    break;

  case 339: /* methodDecl: sehBlock  */
#line 879 "asmparse.y"
                                                            { delete PASM->m_SEHD; PASM->m_SEHD = PASM->m_SEHDstack.POP(); }
#line 5453 "prebuilt\\asmparse.cpp"
    break;

  case 340: /* methodDecl: _MAXSTACK int32  */
#line 880 "asmparse.y"
                                                            { PASM->EmitMaxStack((yyvsp[0].int32)); }
#line 5459 "prebuilt\\asmparse.cpp"
    break;

  case 341: /* methodDecl: localsHead '(' sigArgs0 ')'  */
#line 881 "asmparse.y"
                                                            { PASM->EmitLocals(parser->MakeSig(IMAGE_CEE_CS_CALLCONV_LOCAL_SIG, 0, (yyvsp[-1].binstr)));
                                                            }
#line 5466 "prebuilt\\asmparse.cpp"
    break;

  case 342: /* methodDecl: localsHead INIT_ '(' sigArgs0 ')'  */
#line 883 "asmparse.y"
                                                            { PASM->EmitZeroInit();
                                                              PASM->EmitLocals(parser->MakeSig(IMAGE_CEE_CS_CALLCONV_LOCAL_SIG, 0, (yyvsp[-1].binstr)));
                                                            }
#line 5474 "prebuilt\\asmparse.cpp"
    break;

  case 343: /* methodDecl: _ENTRYPOINT  */
#line 886 "asmparse.y"
                                                            { PASM->EmitEntryPoint(); }
#line 5480 "prebuilt\\asmparse.cpp"
    break;

  case 344: /* methodDecl: _ZEROINIT  */
#line 887 "asmparse.y"
                                                            { PASM->EmitZeroInit(); }
#line 5486 "prebuilt\\asmparse.cpp"
    break;

  case 347: /* methodDecl: id ':'  */
#line 890 "asmparse.y"
                                                            { PASM->AddLabel(PASM->m_CurPC,(yyvsp[-1].string)); /*PASM->EmitLabel($1);*/ }
#line 5492 "prebuilt\\asmparse.cpp"
    break;

  case 353: /* methodDecl: _EXPORT '[' int32 ']'  */
#line 896 "asmparse.y"
                                                            { if(PASM->m_pCurMethod->m_dwExportOrdinal == 0xFFFFFFFF)
                                                              {
                                                                PASM->m_pCurMethod->m_dwExportOrdinal = (yyvsp[-1].int32);
                                                                PASM->m_pCurMethod->m_szExportAlias = NULL;
                                                                if(PASM->m_pCurMethod->m_wVTEntry == 0) PASM->m_pCurMethod->m_wVTEntry = 1;
                                                                if(PASM->m_pCurMethod->m_wVTSlot  == 0) PASM->m_pCurMethod->m_wVTSlot = (WORD)((yyvsp[-1].int32) + 0x8000);
                                                              }
                                                              else
                                                                PASM->report->warn("Duplicate .export directive, ignored\n");
                                                            }
#line 5507 "prebuilt\\asmparse.cpp"
    break;

  case 354: /* methodDecl: _EXPORT '[' int32 ']' AS_ id  */
#line 906 "asmparse.y"
                                                            { if(PASM->m_pCurMethod->m_dwExportOrdinal == 0xFFFFFFFF)
                                                              {
                                                                PASM->m_pCurMethod->m_dwExportOrdinal = (yyvsp[-3].int32);
                                                                PASM->m_pCurMethod->m_szExportAlias = (yyvsp[0].string);
                                                                if(PASM->m_pCurMethod->m_wVTEntry == 0) PASM->m_pCurMethod->m_wVTEntry = 1;
                                                                if(PASM->m_pCurMethod->m_wVTSlot  == 0) PASM->m_pCurMethod->m_wVTSlot = (WORD)((yyvsp[-3].int32) + 0x8000);
                                                              }
                                                              else
                                                                PASM->report->warn("Duplicate .export directive, ignored\n");
                                                            }
#line 5522 "prebuilt\\asmparse.cpp"
    break;

  case 355: /* methodDecl: _VTENTRY int32 ':' int32  */
#line 916 "asmparse.y"
                                                            { PASM->m_pCurMethod->m_wVTEntry = (WORD)(yyvsp[-2].int32);
                                                              PASM->m_pCurMethod->m_wVTSlot = (WORD)(yyvsp[0].int32); }
#line 5529 "prebuilt\\asmparse.cpp"
    break;

  case 356: /* methodDecl: _OVERRIDE typeSpec DCOLON methodName  */
#line 919 "asmparse.y"
                                                            { PASM->AddMethodImpl((yyvsp[-2].token),(yyvsp[0].string),NULL,mdTokenNil,NULL,NULL); }
#line 5535 "prebuilt\\asmparse.cpp"
    break;

  case 357: /* methodDecl: _OVERRIDE METHOD_ callConv type typeSpec DCOLON methodName genArity '(' sigArgs0 ')'  */
#line 922 "asmparse.y"
                                                            { PASM->AddMethodImpl((yyvsp[-6].token),(yyvsp[-4].string),
                                                              ((yyvsp[-3].int32)==0 ? parser->MakeSig((yyvsp[-8].int32),(yyvsp[-7].binstr),(yyvsp[-1].binstr)) :
                                                              parser->MakeSig((yyvsp[-8].int32)| IMAGE_CEE_CS_CALLCONV_GENERIC,(yyvsp[-7].binstr),(yyvsp[-1].binstr),(yyvsp[-3].int32)))
                                                              ,mdTokenNil,NULL,NULL);
                                                              PASM->ResetArgNameList();
                                                            }
#line 5546 "prebuilt\\asmparse.cpp"
    break;

  case 359: /* methodDecl: _PARAM TYPE_ '[' int32 ']'  */
#line 929 "asmparse.y"
                                                            { if(((yyvsp[-1].int32) > 0) && ((yyvsp[-1].int32) <= (int)PASM->m_pCurMethod->m_NumTyPars))
                                                                PASM->m_pCustomDescrList = PASM->m_pCurMethod->m_TyPars[(yyvsp[-1].int32)-1].CAList();
                                                              else
                                                                PASM->report->error("Type parameter index out of range\n");
                                                            }
#line 5556 "prebuilt\\asmparse.cpp"
    break;

  case 360: /* methodDecl: _PARAM TYPE_ dottedName  */
#line 934 "asmparse.y"
                                                            { int n = PASM->m_pCurMethod->FindTyPar((yyvsp[0].string));
                                                              if(n >= 0)
                                                                PASM->m_pCustomDescrList = PASM->m_pCurMethod->m_TyPars[n].CAList();
                                                              else
                                                                PASM->report->error("Type parameter '%s' undefined\n",(yyvsp[0].string));
                                                            }
#line 5567 "prebuilt\\asmparse.cpp"
    break;

  case 361: /* methodDecl: _PARAM CONSTRAINT_ '[' int32 ']' ',' typeSpec  */
#line 940 "asmparse.y"
                                                                        { PASM->m_pCurMethod->AddGenericParamConstraint((yyvsp[-3].int32), 0, (yyvsp[0].token)); }
#line 5573 "prebuilt\\asmparse.cpp"
    break;

  case 362: /* methodDecl: _PARAM CONSTRAINT_ dottedName ',' typeSpec  */
#line 941 "asmparse.y"
                                                                        { PASM->m_pCurMethod->AddGenericParamConstraint(0, (yyvsp[-2].string), (yyvsp[0].token)); }
#line 5579 "prebuilt\\asmparse.cpp"
    break;

  case 363: /* methodDecl: _PARAM '[' int32 ']' initOpt  */
#line 944 "asmparse.y"
                                                            { if( (yyvsp[-2].int32) ) {
                                                                ARG_NAME_LIST* pAN=PASM->findArg(PASM->m_pCurMethod->m_firstArgName, (yyvsp[-2].int32) - 1);
                                                                if(pAN)
                                                                {
                                                                    PASM->m_pCustomDescrList = &(pAN->CustDList);
                                                                    pAN->pValue = (yyvsp[0].binstr);
                                                                }
                                                                else
                                                                {
                                                                    PASM->m_pCustomDescrList = NULL;
                                                                    if((yyvsp[0].binstr)) delete (yyvsp[0].binstr);
                                                                }
                                                              } else {
                                                                PASM->m_pCustomDescrList = &(PASM->m_pCurMethod->m_RetCustDList);
                                                                PASM->m_pCurMethod->m_pRetValue = (yyvsp[0].binstr);
                                                              }
                                                              PASM->m_tkCurrentCVOwner = 0;
                                                            }
#line 5602 "prebuilt\\asmparse.cpp"
    break;

  case 364: /* scopeBlock: scopeOpen methodDecls '}'  */
#line 964 "asmparse.y"
                                                            { PASM->m_pCurMethod->CloseScope(); }
#line 5608 "prebuilt\\asmparse.cpp"
    break;

  case 365: /* scopeOpen: '{'  */
#line 967 "asmparse.y"
                                                            { PASM->m_pCurMethod->OpenScope(); }
#line 5614 "prebuilt\\asmparse.cpp"
    break;

  case 369: /* tryBlock: tryHead scopeBlock  */
#line 978 "asmparse.y"
                                                            { PASM->m_SEHD->tryTo = PASM->m_CurPC; }
#line 5620 "prebuilt\\asmparse.cpp"
    break;

  case 370: /* tryBlock: tryHead id TO_ id  */
#line 979 "asmparse.y"
                                                            { PASM->SetTryLabels((yyvsp[-2].string), (yyvsp[0].string)); }
#line 5626 "prebuilt\\asmparse.cpp"
    break;

  case 371: /* tryBlock: tryHead int32 TO_ int32  */
#line 980 "asmparse.y"
                                                            { if(PASM->m_SEHD) {PASM->m_SEHD->tryFrom = (yyvsp[-2].int32);
                                                              PASM->m_SEHD->tryTo = (yyvsp[0].int32);} }
#line 5633 "prebuilt\\asmparse.cpp"
    break;

  case 372: /* tryHead: _TRY  */
#line 984 "asmparse.y"
                                                            { PASM->NewSEHDescriptor();
                                                              PASM->m_SEHD->tryFrom = PASM->m_CurPC; }
#line 5640 "prebuilt\\asmparse.cpp"
    break;

  case 373: /* sehClause: catchClause handlerBlock  */
#line 989 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5646 "prebuilt\\asmparse.cpp"
    break;

  case 374: /* sehClause: filterClause handlerBlock  */
#line 990 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5652 "prebuilt\\asmparse.cpp"
    break;

  case 375: /* sehClause: finallyClause handlerBlock  */
#line 991 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5658 "prebuilt\\asmparse.cpp"
    break;

  case 376: /* sehClause: faultClause handlerBlock  */
#line 992 "asmparse.y"
                                                             { PASM->EmitTry(); }
#line 5664 "prebuilt\\asmparse.cpp"
    break;

  case 377: /* filterClause: filterHead scopeBlock  */
#line 996 "asmparse.y"
                                                             { PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5670 "prebuilt\\asmparse.cpp"
    break;

  case 378: /* filterClause: filterHead id  */
#line 997 "asmparse.y"
                                                             { PASM->SetFilterLabel((yyvsp[0].string));
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5677 "prebuilt\\asmparse.cpp"
    break;

  case 379: /* filterClause: filterHead int32  */
#line 999 "asmparse.y"
                                                             { PASM->m_SEHD->sehFilter = (yyvsp[0].int32);
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5684 "prebuilt\\asmparse.cpp"
    break;

  case 380: /* filterHead: FILTER_  */
#line 1003 "asmparse.y"
                                                             { PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_FILTER;
                                                               PASM->m_SEHD->sehFilter = PASM->m_CurPC; }
#line 5691 "prebuilt\\asmparse.cpp"
    break;

  case 381: /* catchClause: CATCH_ typeSpec  */
#line 1007 "asmparse.y"
                                                            {  PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_NONE;
                                                               PASM->SetCatchClass((yyvsp[0].token));
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5699 "prebuilt\\asmparse.cpp"
    break;

  case 382: /* finallyClause: FINALLY_  */
#line 1012 "asmparse.y"
                                                             { PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_FINALLY;
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5706 "prebuilt\\asmparse.cpp"
    break;

  case 383: /* faultClause: FAULT_  */
#line 1016 "asmparse.y"
                                                             { PASM->m_SEHD->sehClause = COR_ILEXCEPTION_CLAUSE_FAULT;
                                                               PASM->m_SEHD->sehHandler = PASM->m_CurPC; }
#line 5713 "prebuilt\\asmparse.cpp"
    break;

  case 384: /* handlerBlock: scopeBlock  */
#line 1020 "asmparse.y"
                                                             { PASM->m_SEHD->sehHandlerTo = PASM->m_CurPC; }
#line 5719 "prebuilt\\asmparse.cpp"
    break;

  case 385: /* handlerBlock: HANDLER_ id TO_ id  */
#line 1021 "asmparse.y"
                                                             { PASM->SetHandlerLabels((yyvsp[-2].string), (yyvsp[0].string)); }
#line 5725 "prebuilt\\asmparse.cpp"
    break;

  case 386: /* handlerBlock: HANDLER_ int32 TO_ int32  */
#line 1022 "asmparse.y"
                                                             { PASM->m_SEHD->sehHandler = (yyvsp[-2].int32);
                                                               PASM->m_SEHD->sehHandlerTo = (yyvsp[0].int32); }
#line 5732 "prebuilt\\asmparse.cpp"
    break;

  case 388: /* ddHead: _DATA tls id '='  */
#line 1030 "asmparse.y"
                                                             { PASM->EmitDataLabel((yyvsp[-1].string)); }
#line 5738 "prebuilt\\asmparse.cpp"
    break;

  case 390: /* tls: %empty  */
#line 1034 "asmparse.y"
                                                             { PASM->SetDataSection(); }
#line 5744 "prebuilt\\asmparse.cpp"
    break;

  case 391: /* tls: TLS_  */
#line 1035 "asmparse.y"
                                                             { PASM->SetTLSSection(); }
#line 5750 "prebuilt\\asmparse.cpp"
    break;

  case 392: /* tls: CIL_  */
#line 1036 "asmparse.y"
                                                             { PASM->SetILSection(); }
#line 5756 "prebuilt\\asmparse.cpp"
    break;

  case 397: /* ddItemCount: %empty  */
#line 1047 "asmparse.y"
                                                             { (yyval.int32) = 1; }
#line 5762 "prebuilt\\asmparse.cpp"
    break;

  case 398: /* ddItemCount: '[' int32 ']'  */
#line 1048 "asmparse.y"
                                                             { (yyval.int32) = (yyvsp[-1].int32);
                                                               if((yyvsp[-1].int32) <= 0) { PASM->report->error("Illegal item count: %d\n",(yyvsp[-1].int32));
                                                                  if(!PASM->OnErrGo) (yyval.int32) = 1; }}
#line 5770 "prebuilt\\asmparse.cpp"
    break;

  case 399: /* ddItem: CHAR_ '*' '(' compQstring ')'  */
#line 1053 "asmparse.y"
                                                             { PASM->EmitDataString((yyvsp[-1].binstr)); }
#line 5776 "prebuilt\\asmparse.cpp"
    break;

  case 400: /* ddItem: '&' '(' id ')'  */
#line 1054 "asmparse.y"
                                                             { PASM->EmitDD((yyvsp[-1].string)); }
#line 5782 "prebuilt\\asmparse.cpp"
    break;

  case 401: /* ddItem: bytearrayhead bytes ')'  */
#line 1055 "asmparse.y"
                                                             { PASM->EmitData((yyvsp[-1].binstr)->ptr(),(yyvsp[-1].binstr)->length()); }
#line 5788 "prebuilt\\asmparse.cpp"
    break;

  case 402: /* ddItem: FLOAT32_ '(' float64 ')' ddItemCount  */
#line 1057 "asmparse.y"
                                                             { float f = (float) (*(yyvsp[-2].float64)); float* p = new (nothrow) float[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i < (yyvsp[0].int32); i++) p[i] = f;
                                                                 PASM->EmitData(p, sizeof(float)*(yyvsp[0].int32)); delete (yyvsp[-2].float64); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(float)*(yyvsp[0].int32)); }
#line 5799 "prebuilt\\asmparse.cpp"
    break;

  case 403: /* ddItem: FLOAT64_ '(' float64 ')' ddItemCount  */
#line 1064 "asmparse.y"
                                                             { double* p = new (nothrow) double[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i<(yyvsp[0].int32); i++) p[i] = *((yyvsp[-2].float64));
                                                                 PASM->EmitData(p, sizeof(double)*(yyvsp[0].int32)); delete (yyvsp[-2].float64); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(double)*(yyvsp[0].int32)); }
#line 5810 "prebuilt\\asmparse.cpp"
    break;

  case 404: /* ddItem: INT64_ '(' int64 ')' ddItemCount  */
#line 1071 "asmparse.y"
                                                             { int64_t* p = new (nothrow) int64_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i<(yyvsp[0].int32); i++) p[i] = *((yyvsp[-2].int64));
                                                                 PASM->EmitData(p, sizeof(int64_t)*(yyvsp[0].int32)); delete (yyvsp[-2].int64); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int64_t)*(yyvsp[0].int32)); }
#line 5821 "prebuilt\\asmparse.cpp"
    break;

  case 405: /* ddItem: INT32_ '(' int32 ')' ddItemCount  */
#line 1078 "asmparse.y"
                                                             { int32_t* p = new (nothrow) int32_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int i=0; i<(yyvsp[0].int32); i++) p[i] = (yyvsp[-2].int32);
                                                                 PASM->EmitData(p, sizeof(int32_t)*(yyvsp[0].int32)); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int32_t)*(yyvsp[0].int32)); }
#line 5832 "prebuilt\\asmparse.cpp"
    break;

  case 406: /* ddItem: INT16_ '(' int32 ')' ddItemCount  */
#line 1085 "asmparse.y"
                                                             { int16_t i = (int16_t) (yyvsp[-2].int32); FAIL_UNLESS(i == (yyvsp[-2].int32), ("Value %d too big\n", (yyvsp[-2].int32)));
                                                               int16_t* p = new (nothrow) int16_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int j=0; j<(yyvsp[0].int32); j++) p[j] = i;
                                                                 PASM->EmitData(p, sizeof(int16_t)*(yyvsp[0].int32)); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int16_t)*(yyvsp[0].int32)); }
#line 5844 "prebuilt\\asmparse.cpp"
    break;

  case 407: /* ddItem: INT8_ '(' int32 ')' ddItemCount  */
#line 1093 "asmparse.y"
                                                             { int8_t i = (int8_t) (yyvsp[-2].int32); FAIL_UNLESS(i == (yyvsp[-2].int32), ("Value %d too big\n", (yyvsp[-2].int32)));
                                                               int8_t* p = new (nothrow) int8_t[(yyvsp[0].int32)];
                                                               if(p != NULL) {
                                                                 for(int j=0; j<(yyvsp[0].int32); j++) p[j] = i;
                                                                 PASM->EmitData(p, sizeof(int8_t)*(yyvsp[0].int32)); delete [] p;
                                                               } else PASM->report->error("Out of memory emitting data block %d bytes\n",
                                                                     sizeof(int8_t)*(yyvsp[0].int32)); }
#line 5856 "prebuilt\\asmparse.cpp"
    break;

  case 408: /* ddItem: FLOAT32_ ddItemCount  */
#line 1100 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(float)*(yyvsp[0].int32)); }
#line 5862 "prebuilt\\asmparse.cpp"
    break;

  case 409: /* ddItem: FLOAT64_ ddItemCount  */
#line 1101 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(double)*(yyvsp[0].int32)); }
#line 5868 "prebuilt\\asmparse.cpp"
    break;

  case 410: /* ddItem: INT64_ ddItemCount  */
#line 1102 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int64_t)*(yyvsp[0].int32)); }
#line 5874 "prebuilt\\asmparse.cpp"
    break;

  case 411: /* ddItem: INT32_ ddItemCount  */
#line 1103 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int32_t)*(yyvsp[0].int32)); }
#line 5880 "prebuilt\\asmparse.cpp"
    break;

  case 412: /* ddItem: INT16_ ddItemCount  */
#line 1104 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int16_t)*(yyvsp[0].int32)); }
#line 5886 "prebuilt\\asmparse.cpp"
    break;

  case 413: /* ddItem: INT8_ ddItemCount  */
#line 1105 "asmparse.y"
                                                             { PASM->EmitData(NULL, sizeof(int8_t)*(yyvsp[0].int32)); }
#line 5892 "prebuilt\\asmparse.cpp"
    break;

  case 414: /* fieldSerInit: FLOAT32_ '(' float64 ')'  */
#line 1109 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R4);
                                                               float f = (float)(*(yyvsp[-1].float64));
                                                               (yyval.binstr)->appendInt32(*((int32_t*)&f)); delete (yyvsp[-1].float64); }
#line 5900 "prebuilt\\asmparse.cpp"
    break;

  case 415: /* fieldSerInit: FLOAT64_ '(' float64 ')'  */
#line 1112 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].float64)); delete (yyvsp[-1].float64); }
#line 5907 "prebuilt\\asmparse.cpp"
    break;

  case 416: /* fieldSerInit: FLOAT32_ '(' int32 ')'  */
#line 1114 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5914 "prebuilt\\asmparse.cpp"
    break;

  case 417: /* fieldSerInit: FLOAT64_ '(' int64 ')'  */
#line 1116 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5921 "prebuilt\\asmparse.cpp"
    break;

  case 418: /* fieldSerInit: INT64_ '(' int64 ')'  */
#line 1118 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5928 "prebuilt\\asmparse.cpp"
    break;

  case 419: /* fieldSerInit: INT32_ '(' int32 ')'  */
#line 1120 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5935 "prebuilt\\asmparse.cpp"
    break;

  case 420: /* fieldSerInit: INT16_ '(' int32 ')'  */
#line 1122 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I2);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 5942 "prebuilt\\asmparse.cpp"
    break;

  case 421: /* fieldSerInit: INT8_ '(' int32 ')'  */
#line 1124 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I1);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32)); }
#line 5949 "prebuilt\\asmparse.cpp"
    break;

  case 422: /* fieldSerInit: UNSIGNED_ INT64_ '(' int64 ')'  */
#line 1126 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5956 "prebuilt\\asmparse.cpp"
    break;

  case 423: /* fieldSerInit: UNSIGNED_ INT32_ '(' int32 ')'  */
#line 1128 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5963 "prebuilt\\asmparse.cpp"
    break;

  case 424: /* fieldSerInit: UNSIGNED_ INT16_ '(' int32 ')'  */
#line 1130 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 5970 "prebuilt\\asmparse.cpp"
    break;

  case 425: /* fieldSerInit: UNSIGNED_ INT8_ '(' int32 ')'  */
#line 1132 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32)); }
#line 5977 "prebuilt\\asmparse.cpp"
    break;

  case 426: /* fieldSerInit: UINT64_ '(' int64 ')'  */
#line 1134 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[-1].int64)); delete (yyvsp[-1].int64); }
#line 5984 "prebuilt\\asmparse.cpp"
    break;

  case 427: /* fieldSerInit: UINT32_ '(' int32 ')'  */
#line 1136 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 5991 "prebuilt\\asmparse.cpp"
    break;

  case 428: /* fieldSerInit: UINT16_ '(' int32 ')'  */
#line 1138 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 5998 "prebuilt\\asmparse.cpp"
    break;

  case 429: /* fieldSerInit: UINT8_ '(' int32 ')'  */
#line 1140 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32)); }
#line 6005 "prebuilt\\asmparse.cpp"
    break;

  case 430: /* fieldSerInit: CHAR_ '(' int32 ')'  */
#line 1142 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_CHAR);
                                                               (yyval.binstr)->appendInt16((yyvsp[-1].int32)); }
#line 6012 "prebuilt\\asmparse.cpp"
    break;

  case 431: /* fieldSerInit: BOOL_ '(' truefalse ')'  */
#line 1144 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_BOOLEAN);
                                                               (yyval.binstr)->appendInt8((yyvsp[-1].int32));}
#line 6019 "prebuilt\\asmparse.cpp"
    break;

  case 432: /* fieldSerInit: bytearrayhead bytes ')'  */
#line 1146 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING);
                                                               (yyval.binstr)->append((yyvsp[-1].binstr)); delete (yyvsp[-1].binstr);}
#line 6026 "prebuilt\\asmparse.cpp"
    break;

  case 433: /* bytearrayhead: BYTEARRAY_ '('  */
#line 1150 "asmparse.y"
                                                             { bParsingByteArray = TRUE; }
#line 6032 "prebuilt\\asmparse.cpp"
    break;

  case 434: /* bytes: %empty  */
#line 1153 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6038 "prebuilt\\asmparse.cpp"
    break;

  case 435: /* bytes: hexbytes  */
#line 1154 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6044 "prebuilt\\asmparse.cpp"
    break;

  case 436: /* hexbytes: HEXBYTE  */
#line 1157 "asmparse.y"
                                                             { int8_t i = (int8_t) (yyvsp[0].int32); (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(i); }
#line 6050 "prebuilt\\asmparse.cpp"
    break;

  case 437: /* hexbytes: hexbytes HEXBYTE  */
#line 1158 "asmparse.y"
                                                             { int8_t i = (int8_t) (yyvsp[0].int32); (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8(i); }
#line 6056 "prebuilt\\asmparse.cpp"
    break;

  case 438: /* fieldInit: fieldSerInit  */
#line 1162 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6062 "prebuilt\\asmparse.cpp"
    break;

  case 439: /* fieldInit: compQstring  */
#line 1163 "asmparse.y"
                                                             { (yyval.binstr) = BinStrToUnicode((yyvsp[0].binstr),true); (yyval.binstr)->insertInt8(ELEMENT_TYPE_STRING);}
#line 6068 "prebuilt\\asmparse.cpp"
    break;

  case 440: /* fieldInit: NULLREF_  */
#line 1164 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_CLASS);
                                                               (yyval.binstr)->appendInt32(0); }
#line 6075 "prebuilt\\asmparse.cpp"
    break;

  case 441: /* serInit: fieldSerInit  */
#line 1169 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6081 "prebuilt\\asmparse.cpp"
    break;

  case 442: /* serInit: STRING_ '(' NULLREF_ ')'  */
#line 1170 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING); (yyval.binstr)->appendInt8(0xFF); }
#line 6087 "prebuilt\\asmparse.cpp"
    break;

  case 443: /* serInit: STRING_ '(' SQSTRING ')'  */
#line 1171 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[-1].string)); delete [] (yyvsp[-1].string);}
#line 6094 "prebuilt\\asmparse.cpp"
    break;

  case 444: /* serInit: TYPE_ '(' CLASS_ SQSTRING ')'  */
#line 1173 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[-1].string)); delete [] (yyvsp[-1].string);}
#line 6101 "prebuilt\\asmparse.cpp"
    break;

  case 445: /* serInit: TYPE_ '(' className ')'  */
#line 1175 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE);
                                                               AppendStringWithLength((yyval.binstr),PASM->ReflectionNotation((yyvsp[-1].token)));}
#line 6108 "prebuilt\\asmparse.cpp"
    break;

  case 446: /* serInit: TYPE_ '(' NULLREF_ ')'  */
#line 1177 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_TYPE); (yyval.binstr)->appendInt8(0xFF); }
#line 6114 "prebuilt\\asmparse.cpp"
    break;

  case 447: /* serInit: OBJECT_ '(' serInit ')'  */
#line 1178 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(SERIALIZATION_TYPE_TAGGED_OBJECT);}
#line 6120 "prebuilt\\asmparse.cpp"
    break;

  case 448: /* serInit: FLOAT32_ '[' int32 ']' '(' f32seq ')'  */
#line 1180 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_R4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6128 "prebuilt\\asmparse.cpp"
    break;

  case 449: /* serInit: FLOAT64_ '[' int32 ']' '(' f64seq ')'  */
#line 1184 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_R8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6136 "prebuilt\\asmparse.cpp"
    break;

  case 450: /* serInit: INT64_ '[' int32 ']' '(' i64seq ')'  */
#line 1188 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6144 "prebuilt\\asmparse.cpp"
    break;

  case 451: /* serInit: INT32_ '[' int32 ']' '(' i32seq ')'  */
#line 1192 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6152 "prebuilt\\asmparse.cpp"
    break;

  case 452: /* serInit: INT16_ '[' int32 ']' '(' i16seq ')'  */
#line 1196 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I2);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6160 "prebuilt\\asmparse.cpp"
    break;

  case 453: /* serInit: INT8_ '[' int32 ']' '(' i8seq ')'  */
#line 1200 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_I1);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6168 "prebuilt\\asmparse.cpp"
    break;

  case 454: /* serInit: UINT64_ '[' int32 ']' '(' i64seq ')'  */
#line 1204 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6176 "prebuilt\\asmparse.cpp"
    break;

  case 455: /* serInit: UINT32_ '[' int32 ']' '(' i32seq ')'  */
#line 1208 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6184 "prebuilt\\asmparse.cpp"
    break;

  case 456: /* serInit: UINT16_ '[' int32 ']' '(' i16seq ')'  */
#line 1212 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6192 "prebuilt\\asmparse.cpp"
    break;

  case 457: /* serInit: UINT8_ '[' int32 ']' '(' i8seq ')'  */
#line 1216 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6200 "prebuilt\\asmparse.cpp"
    break;

  case 458: /* serInit: UNSIGNED_ INT64_ '[' int32 ']' '(' i64seq ')'  */
#line 1220 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U8);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6208 "prebuilt\\asmparse.cpp"
    break;

  case 459: /* serInit: UNSIGNED_ INT32_ '[' int32 ']' '(' i32seq ')'  */
#line 1224 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U4);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6216 "prebuilt\\asmparse.cpp"
    break;

  case 460: /* serInit: UNSIGNED_ INT16_ '[' int32 ']' '(' i16seq ')'  */
#line 1228 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U2);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6224 "prebuilt\\asmparse.cpp"
    break;

  case 461: /* serInit: UNSIGNED_ INT8_ '[' int32 ']' '(' i8seq ')'  */
#line 1232 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_U1);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6232 "prebuilt\\asmparse.cpp"
    break;

  case 462: /* serInit: CHAR_ '[' int32 ']' '(' i16seq ')'  */
#line 1236 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_CHAR);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6240 "prebuilt\\asmparse.cpp"
    break;

  case 463: /* serInit: BOOL_ '[' int32 ']' '(' boolSeq ')'  */
#line 1240 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_BOOLEAN);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6248 "prebuilt\\asmparse.cpp"
    break;

  case 464: /* serInit: STRING_ '[' int32 ']' '(' sqstringSeq ')'  */
#line 1244 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_STRING);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6256 "prebuilt\\asmparse.cpp"
    break;

  case 465: /* serInit: TYPE_ '[' int32 ']' '(' classSeq ')'  */
#line 1248 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(SERIALIZATION_TYPE_TYPE);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6264 "prebuilt\\asmparse.cpp"
    break;

  case 466: /* serInit: OBJECT_ '[' int32 ']' '(' objSeq ')'  */
#line 1252 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt32((yyvsp[-4].int32));
                                                               (yyval.binstr)->insertInt8(SERIALIZATION_TYPE_TAGGED_OBJECT);
                                                               (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 6272 "prebuilt\\asmparse.cpp"
    break;

  case 467: /* f32seq: %empty  */
#line 1258 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6278 "prebuilt\\asmparse.cpp"
    break;

  case 468: /* f32seq: f32seq float64  */
#line 1259 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               float f = (float) (*(yyvsp[0].float64)); (yyval.binstr)->appendInt32(*((int32_t*)&f)); delete (yyvsp[0].float64); }
#line 6285 "prebuilt\\asmparse.cpp"
    break;

  case 469: /* f32seq: f32seq int32  */
#line 1261 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt32((yyvsp[0].int32)); }
#line 6292 "prebuilt\\asmparse.cpp"
    break;

  case 470: /* f64seq: %empty  */
#line 1265 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6298 "prebuilt\\asmparse.cpp"
    break;

  case 471: /* f64seq: f64seq float64  */
#line 1266 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[0].float64)); delete (yyvsp[0].float64); }
#line 6305 "prebuilt\\asmparse.cpp"
    break;

  case 472: /* f64seq: f64seq int64  */
#line 1268 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[0].int64)); delete (yyvsp[0].int64); }
#line 6312 "prebuilt\\asmparse.cpp"
    break;

  case 473: /* i64seq: %empty  */
#line 1272 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6318 "prebuilt\\asmparse.cpp"
    break;

  case 474: /* i64seq: i64seq int64  */
#line 1273 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt64((int64_t *)(yyvsp[0].int64)); delete (yyvsp[0].int64); }
#line 6325 "prebuilt\\asmparse.cpp"
    break;

  case 475: /* i32seq: %empty  */
#line 1277 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6331 "prebuilt\\asmparse.cpp"
    break;

  case 476: /* i32seq: i32seq int32  */
#line 1278 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt32((yyvsp[0].int32));}
#line 6337 "prebuilt\\asmparse.cpp"
    break;

  case 477: /* i16seq: %empty  */
#line 1281 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6343 "prebuilt\\asmparse.cpp"
    break;

  case 478: /* i16seq: i16seq int32  */
#line 1282 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt16((yyvsp[0].int32));}
#line 6349 "prebuilt\\asmparse.cpp"
    break;

  case 479: /* i8seq: %empty  */
#line 1285 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6355 "prebuilt\\asmparse.cpp"
    break;

  case 480: /* i8seq: i8seq int32  */
#line 1286 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8((yyvsp[0].int32)); }
#line 6361 "prebuilt\\asmparse.cpp"
    break;

  case 481: /* boolSeq: %empty  */
#line 1289 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6367 "prebuilt\\asmparse.cpp"
    break;

  case 482: /* boolSeq: boolSeq truefalse  */
#line 1290 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               (yyval.binstr)->appendInt8((yyvsp[0].int32));}
#line 6374 "prebuilt\\asmparse.cpp"
    break;

  case 483: /* sqstringSeq: %empty  */
#line 1294 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6380 "prebuilt\\asmparse.cpp"
    break;

  case 484: /* sqstringSeq: sqstringSeq NULLREF_  */
#line 1295 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8(0xFF); }
#line 6386 "prebuilt\\asmparse.cpp"
    break;

  case 485: /* sqstringSeq: sqstringSeq SQSTRING  */
#line 1296 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[0].string)); delete [] (yyvsp[0].string);}
#line 6393 "prebuilt\\asmparse.cpp"
    break;

  case 486: /* classSeq: %empty  */
#line 1300 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6399 "prebuilt\\asmparse.cpp"
    break;

  case 487: /* classSeq: classSeq NULLREF_  */
#line 1301 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->appendInt8(0xFF); }
#line 6405 "prebuilt\\asmparse.cpp"
    break;

  case 488: /* classSeq: classSeq CLASS_ SQSTRING  */
#line 1302 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-2].binstr);
                                                               AppendStringWithLength((yyval.binstr),(yyvsp[0].string)); delete [] (yyvsp[0].string);}
#line 6412 "prebuilt\\asmparse.cpp"
    break;

  case 489: /* classSeq: classSeq className  */
#line 1304 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr);
                                                               AppendStringWithLength((yyval.binstr),PASM->ReflectionNotation((yyvsp[0].token)));}
#line 6419 "prebuilt\\asmparse.cpp"
    break;

  case 490: /* objSeq: %empty  */
#line 1308 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6425 "prebuilt\\asmparse.cpp"
    break;

  case 491: /* objSeq: objSeq serInit  */
#line 1309 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 6431 "prebuilt\\asmparse.cpp"
    break;

  case 492: /* methodSpec: METHOD_  */
#line 1313 "asmparse.y"
                                                             { parser->m_ANSFirst.PUSH(PASM->m_firstArgName);
                                                               parser->m_ANSLast.PUSH(PASM->m_lastArgName);
                                                               PASM->m_firstArgName = NULL;
                                                               PASM->m_lastArgName = NULL; }
#line 6440 "prebuilt\\asmparse.cpp"
    break;

  case 493: /* instr_none: INSTR_NONE  */
#line 1319 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6446 "prebuilt\\asmparse.cpp"
    break;

  case 494: /* instr_var: INSTR_VAR  */
#line 1322 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6452 "prebuilt\\asmparse.cpp"
    break;

  case 495: /* instr_i: INSTR_I  */
#line 1325 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6458 "prebuilt\\asmparse.cpp"
    break;

  case 496: /* instr_i8: INSTR_I8  */
#line 1328 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6464 "prebuilt\\asmparse.cpp"
    break;

  case 497: /* instr_r: INSTR_R  */
#line 1331 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6470 "prebuilt\\asmparse.cpp"
    break;

  case 498: /* instr_brtarget: INSTR_BRTARGET  */
#line 1334 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6476 "prebuilt\\asmparse.cpp"
    break;

  case 499: /* instr_method: INSTR_METHOD  */
#line 1337 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode));
                                                               if((!PASM->OnErrGo)&&
                                                               (((yyvsp[0].opcode) == CEE_NEWOBJ)||
                                                                ((yyvsp[0].opcode) == CEE_CALLVIRT)))
                                                                  iCallConv = IMAGE_CEE_CS_CALLCONV_HASTHIS;
                                                             }
#line 6487 "prebuilt\\asmparse.cpp"
    break;

  case 500: /* instr_field: INSTR_FIELD  */
#line 1345 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6493 "prebuilt\\asmparse.cpp"
    break;

  case 501: /* instr_type: INSTR_TYPE  */
#line 1348 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6499 "prebuilt\\asmparse.cpp"
    break;

  case 502: /* instr_string: INSTR_STRING  */
#line 1351 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6505 "prebuilt\\asmparse.cpp"
    break;

  case 503: /* instr_sig: INSTR_SIG  */
#line 1354 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6511 "prebuilt\\asmparse.cpp"
    break;

  case 504: /* instr_tok: INSTR_TOK  */
#line 1357 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); iOpcodeLen = PASM->OpcodeLen((yyval.instr)); }
#line 6517 "prebuilt\\asmparse.cpp"
    break;

  case 505: /* instr_switch: INSTR_SWITCH  */
#line 1360 "asmparse.y"
                                                             { (yyval.instr) = SetupInstr((yyvsp[0].opcode)); }
#line 6523 "prebuilt\\asmparse.cpp"
    break;

  case 506: /* instr_r_head: instr_r '('  */
#line 1363 "asmparse.y"
                                                             { (yyval.instr) = (yyvsp[-1].instr); bParsingByteArray = TRUE; }
#line 6529 "prebuilt\\asmparse.cpp"
    break;

  case 507: /* instr: instr_none  */
#line 1367 "asmparse.y"
                                                             { PASM->EmitOpcode((yyvsp[0].instr)); }
#line 6535 "prebuilt\\asmparse.cpp"
    break;

  case 508: /* instr: instr_var int32  */
#line 1368 "asmparse.y"
                                                             { PASM->EmitInstrVar((yyvsp[-1].instr), (yyvsp[0].int32)); }
#line 6541 "prebuilt\\asmparse.cpp"
    break;

  case 509: /* instr: instr_var id  */
#line 1369 "asmparse.y"
                                                             { PASM->EmitInstrVarByName((yyvsp[-1].instr), (yyvsp[0].string)); }
#line 6547 "prebuilt\\asmparse.cpp"
    break;

  case 510: /* instr: instr_i int32  */
#line 1370 "asmparse.y"
                                                             { PASM->EmitInstrI((yyvsp[-1].instr), (yyvsp[0].int32)); }
#line 6553 "prebuilt\\asmparse.cpp"
    break;

  case 511: /* instr: instr_i8 int64  */
#line 1371 "asmparse.y"
                                                             { PASM->EmitInstrI8((yyvsp[-1].instr), (yyvsp[0].int64)); }
#line 6559 "prebuilt\\asmparse.cpp"
    break;

  case 512: /* instr: instr_r float64  */
#line 1372 "asmparse.y"
                                                             { PASM->EmitInstrR((yyvsp[-1].instr), (yyvsp[0].float64)); delete ((yyvsp[0].float64));}
#line 6565 "prebuilt\\asmparse.cpp"
    break;

  case 513: /* instr: instr_r int64  */
#line 1373 "asmparse.y"
                                                             { double f = (double) (*(yyvsp[0].int64)); PASM->EmitInstrR((yyvsp[-1].instr), &f); }
#line 6571 "prebuilt\\asmparse.cpp"
    break;

  case 514: /* instr: instr_r_head bytes ')'  */
#line 1374 "asmparse.y"
                                                             { unsigned L = (yyvsp[-1].binstr)->length();
                                                               FAIL_UNLESS(L >= sizeof(float), ("%d hexbytes, must be at least %d\n",
                                                                           L,sizeof(float)));
                                                               if(L < sizeof(float)) {YYERROR; }
                                                               else {
                                                                   double f = (L >= sizeof(double)) ? *((double *)((yyvsp[-1].binstr)->ptr()))
                                                                                    : (double)(*(float *)((yyvsp[-1].binstr)->ptr()));
                                                                   PASM->EmitInstrR((yyvsp[-2].instr),&f); }
                                                               delete (yyvsp[-1].binstr); }
#line 6585 "prebuilt\\asmparse.cpp"
    break;

  case 515: /* instr: instr_brtarget int32  */
#line 1383 "asmparse.y"
                                                             { PASM->EmitInstrBrOffset((yyvsp[-1].instr), (yyvsp[0].int32)); }
#line 6591 "prebuilt\\asmparse.cpp"
    break;

  case 516: /* instr: instr_brtarget id  */
#line 1384 "asmparse.y"
                                                             { PASM->EmitInstrBrTarget((yyvsp[-1].instr), (yyvsp[0].string)); }
#line 6597 "prebuilt\\asmparse.cpp"
    break;

  case 517: /* instr: instr_method methodRef  */
#line 1386 "asmparse.y"
                                                             { PASM->SetMemberRefFixup((yyvsp[0].token),PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),(yyvsp[0].token));
                                                               PASM->m_tkCurrentCVOwner = (yyvsp[0].token);
                                                               PASM->m_pCustomDescrList = NULL;
                                                               iCallConv = 0;
                                                             }
#line 6608 "prebuilt\\asmparse.cpp"
    break;

  case 518: /* instr: instr_field type typeSpec DCOLON dottedName  */
#line 1393 "asmparse.y"
                                                             { (yyvsp[-3].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               mdToken mr = PASM->MakeMemberRef((yyvsp[-2].token), (yyvsp[0].string), (yyvsp[-3].binstr));
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-4].instr)));
                                                               PASM->EmitInstrI((yyvsp[-4].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6620 "prebuilt\\asmparse.cpp"
    break;

  case 519: /* instr: instr_field type dottedName  */
#line 1401 "asmparse.y"
                                                             { (yyvsp[-1].binstr)->insertInt8(IMAGE_CEE_CS_CALLCONV_FIELD);
                                                               mdToken mr = PASM->MakeMemberRef(mdTokenNil, (yyvsp[0].string), (yyvsp[-1].binstr));
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-2].instr)));
                                                               PASM->EmitInstrI((yyvsp[-2].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6632 "prebuilt\\asmparse.cpp"
    break;

  case 520: /* instr: instr_field mdtoken  */
#line 1408 "asmparse.y"
                                                             { mdToken mr = (yyvsp[0].token);
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6643 "prebuilt\\asmparse.cpp"
    break;

  case 521: /* instr: instr_field TYPEDEF_F  */
#line 1414 "asmparse.y"
                                                             { mdToken mr = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6654 "prebuilt\\asmparse.cpp"
    break;

  case 522: /* instr: instr_field TYPEDEF_MR  */
#line 1420 "asmparse.y"
                                                             { mdToken mr = (yyvsp[0].tdd)->m_tkTypeSpec;
                                                               PASM->SetMemberRefFixup(mr, PASM->OpcodeLen((yyvsp[-1].instr)));
                                                               PASM->EmitInstrI((yyvsp[-1].instr),mr);
                                                               PASM->m_tkCurrentCVOwner = mr;
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6665 "prebuilt\\asmparse.cpp"
    break;

  case 523: /* instr: instr_type typeSpec  */
#line 1426 "asmparse.y"
                                                             { PASM->EmitInstrI((yyvsp[-1].instr), (yyvsp[0].token));
                                                               PASM->m_tkCurrentCVOwner = (yyvsp[0].token);
                                                               PASM->m_pCustomDescrList = NULL;
                                                             }
#line 6674 "prebuilt\\asmparse.cpp"
    break;

  case 524: /* instr: instr_string compQstring  */
#line 1430 "asmparse.y"
                                                             { PASM->EmitInstrStringLiteral((yyvsp[-1].instr), (yyvsp[0].binstr),TRUE); }
#line 6680 "prebuilt\\asmparse.cpp"
    break;

  case 525: /* instr: instr_string ANSI_ '(' compQstring ')'  */
#line 1432 "asmparse.y"
                                                             { PASM->EmitInstrStringLiteral((yyvsp[-4].instr), (yyvsp[-1].binstr),FALSE); }
#line 6686 "prebuilt\\asmparse.cpp"
    break;

  case 526: /* instr: instr_string bytearrayhead bytes ')'  */
#line 1434 "asmparse.y"
                                                             { PASM->EmitInstrStringLiteral((yyvsp[-3].instr), (yyvsp[-1].binstr),FALSE,TRUE); }
#line 6692 "prebuilt\\asmparse.cpp"
    break;

  case 527: /* instr: instr_sig callConv type '(' sigArgs0 ')'  */
#line 1436 "asmparse.y"
                                                             { PASM->EmitInstrSig((yyvsp[-5].instr), parser->MakeSig((yyvsp[-4].int32), (yyvsp[-3].binstr), (yyvsp[-1].binstr)));
                                                               PASM->ResetArgNameList();
                                                             }
#line 6700 "prebuilt\\asmparse.cpp"
    break;

  case 528: /* instr: instr_tok ownerType  */
#line 1440 "asmparse.y"
                                                             { PASM->EmitInstrI((yyvsp[-1].instr),(yyvsp[0].token));
                                                               PASM->m_tkCurrentCVOwner = (yyvsp[0].token);
                                                               PASM->m_pCustomDescrList = NULL;
                                                               iOpcodeLen = 0;
                                                             }
#line 6710 "prebuilt\\asmparse.cpp"
    break;

  case 529: /* instr: instr_switch '(' labels ')'  */
#line 1445 "asmparse.y"
                                                             { PASM->EmitInstrSwitch((yyvsp[-3].instr), (yyvsp[-1].labels)); }
#line 6716 "prebuilt\\asmparse.cpp"
    break;

  case 530: /* labels: %empty  */
#line 1448 "asmparse.y"
                                                              { (yyval.labels) = 0; }
#line 6722 "prebuilt\\asmparse.cpp"
    break;

  case 531: /* labels: id ',' labels  */
#line 1449 "asmparse.y"
                                                              { (yyval.labels) = new Labels((yyvsp[-2].string), (yyvsp[0].labels), TRUE); }
#line 6728 "prebuilt\\asmparse.cpp"
    break;

  case 532: /* labels: int32 ',' labels  */
#line 1450 "asmparse.y"
                                                              { (yyval.labels) = new Labels((char *)(UINT_PTR)(yyvsp[-2].int32), (yyvsp[0].labels), FALSE); }
#line 6734 "prebuilt\\asmparse.cpp"
    break;

  case 533: /* labels: id  */
#line 1451 "asmparse.y"
                                                              { (yyval.labels) = new Labels((yyvsp[0].string), NULL, TRUE); }
#line 6740 "prebuilt\\asmparse.cpp"
    break;

  case 534: /* labels: int32  */
#line 1452 "asmparse.y"
                                                              { (yyval.labels) = new Labels((char *)(UINT_PTR)(yyvsp[0].int32), NULL, FALSE); }
#line 6746 "prebuilt\\asmparse.cpp"
    break;

  case 535: /* tyArgs0: %empty  */
#line 1456 "asmparse.y"
                                                             { (yyval.binstr) = NULL; }
#line 6752 "prebuilt\\asmparse.cpp"
    break;

  case 536: /* tyArgs0: '<' tyArgs1 '>'  */
#line 1457 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-1].binstr); }
#line 6758 "prebuilt\\asmparse.cpp"
    break;

  case 537: /* tyArgs1: %empty  */
#line 1460 "asmparse.y"
                                                             { (yyval.binstr) = NULL; }
#line 6764 "prebuilt\\asmparse.cpp"
    break;

  case 538: /* tyArgs1: tyArgs2  */
#line 1461 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6770 "prebuilt\\asmparse.cpp"
    break;

  case 539: /* tyArgs2: type  */
#line 1464 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6776 "prebuilt\\asmparse.cpp"
    break;

  case 540: /* tyArgs2: tyArgs2 ',' type  */
#line 1465 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 6782 "prebuilt\\asmparse.cpp"
    break;

  case 541: /* sigArgs0: %empty  */
#line 1469 "asmparse.y"
                                                             { (yyval.binstr) = new BinStr(); }
#line 6788 "prebuilt\\asmparse.cpp"
    break;

  case 542: /* sigArgs0: sigArgs1  */
#line 1470 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr);}
#line 6794 "prebuilt\\asmparse.cpp"
    break;

  case 543: /* sigArgs1: sigArg  */
#line 1473 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[0].binstr); }
#line 6800 "prebuilt\\asmparse.cpp"
    break;

  case 544: /* sigArgs1: sigArgs1 ',' sigArg  */
#line 1474 "asmparse.y"
                                                             { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 6806 "prebuilt\\asmparse.cpp"
    break;

  case 545: /* sigArg: ELLIPSIS  */
#line 1477 "asmparse.y"
                                                               { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_SENTINEL); }
#line 6812 "prebuilt\\asmparse.cpp"
    break;

  case 546: /* sigArg: paramAttr type marshalClause  */
#line 1478 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[-1].binstr)); PASM->addArgName(NULL, (yyvsp[-1].binstr), (yyvsp[0].binstr), (yyvsp[-2].int32)); }
#line 6818 "prebuilt\\asmparse.cpp"
    break;

  case 547: /* sigArg: paramAttr type marshalClause id  */
#line 1479 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[-2].binstr)); PASM->addArgName((yyvsp[0].string), (yyvsp[-2].binstr), (yyvsp[-1].binstr), (yyvsp[-3].int32));}
#line 6824 "prebuilt\\asmparse.cpp"
    break;

  case 548: /* className: '[' dottedName ']' slashedName  */
#line 1483 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef(PASM->GetAsmRef((yyvsp[-2].string)), (yyvsp[0].string), NULL); delete[] (yyvsp[-2].string);}
#line 6830 "prebuilt\\asmparse.cpp"
    break;

  case 549: /* className: '[' mdtoken ']' slashedName  */
#line 1484 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef((yyvsp[-2].token), (yyvsp[0].string), NULL); }
#line 6836 "prebuilt\\asmparse.cpp"
    break;

  case 550: /* className: '[' '*' ']' slashedName  */
#line 1485 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef(mdTokenNil, (yyvsp[0].string), NULL); }
#line 6842 "prebuilt\\asmparse.cpp"
    break;

  case 551: /* className: '[' _MODULE dottedName ']' slashedName  */
#line 1486 "asmparse.y"
                                                                   { (yyval.token) = PASM->ResolveClassRef(PASM->GetModRef((yyvsp[-2].string)),(yyvsp[0].string), NULL); delete[] (yyvsp[-2].string);}
#line 6848 "prebuilt\\asmparse.cpp"
    break;

  case 552: /* className: slashedName  */
#line 1487 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveClassRef(1,(yyvsp[0].string),NULL); }
#line 6854 "prebuilt\\asmparse.cpp"
    break;

  case 553: /* className: mdtoken  */
#line 1488 "asmparse.y"
                                                              { (yyval.token) = (yyvsp[0].token); }
#line 6860 "prebuilt\\asmparse.cpp"
    break;

  case 554: /* className: TYPEDEF_T  */
#line 1489 "asmparse.y"
                                                              { (yyval.token) = (yyvsp[0].tdd)->m_tkTypeSpec; }
#line 6866 "prebuilt\\asmparse.cpp"
    break;

  case 555: /* className: _THIS  */
#line 1490 "asmparse.y"
                                                              { if(PASM->m_pCurClass != NULL) (yyval.token) = PASM->m_pCurClass->m_cl;
                                                                else { (yyval.token) = 0; PASM->report->error(".this outside class scope\n"); }
                                                              }
#line 6874 "prebuilt\\asmparse.cpp"
    break;

  case 556: /* className: _BASE  */
#line 1493 "asmparse.y"
                                                              { if(PASM->m_pCurClass != NULL) {
                                                                  (yyval.token) = PASM->m_pCurClass->m_crExtends;
                                                                  if(RidFromToken((yyval.token)) == 0)
                                                                    PASM->report->error(".base undefined\n");
                                                                } else { (yyval.token) = 0; PASM->report->error(".base outside class scope\n"); }
                                                              }
#line 6885 "prebuilt\\asmparse.cpp"
    break;

  case 557: /* className: _NESTER  */
#line 1499 "asmparse.y"
                                                              { if(PASM->m_pCurClass != NULL) {
                                                                  if(PASM->m_pCurClass->m_pEncloser != NULL) (yyval.token) = PASM->m_pCurClass->m_pEncloser->m_cl;
                                                                  else { (yyval.token) = 0; PASM->report->error(".nester undefined\n"); }
                                                                } else { (yyval.token) = 0; PASM->report->error(".nester outside class scope\n"); }
                                                              }
#line 6895 "prebuilt\\asmparse.cpp"
    break;

  case 558: /* slashedName: dottedName  */
#line 1506 "asmparse.y"
                                                              { (yyval.string) = (yyvsp[0].string); }
#line 6901 "prebuilt\\asmparse.cpp"
    break;

  case 559: /* slashedName: slashedName '/' dottedName  */
#line 1507 "asmparse.y"
                                                              { (yyval.string) = newStringWDel((yyvsp[-2].string), NESTING_SEP, (yyvsp[0].string)); }
#line 6907 "prebuilt\\asmparse.cpp"
    break;

  case 560: /* typeSpec: className  */
#line 1510 "asmparse.y"
                                                              { (yyval.token) = (yyvsp[0].token);}
#line 6913 "prebuilt\\asmparse.cpp"
    break;

  case 561: /* typeSpec: '[' dottedName ']'  */
#line 1511 "asmparse.y"
                                                              { (yyval.token) = PASM->GetAsmRef((yyvsp[-1].string)); delete[] (yyvsp[-1].string);}
#line 6919 "prebuilt\\asmparse.cpp"
    break;

  case 562: /* typeSpec: '[' _MODULE dottedName ']'  */
#line 1512 "asmparse.y"
                                                              { (yyval.token) = PASM->GetModRef((yyvsp[-1].string)); delete[] (yyvsp[-1].string);}
#line 6925 "prebuilt\\asmparse.cpp"
    break;

  case 563: /* typeSpec: type  */
#line 1513 "asmparse.y"
                                                              { (yyval.token) = PASM->ResolveTypeSpec((yyvsp[0].binstr)); }
#line 6931 "prebuilt\\asmparse.cpp"
    break;

  case 564: /* nativeType: %empty  */
#line 1517 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); }
#line 6937 "prebuilt\\asmparse.cpp"
    break;

  case 565: /* nativeType: CUSTOM_ '(' compQstring ',' compQstring ',' compQstring ',' compQstring ')'  */
#line 1519 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_CUSTOMMARSHALER);
                                                                corEmitInt((yyval.binstr),(yyvsp[-7].binstr)->length()); (yyval.binstr)->append((yyvsp[-7].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-5].binstr)->length()); (yyval.binstr)->append((yyvsp[-5].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-3].binstr)->length()); (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].binstr)->length()); (yyval.binstr)->append((yyvsp[-1].binstr));
                                                                PASM->report->warn("Deprecated 4-string form of custom marshaler, first two strings ignored\n");}
#line 6948 "prebuilt\\asmparse.cpp"
    break;

  case 566: /* nativeType: CUSTOM_ '(' compQstring ',' compQstring ')'  */
#line 1526 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_CUSTOMMARSHALER);
                                                                corEmitInt((yyval.binstr),0);
                                                                corEmitInt((yyval.binstr),0);
                                                                corEmitInt((yyval.binstr),(yyvsp[-3].binstr)->length()); (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].binstr)->length()); (yyval.binstr)->append((yyvsp[-1].binstr)); }
#line 6958 "prebuilt\\asmparse.cpp"
    break;

  case 567: /* nativeType: FIXED_ SYSSTRING_ '[' int32 ']'  */
#line 1531 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_FIXEDSYSSTRING);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32)); }
#line 6965 "prebuilt\\asmparse.cpp"
    break;

  case 568: /* nativeType: FIXED_ ARRAY_ '[' int32 ']' nativeType  */
#line 1534 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_FIXEDARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-2].int32)); (yyval.binstr)->append((yyvsp[0].binstr)); }
#line 6972 "prebuilt\\asmparse.cpp"
    break;

  case 569: /* nativeType: VARIANT_  */
#line 1536 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_VARIANT);
                                                                PASM->report->warn("Deprecated native type 'variant'\n"); }
#line 6979 "prebuilt\\asmparse.cpp"
    break;

  case 570: /* nativeType: CURRENCY_  */
#line 1538 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_CURRENCY); }
#line 6985 "prebuilt\\asmparse.cpp"
    break;

  case 571: /* nativeType: SYSCHAR_  */
#line 1539 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_SYSCHAR);
                                                                PASM->report->warn("Deprecated native type 'syschar'\n"); }
#line 6992 "prebuilt\\asmparse.cpp"
    break;

  case 572: /* nativeType: VOID_  */
#line 1541 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_VOID);
                                                                PASM->report->warn("Deprecated native type 'void'\n"); }
#line 6999 "prebuilt\\asmparse.cpp"
    break;

  case 573: /* nativeType: BOOL_  */
#line 1543 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_BOOLEAN); }
#line 7005 "prebuilt\\asmparse.cpp"
    break;

  case 574: /* nativeType: INT8_  */
#line 1544 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I1); }
#line 7011 "prebuilt\\asmparse.cpp"
    break;

  case 575: /* nativeType: INT16_  */
#line 1545 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I2); }
#line 7017 "prebuilt\\asmparse.cpp"
    break;

  case 576: /* nativeType: INT32_  */
#line 1546 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I4); }
#line 7023 "prebuilt\\asmparse.cpp"
    break;

  case 577: /* nativeType: INT64_  */
#line 1547 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_I8); }
#line 7029 "prebuilt\\asmparse.cpp"
    break;

  case 578: /* nativeType: FLOAT32_  */
#line 1548 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_R4); }
#line 7035 "prebuilt\\asmparse.cpp"
    break;

  case 579: /* nativeType: FLOAT64_  */
#line 1549 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_R8); }
#line 7041 "prebuilt\\asmparse.cpp"
    break;

  case 580: /* nativeType: ERROR_  */
#line 1550 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_ERROR); }
#line 7047 "prebuilt\\asmparse.cpp"
    break;

  case 581: /* nativeType: UNSIGNED_ INT8_  */
#line 1551 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U1); }
#line 7053 "prebuilt\\asmparse.cpp"
    break;

  case 582: /* nativeType: UNSIGNED_ INT16_  */
#line 1552 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U2); }
#line 7059 "prebuilt\\asmparse.cpp"
    break;

  case 583: /* nativeType: UNSIGNED_ INT32_  */
#line 1553 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U4); }
#line 7065 "prebuilt\\asmparse.cpp"
    break;

  case 584: /* nativeType: UNSIGNED_ INT64_  */
#line 1554 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U8); }
#line 7071 "prebuilt\\asmparse.cpp"
    break;

  case 585: /* nativeType: UINT8_  */
#line 1555 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U1); }
#line 7077 "prebuilt\\asmparse.cpp"
    break;

  case 586: /* nativeType: UINT16_  */
#line 1556 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U2); }
#line 7083 "prebuilt\\asmparse.cpp"
    break;

  case 587: /* nativeType: UINT32_  */
#line 1557 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U4); }
#line 7089 "prebuilt\\asmparse.cpp"
    break;

  case 588: /* nativeType: UINT64_  */
#line 1558 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_U8); }
#line 7095 "prebuilt\\asmparse.cpp"
    break;

  case 589: /* nativeType: nativeType '*'  */
#line 1559 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(NATIVE_TYPE_PTR);
                                                                PASM->report->warn("Deprecated native type '*'\n"); }
#line 7102 "prebuilt\\asmparse.cpp"
    break;

  case 590: /* nativeType: nativeType '[' ']'  */
#line 1561 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY); }
#line 7109 "prebuilt\\asmparse.cpp"
    break;

  case 591: /* nativeType: nativeType '[' int32 ']'  */
#line 1563 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-3].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY);
                                                                corEmitInt((yyval.binstr),0);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32));
                                                                corEmitInt((yyval.binstr),0); }
#line 7119 "prebuilt\\asmparse.cpp"
    break;

  case 592: /* nativeType: nativeType '[' int32 '+' int32 ']'  */
#line 1568 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-5].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32));
                                                                corEmitInt((yyval.binstr),(yyvsp[-3].int32));
                                                                corEmitInt((yyval.binstr),ntaSizeParamIndexSpecified); }
#line 7129 "prebuilt\\asmparse.cpp"
    break;

  case 593: /* nativeType: nativeType '[' '+' int32 ']'  */
#line 1573 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-4].binstr); if((yyval.binstr)->length()==0) (yyval.binstr)->appendInt8(NATIVE_TYPE_MAX);
                                                                (yyval.binstr)->insertInt8(NATIVE_TYPE_ARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-1].int32)); }
#line 7137 "prebuilt\\asmparse.cpp"
    break;

  case 594: /* nativeType: DECIMAL_  */
#line 1576 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_DECIMAL);
                                                                PASM->report->warn("Deprecated native type 'decimal'\n"); }
#line 7144 "prebuilt\\asmparse.cpp"
    break;

  case 595: /* nativeType: DATE_  */
#line 1578 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_DATE);
                                                                PASM->report->warn("Deprecated native type 'date'\n"); }
#line 7151 "prebuilt\\asmparse.cpp"
    break;

  case 596: /* nativeType: BSTR_  */
#line 1580 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_BSTR); }
#line 7157 "prebuilt\\asmparse.cpp"
    break;

  case 597: /* nativeType: LPSTR_  */
#line 1581 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPSTR); }
#line 7163 "prebuilt\\asmparse.cpp"
    break;

  case 598: /* nativeType: LPWSTR_  */
#line 1582 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPWSTR); }
#line 7169 "prebuilt\\asmparse.cpp"
    break;

  case 599: /* nativeType: LPTSTR_  */
#line 1583 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPTSTR); }
#line 7175 "prebuilt\\asmparse.cpp"
    break;

  case 600: /* nativeType: OBJECTREF_  */
#line 1584 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_OBJECTREF);
                                                                PASM->report->warn("Deprecated native type 'objectref'\n"); }
#line 7182 "prebuilt\\asmparse.cpp"
    break;

  case 601: /* nativeType: IUNKNOWN_ iidParamIndex  */
#line 1586 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_IUNKNOWN);
                                                                if((yyvsp[0].int32) != -1) corEmitInt((yyval.binstr),(yyvsp[0].int32)); }
#line 7189 "prebuilt\\asmparse.cpp"
    break;

  case 602: /* nativeType: IDISPATCH_ iidParamIndex  */
#line 1588 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_IDISPATCH);
                                                                if((yyvsp[0].int32) != -1) corEmitInt((yyval.binstr),(yyvsp[0].int32)); }
#line 7196 "prebuilt\\asmparse.cpp"
    break;

  case 603: /* nativeType: STRUCT_  */
#line 1590 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_STRUCT); }
#line 7202 "prebuilt\\asmparse.cpp"
    break;

  case 604: /* nativeType: INTERFACE_ iidParamIndex  */
#line 1591 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_INTF);
                                                                if((yyvsp[0].int32) != -1) corEmitInt((yyval.binstr),(yyvsp[0].int32)); }
#line 7209 "prebuilt\\asmparse.cpp"
    break;

  case 605: /* nativeType: SAFEARRAY_ variantType  */
#line 1593 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_SAFEARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[0].int32));
                                                                corEmitInt((yyval.binstr),0);}
#line 7217 "prebuilt\\asmparse.cpp"
    break;

  case 606: /* nativeType: SAFEARRAY_ variantType ',' compQstring  */
#line 1596 "asmparse.y"
                                                                 { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_SAFEARRAY);
                                                                corEmitInt((yyval.binstr),(yyvsp[-2].int32));
                                                                corEmitInt((yyval.binstr),(yyvsp[0].binstr)->length()); (yyval.binstr)->append((yyvsp[0].binstr)); }
#line 7225 "prebuilt\\asmparse.cpp"
    break;

  case 607: /* nativeType: INT_  */
#line 1600 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_INT); }
#line 7231 "prebuilt\\asmparse.cpp"
    break;

  case 608: /* nativeType: UNSIGNED_ INT_  */
#line 1601 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_UINT); }
#line 7237 "prebuilt\\asmparse.cpp"
    break;

  case 609: /* nativeType: UINT_  */
#line 1602 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_UINT); }
#line 7243 "prebuilt\\asmparse.cpp"
    break;

  case 610: /* nativeType: NESTED_ STRUCT_  */
#line 1603 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_NESTEDSTRUCT);
                                                                PASM->report->warn("Deprecated native type 'nested struct'\n"); }
#line 7250 "prebuilt\\asmparse.cpp"
    break;

  case 611: /* nativeType: BYVALSTR_  */
#line 1605 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_BYVALSTR); }
#line 7256 "prebuilt\\asmparse.cpp"
    break;

  case 612: /* nativeType: ANSI_ BSTR_  */
#line 1606 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_ANSIBSTR); }
#line 7262 "prebuilt\\asmparse.cpp"
    break;

  case 613: /* nativeType: TBSTR_  */
#line 1607 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_TBSTR); }
#line 7268 "prebuilt\\asmparse.cpp"
    break;

  case 614: /* nativeType: VARIANT_ BOOL_  */
#line 1608 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_VARIANTBOOL); }
#line 7274 "prebuilt\\asmparse.cpp"
    break;

  case 615: /* nativeType: METHOD_  */
#line 1609 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_FUNC); }
#line 7280 "prebuilt\\asmparse.cpp"
    break;

  case 616: /* nativeType: AS_ ANY_  */
#line 1610 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_ASANY); }
#line 7286 "prebuilt\\asmparse.cpp"
    break;

  case 617: /* nativeType: LPSTRUCT_  */
#line 1611 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(NATIVE_TYPE_LPSTRUCT); }
#line 7292 "prebuilt\\asmparse.cpp"
    break;

  case 618: /* nativeType: TYPEDEF_TS  */
#line 1612 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[0].tdd)->m_pbsTypeSpec); }
#line 7298 "prebuilt\\asmparse.cpp"
    break;

  case 619: /* iidParamIndex: %empty  */
#line 1615 "asmparse.y"
                                                              { (yyval.int32) = -1; }
#line 7304 "prebuilt\\asmparse.cpp"
    break;

  case 620: /* iidParamIndex: '(' IIDPARAM_ '=' int32 ')'  */
#line 1616 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32); }
#line 7310 "prebuilt\\asmparse.cpp"
    break;

  case 621: /* variantType: %empty  */
#line 1619 "asmparse.y"
                                                              { (yyval.int32) = VT_EMPTY; }
#line 7316 "prebuilt\\asmparse.cpp"
    break;

  case 622: /* variantType: NULL_  */
#line 1620 "asmparse.y"
                                                              { (yyval.int32) = VT_NULL; }
#line 7322 "prebuilt\\asmparse.cpp"
    break;

  case 623: /* variantType: VARIANT_  */
#line 1621 "asmparse.y"
                                                              { (yyval.int32) = VT_VARIANT; }
#line 7328 "prebuilt\\asmparse.cpp"
    break;

  case 624: /* variantType: CURRENCY_  */
#line 1622 "asmparse.y"
                                                              { (yyval.int32) = VT_CY; }
#line 7334 "prebuilt\\asmparse.cpp"
    break;

  case 625: /* variantType: VOID_  */
#line 1623 "asmparse.y"
                                                              { (yyval.int32) = VT_VOID; }
#line 7340 "prebuilt\\asmparse.cpp"
    break;

  case 626: /* variantType: BOOL_  */
#line 1624 "asmparse.y"
                                                              { (yyval.int32) = VT_BOOL; }
#line 7346 "prebuilt\\asmparse.cpp"
    break;

  case 627: /* variantType: INT8_  */
#line 1625 "asmparse.y"
                                                              { (yyval.int32) = VT_I1; }
#line 7352 "prebuilt\\asmparse.cpp"
    break;

  case 628: /* variantType: INT16_  */
#line 1626 "asmparse.y"
                                                              { (yyval.int32) = VT_I2; }
#line 7358 "prebuilt\\asmparse.cpp"
    break;

  case 629: /* variantType: INT32_  */
#line 1627 "asmparse.y"
                                                              { (yyval.int32) = VT_I4; }
#line 7364 "prebuilt\\asmparse.cpp"
    break;

  case 630: /* variantType: INT64_  */
#line 1628 "asmparse.y"
                                                              { (yyval.int32) = VT_I8; }
#line 7370 "prebuilt\\asmparse.cpp"
    break;

  case 631: /* variantType: FLOAT32_  */
#line 1629 "asmparse.y"
                                                              { (yyval.int32) = VT_R4; }
#line 7376 "prebuilt\\asmparse.cpp"
    break;

  case 632: /* variantType: FLOAT64_  */
#line 1630 "asmparse.y"
                                                              { (yyval.int32) = VT_R8; }
#line 7382 "prebuilt\\asmparse.cpp"
    break;

  case 633: /* variantType: UNSIGNED_ INT8_  */
#line 1631 "asmparse.y"
                                                              { (yyval.int32) = VT_UI1; }
#line 7388 "prebuilt\\asmparse.cpp"
    break;

  case 634: /* variantType: UNSIGNED_ INT16_  */
#line 1632 "asmparse.y"
                                                              { (yyval.int32) = VT_UI2; }
#line 7394 "prebuilt\\asmparse.cpp"
    break;

  case 635: /* variantType: UNSIGNED_ INT32_  */
#line 1633 "asmparse.y"
                                                              { (yyval.int32) = VT_UI4; }
#line 7400 "prebuilt\\asmparse.cpp"
    break;

  case 636: /* variantType: UNSIGNED_ INT64_  */
#line 1634 "asmparse.y"
                                                              { (yyval.int32) = VT_UI8; }
#line 7406 "prebuilt\\asmparse.cpp"
    break;

  case 637: /* variantType: UINT8_  */
#line 1635 "asmparse.y"
                                                              { (yyval.int32) = VT_UI1; }
#line 7412 "prebuilt\\asmparse.cpp"
    break;

  case 638: /* variantType: UINT16_  */
#line 1636 "asmparse.y"
                                                              { (yyval.int32) = VT_UI2; }
#line 7418 "prebuilt\\asmparse.cpp"
    break;

  case 639: /* variantType: UINT32_  */
#line 1637 "asmparse.y"
                                                              { (yyval.int32) = VT_UI4; }
#line 7424 "prebuilt\\asmparse.cpp"
    break;

  case 640: /* variantType: UINT64_  */
#line 1638 "asmparse.y"
                                                              { (yyval.int32) = VT_UI8; }
#line 7430 "prebuilt\\asmparse.cpp"
    break;

  case 641: /* variantType: '*'  */
#line 1639 "asmparse.y"
                                                              { (yyval.int32) = VT_PTR; }
#line 7436 "prebuilt\\asmparse.cpp"
    break;

  case 642: /* variantType: variantType '[' ']'  */
#line 1640 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-2].int32) | VT_ARRAY; }
#line 7442 "prebuilt\\asmparse.cpp"
    break;

  case 643: /* variantType: variantType VECTOR_  */
#line 1641 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32) | VT_VECTOR; }
#line 7448 "prebuilt\\asmparse.cpp"
    break;

  case 644: /* variantType: variantType '&'  */
#line 1642 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[-1].int32) | VT_BYREF; }
#line 7454 "prebuilt\\asmparse.cpp"
    break;

  case 645: /* variantType: DECIMAL_  */
#line 1643 "asmparse.y"
                                                              { (yyval.int32) = VT_DECIMAL; }
#line 7460 "prebuilt\\asmparse.cpp"
    break;

  case 646: /* variantType: DATE_  */
#line 1644 "asmparse.y"
                                                              { (yyval.int32) = VT_DATE; }
#line 7466 "prebuilt\\asmparse.cpp"
    break;

  case 647: /* variantType: BSTR_  */
#line 1645 "asmparse.y"
                                                              { (yyval.int32) = VT_BSTR; }
#line 7472 "prebuilt\\asmparse.cpp"
    break;

  case 648: /* variantType: LPSTR_  */
#line 1646 "asmparse.y"
                                                              { (yyval.int32) = VT_LPSTR; }
#line 7478 "prebuilt\\asmparse.cpp"
    break;

  case 649: /* variantType: LPWSTR_  */
#line 1647 "asmparse.y"
                                                              { (yyval.int32) = VT_LPWSTR; }
#line 7484 "prebuilt\\asmparse.cpp"
    break;

  case 650: /* variantType: IUNKNOWN_  */
#line 1648 "asmparse.y"
                                                              { (yyval.int32) = VT_UNKNOWN; }
#line 7490 "prebuilt\\asmparse.cpp"
    break;

  case 651: /* variantType: IDISPATCH_  */
#line 1649 "asmparse.y"
                                                              { (yyval.int32) = VT_DISPATCH; }
#line 7496 "prebuilt\\asmparse.cpp"
    break;

  case 652: /* variantType: SAFEARRAY_  */
#line 1650 "asmparse.y"
                                                              { (yyval.int32) = VT_SAFEARRAY; }
#line 7502 "prebuilt\\asmparse.cpp"
    break;

  case 653: /* variantType: INT_  */
#line 1651 "asmparse.y"
                                                              { (yyval.int32) = VT_INT; }
#line 7508 "prebuilt\\asmparse.cpp"
    break;

  case 654: /* variantType: UNSIGNED_ INT_  */
#line 1652 "asmparse.y"
                                                              { (yyval.int32) = VT_UINT; }
#line 7514 "prebuilt\\asmparse.cpp"
    break;

  case 655: /* variantType: UINT_  */
#line 1653 "asmparse.y"
                                                              { (yyval.int32) = VT_UINT; }
#line 7520 "prebuilt\\asmparse.cpp"
    break;

  case 656: /* variantType: ERROR_  */
#line 1654 "asmparse.y"
                                                              { (yyval.int32) = VT_ERROR; }
#line 7526 "prebuilt\\asmparse.cpp"
    break;

  case 657: /* variantType: HRESULT_  */
#line 1655 "asmparse.y"
                                                              { (yyval.int32) = VT_HRESULT; }
#line 7532 "prebuilt\\asmparse.cpp"
    break;

  case 658: /* variantType: CARRAY_  */
#line 1656 "asmparse.y"
                                                              { (yyval.int32) = VT_CARRAY; }
#line 7538 "prebuilt\\asmparse.cpp"
    break;

  case 659: /* variantType: USERDEFINED_  */
#line 1657 "asmparse.y"
                                                              { (yyval.int32) = VT_USERDEFINED; }
#line 7544 "prebuilt\\asmparse.cpp"
    break;

  case 660: /* variantType: RECORD_  */
#line 1658 "asmparse.y"
                                                              { (yyval.int32) = VT_RECORD; }
#line 7550 "prebuilt\\asmparse.cpp"
    break;

  case 661: /* variantType: FILETIME_  */
#line 1659 "asmparse.y"
                                                              { (yyval.int32) = VT_FILETIME; }
#line 7556 "prebuilt\\asmparse.cpp"
    break;

  case 662: /* variantType: BLOB_  */
#line 1660 "asmparse.y"
                                                              { (yyval.int32) = VT_BLOB; }
#line 7562 "prebuilt\\asmparse.cpp"
    break;

  case 663: /* variantType: STREAM_  */
#line 1661 "asmparse.y"
                                                              { (yyval.int32) = VT_STREAM; }
#line 7568 "prebuilt\\asmparse.cpp"
    break;

  case 664: /* variantType: STORAGE_  */
#line 1662 "asmparse.y"
                                                              { (yyval.int32) = VT_STORAGE; }
#line 7574 "prebuilt\\asmparse.cpp"
    break;

  case 665: /* variantType: STREAMED_OBJECT_  */
#line 1663 "asmparse.y"
                                                              { (yyval.int32) = VT_STREAMED_OBJECT; }
#line 7580 "prebuilt\\asmparse.cpp"
    break;

  case 666: /* variantType: STORED_OBJECT_  */
#line 1664 "asmparse.y"
                                                              { (yyval.int32) = VT_STORED_OBJECT; }
#line 7586 "prebuilt\\asmparse.cpp"
    break;

  case 667: /* variantType: BLOB_OBJECT_  */
#line 1665 "asmparse.y"
                                                              { (yyval.int32) = VT_BLOB_OBJECT; }
#line 7592 "prebuilt\\asmparse.cpp"
    break;

  case 668: /* variantType: CF_  */
#line 1666 "asmparse.y"
                                                              { (yyval.int32) = VT_CF; }
#line 7598 "prebuilt\\asmparse.cpp"
    break;

  case 669: /* variantType: CLSID_  */
#line 1667 "asmparse.y"
                                                              { (yyval.int32) = VT_CLSID; }
#line 7604 "prebuilt\\asmparse.cpp"
    break;

  case 670: /* type: CLASS_ className  */
#line 1671 "asmparse.y"
                                                              { if((yyvsp[0].token) == PASM->m_tkSysString)
                                                                {     (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING); }
                                                                else if((yyvsp[0].token) == PASM->m_tkSysObject)
                                                                {     (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_OBJECT); }
                                                                else
                                                                 (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_CLASS, (yyvsp[0].token)); }
#line 7615 "prebuilt\\asmparse.cpp"
    break;

  case 671: /* type: OBJECT_  */
#line 1677 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_OBJECT); }
#line 7621 "prebuilt\\asmparse.cpp"
    break;

  case 672: /* type: VALUE_ CLASS_ className  */
#line 1678 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_VALUETYPE, (yyvsp[0].token)); }
#line 7627 "prebuilt\\asmparse.cpp"
    break;

  case 673: /* type: VALUETYPE_ className  */
#line 1679 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_VALUETYPE, (yyvsp[0].token)); }
#line 7633 "prebuilt\\asmparse.cpp"
    break;

  case 674: /* type: type '[' ']'  */
#line 1680 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_SZARRAY); }
#line 7639 "prebuilt\\asmparse.cpp"
    break;

  case 675: /* type: type '[' bounds1 ']'  */
#line 1681 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeArray(ELEMENT_TYPE_ARRAY, (yyvsp[-3].binstr), (yyvsp[-1].binstr)); }
#line 7645 "prebuilt\\asmparse.cpp"
    break;

  case 676: /* type: type '&'  */
#line 1682 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_BYREF); }
#line 7651 "prebuilt\\asmparse.cpp"
    break;

  case 677: /* type: type '*'  */
#line 1683 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_PTR); }
#line 7657 "prebuilt\\asmparse.cpp"
    break;

  case 678: /* type: type PINNED_  */
#line 1684 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-1].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_PINNED); }
#line 7663 "prebuilt\\asmparse.cpp"
    break;

  case 679: /* type: type MODREQ_ '(' typeSpec ')'  */
#line 1685 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_CMOD_REQD, (yyvsp[-1].token));
                                                                (yyval.binstr)->append((yyvsp[-4].binstr)); }
#line 7670 "prebuilt\\asmparse.cpp"
    break;

  case 680: /* type: type MODOPT_ '(' typeSpec ')'  */
#line 1687 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeTypeClass(ELEMENT_TYPE_CMOD_OPT, (yyvsp[-1].token));
                                                                (yyval.binstr)->append((yyvsp[-4].binstr)); }
#line 7677 "prebuilt\\asmparse.cpp"
    break;

  case 681: /* type: methodSpec callConv type '*' '(' sigArgs0 ')'  */
#line 1690 "asmparse.y"
                                                              { (yyval.binstr) = parser->MakeSig((yyvsp[-5].int32), (yyvsp[-4].binstr), (yyvsp[-1].binstr));
                                                                (yyval.binstr)->insertInt8(ELEMENT_TYPE_FNPTR);
                                                                PASM->delArgNameList(PASM->m_firstArgName);
                                                                PASM->m_firstArgName = parser->m_ANSFirst.POP();
                                                                PASM->m_lastArgName = parser->m_ANSLast.POP();
                                                              }
#line 7688 "prebuilt\\asmparse.cpp"
    break;

  case 682: /* type: type '<' tyArgs1 '>'  */
#line 1696 "asmparse.y"
                                                              { if((yyvsp[-1].binstr) == NULL) (yyval.binstr) = (yyvsp[-3].binstr);
                                                                else {
                                                                  (yyval.binstr) = new BinStr();
                                                                  (yyval.binstr)->appendInt8(ELEMENT_TYPE_GENERICINST);
                                                                  (yyval.binstr)->append((yyvsp[-3].binstr));
                                                                  corEmitInt((yyval.binstr), corCountArgs((yyvsp[-1].binstr)));
                                                                  (yyval.binstr)->append((yyvsp[-1].binstr)); delete (yyvsp[-3].binstr); delete (yyvsp[-1].binstr); }}
#line 7700 "prebuilt\\asmparse.cpp"
    break;

  case 683: /* type: '!' '!' int32  */
#line 1703 "asmparse.y"
                                                              { //if(PASM->m_pCurMethod)  {
                                                                //  if(($3 < 0)||((DWORD)$3 >= PASM->m_pCurMethod->m_NumTyPars))
                                                                //    PASM->report->error("Invalid method type parameter '%d'\n",$3);
                                                                  (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_MVAR); corEmitInt((yyval.binstr), (yyvsp[0].int32));
                                                                //} else PASM->report->error("Method type parameter '%d' outside method scope\n",$3);
                                                              }
#line 7711 "prebuilt\\asmparse.cpp"
    break;

  case 684: /* type: '!' int32  */
#line 1709 "asmparse.y"
                                                              { //if(PASM->m_pCurClass)  {
                                                                //  if(($2 < 0)||((DWORD)$2 >= PASM->m_pCurClass->m_NumTyPars))
                                                                //    PASM->report->error("Invalid type parameter '%d'\n",$2);
                                                                  (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_VAR); corEmitInt((yyval.binstr), (yyvsp[0].int32));
                                                                //} else PASM->report->error("Type parameter '%d' outside class scope\n",$2);
                                                              }
#line 7722 "prebuilt\\asmparse.cpp"
    break;

  case 685: /* type: '!' '!' dottedName  */
#line 1715 "asmparse.y"
                                                              { int eltype = ELEMENT_TYPE_MVAR;
                                                                int n=-1;
                                                                if(PASM->m_pCurMethod) n = PASM->m_pCurMethod->FindTyPar((yyvsp[0].string));
                                                                else {
                                                                  if(PASM->m_TyParList) n = PASM->m_TyParList->IndexOf((yyvsp[0].string));
                                                                  if(n == -1)
                                                                  { n = TyParFixupList.COUNT();
                                                                    TyParFixupList.PUSH((yyvsp[0].string));
                                                                    eltype = ELEMENT_TYPE_MVARFIXUP;
                                                                  }
                                                                }
                                                                if(n == -1) { PASM->report->error("Invalid method type parameter '%s'\n",(yyvsp[0].string));
                                                                n = 0x1FFFFFFF; }
                                                                (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(eltype); corEmitInt((yyval.binstr),n);
                                                              }
#line 7742 "prebuilt\\asmparse.cpp"
    break;

  case 686: /* type: '!' dottedName  */
#line 1730 "asmparse.y"
                                                              { int eltype = ELEMENT_TYPE_VAR;
                                                                int n=-1;
                                                                if(PASM->m_pCurClass && !newclass) n = PASM->m_pCurClass->FindTyPar((yyvsp[0].string));
                                                                else {
                                                                  if(PASM->m_TyParList) n = PASM->m_TyParList->IndexOf((yyvsp[0].string));
                                                                  if(n == -1)
                                                                  { n = TyParFixupList.COUNT();
                                                                    TyParFixupList.PUSH((yyvsp[0].string));
                                                                    eltype = ELEMENT_TYPE_VARFIXUP;
                                                                  }
                                                                }
                                                                if(n == -1) { PASM->report->error("Invalid type parameter '%s'\n",(yyvsp[0].string));
                                                                n = 0x1FFFFFFF; }
                                                                (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(eltype); corEmitInt((yyval.binstr),n);
                                                              }
#line 7762 "prebuilt\\asmparse.cpp"
    break;

  case 687: /* type: TYPEDREF_  */
#line 1745 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_TYPEDBYREF); }
#line 7768 "prebuilt\\asmparse.cpp"
    break;

  case 688: /* type: VOID_  */
#line 1746 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_VOID); }
#line 7774 "prebuilt\\asmparse.cpp"
    break;

  case 689: /* type: NATIVE_ INT_  */
#line 1747 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I); }
#line 7780 "prebuilt\\asmparse.cpp"
    break;

  case 690: /* type: NATIVE_ UNSIGNED_ INT_  */
#line 1748 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U); }
#line 7786 "prebuilt\\asmparse.cpp"
    break;

  case 691: /* type: NATIVE_ UINT_  */
#line 1749 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U); }
#line 7792 "prebuilt\\asmparse.cpp"
    break;

  case 692: /* type: simpleType  */
#line 1750 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); }
#line 7798 "prebuilt\\asmparse.cpp"
    break;

  case 693: /* type: ELLIPSIS type  */
#line 1751 "asmparse.y"
                                                               { (yyval.binstr) = (yyvsp[0].binstr); (yyval.binstr)->insertInt8(ELEMENT_TYPE_SENTINEL); }
#line 7804 "prebuilt\\asmparse.cpp"
    break;

  case 694: /* simpleType: CHAR_  */
#line 1754 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_CHAR); }
#line 7810 "prebuilt\\asmparse.cpp"
    break;

  case 695: /* simpleType: STRING_  */
#line 1755 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_STRING); }
#line 7816 "prebuilt\\asmparse.cpp"
    break;

  case 696: /* simpleType: BOOL_  */
#line 1756 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_BOOLEAN); }
#line 7822 "prebuilt\\asmparse.cpp"
    break;

  case 697: /* simpleType: INT8_  */
#line 1757 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I1); }
#line 7828 "prebuilt\\asmparse.cpp"
    break;

  case 698: /* simpleType: INT16_  */
#line 1758 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I2); }
#line 7834 "prebuilt\\asmparse.cpp"
    break;

  case 699: /* simpleType: INT32_  */
#line 1759 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I4); }
#line 7840 "prebuilt\\asmparse.cpp"
    break;

  case 700: /* simpleType: INT64_  */
#line 1760 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_I8); }
#line 7846 "prebuilt\\asmparse.cpp"
    break;

  case 701: /* simpleType: FLOAT32_  */
#line 1761 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R4); }
#line 7852 "prebuilt\\asmparse.cpp"
    break;

  case 702: /* simpleType: FLOAT64_  */
#line 1762 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_R8); }
#line 7858 "prebuilt\\asmparse.cpp"
    break;

  case 703: /* simpleType: UNSIGNED_ INT8_  */
#line 1763 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1); }
#line 7864 "prebuilt\\asmparse.cpp"
    break;

  case 704: /* simpleType: UNSIGNED_ INT16_  */
#line 1764 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2); }
#line 7870 "prebuilt\\asmparse.cpp"
    break;

  case 705: /* simpleType: UNSIGNED_ INT32_  */
#line 1765 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4); }
#line 7876 "prebuilt\\asmparse.cpp"
    break;

  case 706: /* simpleType: UNSIGNED_ INT64_  */
#line 1766 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8); }
#line 7882 "prebuilt\\asmparse.cpp"
    break;

  case 707: /* simpleType: UINT8_  */
#line 1767 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U1); }
#line 7888 "prebuilt\\asmparse.cpp"
    break;

  case 708: /* simpleType: UINT16_  */
#line 1768 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U2); }
#line 7894 "prebuilt\\asmparse.cpp"
    break;

  case 709: /* simpleType: UINT32_  */
#line 1769 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U4); }
#line 7900 "prebuilt\\asmparse.cpp"
    break;

  case 710: /* simpleType: UINT64_  */
#line 1770 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt8(ELEMENT_TYPE_U8); }
#line 7906 "prebuilt\\asmparse.cpp"
    break;

  case 711: /* simpleType: TYPEDEF_TS  */
#line 1771 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->append((yyvsp[0].tdd)->m_pbsTypeSpec); }
#line 7912 "prebuilt\\asmparse.cpp"
    break;

  case 712: /* bounds1: bound  */
#line 1774 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); }
#line 7918 "prebuilt\\asmparse.cpp"
    break;

  case 713: /* bounds1: bounds1 ',' bound  */
#line 1775 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyvsp[-2].binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr); }
#line 7924 "prebuilt\\asmparse.cpp"
    break;

  case 714: /* bound: %empty  */
#line 1778 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32(0x7FFFFFFF); (yyval.binstr)->appendInt32(0x7FFFFFFF);  }
#line 7930 "prebuilt\\asmparse.cpp"
    break;

  case 715: /* bound: ELLIPSIS  */
#line 1779 "asmparse.y"
                                                               { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32(0x7FFFFFFF); (yyval.binstr)->appendInt32(0x7FFFFFFF);  }
#line 7936 "prebuilt\\asmparse.cpp"
    break;

  case 716: /* bound: int32  */
#line 1780 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32(0); (yyval.binstr)->appendInt32((yyvsp[0].int32)); }
#line 7942 "prebuilt\\asmparse.cpp"
    break;

  case 717: /* bound: int32 ELLIPSIS int32  */
#line 1781 "asmparse.y"
                                                               { FAIL_UNLESS((yyvsp[-2].int32) <= (yyvsp[0].int32), ("lower bound %d must be <= upper bound %d\n", (yyvsp[-2].int32), (yyvsp[0].int32)));
                                                                if ((yyvsp[-2].int32) > (yyvsp[0].int32)) { YYERROR; };
                                                                (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32((yyvsp[-2].int32)); (yyval.binstr)->appendInt32((yyvsp[0].int32)-(yyvsp[-2].int32)+1); }
#line 7950 "prebuilt\\asmparse.cpp"
    break;

  case 718: /* bound: int32 ELLIPSIS  */
#line 1784 "asmparse.y"
                                                               { (yyval.binstr) = new BinStr(); (yyval.binstr)->appendInt32((yyvsp[-1].int32)); (yyval.binstr)->appendInt32(0x7FFFFFFF); }
#line 7956 "prebuilt\\asmparse.cpp"
    break;

  case 719: /* secDecl: _PERMISSION secAction typeSpec '(' nameValPairs ')'  */
#line 1789 "asmparse.y"
                                                              { PASM->AddPermissionDecl((yyvsp[-4].secAct), (yyvsp[-3].token), (yyvsp[-1].pair)); }
#line 7962 "prebuilt\\asmparse.cpp"
    break;

  case 720: /* secDecl: _PERMISSION secAction typeSpec '=' '{' customBlobDescr '}'  */
#line 1791 "asmparse.y"
                                                              { PASM->AddPermissionDecl((yyvsp[-5].secAct), (yyvsp[-4].token), (yyvsp[-1].binstr)); }
#line 7968 "prebuilt\\asmparse.cpp"
    break;

  case 721: /* secDecl: _PERMISSION secAction typeSpec  */
#line 1792 "asmparse.y"
                                                              { PASM->AddPermissionDecl((yyvsp[-1].secAct), (yyvsp[0].token), (NVPair *)NULL); }
#line 7974 "prebuilt\\asmparse.cpp"
    break;

  case 722: /* secDecl: psetHead bytes ')'  */
#line 1793 "asmparse.y"
                                                              { PASM->AddPermissionSetDecl((yyvsp[-2].secAct), (yyvsp[-1].binstr)); }
#line 7980 "prebuilt\\asmparse.cpp"
    break;

  case 723: /* secDecl: _PERMISSIONSET secAction compQstring  */
#line 1795 "asmparse.y"
                                                              { PASM->AddPermissionSetDecl((yyvsp[-1].secAct),BinStrToUnicode((yyvsp[0].binstr),true));}
#line 7986 "prebuilt\\asmparse.cpp"
    break;

  case 724: /* secDecl: _PERMISSIONSET secAction '=' '{' secAttrSetBlob '}'  */
#line 1797 "asmparse.y"
                                                              { BinStr* ret = new BinStr();
                                                                ret->insertInt8('.');
                                                                corEmitInt(ret, nSecAttrBlobs);
                                                                ret->append((yyvsp[-1].binstr));
                                                                PASM->AddPermissionSetDecl((yyvsp[-4].secAct),ret);
                                                                nSecAttrBlobs = 0; }
#line 7997 "prebuilt\\asmparse.cpp"
    break;

  case 725: /* secAttrSetBlob: %empty  */
#line 1805 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr(); nSecAttrBlobs = 0;}
#line 8003 "prebuilt\\asmparse.cpp"
    break;

  case 726: /* secAttrSetBlob: secAttrBlob  */
#line 1806 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[0].binstr); nSecAttrBlobs = 1; }
#line 8009 "prebuilt\\asmparse.cpp"
    break;

  case 727: /* secAttrSetBlob: secAttrBlob ',' secAttrSetBlob  */
#line 1807 "asmparse.y"
                                                              { (yyval.binstr) = (yyvsp[-2].binstr); (yyval.binstr)->append((yyvsp[0].binstr)); nSecAttrBlobs++; }
#line 8015 "prebuilt\\asmparse.cpp"
    break;

  case 728: /* secAttrBlob: typeSpec '=' '{' customBlobNVPairs '}'  */
#line 1811 "asmparse.y"
                                                              { (yyval.binstr) = PASM->EncodeSecAttr(PASM->ReflectionNotation((yyvsp[-4].token)),(yyvsp[-1].binstr),nCustomBlobNVPairs);
                                                                nCustomBlobNVPairs = 0; }
#line 8022 "prebuilt\\asmparse.cpp"
    break;

  case 729: /* secAttrBlob: CLASS_ SQSTRING '=' '{' customBlobNVPairs '}'  */
#line 1814 "asmparse.y"
                                                              { (yyval.binstr) = PASM->EncodeSecAttr((yyvsp[-4].string),(yyvsp[-1].binstr),nCustomBlobNVPairs);
                                                                nCustomBlobNVPairs = 0; }
#line 8029 "prebuilt\\asmparse.cpp"
    break;

  case 730: /* psetHead: _PERMISSIONSET secAction '=' '('  */
#line 1818 "asmparse.y"
                                                              { (yyval.secAct) = (yyvsp[-2].secAct); bParsingByteArray = TRUE; }
#line 8035 "prebuilt\\asmparse.cpp"
    break;

  case 731: /* psetHead: _PERMISSIONSET secAction BYTEARRAY_ '('  */
#line 1820 "asmparse.y"
                                                              { (yyval.secAct) = (yyvsp[-2].secAct); bParsingByteArray = TRUE; }
#line 8041 "prebuilt\\asmparse.cpp"
    break;

  case 732: /* nameValPairs: nameValPair  */
#line 1823 "asmparse.y"
                                                              { (yyval.pair) = (yyvsp[0].pair); }
#line 8047 "prebuilt\\asmparse.cpp"
    break;

  case 733: /* nameValPairs: nameValPair ',' nameValPairs  */
#line 1824 "asmparse.y"
                                                              { (yyval.pair) = (yyvsp[-2].pair)->Concat((yyvsp[0].pair)); }
#line 8053 "prebuilt\\asmparse.cpp"
    break;

  case 734: /* nameValPair: compQstring '=' caValue  */
#line 1827 "asmparse.y"
                                                              { (yyvsp[-2].binstr)->appendInt8(0); (yyval.pair) = new NVPair((yyvsp[-2].binstr), (yyvsp[0].binstr)); }
#line 8059 "prebuilt\\asmparse.cpp"
    break;

  case 735: /* truefalse: TRUE_  */
#line 1830 "asmparse.y"
                                                              { (yyval.int32) = 1; }
#line 8065 "prebuilt\\asmparse.cpp"
    break;

  case 736: /* truefalse: FALSE_  */
#line 1831 "asmparse.y"
                                                              { (yyval.int32) = 0; }
#line 8071 "prebuilt\\asmparse.cpp"
    break;

  case 737: /* caValue: truefalse  */
#line 1834 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_BOOLEAN);
                                                                (yyval.binstr)->appendInt8((yyvsp[0].int32)); }
#line 8079 "prebuilt\\asmparse.cpp"
    break;

  case 738: /* caValue: int32  */
#line 1837 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_I4);
                                                                (yyval.binstr)->appendInt32((yyvsp[0].int32)); }
#line 8087 "prebuilt\\asmparse.cpp"
    break;

  case 739: /* caValue: INT32_ '(' int32 ')'  */
#line 1840 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_I4);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8095 "prebuilt\\asmparse.cpp"
    break;

  case 740: /* caValue: compQstring  */
#line 1843 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_STRING);
                                                                (yyval.binstr)->append((yyvsp[0].binstr)); delete (yyvsp[0].binstr);
                                                                (yyval.binstr)->appendInt8(0); }
#line 8104 "prebuilt\\asmparse.cpp"
    break;

  case 741: /* caValue: className '(' INT8_ ':' int32 ')'  */
#line 1847 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-5].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(1);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8115 "prebuilt\\asmparse.cpp"
    break;

  case 742: /* caValue: className '(' INT16_ ':' int32 ')'  */
#line 1853 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-5].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(2);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8126 "prebuilt\\asmparse.cpp"
    break;

  case 743: /* caValue: className '(' INT32_ ':' int32 ')'  */
#line 1859 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-5].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(4);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8137 "prebuilt\\asmparse.cpp"
    break;

  case 744: /* caValue: className '(' int32 ')'  */
#line 1865 "asmparse.y"
                                                              { (yyval.binstr) = new BinStr();
                                                                (yyval.binstr)->appendInt8(SERIALIZATION_TYPE_ENUM);
                                                                char* sz = PASM->ReflectionNotation((yyvsp[-3].token));
                                                                strcpy_s((char *)(yyval.binstr)->getBuff((unsigned)strlen(sz) + 1), strlen(sz) + 1,sz);
                                                                (yyval.binstr)->appendInt8(4);
                                                                (yyval.binstr)->appendInt32((yyvsp[-1].int32)); }
#line 8148 "prebuilt\\asmparse.cpp"
    break;

  case 745: /* secAction: REQUEST_  */
#line 1873 "asmparse.y"
                                                              { (yyval.secAct) = dclRequest; }
#line 8154 "prebuilt\\asmparse.cpp"
    break;

  case 746: /* secAction: DEMAND_  */
#line 1874 "asmparse.y"
                                                              { (yyval.secAct) = dclDemand; }
#line 8160 "prebuilt\\asmparse.cpp"
    break;

  case 747: /* secAction: ASSERT_  */
#line 1875 "asmparse.y"
                                                              { (yyval.secAct) = dclAssert; }
#line 8166 "prebuilt\\asmparse.cpp"
    break;

  case 748: /* secAction: DENY_  */
#line 1876 "asmparse.y"
                                                              { (yyval.secAct) = dclDeny; }
#line 8172 "prebuilt\\asmparse.cpp"
    break;

  case 749: /* secAction: PERMITONLY_  */
#line 1877 "asmparse.y"
                                                              { (yyval.secAct) = dclPermitOnly; }
#line 8178 "prebuilt\\asmparse.cpp"
    break;

  case 750: /* secAction: LINKCHECK_  */
#line 1878 "asmparse.y"
                                                              { (yyval.secAct) = dclLinktimeCheck; }
#line 8184 "prebuilt\\asmparse.cpp"
    break;

  case 751: /* secAction: INHERITCHECK_  */
#line 1879 "asmparse.y"
                                                              { (yyval.secAct) = dclInheritanceCheck; }
#line 8190 "prebuilt\\asmparse.cpp"
    break;

  case 752: /* secAction: REQMIN_  */
#line 1880 "asmparse.y"
                                                              { (yyval.secAct) = dclRequestMinimum; }
#line 8196 "prebuilt\\asmparse.cpp"
    break;

  case 753: /* secAction: REQOPT_  */
#line 1881 "asmparse.y"
                                                              { (yyval.secAct) = dclRequestOptional; }
#line 8202 "prebuilt\\asmparse.cpp"
    break;

  case 754: /* secAction: REQREFUSE_  */
#line 1882 "asmparse.y"
                                                              { (yyval.secAct) = dclRequestRefuse; }
#line 8208 "prebuilt\\asmparse.cpp"
    break;

  case 755: /* secAction: PREJITGRANT_  */
#line 1883 "asmparse.y"
                                                              { (yyval.secAct) = dclPrejitGrant; }
#line 8214 "prebuilt\\asmparse.cpp"
    break;

  case 756: /* secAction: PREJITDENY_  */
#line 1884 "asmparse.y"
                                                              { (yyval.secAct) = dclPrejitDenied; }
#line 8220 "prebuilt\\asmparse.cpp"
    break;

  case 757: /* secAction: NONCASDEMAND_  */
#line 1885 "asmparse.y"
                                                              { (yyval.secAct) = dclNonCasDemand; }
#line 8226 "prebuilt\\asmparse.cpp"
    break;

  case 758: /* secAction: NONCASLINKDEMAND_  */
#line 1886 "asmparse.y"
                                                              { (yyval.secAct) = dclNonCasLinkDemand; }
#line 8232 "prebuilt\\asmparse.cpp"
    break;

  case 759: /* secAction: NONCASINHERITANCE_  */
#line 1887 "asmparse.y"
                                                              { (yyval.secAct) = dclNonCasInheritance; }
#line 8238 "prebuilt\\asmparse.cpp"
    break;

  case 760: /* esHead: _LINE  */
#line 1891 "asmparse.y"
                                                              { PASM->ResetLineNumbers(); nCurrPC = PASM->m_CurPC; PENV->bExternSource = TRUE; PENV->bExternSourceAutoincrement = FALSE; }
#line 8244 "prebuilt\\asmparse.cpp"
    break;

  case 761: /* esHead: P_LINE  */
#line 1892 "asmparse.y"
                                                              { PASM->ResetLineNumbers(); nCurrPC = PASM->m_CurPC; PENV->bExternSource = TRUE; PENV->bExternSourceAutoincrement = TRUE; }
#line 8250 "prebuilt\\asmparse.cpp"
    break;

  case 762: /* extSourceSpec: esHead int32 SQSTRING  */
#line 1895 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-1].int32);
                                                                PENV->nExtCol = 0; PENV->nExtColEnd  = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8258 "prebuilt\\asmparse.cpp"
    break;

  case 763: /* extSourceSpec: esHead int32  */
#line 1898 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[0].int32);
                                                                PENV->nExtCol = 0; PENV->nExtColEnd  = static_cast<unsigned>(-1); }
#line 8265 "prebuilt\\asmparse.cpp"
    break;

  case 764: /* extSourceSpec: esHead int32 ':' int32 SQSTRING  */
#line 1900 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-3].int32);
                                                                PENV->nExtCol=(yyvsp[-1].int32); PENV->nExtColEnd = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8273 "prebuilt\\asmparse.cpp"
    break;

  case 765: /* extSourceSpec: esHead int32 ':' int32  */
#line 1903 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-2].int32);
                                                                PENV->nExtCol=(yyvsp[0].int32); PENV->nExtColEnd = static_cast<unsigned>(-1);}
#line 8280 "prebuilt\\asmparse.cpp"
    break;

  case 766: /* extSourceSpec: esHead int32 ':' int32 ',' int32 SQSTRING  */
#line 1906 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-5].int32);
                                                                PENV->nExtCol=(yyvsp[-3].int32); PENV->nExtColEnd = (yyvsp[-1].int32);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8288 "prebuilt\\asmparse.cpp"
    break;

  case 767: /* extSourceSpec: esHead int32 ':' int32 ',' int32  */
#line 1910 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-4].int32);
                                                                PENV->nExtCol=(yyvsp[-2].int32); PENV->nExtColEnd = (yyvsp[0].int32); }
#line 8295 "prebuilt\\asmparse.cpp"
    break;

  case 768: /* extSourceSpec: esHead int32 ',' int32 ':' int32 SQSTRING  */
#line 1913 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-5].int32); PENV->nExtLineEnd = (yyvsp[-3].int32);
                                                                PENV->nExtCol=(yyvsp[-1].int32); PENV->nExtColEnd = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8303 "prebuilt\\asmparse.cpp"
    break;

  case 769: /* extSourceSpec: esHead int32 ',' int32 ':' int32  */
#line 1917 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-4].int32); PENV->nExtLineEnd = (yyvsp[-2].int32);
                                                                PENV->nExtCol=(yyvsp[0].int32); PENV->nExtColEnd = static_cast<unsigned>(-1); }
#line 8310 "prebuilt\\asmparse.cpp"
    break;

  case 770: /* extSourceSpec: esHead int32 ',' int32 ':' int32 ',' int32 SQSTRING  */
#line 1920 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-7].int32); PENV->nExtLineEnd = (yyvsp[-5].int32);
                                                                PENV->nExtCol=(yyvsp[-3].int32); PENV->nExtColEnd = (yyvsp[-1].int32);
                                                                PASM->SetSourceFileName((yyvsp[0].string));}
#line 8318 "prebuilt\\asmparse.cpp"
    break;

  case 771: /* extSourceSpec: esHead int32 ',' int32 ':' int32 ',' int32  */
#line 1924 "asmparse.y"
                                                              { PENV->nExtLine = (yyvsp[-6].int32); PENV->nExtLineEnd = (yyvsp[-4].int32);
                                                                PENV->nExtCol=(yyvsp[-2].int32); PENV->nExtColEnd = (yyvsp[0].int32); }
#line 8325 "prebuilt\\asmparse.cpp"
    break;

  case 772: /* extSourceSpec: esHead int32 QSTRING  */
#line 1926 "asmparse.y"
                                                              { PENV->nExtLine = PENV->nExtLineEnd = (yyvsp[-1].int32) - 1;
                                                                PENV->nExtCol = 0; PENV->nExtColEnd = static_cast<unsigned>(-1);
                                                                PASM->SetSourceFileName((yyvsp[0].binstr));}
#line 8333 "prebuilt\\asmparse.cpp"
    break;

  case 773: /* fileDecl: _FILE fileAttr dottedName fileEntry hashHead bytes ')' fileEntry  */
#line 1933 "asmparse.y"
                                                              { PASMM->AddFile((yyvsp[-5].string), (yyvsp[-6].fileAttr)|(yyvsp[-4].fileAttr)|(yyvsp[0].fileAttr), (yyvsp[-2].binstr)); }
#line 8339 "prebuilt\\asmparse.cpp"
    break;

  case 774: /* fileDecl: _FILE fileAttr dottedName fileEntry  */
#line 1934 "asmparse.y"
                                                              { PASMM->AddFile((yyvsp[-1].string), (yyvsp[-2].fileAttr)|(yyvsp[0].fileAttr), NULL); }
#line 8345 "prebuilt\\asmparse.cpp"
    break;

  case 775: /* fileAttr: %empty  */
#line 1937 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) 0; }
#line 8351 "prebuilt\\asmparse.cpp"
    break;

  case 776: /* fileAttr: fileAttr NOMETADATA_  */
#line 1938 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) ((yyvsp[-1].fileAttr) | ffContainsNoMetaData); }
#line 8357 "prebuilt\\asmparse.cpp"
    break;

  case 777: /* fileEntry: %empty  */
#line 1941 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) 0; }
#line 8363 "prebuilt\\asmparse.cpp"
    break;

  case 778: /* fileEntry: _ENTRYPOINT  */
#line 1942 "asmparse.y"
                                                              { (yyval.fileAttr) = (CorFileFlags) 0x80000000; }
#line 8369 "prebuilt\\asmparse.cpp"
    break;

  case 779: /* hashHead: _HASH '=' '('  */
#line 1945 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8375 "prebuilt\\asmparse.cpp"
    break;

  case 780: /* assemblyHead: _ASSEMBLY asmAttr dottedName  */
#line 1948 "asmparse.y"
                                                              { PASMM->StartAssembly((yyvsp[0].string), NULL, (DWORD)(yyvsp[-1].asmAttr), FALSE); }
#line 8381 "prebuilt\\asmparse.cpp"
    break;

  case 781: /* asmAttr: %empty  */
#line 1951 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) 0; }
#line 8387 "prebuilt\\asmparse.cpp"
    break;

  case 782: /* asmAttr: asmAttr RETARGETABLE_  */
#line 1952 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) ((yyvsp[-1].asmAttr) | afRetargetable); }
#line 8393 "prebuilt\\asmparse.cpp"
    break;

  case 783: /* asmAttr: asmAttr WINDOWSRUNTIME_  */
#line 1953 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) ((yyvsp[-1].asmAttr) | afContentType_WindowsRuntime); }
#line 8399 "prebuilt\\asmparse.cpp"
    break;

  case 784: /* asmAttr: asmAttr NOPLATFORM_  */
#line 1954 "asmparse.y"
                                                              { (yyval.asmAttr) = (CorAssemblyFlags) ((yyvsp[-1].asmAttr) | afPA_NoPlatform); }
#line 8405 "prebuilt\\asmparse.cpp"
    break;

  case 785: /* asmAttr: asmAttr LEGACY_ LIBRARY_  */
#line 1955 "asmparse.y"
                                                              { (yyval.asmAttr) = (yyvsp[-2].asmAttr); }
#line 8411 "prebuilt\\asmparse.cpp"
    break;

  case 786: /* asmAttr: asmAttr CIL_  */
#line 1956 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_MSIL); }
#line 8417 "prebuilt\\asmparse.cpp"
    break;

  case 787: /* asmAttr: asmAttr X86_  */
#line 1957 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_x86); }
#line 8423 "prebuilt\\asmparse.cpp"
    break;

  case 788: /* asmAttr: asmAttr AMD64_  */
#line 1958 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_AMD64); }
#line 8429 "prebuilt\\asmparse.cpp"
    break;

  case 789: /* asmAttr: asmAttr ARM_  */
#line 1959 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_ARM); }
#line 8435 "prebuilt\\asmparse.cpp"
    break;

  case 790: /* asmAttr: asmAttr ARM64_  */
#line 1960 "asmparse.y"
                                                              { SET_PA((yyval.asmAttr),(yyvsp[-1].asmAttr),afPA_ARM64); }
#line 8441 "prebuilt\\asmparse.cpp"
    break;

  case 793: /* assemblyDecl: _HASH ALGORITHM_ int32  */
#line 1967 "asmparse.y"
                                                              { PASMM->SetAssemblyHashAlg((yyvsp[0].int32)); }
#line 8447 "prebuilt\\asmparse.cpp"
    break;

  case 796: /* assemblyDecl: _TYPEREF dottedName AT_ dottedName  */
#line 1970 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-2].string), (yyvsp[0].string), /*ANY_*/FALSE, /*DENY_*/FALSE); }
#line 8453 "prebuilt\\asmparse.cpp"
    break;

  case 797: /* assemblyDecl: _TYPEREF dottedName ANY_ AT_ dottedName  */
#line 1971 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-3].string), (yyvsp[0].string), /*ANY_*/TRUE, /*DENY_*/FALSE); }
#line 8459 "prebuilt\\asmparse.cpp"
    break;

  case 798: /* assemblyDecl: _TYPEREF dottedName CONSTRAINT_ DENY_  */
#line 1972 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-2].string), NULL, /*ANY_*/FALSE, /*DENY_*/TRUE); }
#line 8465 "prebuilt\\asmparse.cpp"
    break;

  case 799: /* assemblyDecl: _TYPEREF dottedName CONSTRAINT_ ANY_ DENY_  */
#line 1973 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-3].string), NULL, /*ANY_*/TRUE, /*DENY_*/TRUE); }
#line 8471 "prebuilt\\asmparse.cpp"
    break;

  case 800: /* assemblyDecl: _TYPEREF dottedName ASSERT_  */
#line 1974 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-1].string), NULL, /*ANY_*/FALSE, /*DENY_*/FALSE); }
#line 8477 "prebuilt\\asmparse.cpp"
    break;

  case 801: /* assemblyDecl: _TYPEREF dottedName ANY_ ASSERT_  */
#line 1975 "asmparse.y"
                                                                      { PASMM->AddAssemblyTypeRefLink((yyvsp[-2].string), NULL, /*ANY_*/TRUE, /*DENY_*/FALSE); }
#line 8483 "prebuilt\\asmparse.cpp"
    break;

  case 802: /* intOrWildcard: int32  */
#line 1978 "asmparse.y"
                                                              { (yyval.int32) = (yyvsp[0].int32); }
#line 8489 "prebuilt\\asmparse.cpp"
    break;

  case 803: /* intOrWildcard: '*'  */
#line 1979 "asmparse.y"
                                                              { (yyval.int32) = 0xFFFF; }
#line 8495 "prebuilt\\asmparse.cpp"
    break;

  case 804: /* asmOrRefDecl: publicKeyHead bytes ')'  */
#line 1982 "asmparse.y"
                                                              { PASMM->SetAssemblyPublicKey((yyvsp[-1].binstr)); }
#line 8501 "prebuilt\\asmparse.cpp"
    break;

  case 805: /* asmOrRefDecl: _VER intOrWildcard ':' intOrWildcard ':' intOrWildcard ':' intOrWildcard  */
#line 1984 "asmparse.y"
                                                              { PASMM->SetAssemblyVer((USHORT)(yyvsp[-6].int32), (USHORT)(yyvsp[-4].int32), (USHORT)(yyvsp[-2].int32), (USHORT)(yyvsp[0].int32)); }
#line 8507 "prebuilt\\asmparse.cpp"
    break;

  case 806: /* asmOrRefDecl: _LOCALE compQstring  */
#line 1985 "asmparse.y"
                                                              { (yyvsp[0].binstr)->appendInt8(0); PASMM->SetAssemblyLocale((yyvsp[0].binstr),TRUE); }
#line 8513 "prebuilt\\asmparse.cpp"
    break;

  case 807: /* asmOrRefDecl: localeHead bytes ')'  */
#line 1986 "asmparse.y"
                                                              { PASMM->SetAssemblyLocale((yyvsp[-1].binstr),FALSE); }
#line 8519 "prebuilt\\asmparse.cpp"
    break;

  case 810: /* publicKeyHead: _PUBLICKEY '=' '('  */
#line 1991 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8525 "prebuilt\\asmparse.cpp"
    break;

  case 811: /* publicKeyTokenHead: _PUBLICKEYTOKEN '=' '('  */
#line 1994 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8531 "prebuilt\\asmparse.cpp"
    break;

  case 812: /* localeHead: _LOCALE '=' '('  */
#line 1997 "asmparse.y"
                                                              { bParsingByteArray = TRUE; }
#line 8537 "prebuilt\\asmparse.cpp"
    break;

  case 813: /* assemblyRefHead: _ASSEMBLY EXTERN_ asmAttr dottedName  */
#line 2001 "asmparse.y"
                                                              { PASMM->StartAssembly((yyvsp[0].string), NULL, (yyvsp[-1].asmAttr), TRUE); }
#line 8543 "prebuilt\\asmparse.cpp"
    break;

  case 814: /* assemblyRefHead: _ASSEMBLY EXTERN_ asmAttr dottedName AS_ dottedName  */
#line 2003 "asmparse.y"
                                                              { PASMM->StartAssembly((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-3].asmAttr), TRUE); }
#line 8549 "prebuilt\\asmparse.cpp"
    break;

  case 817: /* assemblyRefDecl: hashHead bytes ')'  */
#line 2010 "asmparse.y"
                                                              { PASMM->SetAssemblyHashBlob((yyvsp[-1].binstr)); }
#line 8555 "prebuilt\\asmparse.cpp"
    break;

  case 819: /* assemblyRefDecl: publicKeyTokenHead bytes ')'  */
#line 2012 "asmparse.y"
                                                              { PASMM->SetAssemblyPublicKeyToken((yyvsp[-1].binstr)); }
#line 8561 "prebuilt\\asmparse.cpp"
    break;

  case 820: /* assemblyRefDecl: AUTO_  */
#line 2013 "asmparse.y"
                                                              { PASMM->SetAssemblyAutodetect(); }
#line 8567 "prebuilt\\asmparse.cpp"
    break;

  case 821: /* exptypeHead: _CLASS EXTERN_ exptAttr dottedName  */
#line 2016 "asmparse.y"
                                                              { PASMM->StartComType((yyvsp[0].string), (yyvsp[-1].exptAttr));}
#line 8573 "prebuilt\\asmparse.cpp"
    break;

  case 822: /* exportHead: _EXPORT exptAttr dottedName  */
#line 2019 "asmparse.y"
                                                                              { PASMM->StartComType((yyvsp[0].string), (yyvsp[-1].exptAttr)); }
#line 8579 "prebuilt\\asmparse.cpp"
    break;

  case 823: /* exptAttr: %empty  */
#line 2022 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) 0; }
#line 8585 "prebuilt\\asmparse.cpp"
    break;

  case 824: /* exptAttr: exptAttr PRIVATE_  */
#line 2023 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-1].exptAttr) | tdNotPublic); }
#line 8591 "prebuilt\\asmparse.cpp"
    break;

  case 825: /* exptAttr: exptAttr PUBLIC_  */
#line 2024 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-1].exptAttr) | tdPublic); }
#line 8597 "prebuilt\\asmparse.cpp"
    break;

  case 826: /* exptAttr: exptAttr FORWARDER_  */
#line 2025 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-1].exptAttr) | tdForwarder); }
#line 8603 "prebuilt\\asmparse.cpp"
    break;

  case 827: /* exptAttr: exptAttr NESTED_ PUBLIC_  */
#line 2026 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedPublic); }
#line 8609 "prebuilt\\asmparse.cpp"
    break;

  case 828: /* exptAttr: exptAttr NESTED_ PRIVATE_  */
#line 2027 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedPrivate); }
#line 8615 "prebuilt\\asmparse.cpp"
    break;

  case 829: /* exptAttr: exptAttr NESTED_ FAMILY_  */
#line 2028 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedFamily); }
#line 8621 "prebuilt\\asmparse.cpp"
    break;

  case 830: /* exptAttr: exptAttr NESTED_ ASSEMBLY_  */
#line 2029 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedAssembly); }
#line 8627 "prebuilt\\asmparse.cpp"
    break;

  case 831: /* exptAttr: exptAttr NESTED_ FAMANDASSEM_  */
#line 2030 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedFamANDAssem); }
#line 8633 "prebuilt\\asmparse.cpp"
    break;

  case 832: /* exptAttr: exptAttr NESTED_ FAMORASSEM_  */
#line 2031 "asmparse.y"
                                                              { (yyval.exptAttr) = (CorTypeAttr) ((yyvsp[-2].exptAttr) | tdNestedFamORAssem); }
#line 8639 "prebuilt\\asmparse.cpp"
    break;

  case 835: /* exptypeDecl: _FILE dottedName  */
#line 2038 "asmparse.y"
                                                              { PASMM->SetComTypeFile((yyvsp[0].string)); }
#line 8645 "prebuilt\\asmparse.cpp"
    break;

  case 836: /* exptypeDecl: _CLASS EXTERN_ slashedName  */
#line 2039 "asmparse.y"
                                                               { PASMM->SetComTypeComType((yyvsp[0].string)); }
#line 8651 "prebuilt\\asmparse.cpp"
    break;

  case 837: /* exptypeDecl: _ASSEMBLY EXTERN_ dottedName  */
#line 2040 "asmparse.y"
                                                              { PASMM->SetComTypeAsmRef((yyvsp[0].string)); }
#line 8657 "prebuilt\\asmparse.cpp"
    break;

  case 838: /* exptypeDecl: MDTOKEN_ '(' int32 ')'  */
#line 2041 "asmparse.y"
                                                              { if(!PASMM->SetComTypeImplementationTok((yyvsp[-1].int32)))
                                                                  PASM->report->error("Invalid implementation of exported type\n"); }
#line 8664 "prebuilt\\asmparse.cpp"
    break;

  case 839: /* exptypeDecl: _CLASS int32  */
#line 2043 "asmparse.y"
                                                              { if(!PASMM->SetComTypeClassTok((yyvsp[0].int32)))
                                                                  PASM->report->error("Invalid TypeDefID of exported type\n"); }
#line 8671 "prebuilt\\asmparse.cpp"
    break;

  case 842: /* manifestResHead: _MRESOURCE manresAttr dottedName  */
#line 2049 "asmparse.y"
                                                              { PASMM->StartManifestRes((yyvsp[0].string), (yyvsp[0].string), (yyvsp[-1].manresAttr)); }
#line 8677 "prebuilt\\asmparse.cpp"
    break;

  case 843: /* manifestResHead: _MRESOURCE manresAttr dottedName AS_ dottedName  */
#line 2051 "asmparse.y"
                                                              { PASMM->StartManifestRes((yyvsp[-2].string), (yyvsp[0].string), (yyvsp[-3].manresAttr)); }
#line 8683 "prebuilt\\asmparse.cpp"
    break;

  case 844: /* manresAttr: %empty  */
#line 2054 "asmparse.y"
                                                              { (yyval.manresAttr) = (CorManifestResourceFlags) 0; }
#line 8689 "prebuilt\\asmparse.cpp"
    break;

  case 845: /* manresAttr: manresAttr PUBLIC_  */
#line 2055 "asmparse.y"
                                                              { (yyval.manresAttr) = (CorManifestResourceFlags) ((yyvsp[-1].manresAttr) | mrPublic); }
#line 8695 "prebuilt\\asmparse.cpp"
    break;

  case 846: /* manresAttr: manresAttr PRIVATE_  */
#line 2056 "asmparse.y"
                                                              { (yyval.manresAttr) = (CorManifestResourceFlags) ((yyvsp[-1].manresAttr) | mrPrivate); }
#line 8701 "prebuilt\\asmparse.cpp"
    break;

  case 849: /* manifestResDecl: _FILE dottedName AT_ int32  */
#line 2063 "asmparse.y"
                                                              { PASMM->SetManifestResFile((yyvsp[-2].string), (ULONG)(yyvsp[0].int32)); }
#line 8707 "prebuilt\\asmparse.cpp"
    break;

  case 850: /* manifestResDecl: _ASSEMBLY EXTERN_ dottedName  */
#line 2064 "asmparse.y"
                                                              { PASMM->SetManifestResAsmRef((yyvsp[0].string)); }
#line 8713 "prebuilt\\asmparse.cpp"
    break;


#line 8717 "prebuilt\\asmparse.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 2069 "asmparse.y"


#include "grammar_after.cpp"
