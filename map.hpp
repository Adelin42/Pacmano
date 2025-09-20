#pragma once

class Map {
    int _height;
    int _width;
public:
    Map(int height = 31, int width = 28);
    int GetHeight() const;
    int GetWidth() const;
};