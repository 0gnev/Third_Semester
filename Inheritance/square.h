#pragma once
#include "shape.h"

class square : public shape
{
public:
    square(double side);
    void print();
    double area();
    double perimeter();

private:
    double side;
};