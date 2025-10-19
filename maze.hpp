#pragma once
#include "point.hpp"
#include <vector>
#include <string>

class Maze {
    std::vector<std::string> grid;

public:
    Maze();
    void display() const;
    bool isWallAt(Point p) const;
    const std::vector<std::string>& get() const { return grid; }
};
