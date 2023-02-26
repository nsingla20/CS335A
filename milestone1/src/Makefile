OBJS	= parser.o scanner.o

CC	= g++

javacompiler:	$(OBJS)
		$(CC) $(OBJS) -o javacompiler -lfl

scanner.o:	lex.yy.c
		$(CC) -c lex.yy.c -o scanner.o

lex.yy.c:	scanner.lex 
		flex scanner.lex

parser.o:	parser.tab.c
		$(CC) -c parser.tab.c -o parser.o

parser.tab.c:	parser.y
		bison -d -v parser.y

scanner.o: 		parser.tab.h

clean:
	rm -f *.o *~ lex.yy.c parser.tab.c parser.tab.h parser.output javacompiler.output javacompiler