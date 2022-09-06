# Makefile
CXX_FLAG = --std=c++11 -g

all: game

game: tictactoe.o
	g++ $(CXX_FLAG) -o game tictactoe.o

tictactoe.o: tictactoe.cpp
	g++ -c $(CXX_FLAG) tictactoe.cpp

clean:
	rm -f game *.o