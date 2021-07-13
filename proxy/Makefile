CC=gcc
CFLAGS=-g -Wall -std=gnu11
LIBS= 
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c,%.o,$(SRCS))

all: proxy
$(OBJS): %.o:%.c
	$(CC) $(CFLAGS) $(LIBS) -c -o $@ $^
proxy: $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

clean:
	$(RM) *.o proxy