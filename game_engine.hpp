#ifndef GAME_ENGINE_HPP
#define GAME_ENGINE_HPP

#include "pacmano.hpp"
#include "ghost.hpp"
#include "map.hpp"
#include "drawer.hpp"

class GameEngine {
    Pacmano pac;
    Ghost ghost;
    Map map;
public:
    void run();
};

#endif

