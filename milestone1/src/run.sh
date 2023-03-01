flex my.l
g++ lex.yy.cc
./a.out
flex tokrep.l
g++ lex.yy.cc
./a.out
flex parser.l
g++ lex.yy.cc
./a.out
flex mygra.l
g++ lex.yy.cc
./a.out
flex graph_rl.l
g++ lex.yy.cc
./a.out
flex toktype.l
g++ lex.yy.cc
./a.out

cat pre_gra tokenreppar typesgra > parser.y
echo "%%" >> parser.y
cat finalgra >> parser.y
echo "%%" >> parser.y
cat post_gra >>parser.y

cat pre_scan tokenrep post_scan > scanner.l
