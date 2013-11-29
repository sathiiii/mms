#ifndef MAZE_H_
#define MAZE_H_

#include <string>
#include "Parameters.h"
#include "Tile.h"

class Maze{

public:
    Maze(std::string mazeFile = "");
    ~Maze();
    Tile* getTile(int xPos, int yPos);
    void randomize();
    void saveMaze(std::string mazeFile);
    void loadMaze(std::string mazeFile);

private:
    Tile m_maze[MAZE_WIDTH][MAZE_HEIGHT];
};

#endif // MAZE_H_