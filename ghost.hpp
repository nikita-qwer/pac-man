#pragma once
#include "point.hpp"
#include <iostream>

class Ghost {
private:
    Point pos;

public:
    Ghost(Point p = Point(0, 0));
    Ghost(const Ghost& other);

    Point get() const;
    void set(Point newPos);

    Ghost operator=(const Ghost& other);
    bool operator==(const Ghost& other) const;
};

std::istream& operator>>(std::istream& in, Ghost& ghost);
std::ostream& operator<<(std::ostream& out, const Ghost& ghost);
