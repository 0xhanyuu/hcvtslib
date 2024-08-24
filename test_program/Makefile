CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11

main: main.o hcvtslib.o
	$(CC) $(CFLAGS) -o main main.o hcvtslib.o

main.o: main.c hcvtslib.h
	$(CC) $(CFLAGS) -c main.c

hcvtslib.o: hcvtslib.c hcvtslib.h
	$(CC) $(CFLAGS) -c hcvtslib.c

clean:
	rm -f *.o main
