#include <iostream>
using namespace std;

// Function to display the Tic-Tac-Toe board
void displayBoard(const char grid[3][3])
{
    cout << "-------------\n";
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            cout << "| " << grid[row][col] << " ";
        }
        cout << "|\n-------------\n";
    }
}

// Function to determine if a player has won
bool checkWinner(const char grid[3][3], char currentPlayer)
{
    // Check rows and columns for a win
    for (int i = 0; i < 3; i++) {
        if ((grid[i][0] == currentPlayer && grid[i][1] == currentPlayer && grid[i][2] == currentPlayer) || 
            (grid[0][i] == currentPlayer && grid[1][i] == currentPlayer && grid[2][i] == currentPlayer)) {
            return true;
        }
    }
    // Check diagonals for a win
    if ((grid[0][0] == currentPlayer && grid[1][1] == currentPlayer && grid[2][2] == currentPlayer) || 
        (grid[0][2] == currentPlayer && grid[1][1] == currentPlayer && grid[2][0] == currentPlayer)) {
        return true;
    }
    return false;
}

// Main function to execute the game
int main()
{
    // Initializing the board with empty spaces
    char grid[3][3] = { { ' ', ' ', ' ' },
                        { ' ', ' ', ' ' },
                        { ' ', ' ', ' ' } };
    char currentPlayer = 'X';
    int row, col;
    int moveCount = 0;

    cout << "Tic-Tac-Toe Game!\n";

    while (moveCount < 9) {
        // Display the current board (empty)
        displayBoard(grid);

        // Loop to seek a valid move
        do {
            cout << "Player " << currentPlayer << ", choose your row (0-2) and column (0-2): ";
            cin >> row >> col;

            if (row < 0 || row > 2 || col < 0 || col > 2 || grid[row][col] != ' ') {
                cout << "Invalid move! Please choose an empty spot within the range.\n";
            } else {
                break;
            }
        } while (true);

        // Move is placed on the board
        grid[row][col] = currentPlayer;
        moveCount++;

        // Check if the current player has won
        if (checkWinner(grid, currentPlayer)) {
            displayBoard(grid);
            cout << "Player " << currentPlayer << " wins!\n";
            return 0;
        }

        // Switch players
        if (currentPlayer == 'X') {
            currentPlayer = 'O';
        } else {
            currentPlayer = 'X';
        }

    }

    // If all moves are exhausted and no winner, declare a draw
    displayBoard(grid);
    cout << "It's a draw!\n";

    return 0;
}
