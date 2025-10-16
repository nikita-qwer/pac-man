#pragma once
#include "point.hpp"

class Ghost {
private:
    Point pos;

public:
    Ghost(Point p);
    Point get() const;
};
