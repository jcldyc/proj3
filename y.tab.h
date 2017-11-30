// #ifndef YY_YY_Y_TAB_H_INCLUDED
// # define YY_YY_Y_TAB_H_INCLUDED
//  Enabling traces.  
// #ifndef YYDEBUG
// # define YYDEBUG 0
// #endif
// #if YYDEBUG
// extern int yydebug;
// #endif




extern char *yytext;
int yylex(void);


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
enum yytokentype {
	Ident = 1,
	IntConst = 2,
	RealConst =3,
	FloatingPoint =4,
	FloatExponent =5,
	Var =6,
	Int =7,
	Real =8,
	Boolean = 9,
	Record =10,
	While = 11,
	Do =12,
	End =13,
	Begin =14,
	Loop =15,
	Exit =16,
	Bind =17,
	To =18,
	Assert =19,
	When =20,
	If =21,
	Then =22,
	Elsif =23,
	Else =24,
	Put =25,
	Or =26,
	And =27,
	Not =28,
	NotEqual =29,
	Div =30,
	Mod =31,
	Colon =32,
	Definition= 33,

	LessThan =34,
	GreatThan =35,
	LTOE =36,
	GTOE =37,
	Period =38,
	Comma =39,
	Assign =40,
	Plus =41,
	Minus =42,
	Multiply =43,
	Divide =44,
	Semicolon =45,
	LeftPar =46,
	RightPar =47,
	Prog =48,
	NoType =49
};
#endif


#define Ident 1
#define IntConst 2
#define RealConst 3
#define FloatingPoint 4
#define FloatExponent 5

#define Var 6
#define Int 7
#define Real 8
#define Boolean 9
#define Record 10
#define While 11
#define Do 12
#define End 13

#define Begin 14
#define Loop 15
#define Exit 16

#define Bind 17
#define To 18
#define Assert 19
#define When 20
#define If 21
#define Then 22
#define Elsif 23
#define Else 24
#define Put 25
#define Or 26
#define And 27
#define Not 28
#define NotEqual 29
#define Div 30
#define Mod 31
#define Colon 32
#define Definition 33

#define LessThan 34
#define GreatThan 35
#define LTOE 36
#define GTOE 37
#define Period 38
#define Comma 39
#define Assign 40
#define Plus 41
#define Minus 42
#define Multiply 43
#define Divide 44
#define Semicolon 45
#define LeftPar 46
#define RightPar 47
#define Prog 48
#define NoType 49



// #if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
// typedef union YYSTYPE
// {
// /* Line 2058 of yacc.c  */
// #line 18 "zb.y"
//  tree p; int i;

// /* Line 2058 of yacc.c  */
// #line 122 "y.tab.h"
// } YYSTYPE;
// # define YYSTYPE_IS_TRIVIAL 1
// # define yystype YYSTYPE /* obsolescent; will be withdrawn */
// # define YYSTYPE_IS_DECLARED 1
// #endif

// extern YYSTYPE yylval;

// #ifdef YYPARSE_PARAM
// #if defined __STDC__ || defined __cplusplus
// int yyparse (void *YYPARSE_PARAM);
// #else
// int yyparse ();
// #endif
// #else /* ! YYPARSE_PARAM */
// #if defined __STDC__ || defined __cplusplus
// int yyparse (void);
// #else
// int yyparse ();
// #endif
// #endif /* ! YYPARSE_PARAM */

// #endif /* !YY_YY_Y_TAB_H_INCLUDED  */
                                        