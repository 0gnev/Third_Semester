#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class ArrayStat {
    public:
ArrayStat();
int max();
int min();
double mean();
double rms();
void print();
size_t countLarger(int a);
    private:
vector<int> array;
int N;
};