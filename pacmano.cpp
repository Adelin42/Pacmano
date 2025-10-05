#include "pacmano.hpp"

Pacmano::Pacmano(int x, int y) : pos(x,y), dir(Direction::NONE) {}

void Pacmano::move() {
    switch(dir) {
        case Direction::UP:    pos.y--; break;
        case Direction::DOWN:  pos.y++; break;
        case Direction::LEFT:  pos.x--; break;
        case Direction::RIGHT: pos.x++; break;
        default: break;
    }
}

Point Pacmano::getPosition() const {
    return pos;
}
