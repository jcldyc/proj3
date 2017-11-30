CC = gcc -g
LEX = flex
YACC = bison -y
OBJECTS = main.o y.tab.o lex.yy.o tree.o check.o

turing : $(OBJECTS)
		$(CC) -o turing $(OBJECTS)

lex.yy.c : scanner.l
		$(LEX) scanner.l
lex.yy.o : lex.yy.c

y.tab.o : y.tab.c tree.h
y.tab.c : parser.y
		$(YACC) parser.y
y.tab.h : parser.y
		$(YACC) -d parser.y

scanner : scanner.o lex.yy.o
		$(CC) -o scanner scanner.o lex.yy.o
scan.o : scanner.c

tree.o : tree.c tree.h

main.o : main.c tree.h

check.o : check.c tree.h ST.h y.tab.h

clean :
		rm lex.yy.c y.tab.c *.o
		rm turing
