#include "maze.hpp"
#include <iostream>

Maze::Maze() {
    grid = {
        "########",
        "#......#",
        "#.####.#",
        "#.#..#.#",
        "#.####.#",
        "#......#",
        "########"
    };
}

void Maze::display() const {
    for (const auto& row : grid) {
        std::cout << row << std::endl;
    }
}

// 🔹 Adaugă funcția de verificare a zidului
bool Maze::isWallAt(Point p) const {
    // verificăm limitele pentru siguranță
    if (p.y < 0 || p.y >= (int)grid.size()) return true;
    if (p.x < 0 || p.x >= (int)grid[p.y].size()) return true;
    return grid[p.y][p.x] == '#';
}
