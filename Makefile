CC = gcc
CFLAGS = -g -Wall

UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
TARGET = -lncurses
else
TARGET = 
endif

default: helloworld

helloworld: build/main.o
	$(CC) $(CFLAGS) -o HellWorldPlus build/main.o $(TARGET)

build/main.o: build src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build:
	mkdir $@