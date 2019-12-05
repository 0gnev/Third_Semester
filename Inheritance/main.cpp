#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "shape.h"
#include "square.h"
#include "circle.h"
#include "DataBase.h"

using namespace std;

/* bool comp(shape *a, shape *b)
{
    return a->area() > b->area();
} */
int main()
{
    DataBase *a = new DataBase("test");
    a->Print_database();
    cout << "all area" << a->CalcArea() << endl;
    a->Sort_database_by_area();
    a->Print_database();

    return 0;
}