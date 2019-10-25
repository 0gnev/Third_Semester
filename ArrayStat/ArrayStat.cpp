
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
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
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
    cout << array[(N - 1) / 2] << endl;
}
double ArrayStat::rms()
{
    int s = 0;
    for (int i = 0; i < N; i++)
    {
        s += (array[i] - array[(N - 1) / 2]) * (array[i] - array[(N - 1) / 2]);
    }
    cout << s/(N-1) << endl;
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
    int t = 0;
    for (int i = 0; i < N; i++)
    {
        if (a > array[i])
        {
            t++;
        }
    }
    cout << t << endl;
}