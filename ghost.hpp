#ifndef GHOST_HPP
#define GHOST_HPP

#include "point.hpp"
#include "direction.hpp"

class Ghost {
    Point pos;
public:
    Ghost(int x=5, int y=5);
    void move();
    Point getPosition() const;
};

#endif

