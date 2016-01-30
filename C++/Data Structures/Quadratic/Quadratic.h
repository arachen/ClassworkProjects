// Stephanie A****g
// Program 2
// September 21, 2015

#ifndef QUADRATIC_CLASS
#define QUADRATIC_CLASS

#include <iostream>
#include <string>

namespace NSU_DATA_STRUCTURES
{
    const std::string STUDENT_NAME = "N00174812";

    class Quadratic
    {
        private:
            double a, b, c;
        public:
            // PRECONDITION: three doubles exist that must be set
            Quadratic(double = 0, double = 0, double = 0);
            // POSTCONDITION: constructor sets three doubles to value 0

            // PRECONDITION: variable a/b/c exists
            void setA(double);
            void setB(double);
            void setC(double);
            // POSTCONDITION: method sets variable a/b/c to itself

            // PRECONDITION: variable a/b/c exists
            double getA() const;
            double getB() const;
            double getC() const;
            // POSTCONDITION: method returns a/b/c

            // PRECONDITION: variables a, b, c must be evaluated in the quadratic equation
            double evaluate(double) const;
            // POSTCONDOTION: method evaluates the quadratic equation with variables a, b, c and a given x

            // PRECONDITION: operator >> has not been overloaded
            friend std::istream& operator>>(std::istream&, Quadratic&);
            // POSTCONDITION: operator >> is overloaded to extract text from input and determine a, b, c from that input

            // PRECONDOTION: number of solutions must be determined for +/-b^2 - 4ac
            int numberOfSolutions();
            // POSTCONDITION: method determines number of solutions for variables a, b, c from
            //                formula +/-b^2 - 4ac from quadratic equation

            // PRECONDITION: lower solution of quadration equation must be determined
            double lowerSolution();
            // POSTCONDITION: method determines the lower solution for variables a, b, c from
            //                formula +/-b^2 - 4ac from quadratic equation

            // PRECONDITION: higher solution of quadratic equation must be determined
            double higherSolution();
            // POSTCONDITION: method determines the lower solution for variables a, b, c from
            //                formula +/-b^2 - 4ac from quadratic equation
     };

     // PRECONDITION: operator exists and is not overloaded
     Quadratic operator+(const Quadratic&, const Quadratic&);
     // POSTCONDITION: method overloads operator + to add together a, b, c in a specific way

     // PRECONDITION: operator exists and is not overloaded
     Quadratic operator*(double, const Quadratic&);
     // POSTCONDITION: method overloads operator * to multiply a, b, c in a specific way

     // PRECONDITION: operator << exists and is not overloaded
     std::ostream& operator<<(std::ostream&, const Quadratic&);
     // POSTCONDITION: method overloads operator << to output text in a specific format
}
#endif
