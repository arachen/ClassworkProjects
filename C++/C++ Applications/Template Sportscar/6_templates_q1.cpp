// Asling, Stephanie
// Assignment 6 Question 1
// Status: Compiles
// Help: None

#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
class Car
{
    public:
        Car();
        void stop();
        T get_speed() const;
        void new_speed(T fspeed);
        // Overloaded function to add the speed of two
        // Car objects
        T operator+(const Car &b)
        {
            Car<T> car;
            car.speed = this->speed + b.speed;
            return car.speed;
        }
        // Overloaded function to subtract the speed of
        // two Car objects
        T operator-(const Car &a)
        {
            Car<T> car;
            car.speed = this->speed - a.speed;
            return car.speed;
        }

    private:
        T speed;
};

// Constructor for class Car
template<typename T>
Car<T>::Car()
{
    speed = 1;
}

// Function to stop the car
template<typename T>
void Car<T>::stop()
{
    speed = 0;

    cout << "You stop the car.\n" << endl;
}

// Function to get current speed of the car
template<typename T>
T Car<T>::get_speed() const
{
    return speed;
}

// Function to "accelerate" the car
template<typename T>
void Car<T>::new_speed(T fspeed)
{
    T newspeed;

    cout << "Speed up by how many mp/h? ";
    cin >> newspeed;

    speed = (fspeed + newspeed);

    cout << "You speed up.\n" << endl;
}

int main(void)
{
    Car<int> car1;
    Car<int> car2;
    char ans;

    cout << "Car 1: ";
    car1.new_speed(car1.get_speed());
    cout << "Car 1 speed is " << car1.get_speed() << ".\n" << endl;

    cout << "Car 2: ";
    car2.new_speed(car2.get_speed());
    cout << "Car 2 speed is " << car2.get_speed() << ".\n" << endl;

    while(1)
    {
        cout << "(Q to quit) Enter A for the total speed of the two cars or B for the difference in speed between the two cars: ";
        cin >> ans;

        if (ans == 'A')
        {
            cout << "Total speed is " << car1 + car2 << " mp/h." << endl;
        }

        else if (ans == 'B')
        {
            if (car1.get_speed() > car2.get_speed())
            {
                cout << "Difference in speed is " << (car1 - car2) << " mp/h. \n" << endl;
            }
            else
            {
                cout << "Difference in speed is " << (car2 - car1) << " mp/h. \n" << endl;
            }
        }
        else if (ans == 'Q')
        {
            exit(1);
        }

        else
        {
            cout << "Please enter valid input. \n" << endl;
        }
    }

    return 0;
}
