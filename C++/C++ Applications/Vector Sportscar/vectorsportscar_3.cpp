// Asling, Stephanie
// Assignment 3
// Status: Compiles
// Help: None

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Car
{
    public:
        Car();
        void stop();
        int get_speed() const;
        void new_speed(int fspeed);

    protected:
        int speed;
};

class Sportscar : public Car
{
    public:
        Sportscar();
        void turbo();

    private:
        bool hasTurbo;
};

// Constructor for class Car
Car::Car()
{
    speed = 1;
}

// Function to stop the car
void Car::stop()
{
    speed = 0;

    cout << "You stop the car.\n" << endl;
}

// Function to get current speed of the car
int Car::get_speed() const
{
    return speed;
}

// Function to "accelerate" the car
void Car::new_speed(int fspeed)
{
    int newspeed;

    cout << "Speed up by how many mp/h? ";
    cin >> newspeed;

    speed = (fspeed + newspeed);

    cout << "You speed up.\n" << endl;
}

// Sportscar constructor to set hasTurbo to 0 (no)
Sportscar::Sportscar()
    // Not sure if this is necessary
    : Car()
{
    hasTurbo = 0;
}

// Function to designate if the car has turbo
void Sportscar::turbo()
{
    hasTurbo = 1;

    cout << "You have activated turbo and have greater acceleration.\n" << endl;
}

int main(void)
{
    vector<Car*> cars(2);

    cars[0] = new Car();
    cars[1] = new Sportscar();

    //Car drive;
    //Sportscar drivefast;
    char ans;
    char sport;

    // Asks user for input A, B, C, or Q until user chooses Q to quit
    while(1)
    {
        cout << "Enter 'A' for current speed, 'B' to speed up, or 'C' to stop. 'Q' to quit." << endl;
        cin >> ans;

        // If users chooses A, calls get_speed() function and outputs current speed
        if (ans == 'A')
        {
            cout << "Your current speed is " << cars[0]->get_speed() << " mp/h.\n" << endl;
        }

        // If user chooses B, calls new_speed() function to increase speed according to
        // user's specifications
        else if (ans == 'B')
        {
            // Asks user if they have turbo Y/N
            cout << "Do you want to use turbo? Y/N: ";
            cin >> sport;

            // If user does have turbo, hasTurbo is set to 1 (yes) and function
            // new_speed() is called
            if (sport == 'Y')
            {
                static_cast<Sportscar*>(cars[1])->turbo();
                cars[0]->new_speed(cars[0]->get_speed());
            }

            // If user does not have turbo, hasTurbo stays at 0 (no) and function
            // new_speed() is called
            else if (sport == 'N')
            {
                cars[0]->new_speed(cars[0]->get_speed());
            }

            // If user answers other can Y or N, tells user input is incorrect
            else
            {
                cout << "Incorrect input.\n" << endl;
            }
        }

        // If user chooses C, calls stop() function and reduces car's speed to 0
        else if (ans == 'C')
        {
            cars[0]->stop();
        }

        // If user chooses Q, program ends
        else if (ans == 'Q')
        {
            exit(0);
        }

        // If user chooses other than A, B, C, or Q, tells user input is incorrect
        else
        {
            cout << "Incorrect input.\n" << endl;
        }
    }
}
