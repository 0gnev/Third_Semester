#pragma once
#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

class shape
{
    public:
    virtual void print() = 0;
    virtual double area() = 0;
    virtual double perimeter() = 0;
};