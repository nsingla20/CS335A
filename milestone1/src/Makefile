OBJS	= parser.tab.c lex.yy.c

CC	= g++

javacompiler:	$(OBJS)
		$(CC) $(OBJS) -o javacompiler

lex.yy.c:	scanner.l parser.tab.h
		flex -o lex.yy.c scanner.l


parser.tab.c parser.tab.h:	parser.y
		bison -v -o parser.tab.c -d parser.y


clean:
	rm -f *.output *.c *.cc *.h *.png *.dot javacompiler
