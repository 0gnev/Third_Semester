#include "LorentzVector.h"
#include <math.h>
#include <iostream>

LorentzVector::LorentzVector()
{
    x_data = 0;
    y_data = 0;
    z_data = 0;
    t_data = 0;
}
LorentzVector::LorentzVector(double x, double y, double z, double t)
{
    x_data = x;
    y_data = y;
    z_data = z;
    t_data = t;
}
double LorentzVector::t() const
{
    return t_data;
}
double LorentzVector::x() const
{
    return x_data;
}
double LorentzVector::y() const
{
    return y_data;
}
double LorentzVector::z() const
{
    return z_data;
}
double LorentzVector::norm() const
{
    return sqrt(x_data * x_data + y_data * y_data + z_data * z_data + t_data * t_data);
}
void LorentzVector::x(double x)
{
    x_data = x;
}
void LorentzVector::y(double y)
{
    y_data = y;
}
void LorentzVector::z(double z)
{
    z_data = z;
}
void LorentzVector::t(double t)
{
    t_data = t;
}
LorentzVector LorentzVector::add(const LorentzVector &other) const
{
    LorentzVector answer(x_data + other.x(), y_data + other.y(), z_data + other.z(), t_data + other.t());
    return answer;
}
LorentzVector LorentzVector::sub(const LorentzVector &other) const
{
    LorentzVector answer(x_data - other.x(), y_data - other.y(), z_data - other.z(), t_data - other.t());
    return answer;
}
LorentzVector LorentzVector::mul(double a) const
{
    LorentzVector answer(x_data * a, y_data * a, z_data * a, t_data * a);
    return answer;
}
void LorentzVector::zboost(double beta)
{
    if (beta >=300000000){
        return;
    } 
    z_data = (z_data - beta * t_data) / sqrt(1 - beta * beta / c_speed / c_speed);
    t_data = (t_data - (beta / 300000000 / 300000000) * z_data) / sqrt(1 - beta * beta / 300000000 / 300000000);
}
double LorentzVector::dot(const LorentzVector &other) const
{
    return sqrt(x_data * other.x() + y_data * other.y() + z_data * other.z() + t_data * other.t());
}
void LorentzVector::read()
{
}
void LorentzVector::print() const
{
    cout << "Vector " << typeid(*this).name() << " (" << x() << ", " << y() << ", " << z() << ", " << t() << ")" << endl;
}
void LorentzVector::operator+=(const LorentzVector &other)
{
    x_data += other.x_data;
    y_data += other.y_data;
    z_data += other.z_data;
    t_data += other.t_data;
}
void LorentzVector::operator-=(const LorentzVector &other)
{
    x_data -= other.x_data;
    y_data -= other.y_data;
    z_data -= other.z_data;
    t_data -= other.t_data;
}
void LorentzVector::operator*=(double a)
{
    x_data *= a;
    y_data *= a;
    z_data *= a;
    t_data *= a;
}
LorentzVector LorentzVector::operator+(const LorentzVector &other) const
{
    LorentzVector res(x_data + other.x_data, y_data + other.y_data, z_data + other.z_data, t_data + other.t_data);
    return res;
}
LorentzVector LorentzVector::operator-(const LorentzVector &other) const
{
    LorentzVector res(x_data - other.x_data, y_data - other.y_data, z_data - other.z_data, t_data - other.t_data);
    return res;
}
LorentzVector operator*(const LorentzVector &other, double a)
{
    LorentzVector res(other.x_data * a, other.y_data * a, other.z_data * a, other.t_data * a);
    return res;
}
ostream &operator<<(ostream &out, const LorentzVector &vl)
{
    out << "Vector " << typeid(&vl).name() << " (" << vl.x() << ", " << vl.y() << ", " << vl.z() << ", " << vl.t() << ")" << endl;
    return out;
}
istream &operator>>(istream &in, LorentzVector &vl)
{
    double x, y, z, t;
    cout << "Enter 4 values";
    cout << endl
         << "x data: ";
    in >> x;
     cout << endl
         << "y data: ";
    in >> y;
     cout << endl
         << "z data: ";
    in >> z;
     cout << endl
         << "z data: ";
    in >> z;
    

    return in;
}
