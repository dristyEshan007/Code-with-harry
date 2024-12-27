#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

    public:
    Complex(int x, int y); 

    void printData() {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Complex a(4,6);
    Complex b = Complex(5,4); 

    a.printData();
    b.printData();
    return 0;
}