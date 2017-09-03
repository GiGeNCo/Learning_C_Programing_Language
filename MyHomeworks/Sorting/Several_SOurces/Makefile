crypt.o: crypt.c crypt.h
	gcc -c crypt.c
main.o: main.c crypt.h
	gcc -c main.c
program: main.o crypt.o
	gcc main.o crypt.o -o program
