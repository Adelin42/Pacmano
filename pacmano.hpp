#pragma once
#include "point.hpp"
#include <iostream>
#include <string>

class Pacmano {
public:
    Point pos;
    int lives;
    int score;
    std::string name;

    
    Pacmano() noexcept : pos(), lives(3), score(0), name("Pacmano") {}

    
    Pacmano(Point p, int l, int s, const std::string& n) 
        : pos(p), lives(l), score(s), name(n) {}

    
    Pacmano(const Pacmano& other) = default;

    Pacmano& operator=(const Pacmano& other) = default;

    
    bool operator==(const Pacmano& other) const noexcept {
        return pos == other.pos && lives == other.lives && score == other.score && name == other.name;
    }
    bool operator!=(const Pacmano& other) const noexcept {
        return !(*this == other);
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Pacmano& p) {
        os << p.pos << ' ' << p.lives << ' ' << p.score << ' ' << p.name;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Pacmano& p) {
        is >> p.pos >> p.lives >> p.score >> std::ws;
        std::getline(is, p.name);
        return is;
    }
};

