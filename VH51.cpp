#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;
    public:
    void getData()
    {
        cout << "The real part is " << real <<endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(45,5); is exactly same as
    ptr -> setData(34,455);
    // (*ptr).getData(); is as good as

    ptr ->getData();

    // Array of objects
    Complex *ptr1 = new Complex[45];
    ptr1 -> setData(45,76);
    ptr1 -> getData();
  return 0;
}