#include "pacman.hpp"
#include <iostream>
#include <memory>
#include <utility> // pentru std::move

Pacman::Pacman(const Point& start)
    : pos(std::make_shared<Point>(start)) {}

Pacman::Pacman(const Pacman& other)
    : pos(std::make_shared<Point>(*other.pos)) {}

Pacman& Pacman::operator=(const Pacman& other) {
    if (this != &other) {
        pos = std::make_shared<Point>(*other.pos);
    }
    return *this;
}

Point Pacman::get() const {
    return *pos;
}

void Pacman::move(Direction dir, const Maze& maze) {
    Point newPos = *pos;
    switch (dir) {
        case Direction::Top:    newPos.y--; break;
        case Direction::Bottom: newPos.y++; break;
        case Direction::Left:   newPos.x--; break;
        case Direction::Right:  newPos.x++; break;
    }

    if (!maze.isWallAt(newPos)) {
        *pos = newPos;
    }
}

bool Pacman::operator==(const Pacman& other) const noexcept {
    return *pos == *other.pos;
}

std::istream& operator>>(std::istream& in, Pacman& pacman) {
    Point p;
    in >> p;
    pacman.set(p);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Pacman& pacman) {
    out << pacman.get();
    return out;
}

void Pacman::set(const Point& newPos) {
    *pos = newPos;
}
