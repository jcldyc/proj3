extern char *yytext;
int yylex(void);

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
