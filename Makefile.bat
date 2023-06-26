flex projet.l
bison -d projet.y --report=states,itemsets --debug
gcc lex.yy.c  projet.tab.c TS.c RS.c Quad.c -o projet.exe
