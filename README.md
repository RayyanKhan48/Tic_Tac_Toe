# Tic-Tac-Toe Game

This is a simple console-based Tic-Tac-Toe game implemented in C++. It allows two players to take turns and play a game of Tic-Tac-Toe on a 3x3 grid.

## Code Overview

### Functions

- **`void displayBoard(const char grid[3][3])`**
  - Displays the current state of the Tic-Tac-Toe board.
  - **Parameters:**
    - `grid`: A 2D array representing the Tic-Tac-Toe board.

- **`bool checkWinner(const char grid[3][3], char currentPlayer)`**
  - Checks if the specified player has won the game.
  - **Parameters:**
    - `grid`: A 2D array representing the Tic-Tac-Toe board.
    - `currentPlayer`: The player character ('X' or 'O') to check for a win.
  - **Returns:**
    - `true` if the player has won, `false` otherwise.

### Main Function

- **`int main()`**
  - Initializes the Tic-Tac-Toe board and manages the game loop.
  - Allows two players to take turns, make moves, and checks for win conditions or a draw.
  - Outputs game status messages to the console.

### Gameplay

- The game starts by displaying an empty 3x3 board.
- Players alternate turns to choose a row and column to place their mark ('X' or 'O').
- The game checks after each move if the current player has won or if the board is full.
- The game ends when a player wins or when the board is full, resulting in a draw.

### Example
``` Tic-Tac-Toe Game!
-------------
|   |   |   |
-------------
|   |   |   |
-------------
|   |   |   |
-------------
Player X, choose your row (0-2) and column (0-2): 1 1
-------------
|   |   |   |
-------------
|   | X |   |
-------------
|   |   |   |
-------------
Player O, choose your row (0-2) and column (0-2): 0 0
-------------
| O |   |   |
-------------
|   | X |   |
-------------
|   |   |   |
-------------
...
Player X wins! ```

### Notes
- This project was inspired by reshmapatil2772
