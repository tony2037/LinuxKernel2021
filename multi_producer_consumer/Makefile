CC=gcc
CFLAGS=-g -Wall -std=c11
LIBS= -lpthread
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))

all: main
$(OBJS): %.o:%.c
	$(CC) $(CFLAGS) $(LIBS) -c -o $@ $^
main: $(OBJS)
	$(CC) $(CFLAGS) -static $(LIBS)  -o $@ $^ /usr/lib/x86_64-linux-gnu/libpthread.a

clean:
	$(RM) *.o main