#pragma once
#include "point.hpp"
#include "direction.hpp"
#include "maze.hpp"

class Pacman {
    Point pos;

public:
    Pacman();
    Point get() const;
    void move(Direction dir, const Maze& maze);
};
