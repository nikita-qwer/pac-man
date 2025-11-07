#pragma once
#include <iostream>
#include <memory>
#include "point.hpp"
#include "direction.hpp"
#include "maze.hpp"

class Pacman {
private:
    std::shared_ptr<Point> pos; // smart pointer modern

public:
    explicit Pacman(const Point& start = {1, 1});
    Pacman(const Pacman& other);
    Pacman& operator=(const Pacman& other);

    Point get() const;
    void set(const Point& newPos);
    void move(Direction dir, const Maze& maze);

    bool operator==(const Pacman& other) const noexcept;

    friend std::istream& operator>>(std::istream& in, Pacman& pacman);
    friend std::ostream& operator<<(std::ostream& out, const Pacman& pacman);
};
