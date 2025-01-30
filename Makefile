CC = clang++
CFLAGS = --std=c++11 -Wall -Werror -o
SOURCE = source/
BUILD = build/

shared:
	$(CC) $(SOURCE)mathlib.cpp -c $(CFLAGS) $(BUILD)math.o
	make client

client:
	$(CC) $(SOURCE)cl_main.cpp -c $(CFLAGS) $(BUILD)client.o
	make main

main:
	$(CC) $(BUILD)client.o -o $(BUILD)sotilas