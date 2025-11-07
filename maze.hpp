#pragma once
#include <vector>
#include <string>
#include "point.hpp"

class Maze {
private:
    std::vector<std::string> grid;

public:
    Maze();

    void display() const;
    bool isWallAt(const Point& p) const;
    bool isInside(const Point& p) const; // metodă utilă suplimentară
};
