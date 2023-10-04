// complex.h

class Complex
{
private:
    double a, b;  // Real component a, imaginary component b

public:
    // Constructor
    Complex();

    // Operator functions
    Complex operator+(Complex& c);
    Complex operator-(Complex& c);
    Complex operator*(Complex& c);
    Complex operator*(double& n);
    Complex operator/(double& n);

    // Member functions
    Complex square();
    Complex conjugate();
    Complex square_dist();
    Complex dist();

};
