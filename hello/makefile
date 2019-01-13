all: hello

clean:
	rm main.o hello

hello: main.o
	c99 -g -o hello main.o

main.o:
	c99 -c -g main.c