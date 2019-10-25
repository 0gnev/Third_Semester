#include <iostream>
#include "ArrayStat.h"
using namespace std;

int main()
{
    ArrayStat a;
    a.print();
    a.max();
    a.min();
    a.mean();
    a.rms();
    a.countLarger(2);
    cout << "All done" << endl;

    return 0;
}