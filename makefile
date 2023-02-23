SRC = ./src
BIN = ./bin
GCC = gcc
INCLUDE = ./include
FILE = chad.gif
CFLAGS = -g -Wall -Wextra -o $(BIN)/main

all:	build run


build: clear
	gcc $(SRC)/*.c $(CFLAGS)

clear:
	rm -rf $(BIN)/*

run:	$(BIN)/main
	./bin/main  $(FILE)