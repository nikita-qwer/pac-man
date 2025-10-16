#include "pacman.hpp"

Pacman::Pacman() : pos({1, 1}) {}

Point Pacman::get() const {
    return pos;
}

void Pacman::move(Direction dir, const Maze& maze) {
    Point newPos = pos;

    switch (dir) {
        case Direction::UP:    newPos.y--; break;
        case Direction::DOWN:  newPos.y++; break;
        case Direction::LEFT:  newPos.x--; break;
        case Direction::RIGHT: newPos.x++; break;
    }

    // verificăm dacă e zid
    if (!maze.isWallAt(newPos)) {
        pos = newPos;
    }
}
