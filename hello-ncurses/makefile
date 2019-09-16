all: hello

clean:
	rm main.o hello

hello: main.o
	c99 -g -o hello main.o -l ncurses

main.o:
	c99 -c -g -D _POSIX_C_SOURCE=200809L main.c