#ifndef MAP_HPP
#define MAP_HPP

#include <vector>
#include <string>

class Map {
    std::vector<std::string> grid;
public:
    Map();
    void draw() const;
};

#endif
