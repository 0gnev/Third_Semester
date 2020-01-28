#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "shape.h"
#include "square.h"
#include "circle.h"
using namespace std;
class DataBase
{
public:
    DataBase(string filename);
    double CalcArea();
    void Print_database();
    void Sort_database_by_area();

private:
    vector<shape *> my_figures;
};
