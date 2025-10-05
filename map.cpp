#include "map.hpp"
#include <iostream>

Map::Map() {
    grid = {
        "#########",
        "#.......#",
        "#.......#",
        "#.......#",
        "#########"
    };
}

void Map::draw() const {
    for (auto &row : grid) {
        std::cout << row << std::endl;
    }
}
