main: toUpperCase.o main.c toUpperCase.h
	gcc main.c -o main toUpperCase.o

toUpperCase.o: toUpperCase.c
	gcc -c toUpperCase.c

clean:
	rm main toUpperCase.o