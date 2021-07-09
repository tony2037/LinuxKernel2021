CC=gcc
CFLAGS=-g
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))

all: main
$(OBJS): %.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^
main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^