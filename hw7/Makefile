# Makefile for compiling 00143.c
# Author: 吕睿 22301050204

CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = main

all: $(TARGET)

$(TARGET): 00147.o
	$(CC) $(CFLAGS) -o $(TARGET) 00147.o

00147.o: 00147.c
	$(CC) $(CFLAGS) -c 00147.c

.PHONY: clean
clean:
	rm -f $(TARGET) 00147.o
