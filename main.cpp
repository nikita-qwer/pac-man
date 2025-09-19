#include <iostream>
#include "maze.hpp"
#include "pacman.hpp"
#include "ghost.hpp"

int main() {
    Maze maze;
    Pacman pacman;
    Ghost ghost({5, 5});
    
    std::cout << "Pac-Man Game Started!" << std::endl;
    maze.display();
    
    // Exemplu: Mișcă Pac-Man la dreapta
    pacman.move(Direction::RIGHT, maze);
    
    return 0;
}
