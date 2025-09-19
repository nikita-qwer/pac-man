#pragma once
#include "point.hpp"

class Pacman {
    Point pos;

public:
    Pacman();
    Point get() const { return pos; }
};
