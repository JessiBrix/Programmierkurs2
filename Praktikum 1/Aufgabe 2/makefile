main: ascii.o einmaleins.o dualzahl.o main.c ascii.h einmaleins.h dualzahl.h
	gcc main.c -o main ascii.o einmaleins.o dualzahl.o -lm

ascii.o: ascii.c
	gcc -c ascii.c

einmaleins.o: einmaleins.c
	gcc -c einmaleins.c

dualzahl.o: dualzahl.c
	gcc -c dualzahl.c

clean:
	rm main ascii.o einmaleins.o dualzahl.o