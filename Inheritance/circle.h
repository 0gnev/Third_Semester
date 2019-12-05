#pragma once
#include "shape.h"

class circle : public shape
{
public:
    circle(double r);
    void print();
    double area();
    double perimeter();

private:
    double radius;
};