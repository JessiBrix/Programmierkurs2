main: queue.o main.c queue.h
	gcc main.c -o main queue.o

queue.o: queue.c
	gcc -c queue.c

clean:
	rm main queue.o 