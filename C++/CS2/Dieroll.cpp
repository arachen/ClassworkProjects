// A****g, Stephanie
// M***** Spring 2014 Program 8
// Description: Interactive program to generate pseudorandom numbers.
// Compiler: G++
// Status: Compiles
// Help: None

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getOneDice(void);

// Constant variables for scale of random nums and amount it shifts
const int SCALE = 6;
const int SHIFT = 1;

int main(void)
{
    unsigned int val1;
    unsigned int val2;
    time_t seed;
    char ans;

    // Uses calendar time to seed the random generator
    time(&seed);
    srand(seed);

    // Program loops, continually asking if user would like to roll the die
    while (1)
    {
        cout << "Would you like to roll the die? (Y/N): ";
        cin >> ans;

        // If user answers yes, use the function getOneDice to generate two random numbers,
        // then add numbers to calculate total dice roll
        if (ans == 'y' || ans == 'Y')
        {
            val1 = getOneDice();
            val2 = getOneDice();

            cout << "Values are " << val1 << " and " << val2 << ". Total dice roll is " << val1 + val2 << ".\n" << endl;
        }

        // If user answers no or anything other than yes, program closes
        else
        {
            cout << "Thank you for playing!\n" << endl;
            return 1;
        }
    }

    return 0;
}

// Function to generate a random number between 1 and 6 (a standard dice)
int getOneDice(void)
{
    int randomNum;

    randomNum = (rand() % SCALE) + SHIFT;

    return randomNum;
}
