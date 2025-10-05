#ifndef DRAWER_HPP
#define DRAWER_HPP

#include "pacmano.hpp"
#include "ghost.hpp"
#include "map.hpp"
#include <iostream>

class Drawer {
public:
    static void render(const Map& map, const Pacmano& pac, const Ghost& ghost);
};

#endif
