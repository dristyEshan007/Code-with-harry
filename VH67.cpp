#include<bits/stdc++.h>
using namespace std;

// float funcAverage(int a, int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template <class T1, class T2>

float funcAverage(T1 a, T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float a ;
    a = funcAverage(74, 54);
    printf("The average of these is %f \n", a);

int x = 56, y = 45;
    swapp(x, y);
    cout << x << endl << y << endl;

  return 0;
}