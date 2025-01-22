CFLAGS = --std=c99 -Wall -Werror -o
CC = clang

all:
	$(CC) src/main.c $(CFLAGS) build/sotilas