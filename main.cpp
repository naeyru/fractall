#include "complex.h"

int main()
{
    Complex c(2, 1);
    c.dump();
    Complex d(c);
    d.dump();
    Complex e = c * d;
    e.dump();
    d = d.square();
    d.dump();
    c.dump();
    return 0;
}