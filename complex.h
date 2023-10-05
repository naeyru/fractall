#include <stdio.h>
#include <math.h>

class Complex
{
private:
    double real, imag;  // Real component a, imaginary component b

public:
    // Constructor
    Complex(double na, double nb);
    Complex(Complex& c);

    // Operator functions
    Complex operator+(Complex& c);
    Complex operator-(Complex& c);
    Complex operator*(Complex& c);
    Complex operator*(double& n);
    Complex operator/(double& n);

    // Member functions
    Complex square();
    Complex conjugate();
    double square_dist();
    double dist();
    void dump();

    // Access functions. r == real, i == imaginary
    double r();
    double i();
    void r(double& r);
    void i(double& i);
};
