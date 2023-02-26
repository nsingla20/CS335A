bison -d parser.y
flex tokenizer.l
g++ lex.yy.c parser.tab.cc

printf "\n\n" | cat sample.txt - | ./a.out
