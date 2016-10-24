t: t.o
	gcc t.o -o t

t.o: t.c
	gcc -c t.c -o t.o
