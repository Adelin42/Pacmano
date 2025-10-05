#include "ghost.hpp"

Ghost::Ghost(int x, int y) : pos(x,y) {}

void Ghost::move() {
    pos.x++; 
}

Point Ghost::getPosition() const {
    return pos;
}
