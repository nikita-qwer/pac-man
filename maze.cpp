#include "maze.hpp"
#include <iostream>
#include <algorithm> // pentru std::for_each și std::any_of

Maze::Maze()
    : grid({
        "########",
        "#......#",
        "#.####.#",
        "#.#..#.#",
        "#.####.#",
        "#......#",
        "########"
      })
{}

void Maze::display() const {
    std::for_each(grid.begin(), grid.end(), [](const std::string& row) {
        std::cout << row << '\n';
    });
}

bool Maze::isWallAt(const Point& p) const {
    auto validY = p.y >= 0 && p.y < static_cast<int>(grid.size());
    if (!validY) return true;

    auto validX = p.x >= 0 && p.x < static_cast<int>(grid[p.y].size());
    if (!validX) return true;

    return grid[p.y][p.x] == '#';
}

bool Maze::isInside(const Point& p) const {
    return p.y >= 0 && p.y < static_cast<int>(grid.size()) &&
           p.x >= 0 && p.x < static_cast<int>(grid[p.y].size());
}
