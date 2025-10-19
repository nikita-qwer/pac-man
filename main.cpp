#include <iostream>
#include "maze.hpp"
#include "pacman.hpp"
#include "ghost.hpp"
#include "direction.hpp"

int main() {
    Maze maze;
    Pacman pacman;
    Ghost ghost({5, 5});

    std::cout << "Pac-Man Game Started!" << std::endl;
    maze.display();

    std::cout << "\nMoving Pacman to the Right..." << std::endl;
    pacman.move(Direction::Right, maze);
    std::cout << "Pacman position: " << pacman << std::endl;
    std::cout << "Ghost position: " << ghost << std::endl;

    return 0;
}
