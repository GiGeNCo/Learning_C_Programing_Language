planet.o: planet.c data.h
	gcc -c planet.c
main.o: main.c data.h
	gcc -c main.c
project: main.o planet.o
	gcc main.o planet.o -o project
