#include <bits/stdc++.h>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
    public:
    void greet(){
    cout << "Kemon Acho? " << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;
    public:
    void greet()
    {
        Base1 :: greet();
    }
};

class B
{
    public:
    void Say()
    {
        cout << "Hello World" << endl;
    }
};
class D : public B
{
    int a;
    public:
    void Say()
    {
        cout << "Assalamu alaikum world!!!" << endl;
    }

};
int main()
{
    // Ambiguity 1
    // Base1 b1;
    // Base2 b2;
    // b1.greet();
    // b2.greet();
    // Derived d;
    // d.greet();

    // Ambiguity2
    B b;
    b.Say();

    D d;
    d.Say();
    return 0;
}