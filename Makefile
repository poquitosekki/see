CC = gcc
CFLAGS = -std=c99 -Wall -pedantic -g3

all: hello

hello: hello.o
	$(CC) $(CFLAGS) -o $@ $^
	@echo Compiled!

hello.o: hello.c

test: hello
	./hello

clean:
	rm -f hello *.o *.d
