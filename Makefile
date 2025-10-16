all: PacMan

PacMan: direction.o ghost.o maze.o pacman.o point.o main.o
	g++ -o PacMan.exe direction.o ghost.o maze.o pacman.o point.o main.o

direction.o:
	g++ direction.cpp -o direction.o -c

ghost.o:
	g++ ghost.cpp -o ghost.o -c

maze.o:
	g++ maze.cpp -o maze.o -c

pacman.o:
	g++ pacman.cpp -o pacman.o -c

point.o:
	g++ point.cpp -o point.o -c

main.o:
	g++ main.cpp -o main.o -c

clean:
	rm -f *.o *.exe
