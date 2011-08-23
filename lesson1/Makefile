CC = gcc
DEBUG = -g
CFLAGS = -Wall -pedantic $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: prog arraypointers structsize

prog: prog.o

prog.o: prog.c

arraypointers: arraypointers.o

arraypointers.o: arraypointers.c

structsize: structsize.o

structsize.o: structsize.c

clean:
	\rm -f *.o prog arraypointers structsize

.PHONY: clean
