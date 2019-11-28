#include <iostream>
#include "BraceChecker.h"
using namespace std;

int main()
{
    ifstream test;
    test.open("test.txt");
    if (!test)
    {
        cout << "error";
        exit(1);
    }
    string str;
    test >> str;
    BraceChecker braceChecker;
    //a.print();
    if (braceChecker.isBalanced(str))
    {
        cout << "Balanced" << endl;
    }
    else
    {
        cout << "Not balanced" << endl;
    }
    return 0;
}