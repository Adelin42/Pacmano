#pragma once
#include <vector>
#include <iostream>
#include "point.hpp"
#include <string>



class Map {
public:
    int width;
    int height;
    std::vector<std::string> tiles; 

    Map() : width(0), height(0), tiles() {}
    Map(int w, int h) : width(w), height(h), tiles(h, std::string(w, ' ')) {}
    Map(const Map& other) = default;
    Map& operator=(const Map& other) = default;

    bool operator==(const Map& other) const noexcept {
        return width == other.width && height == other.height && tiles == other.tiles;
    }
    bool operator!=(const Map& other) const noexcept {
        return !(*this == other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Map& m) {
        os << m.width << ' ' << m.height << '\n';
        for (const auto& row : m.tiles) os << row << '\n';
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Map& m) {
        is >> m.width >> m.height;
        std::string dummy;
        std::getline(is, dummy);
        m.tiles.clear();
        m.tiles.reserve(m.height);
        for (int i = 0; i < m.height; ++i) {
            std::string row;
            std::getline(is, row);
            if ((int)row.size() < m.width) row.resize(m.width, ' ');
            m.tiles.push_back(row);
        }
        return is;
    }
};

