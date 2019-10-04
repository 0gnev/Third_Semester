#pragma once
#include <iostream>
using namespace std;
class LorentzVector
{
public:
    LorentzVector();
    LorentzVector(double, double, double, double);

    double t() const;
    double x() const;
    double y() const;
    double z() const;
    double norm() const;
    void x(double);
    void y(double);
    void z(double);
    void t(double);
    LorentzVector add(const LorentzVector &other) const;
    LorentzVector sub(const LorentzVector &other) const;
    LorentzVector mul(double a) const;
    void zboost(double beta);
    double dot(const LorentzVector &other) const;
    void read();
    void print() const;
    void operator+=(const LorentzVector &other);
    void operator-=(const LorentzVector &other);
    void operator*=(double a);
    LorentzVector operator+(const LorentzVector &other) const;
    LorentzVector operator-(const LorentzVector &other) const;
    friend LorentzVector operator*(const LorentzVector &lv, double a);
    friend ostream &operator<<(ostream &, const LorentzVector &);

private:
    double x_data, y_data, z_data, t_data;
};