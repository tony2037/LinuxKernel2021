CC=gcc
CFLAGS=-g -Wall -std=c11
LIBS= -lpthread
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))

all: main
$(OBJS): %.o:%.c
	$(CC) $(CFLAGS) $(LIBS) -c -o $@ $^
main: $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

clean:
	$(RM) *.o main