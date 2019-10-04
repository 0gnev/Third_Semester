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
    z_data += beta;
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
    cout << "Vector " << typeid(*this).name() << " (" << x() << ", " << y() << ", " << z() << ", " << t() << endl;
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
ostream &operator<<(ostream &, const LorentzVector &vl)
{
    cout << "Vector " << typeid(&vl).name() << " (" << vl.x() << ", " << vl.y() << ", " << vl.z() << ", " << vl.t() << endl;
}
