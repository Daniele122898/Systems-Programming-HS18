CFLAGS = -std=c99 -D_BSD_SOURCE -Wall -Wextra -O2

ddriver: main.c libmpfcdevice.a
	$(CC) $(CFLAGS) main.c libmpfcdevice.a -o ddriver -lpthread

run: ddriver
	./ddriver

clean:
	$(RM) ddriver
