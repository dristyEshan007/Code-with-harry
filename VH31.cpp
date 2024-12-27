#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;

    public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex (int x)
    {
        a = x;
        b = 0;
    }
     void printData()
    {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
};
int main()
{
    Complex c(5,56);
    c.printData();

    Complex c1(45);
    c1.printData();

    Complex c2;
    c2.printData();
  return 0;
}