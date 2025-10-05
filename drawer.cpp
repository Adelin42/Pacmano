#include "drawer.hpp"

void Drawer::render(const Map& map, const Pacmano& pac, const Ghost& ghost) {
    map.draw();
    auto p = pac.getPosition();
    auto g = ghost.getPosition();
    std::cout << "Pacmano at (" << p.x << "," << p.y << ")\n";
    std::cout << "Ghost at (" << g.x << "," << g.y << ")\n";
}
