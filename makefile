CXX = g++
CXXFLAGS = -Wall -std=c++17

OBJS = main.o pacman.o ghost.o map.o point.o direction.o painter.o game_engine.o

all: pacman

pacman: $(OBJS)
	$(CXX) $(CXXFLAGS) -o pacman $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o pacman
