#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

    public:
    /*
    1.Creating a Constructor.
    2.Constructor is a special member fuction with the same name as of the class. 
    3.I is automatically invoked whenever an object is created.
    4.It is used to initialize the objects of its class.
    */
    Complex(void); // Constructor declaration

    void printData() {
        cout << "Your Number is: " << a << " + " << b << "i" << endl;
    }
};
Complex :: Complex(void)
{
    a = 34;
    b = 35;
}
int main()
{
    Complex c;
    c.printData();
    return 0;
}