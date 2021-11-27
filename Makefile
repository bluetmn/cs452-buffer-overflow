CC=gcc
CFLAGS=-g -O2 -std=gnu89 -Wall -Wpointer-arith -Wstrict-prototypes -fno-stack-protector

all: lab

lab.o: lab.c
	$(CC) $(CFLAGS) -shared -fPIC -c -o $@ $?

clean:	
	/bin/rm -f *.o lab
