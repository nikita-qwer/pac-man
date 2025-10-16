# Pac-Man Game

## Descriere
Acest proiect este o implementare de bază a jocului **Pac-Man** folosind **C++**.  
Proiectul demonstrează lucrul cu clase, fișiere sursă separate (`.hpp` și `.cpp`), precum și utilizarea unui fișier de construcție (`Makefile`) pentru automatizarea compilării.

## Elemente principale
- `point` – reprezintă o poziție în labirint (x, y)
- `direction` – reprezintă direcțiile de mișcare (sus, jos, stânga, dreapta)
- `pacman` – reprezintă jucătorul principal
- `ghost` – reprezintă un inamic
- `maze` – reprezintă labirintul jocului
- `main` – inițializează jocul, afișează harta și demonstrează mișcarea lui Pac-Man  

---

## Construirea proiectului

Pentru a compila proiectul, asigură-te că ai instalat:
- **MinGW** sau alt compilator compatibil C++
- **GNU Make**

Curăță fișierele generate, compilează și rulează jocul cu comenzile:
```sh
make clean
make
./PacMan.exe