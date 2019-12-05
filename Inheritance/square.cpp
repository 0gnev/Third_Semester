#include "square.h"

square::square(double a)
{
    side = a;
}
void square::print()
{
    cout << "Square side: " << side << endl;
}
double square::area()
{
    return side * side;
}
double square::perimeter()
{
    return side * 4;
}