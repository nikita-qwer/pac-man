#pragma once
#include "point.hpp"

class Ghost {
    Point pos;   

public:
    Ghost(Point p) : pos(p) {}   
    Point get() const { return pos; }  
};
