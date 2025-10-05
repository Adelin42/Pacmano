#include "game_engine.hpp"
#include <iostream>

void GameEngine::run() {
    map.draw();
    pac.move();
    ghost.move();
    Drawer::render(map, pac, ghost);
}
