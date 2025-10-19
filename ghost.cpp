#include "ghost.hpp"

Ghost::Ghost(Point p) : pos(p) {}

Ghost::Ghost(const Ghost& other) : pos(other.pos) {}

Point Ghost::get() const {
    return pos;
}

void Ghost::set(Point newPos) {
    pos = newPos;
}

Ghost Ghost::operator=(const Ghost& other) {
    pos = other.pos;
    return *this;
}

bool Ghost::operator==(const Ghost& other) const {
    return pos == other.pos;
}

std::istream& operator>>(std::istream& in, Ghost& ghost) {
    Point p;
    in >> p;
    ghost = Ghost(p);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Ghost& ghost) {
    out << ghost.get();
    return out;
}
