CC=g++ -g -std=c++11

start: crunch.o game.o
	$(CC) -o start crunch.o

chrunc.o: crunch.cpp
	$(CC) -c crunch.cpp

game.o: game.cpp game.h
	$(CC) -c game.cpp