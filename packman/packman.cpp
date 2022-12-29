#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROWS = 20;
const int COLUMNS = 20;

char maze[ROWS][COLUMNS]; // maze with walls and dots
int pacmanRow, pacmanColumn; // current position of Pac-Man
int numDots; // number of dots remaining

void initializeMaze() {
  // Initialize the maze with walls around the edges and dots inside
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      if (i == 0 || i == ROWS - 1 || j == 0 || j == COLUMNS - 1) {
        maze[i][j] = '#'; // walls around the edges
      }
      else {
        maze[i][j] = '.'; // dots inside the maze
        numDots++;
      }
    }
  }

  // Place Pac-Man at a random location inside the maze
  srand(time(0));
  pacmanRow = rand() % (ROWS - 2) + 1;
  pacmanColumn = rand() % (COLUMNS - 2) + 1;
  maze[pacmanRow][pacmanColumn] = 'P';
}

void printMaze() {
  // Print the current state of the maze
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      cout << maze[i][j];
    }
    cout << endl;
  }
}

int main() {
  initializeMaze();
  printMaze();

  char move;
  cout << "Enter a move (w/a/s/d): ";
  cin >> move;

  // Update Pac-Man's position based on the move
  switch (move) {
    case 'w':
      pacmanRow--;
      break;
    case 'a':
      pacmanColumn--;
      break;
    case 's':
      pacmanRow++;
      break;
    case 'd':
      pacmanColumn++;
      break;
  }

  // Check if Pac-Man has run into a wall or a dot
  if (maze[pacmanRow][pacmanColumn] == '#') {
    cout << "You ran into a wall!" << endl;
  }
  else if (maze[pacmanRow][pacmanColumn] == '.') {
    cout << "Yum, a dot!" << endl;
    numDots--;
  }

  // Update the maze to reflect Pac-Man's new position
  maze[pacmanRow][pacmanColumn] = 'P';
  printMaze();

  return 0;
}

