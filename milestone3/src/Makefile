NOBJS   = grammer.tab.c lex.yy.c
CC	= g++

newcompiler:    scanner.l grammer.y grammer.tab.c lex.yy.c
		$(CC) $(NOBJS) -o newcompiler

grammer.tab.c grammer.tab.h:	grammer.y
		bison -v -o grammer.tab.c -d grammer.y

lex.yy.c:	scanner.l grammer.tab.h
		flex -o lex.yy.c scanner.l;

clean:
	rm -f *.output *.c *.cc *.h *.png *.dot *.exe *.txt symbol_tables//*.csv *.exe.stackdump
