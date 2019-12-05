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
        if (str[1] == 'c')
        {
            double temp = stod(str);
            circle *c = new circle(temp);
            my_figures.push_back(c);
        }
        else if (str[1] == 's')
        {
            double temp = stod(str);
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
void DataBase::Sort_database_by_area()
{
    sort(my_figures.begin(), my_figures.end());
}
