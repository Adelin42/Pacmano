#pragma once

#include "map.hpp"
#include "pacmano.hpp"
#include "ghost.hpp"

class GameEngine {
    Map _board;
    Pacmano _pacman;
    Ghost _ghosts[4]; 
public:
    GameEngine();
    void Init();
    void Run();
};
