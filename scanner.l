%{
#include <stdio.h>
#include "y.tab.h"
#include "tree.h"

void yyerror (char * s);
int line_num = 1;

typedef union {
	int i;
	char* string;
	float f;
} YYSTYPE;

extern YYSTYPE yylval;

%}
L	[A-Za-z]
D	[0-9]
%%


[ \t]+ ; 

[\n] {line_num++;}
while { return While; }
do { return Do; }
if {return If;}
else {return Else;}
end {return End;}

var {return Var;}
int {return Int;}
real {return Real;}
boolean {return Boolean;}
record {return Record;}
bind {return Bind;}
to {return To;}
assert {return Assert;}
begin {return Begin;}
loop {return Loop;}
exit {return Exit;}
when {return When;}
then {return Then;}
elsif {return Elsif;}

put {return Put;}
or {return Or;}
and {return And;}
not {return Not;}
"not=" {return NotEqual;}
div {return Div;}
mod {return Mod;}

":" {return Colon;}
":=" {return Definition;}
"<" {return LessThan;}
">" {return GreatThan;}
">=" {return GTOE;}
"<=" {return LTOE;}
"." {return Period;}
"," {return Comma;}

"=" { return Assign; }
"+" { return Plus; }
"-" { return Minus; }
"*" { return Multiply; }
"/" { return Divide; }
";" { return Semicolon; }
"(" { return LeftPar; }
")" { return RightPar; }

{L}({L}|{D}|"_")*       {
				yylval.string = strdup(yytext);
				return Ident;
			}
{D}+			{
				yylval.i = atoi(yytext);
				return IntConst;
			}
{D}+(((\.{D}+)?[Ee][\+\-]{D}+)|(\.{D}))   {
						yylval.string = strdup(yytext);
						return RealConst;
					}



. { yyerror ("Evil Character!"); }

%%
int yywrap (void) {return 1;}
void yyerror (char s[])
{
	fprintf (stderr, "Error: %s at token: %s, on line: %d\n", s ,yytext, line_num);
}


typedef char name[15];
static char Names[200][15] = {"<no name>"};
int top = 0;

int lookup (char s[])
{
	int	i;

	for (i = 1; i <= top; i ++)
		if (strcmp (s, Names[i]) == 0) return i;
	strcpy (Names[++top], s);
	return top;
}

void printNames (void)
{
	int i = 0;

	for (; i <= top; i++)
		printf ("%d\t%s\n", i, Names[i]);
}

char *id_name (int i)
{
	return Names[i];
}
