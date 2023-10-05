#include "complex.h"

// Constructors
Complex::Complex(double r = 0, double i = 0)  // r == real, i == imaginary
{
    real = r;
    imag = i;
}

Complex::Complex(Complex& c)  // c == complex number for direct assignment
{
    *this = c;
}

// Operator functions
Complex Complex::operator+(Complex& c)
{
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator-(Complex& c)
{
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator*(Complex& c)
{
    // (a + bi)(c + di) = ac + adi + cbi + bdi^2 = ac + (ad + cb)i - bd = (ac - bd) + (ad + cb)i
    return Complex((real * c.real) - (imag * c.imag), (real * c.imag) + (imag * c.real));
}

Complex Complex::operator*(double& n)
{
    return Complex(real * n, imag * n);
}

Complex Complex::operator/(double& n)
{
    return Complex(real / n, imag / n);
}

// Member functions
Complex Complex::square()
{
    // (a + bi)^2 = a^2 + 2abi - b^2 = (a^2 - b^2) + (2 * a * b)i
    return Complex(pow(real, 2) - pow(imag, 2), 2 * real * imag);
}

Complex Complex::conjugate()
{
    return Complex(real, -imag);
}

double Complex::square_dist()
{
    return (pow(real, 2) + pow(imag, 2));
}

double Complex::dist()
{
    return sqrt(square_dist());
}

void Complex::dump()
{
    printf("%f + (%f)i\n", real, imag);
}

// Access functions/overloads
double Complex::r()
{
    return real;
}

void Complex::r(double& r)
{
    real = r;
}

double Complex::i()
{
    return imag;
}

void Complex::i(double& i)
{
    imag = i;
}
