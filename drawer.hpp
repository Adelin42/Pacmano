#pragma once

#include "point.hpp"

class Drawer {
public:
    void DrawEntity(Point position, char symbol);
    void DrawBoard(int width, int height);
};
