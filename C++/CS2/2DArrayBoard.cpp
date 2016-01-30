// A****g, Stephanie
// M***** Spring 2014 Program 2
// Description: Board game that fills a "board" according to user specifications
//              using 2D arrays.
// Compiler: G++
// Status: Compiles
// Help: None

#include <iostream>
#include <cstdlib>
using namespace std;

const int BOARD_MAX = 10;
const int BOARD_MIN = 3;

bool sizeCheck(int);
bool posCheck(int, int, int);
bool symCheck(int);
//bool quitCheck(int);
void displayBoard(char [][BOARD_MAX], int);

int main(void)
{
    int boardsize, row, col, i, j;
    char grid[BOARD_MAX][BOARD_MAX];
    char p1, p2;

    // Gets size of board from user, then calls sizeCheck function to ensure board size is betwen
    // maximum and minimum size
    cout << "Please enter the size of the board (" << BOARD_MIN << " - " << BOARD_MAX << "): ";
    cin >> boardsize;

    if ((sizeCheck(boardsize)) == false)
    {
        do
        {
            cout << "Must be a number between " << BOARD_MIN << " and " << BOARD_MAX << ". Try again." << endl;
            cout << "Please enter the size of the board (" << BOARD_MIN << " - " << BOARD_MAX << "): ";
            cin >> boardsize;

            sizeCheck(boardsize);
        }

        while ((sizeCheck(boardsize)) == false);
    }

    // Fills board with asterisks, used as "empty" spaces, then displays "empty" board
    for (i = 0; i < boardsize; i++)
    {
        for (j = 0; j < boardsize; j++)
        {
            grid[i][j] = '*';
        }
    }

    displayBoard(grid, boardsize);

    // Loop that alternates asking P1 and P2 to enter their row/col and symbols to fill positions on the board.
    // Several functions check to see if row/cols are out of bound, if symbols are correct, or if the user
    // wants to quit. After each move, the updated board is displayed.
    for (i = 0; i < (boardsize * boardsize); i++)
    {
        if (i % 2 == 0)
        {
            cout << "Player 1: Enter your position to play (row - column): ";
            cin >> row >> col;

            while ((posCheck(row, col, boardsize)) == false)
            {
                cout << "Please enter a position with row and column less than " << boardsize << " and greater than 0: ";
                cin >> row >> col;
            }

            while (grid[row - 1][col - 1] != '*')
            {
                cout << "Space taken. Plese enter another position: ";
                cin >> row >> col;
            }

            cout << "Enter your symbol (R/r or S/s): ";
            cin >> p1;

            while ((symCheck(p1)) == false)
            {
                cout << "Symbol must be R/r or S/s. Try again: ";
                cin >> p1;
            }

            grid[row - 1][col - 1] = p1;
            displayBoard(grid, boardsize);
        }

        else
        {
            cout << "Player 2: Enter your position to play (row - column): ";
            cin >> row >> col;

            while ((posCheck(row, col, boardsize)) == false)
            {
                cout << "Please enter a position with row and column less than " << boardsize << " and greater than 0: ";
                cin >> row >> col;
            }

            while (grid[row - 1][col - 1] != '*')
            {
                cout << "Space taken. Please enter another position: ";
                cin >> row >> col;
            }

            cout << "Enter your symbol (R/r or S/s): ";
            cin >> p2;

            while ((symCheck(p2)) == false)
            {
                cout << "Symbol must be R/r or S/s. Try again: ";
                cin >> p2;
            }

            grid[row - 1][col - 1] = p2;
            displayBoard(grid, boardsize);
        }
    }

    // Displays board after it has been filled.
    cout << "Game end! The final board is:" << "\n" << endl;
    displayBoard(grid, boardsize);

    return 0;
}

/*
bool quitCheck(int fsym)
{
    if ((fsym = 'Q') || (fsym = 'q'))
    {
        return true;
    }

    else
    {
        return false;
    }
}
*/

bool symCheck(int fsym)
{
    if ((fsym = 'R') || (fsym = 'r') || (fsym = 'S') || (fsym = 's'))
    {
        return true;
    }

    else
    {
        return false;
    }
}


bool sizeCheck(int fboardsize)
{
    if ((fboardsize > BOARD_MAX) || (fboardsize < BOARD_MIN))
    {
        return false;
    }

    else
    {
        return true;
    }
}

bool posCheck(int frow, int fcol, int fboardsize)
{
    if (((frow - 1) > fboardsize) || ((fcol - 1) > fboardsize))
    {
        return false;
    }

    else if (((frow - 1) < 0) || ((fcol - 1) < 0))
    {
        return false;
    }

    else
    {
        return true;
    }
}


void displayBoard(char fgrid[][BOARD_MAX], int fboardsize)
{
    int i, j;

    for (i = 0; i < (fboardsize); i++)
    {
        for (j = 0; j < (fboardsize); j++)
        {
            cout << fgrid[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
}
