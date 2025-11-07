#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>  // pentru std::for_each
#include "maze.hpp"
#include "pacman.hpp"
#include "ghost.hpp"
#include "direction.hpp"

int main() {
    std::cout << "Pac-Man Game Started!\n";

    // folosim smart pointers pentru gestionare automată a resurselor
    auto maze = std::make_unique<Maze>();
    auto pacman = std::make_unique<Pacman>();
    
    // folosim STL vector pentru a stoca mai mulți fantome
    std::vector<Ghost> ghosts = {
        Ghost({5, 5}),
        Ghost({2, 3}),
        Ghost({7, 1})
    };

    maze->display();

    std::cout << "\nMoving Pacman to the Right...\n";
    pacman->move(Direction::Right, *maze);

    std::cout << "Pacman position: " << *pacman << "\n";

    std::cout << "Ghost positions:\n";
    std::for_each(ghosts.begin(), ghosts.end(), [](const Ghost& g) {
        std::cout << g << "\n";
    });

    // exemplu de sortare (dacă ai operator< pentru Point)
    std::sort(ghosts.begin(), ghosts.end(), [](const Ghost& a, const Ghost& b) {
        return a.get().x < b.get().x; // presupunem că Point are câmpul x
    });

    std::cout << "\nAfter sorting ghosts by X coordinate:\n";
    std::for_each(ghosts.begin(), ghosts.end(), [](const Ghost& g) {
        std::cout << g << "\n";
    });

    return 0;
}
