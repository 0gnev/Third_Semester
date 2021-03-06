#include "ArrayStat.h"
ArrayStat::ArrayStat()
{
    ifstream test;
    test.open("test.txt");
    if (!test)
    {
        cout << "error";
        exit(1);
    }
    int t;

    test >> N;
    while (test >> t)
    {
        array.push_back(t);
    }
    int temp;
    sort(array.begin(), array.end(), greater<int>());
}
int ArrayStat::max()
{
    cout << array[N - 1] << endl;
}
int ArrayStat::min()
{
    cout << array[0] << endl;
}
double ArrayStat::mean()
{
    cout << accumulate(array.begin(), array.end(), 0.0) / array.size() << endl;
}
double ArrayStat::rms()
{
    double s = 0;
    double average = accumulate(array.begin(), array.end(), 0.0) / array.size();
    for (int i = 0; i < N; i++)
    {
        s += (array[i] - array[(N - 1) / 2]) * (array[i] - array[(N - 1) / 2]);
    }
    cout << s / (N - 1) << endl;
}
void ArrayStat::print()
{
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
size_t ArrayStat::countLarger(int a)
{
    cout << count_if(array.begin(), array.end(),[a](int i){return i>a;} ) << endl;
}
