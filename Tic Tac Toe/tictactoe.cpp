#include <iostream>
using namespace std;

// Array for the board
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn = 'X'; // 'X' starts the game
bool draw = false;

// Function to show the current status of the gaming board
void display_board() {
    system("clear"); // Clear the console (for Linux/Unix, use "cls" for Windows)

    cout << "Tic-Tac-Toe Game" << endl << endl;

    // Render Game Board Layout
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---+---+---" << endl;
    }
    cout << endl;
}

// Function to get the player input and update the board
void player_turn() {
    int choice;
    cout << "Player " << turn << ", enter a number (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = turn;
        if (turn == 'X') turn = 'O';
        else turn = 'X';
    } else {
        cout << "Invalid move. Please choose another." << endl;
    }
}

// Function to check if the game is over
bool game_over() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] ||
            board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] ||
        board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    // Check for a draw
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;
        }
    }

    draw = true;
    return false;
}

int main() {
    cout << "Welcome to Tic-Tac-Toe!" << endl;
    while (game_over()) {
        display_board();
        player_turn();
    }

    display_board();

    if (draw) {
        cout << "It's a draw!" << endl;
    } else {
        if (turn == 'X') cout << "Player O wins!" << endl;
        else cout << "Player X wins!" << endl;
    }

    return 0;
}
