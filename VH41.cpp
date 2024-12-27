#include <bits/stdc++.h>
using namespace std;

// Syntax for inheriting multiple inheritance
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//  Class body of class "DerivedC "
// };
class Base1
{
protected:
    int base1int;

public:
    void setBase1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void setBase2int(int a)
    {
        base2int = a;
    }
};
class Base3
{
protected:
    int base3int;

public:
    void setBase3int(int a)
    {
        base3int = a;
    }
};
class Derived : public Base1, public Base2, public Base3
{
public:
    void Show()
    {
        cout << "The Value of Base 1 is: " << base1int << endl;
        cout << "The Value of Base 2 is: " << base2int << endl;
        cout << "The Value of Base 3 is: " << base3int << endl;
        cout << "The Sum of Base 1 and Base 2 is: " << base1int + base2int + base3int << endl;
    }
};
/*
The generated derived class will look something like this:
Data Members:
   base1int --> Protected
   base2int --> Protected
Member Functions:
    setBase1int--->public
    setBase2int--->public
    show --> public
*/
int main()
{
    Derived d;
    d.setBase1int(243);
    d.setBase2int(34);
    d.setBase3int(3);
    d.Show();
    return 0;
}