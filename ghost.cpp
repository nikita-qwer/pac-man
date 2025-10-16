#include "ghost.hpp"

Ghost::Ghost(Point p) : pos(p) {}

Point Ghost::get() const {
    return pos;
}
