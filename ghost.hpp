#pragma once
#include <iostream>
#include <memory>
#include "point.hpp"

class Ghost {
private:
    std::shared_ptr<Point> pos; // smart pointer în loc de pointer raw

public:
    explicit Ghost(const Point& p);
    Ghost(const Ghost& other);
    Ghost& operator=(const Ghost& other);

    Point get() const;
    void set(const Point& newPos);

    bool operator==(const Ghost& other) const noexcept;

    friend std::istream& operator>>(std::istream& in, Ghost& ghost);
    friend std::ostream& operator<<(std::ostream& out, const Ghost& ghost);
};
