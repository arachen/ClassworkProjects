// Stephanie A****g
// Program 2
// September 21, 2015

#include "Quadratic.h"

namespace NSU_DATA_STRUCTURES
{
    // Constructor to set a, b, c
    Quadratic::Quadratic(double a, double b, double newC)
    {
        this->a = a;
        this->b = b;
        c = newC;
    }

    // Sets a
    void Quadratic::setA(double newA)
    {
        a = newA;
    }

    // Sets b
    void Quadratic::setB(double newB)
    {
        b = newB;
    }

    // Sets c
    void Quadratic::setC(double newC)
    {
        c = newC;
    }

    // Gets value of a
    double Quadratic::getA() const
    {
        return a;
    }

    // Gets value of b
    double Quadratic::getB() const
    {
        return b;
    }

    // Gets value of c
    double Quadratic::getC() const
    {
        return c;
    }

    // Evaluates a portion of the quadratic formula for x
    double Quadratic::evaluate(double x) const
    {
        double temp;
        temp = a * x * x + b * x + c;

        return temp;
    }

    // Overloads the + operator
    Quadratic operator+(const Quadratic& op1, const Quadratic& op2)
    {
        double a = op1.getA() + op2.getA();
        double b = op1.getB() + op2.getB();
        double c = op1.getC() + op2.getC();

        Quadratic temp(a, b, c);
        return temp;
    }

    // Overloads the * operator
    Quadratic operator*(double r, const Quadratic& q)
    {
        double a = q.getA() * r;
        double b = q.getB() * r;
        double c = q.getC() * r;

        Quadratic temp(a, b, c);
        return temp;
    }

    // Overloads the << operator to print a certain way
    std::ostream& operator<<(std::ostream& outstream, const Quadratic& q)
    {
        outstream << "(" << q.getA() << ", " << q.getB() << ", " << q.getC() << ")" << std::endl;
        return outstream;
    }

    // Overloads the >> operator to read in a, b, c from input q
    std::istream& operator>>(std::istream& instream, Quadratic& q)
    {
        instream >> q.a >> q.b >> q.c;
        return instream;
    }

    // Determines the number of solutions based on the determinant
    int Quadratic::numberOfSolutions()
    {
        int solution;
        int num;
        solution = (b * b) - (4 * a * c);

        if (solution == 0)
        {
            num = 1;
        }
        if (solution > 0)
        {
            num = 2;
        }
        if (solution < 0)
        {
            num = 0;
        }
        if (a == b && b == c && c == 0)
        {
            num = 3;
        }

        return num;
    }

    // Determines the lower solution of +/- b^2 - 4ac
    double Quadratic::lowerSolution()
    {
        int num;

        num = ((b * b) - (4 * a * c)) * -1;

        return num;
    }

    // Determines the higher solution of +/- b^2 - 4ac
    double Quadratic::higherSolution()
    {
        int num;
        num = (b * b) - (4 * a * c);

        return num;
    }
}


