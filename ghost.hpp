#pragma once

#include "point.hpp"
#include "direction.hpp"

class Ghost {
    Point _position;
    Direction _direction;
public:
    Ghost(const Point& start);
    void Move();
    void SetDirection(Direction dir);
    Point GetPosition() const;
};
