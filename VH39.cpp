#include <bits/stdc++.h>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member:
                    Public Derivation    Private Derivation    Protected Derivation
Private  members       Not Inherited        Not Inherited          Not Inherited
Protected  members     Protected            Private                Protected
Public  members        Public               Private                Protected
*/
class Derived : protected Base
{

};
int main()
{
    Base b;
    Derived d;
    // cout << d.a;  will not work since a is protected in both class
    return 0;
}