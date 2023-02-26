prefix	= src
OBJS	= $(prefix)/parser.o $(prefix)/scanner.o

CC	= g++

javacompiler:	$(OBJS)
		$(CC) $(OBJS) -o javacompiler -lfl

$(prefix)/scanner.o:	$(prefix)/lex.yy.c
		$(CC) -c $(prefix)/lex.yy.c -o $(prefix)/scanner.o

$(prefix)/lex.yy.c:	$(prefix)/scanner.lex 
		flex $(prefix)/scanner.lex

$(prefix)/parser.o:	$(prefix)/parser.tab.c
		$(CC) -c $(prefix)/parser.tab.c -o $(prefix)/parser.o

$(prefix)/parser.tab.c:	$(prefix)/parser.y
		bison -d -v $(prefix)/parser.y

$(prefix)/scanner.o: 		$(prefix)/parser.tab.h

clean:
	rm -f *.o *~ $(prefix)/lex.yy.c $(prefix)/parser.tab.c $(prefix)/parser.tab.h $(prefix)/parser.output $(prefix)/javacompiler.output avacompiler