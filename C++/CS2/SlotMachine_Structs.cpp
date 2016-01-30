// Stephanie A****g
// M***** Spring 2014 Program 9
// Description: Slot machine game that uses an array of 3 structs as wheels, shows spins and
//              resulting win or loss of each spin
// Compiler: G++
// Status: Compiles
// Help: David P******, seeding in main rather than in the spinWheels() function to avoid
//       rand() yielding the same result each time.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int WHEEL_POSITIONS = 30;
const char wheelSymbols[WHEEL_POSITIONS + 1] = "-X-X-X-X-X=X=X=X*X*X*X*X@X@X7X";

struct slotMachine
{
    char symbols[WHEEL_POSITIONS + 1];
    int spinPos;
    char spinSymbol;
}   wheels[3];

void startWheels(slotMachine []);
void spinWheels(slotMachine []);
void displayResults(slotMachine []);
bool getWinner(slotMachine []);

int main(void)
{
    int xcnt = 0, dashcnt = 0, equalscnt = 0, atcnt = 0, svncnt = 0, starcnt = 0;
    long int spinNum;
    char ans;
    time_t seed;
    time(&seed);
    srand(seed);

    // Asks user how many times they would like to spin the wheel
    cout << "How many times do you want to spin the wheel? ";
    cin >> spinNum;

    // Asks user if they would like to see all spins and winners or just totals
    cout << "Do you want to see the totals or all spins and winners? (T / A) ";
    cin >> ans;

    // Calls startWheels function
    startWheels(wheels);

    // Spins wheel spinNum number of times
    for (long int i = 0; i < spinNum; i++)
    {
        // Calls spinWheels function
        spinWheels(wheels);

        // Calls displayResults function
        if (ans == 'A')
        {
            displayResults(wheels);
        }

        // Calls function getWinner; if getWinner is true, outputs winning message
        if (getWinner(wheels) == true)
        {
            // Tallies up the total wins of each symbol
            for (int i = 0; i < 3; i++)
            {
                if (wheels[i].spinSymbol == 'X')
                {
                    xcnt++;
                }

                else if (wheels[i].spinSymbol == '-')
                {
                    dashcnt++;
                }

                else if (wheels[i].spinSymbol == '=')
                {
                    equalscnt++;
                }

                else if (wheels[i].spinSymbol == '@')
                {
                    atcnt++;
                }

                else if (wheels[i].spinSymbol == '*')
                {
                    starcnt++;
                }

                else if (wheels[i].spinSymbol == '7')
                {
                    svncnt++;
                }
            }

            // If user chose to see all spins and winners, displays all spins and if they won
            if (ans == 'A')
            {
                cout << "Winner! Matched 3 of " << wheels[0].spinSymbol << "." << endl;
            }
        }
    }

    // If user chose to see just totals, outputs how many times each symbol won
    if (ans == 'T')
    {
        cout << "X won " << xcnt << " times." << endl;
        cout << "- won " << dashcnt << " times." << endl;
        cout << "= won " << equalscnt << " times." << endl;
        cout << "* won " << starcnt << " times." << endl;
        cout << "@ won " << atcnt << " times." << endl;
        cout << "7 won " << svncnt << " times." << endl;
     }

    return 0;

}

// Function to initialize each wheel to the characters stored in wheelSymbols[]
void startWheels(slotMachine fwheels[3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < (WHEEL_POSITIONS + 1); j++)
        {
            fwheels[i].symbols[j] = wheelSymbols[j];
        }
    }
}

// Function to generate a random position in each wheel
void spinWheels(slotMachine fwheels[3])
{
    for (int i = 0; i < 3; i++)
    {
        fwheels[i].spinPos = (rand() % WHEEL_POSITIONS);
    }
}

// Function to display what symbols were "landed on"
void displayResults(slotMachine fwheels[3])
{
    for (int i = 0; i < 3; i++)
    {
        fwheels[i].spinSymbol = fwheels[i].symbols[(fwheels[i].spinPos)];
        cout << fwheels[i].spinSymbol;
    }

    cout << endl;
}

// Function to determine if random combination is a winner
bool getWinner(slotMachine fwheels[3])
{
    if ((fwheels[0].spinSymbol == fwheels[1].spinSymbol) && (fwheels[0].spinSymbol == fwheels[2].spinSymbol) && (fwheels[1].spinSymbol == fwheels[2].spinSymbol))
    {
        return true;
    }

    else
    {
        return false;
    }
}

