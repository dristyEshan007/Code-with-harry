#include<bits/stdc++.h>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Dristy
{
    public:
    T1 a;
    T2 b;
    T3 c;

    Dristy(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
         cout << "The value of b is " << b << endl;
          cout << "The value of c is " << c << endl;
        
         
    }

};
int main()
{
    Dristy<> d(4, 4.4, 'd');
    d.display();

    cout << endl;
     Dristy<float, char, char> f(1.4, 'o', 'p');
    f.display();
  return 0;
}