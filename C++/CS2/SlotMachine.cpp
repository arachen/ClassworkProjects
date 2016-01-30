// Stephanie A****g
// M***** Spring 2014 Program 10
// Description: Slot machine game that uses OOP
// Compiler: G++
// Status: Compiles
// Help: None

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const int WHEEL_POSITIONS = 30;
const char wheelSymbols[WHEEL_POSITIONS + 1] = "-X-X-X-X-X=X=X=X*X*X*X*X@X@X7X";

class slotMachine
{
    private:
        int spinPos;
        char spinSymbol;
        char symbols[WHEEL_POSITIONS + 1];
    public:
        slotMachine(); // Constructor
        void setSpinSymbol();
        // Function to return character located in symbols[spinPos]
        char getSpinSymbol() const
            { return spinSymbol; }
};

// Constructor initializes slot wheels to contents of wheelSymbols
slotMachine::slotMachine()
{
    for (int j = 0; j < (WHEEL_POSITIONS + 1); j++)
    {
        this->symbols[j] = wheelSymbols[j];
    }
}

// Function to generate a random position in each wheel
void slotMachine::setSpinSymbol()
{
    this->spinPos = (rand() % WHEEL_POSITIONS);
    this->spinSymbol = symbols[this->spinPos];
}

// Function to display what symbols were "landed on"
void displayResults(slotMachine fwheels[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << fwheels[i].getSpinSymbol();
    }

    cout << endl;
}

// Function to determine if the random combination is a winner
bool getWinner(slotMachine fwheels[3])
{
    if ((fwheels[0].getSpinSymbol() == fwheels[1].getSpinSymbol()) && (fwheels[0].getSpinSymbol() == fwheels[2].getSpinSymbol()) && (fwheels[1].getSpinSymbol() == fwheels[2].getSpinSymbol()))
    {
        return true;
    }

    else
    {
        return false;
    }
}

void displayResults(slotMachine []);
bool getWinner(slotMachine []);

int main(void)
{
    long int spinNum;
    time_t seed;
    time(&seed);
    srand(seed);

    slotMachine wheels[3];

    // Asks user how many times they would like to spin the wheel
    cout << "How many times do you want to spin the wheel? ";
    cin >> spinNum;

    // Spins wheel spinNum number of times
    for (long int i = 0; i < spinNum; i++)
    {
        // Calls setSpinSymbol() three times to get three random positions
        for (int j = 0; j < 3; j++)
        {
            wheels[j].setSpinSymbol();
        }

        // Calls displayResults function
        displayResults(wheels);

        // If the combination is a winner, outputs winning message
        if (getWinner(wheels) == true)
        {
            cout << "Winner! Matched 3 of " << wheels[0].getSpinSymbol() << "." << endl;
        }
    }

    return 0;
}
