#include <iostream>
using namespace std;

//1
template <typename T>
T Max(T mas[], int size)
{
    T max = mas[0];
    for (int i = 0; i < size; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
        }
    }
    return max;
}

//2
template <typename T>
T Max(T* mas, int size1, int size2)
{
    T max = mas[0];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (mas[i * size2 + j] > max)
            {
                max = mas[i * size2 + j];
            }
        }
    }
    return max;
}

//4 + 5
template <typename T>
T Max(T a, T b, T c = 0)
{
    if (c == 0)
    {
        if (a > b)
        {
            return a;
        }
        else if (b > a)
        {
            return b;
        }
    }
    else
    {
        if (a > b && a > c)
        {
            return a;
        }
        else if (b > a && b > c)
        {
            return b;
        }
        else if (c > a && c > b)
        {
            return c;
        }
        else
        {
            if ((a == b && a > c) || (a == c && a > b))
            {
                return a;
            }
            else if (b == c && b > a)
            {
                return b;
            }
        }
    }
}

int main()
{
    //1
    int mas[5] = { 1, 2, 10, 4, 5 };
    char mas2[5] = { 'a', 'a', 'c', 'a', 'a' };
    double mas3[5] = { 1.1, 1.2, 1.10, 1.4, 1.5 };
    cout << "//1\n" << "Max = " << Max(mas, 5) << endl;
    cout << "Max = " << Max(mas2, 5) << endl;
    cout << "Max = " << Max(mas3, 5) << endl;
    //2
    int mas4[2][3] = { {1, 3, 4}, {2, 8, 5} };
    char mas5[2][3] = { {'a', 'c', 'b'}, {'z', 'r', 't'} };
    double mas6[2][3] = { {1.1, 1.2, 1.3}, {2.9, 2.8, 2.7} };
    cout << "//2\n" << "Max = " << Max(&mas4[0][0], 2, 3) << endl;
    cout << "Max = " << Max(&mas5[0][0], 2, 3) << endl;
    cout << "Max = " << Max(&mas6[0][0], 2, 3) << endl;
    //4
    cout << "//4\n" << "Max = " << Max(2, 6) << endl;
    //5
    cout << "//5\n" << "Max = " << Max(13, 6, 13) << endl;
}
