#include "DataBase.h"
DataBase::DataBase(string filename)
{
    ifstream test;
    test.open(filename + ".txt");
    if (!test)
    {
        cout << "error";
        exit(1);
    }
    string str;
    while (!test.eof())
    {
        getline(test, str);
        if (str[0] == 'c')
        {
            str.erase(0, 2);
            std::string::size_type sz;
            double temp = stod(str, &sz);
            circle *c = new circle(temp);
            my_figures.push_back(c);
        }
        else if (str[0] == 's')
        {
            str.erase(0, 2);
            std::string::size_type sz;
            double temp = stod(str, &sz);
            square *c = new square(temp);
            my_figures.push_back(c);
        }
    }
}
double DataBase::CalcArea()
{
    double full_area = 0;
    for (int i = 0; i < my_figures.size(); i++)
    {
        full_area += my_figures[i]->area();
    }
    return full_area;
}
void DataBase::Print_database()
{
    for (int i = 0; i < my_figures.size(); i++)
    {
        my_figures[i]->print();
    }
}
struct comp
{
    inline bool operator()(shape *struct1, shape *struct2)
    {
        return (struct1->area() < struct2->area());
    }
};
void DataBase::Sort_database_by_area()
{
    sort(my_figures.begin(), my_figures.end(), comp());
}
