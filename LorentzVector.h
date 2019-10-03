#pragma once
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

private:
    double x_data, y_data, z_data, t_data;
};