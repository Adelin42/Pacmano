#pragma once
#include <iostream>

struct Point {
    int x;
    int y;

    
    Point() noexcept : x(0), y(0) {}

   
    Point(int x_, int y_) noexcept : x(x_), y(y_) {}

    
    Point(const Point& other) noexcept = default;

    
    Point& operator=(const Point& other) noexcept = default;

    
    bool operator==(const Point& other) const noexcept {
        return x == other.x && y == other.y;
    }
    bool operator!=(const Point& other) const noexcept {
        return !(*this == other);
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << p.x << ' ' << p.y;
        return os;
    }
    friend std::istream& operator>>(std::istream& is, Point& p) {
        is >> p.x >> p.y;
        return is;
    }
};
