#include "pacman.hpp"

Pacman::Pacman(Point start) : pos(start) {}

Pacman::Pacman(const Pacman& other) : pos(other.pos) {}

Point Pacman::get() const {
    return pos;
}

void Pacman::move(Direction dir, const Maze& maze) {
    Point newPos = pos;
    switch (dir) {
        case Direction::Top:    newPos.y--; break;
        case Direction::Bottom: newPos.y++; break;
        case Direction::Left:   newPos.x--; break;
        case Direction::Right:  newPos.x++; break;
    }
    if (!maze.isWallAt(newPos)) {
        pos = newPos;
    }
}

Pacman Pacman::operator=(const Pacman& other) {
    pos = other.pos;
    return *this;
}

bool Pacman::operator==(const Pacman& other) const {
    return pos == other.pos;
}

std::istream& operator>>(std::istream& in, Pacman& pacman) {
    Point p;
    in >> p;
    pacman = Pacman(p);
    return in;
}

std::ostream& operator<<(std::ostream& out, const Pacman& pacman) {
    out << pacman.get();
    return out;
}
