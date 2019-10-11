#include <iostream>
#include "LorentzVector.h"
using namespace std;

int main()
{
    LorentzVector vector1(1,1,1,1);
    double temp;
    cin >> temp;
    vector1.zboost(temp);
    cout << vector1;
    return 0;
}