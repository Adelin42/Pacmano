#ifndef PACMAN_HPP
#define PACMAN_HPP

#include "point.hpp"
#include "direction.hpp"

class Pacmano {
    Point pos;
    Direction dir;
public:
    Pacmano(int x=1, int y=1);
    void move();
    Point getPosition() const;
};

#endif
