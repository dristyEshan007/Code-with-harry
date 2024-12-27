#include <bits/stdc++.h>
using namespace std;
/*
    Case 1:
    class B : public A
    {
        //Order of execution of constructor ->  firstA() then B()
    };

    Case2:
    class A : public B , public C
    {
    //  Order of execution of constructor -> B() then C() and A()
    }

    Case 3:
    class A : public B, virtual public C
    {
    //  Order of exectuin of constructor -> C() then B() and A()
        };
*/
class Base
{
    int data;
    public:
    Base(int i)
    {
        data = i;
        cout << "Base class constructor called: "  <<  endl;
    }
    void printDataB(void)
    {
        cout << "The value of data is:  " << data << endl;
    }
};

class Base2 
{
    int data2;
    public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called: "  <<  endl;
    }
    void printDataB2(void)
    {
        cout << "The value of data2 is:  " << data2 << endl;
    }
};
class Derived : public Base, public Base2
{
    int D1, D2;
    public:
    Derived(int a, int b, int c, int d) : Base(a) , Base2(b)
    {
        D1 = c;
        D2 = d;
        cout << "Derived class called" << endl;
    }
     void printDataD(void)
    {
        cout << "The value of derived 1 is:  " << D1 << endl;
        cout << "The value of derived 2 is:  " << D2 << endl;
    }
};
int main()
{
    Derived Dristy(1,2,3,4);
    Dristy.printDataB();
    Dristy.printDataB2();
    Dristy.printDataD();
    return 0;
}