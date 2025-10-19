#pragma once
#include "point.hpp"
#include "direction.hpp"
#include "maze.hpp"
#include <iostream>

class Pacman {
    Point pos;

public:
    Pacman(Point start = Point(1, 1));
    Pacman(const Pacman& other);

    Point get() const;
    void move(Direction dir, const Maze& maze);

    Pacman operator=(const Pacman& other);
    bool operator==(const Pacman& other) const;
};

std::istream& operator>>(std::istream& in, Pacman& pacman);
std::ostream& operator<<(std::ostream& out, const Pacman& pacman);

