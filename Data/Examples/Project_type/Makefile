temperature.o: temperature.c funcdata.h
	gcc -c temperature.c
time.o: time.c funcdata.h
	gcc -c time.c
main.o: main.c funcdata.h
	gcc -c main.c
project: main.o temperature.o time.o
	gcc main.o temperature.o time.o -o project
