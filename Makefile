CFLAGS=-g -Wall
LDLIBS=-lrt

all: hello

clean:
	rm -rf *.o hello
