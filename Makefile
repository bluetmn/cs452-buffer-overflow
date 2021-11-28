CC=gcc
CFLAGS=-g -O0 -std=gnu89 -Wall -Wpointer-arith -Wstrict-prototypes -Wno-stringop-overflow -fno-stack-protector

all: lab

lab.o: lab.c
	$(CC) $(CFLAGS) -c -o $@ $?

clean:	
	/bin/rm -f *.o lab
