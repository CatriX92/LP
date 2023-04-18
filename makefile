compile:
	gcc -c arbol.c arbol.h
	gcc -o out main.c arbol.o

run:
	./out

runvalgrind:
	valgrind ./out
