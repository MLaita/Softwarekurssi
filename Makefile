CC=gcc
CFLAGS=-I.

all: program

program: First.o math_functions.o other_functions.o
    $(CC) -o program First.o math_functions.o other_functions.o

First.o: First.c math_functions.h
    $(CC) -c First.c

math_functions.o: math_functions.c math_functions.h
    $(CC) -c math_functions.c

other_functions.o: other_functions.c math_functions.h
    $(CC) -c other_functions.c

clean:
    rm -f program *.o