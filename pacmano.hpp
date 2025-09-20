#pragma once

#include "point.hpp"
#include "direction.hpp"

class Pacmano {
    Point _position;
    Direction _direction;
public:
    Pacmano(const Point& start);
    void Move();
    void SetDirection(Direction dir);
    Point GetPosition() const;
};