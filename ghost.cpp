#include "ghost.hpp"
#include <memory>
#include <iostream>
#include <utility> // pentru std::move

Ghost::Ghost(const Point& p) : pos(std::make_shared<Point>(p)) {}

Ghost::Ghost(const Ghost& other) : pos(std::make_shared<Point>(*other.pos)) {}

Ghost& Ghost::operator=(const Ghost& other) {
    if (this != &other) {
        pos = std::make_shared<Point>(*other.pos);
    }
    return *this;
}

Point Ghost::get() const {
    return *pos;
}

void Ghost::set(const Point& newPos) {
    *pos = newPos;
}

bool Ghost::operator==(const Ghost& other) const noexcept {
    return *pos == *other.pos;
}

std::istream& operator>>(std::istream& in, Ghost& ghost) {
    Point p;
    in >> p;
    ghost.set(p);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Ghost& ghost) {
    out << ghost.get();
    return out;
}
