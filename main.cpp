#include <iostream>
#include "LorentzVector.h"
using namespace std;

int main()
{
    std::ostream &operator<<(std::ostream &, const LorentzVector &);
    LorentzVector vector1;
    return 0;
}