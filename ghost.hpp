#pragma once
#include "point.hpp"
#include <iostream>
#include <string>

enum class GhostState { Normal, Frightened, Eaten };

class Ghost {
public:
    Point pos;
    Point home;
    GhostState state;
    std::string name;

    Ghost() noexcept : pos(), home(), state(GhostState::Normal), name("Ghost") {}

    Ghost(Point p, Point h, GhostState st, const std::string& n) 
        : pos(p), home(h), state(st), name(n) {}

    Ghost(const Ghost& other) = default;
    Ghost& operator=(const Ghost& other) = default;

    bool operator==(const Ghost& other) const noexcept {
        return pos == other.pos && home == other.home && state == other.state && name == other.name;
    }
    bool operator!=(const Ghost& other) const noexcept {
        return !(*this == other);
    }

    friend std::ostream& operator<<(std::ostream& os, const Ghost& g) {
        os << g.pos << ' ' << g.home << ' ' << static_cast<int>(g.state) << ' ' << g.name;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Ghost& g) {
        int st;
        is >> g.pos >> g.home >> st;
        g.state = static_cast<GhostState>(st);
        is >> std::ws;
        std::getline(is, g.name);
        return is;
    }
};


