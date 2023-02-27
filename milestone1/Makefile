prefix	= src
OBJS	= $(prefix)/parser.tab.c $(prefix)/lex.yy.c

CC	= g++

javacompiler:	$(OBJS)
		$(CC) $(OBJS) -o javacompiler

$(prefix)/lex.yy.c:	$(prefix)/prob2.l $(prefix)/parser.tab.h
		flex -o ${prefix}/lex.yy.c $(prefix)/prob2.l


$(prefix)/parser.tab.c $(prefix)/parser.tab.h:	$(prefix)/parser.y
		bison -o ${prefix}/parser.tab.c -d $(prefix)/parser.y


clean:
	rm -f ${prefix}/*.c ${prefix}/*.h javacompiler
