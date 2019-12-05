#include "circle.h"

circle::circle(double r)
{
    radius = r;
}
void circle::print()
{
    cout << "circle radius: " << radius << endl;
}
double circle::area()
{
    return M_PI * radius * radius;
}
double circle::perimeter()
{
    return 2 * M_PI * radius;
}