CFLAGS=-Wall -ansi -pedantic

carburante: carburante.o rimanente.o
carburante.o: carburante.c
rimanente.o: rimanente.c

