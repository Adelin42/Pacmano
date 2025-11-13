#pragma once
#include "point.hpp"
#include "pacmano.hpp"
#include "ghost.hpp"
#include "map.hpp"
#include <iostream>

class Drawer {
public:
    virtual ~Drawer() = default;

    
    virtual void drawMap(const Map& map) = 0;

    
    virtual void drawPacmano(const Pacmano& p) = 0;

    
    virtual void drawGhost(const Ghost& g) = 0;

    
    virtual void drawAt(const Point& pos, char ch) = 0;

    
    virtual void clear() = 0;

    
    virtual void present() = 0;
};

