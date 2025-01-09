#include<bits/stdc++.h>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS(ONE, TWO OR MORE THAN TWO)
template < class T1, class T2>........(COMA  SEPARATED)

class nameOfClass
{
    body
}
*/
template < class T1, class T2>
class  MyClass
{
    public:
    T1 data1;
    T2 data2;

    MyClass(T1 a, T2 b)
    {
        data1=a;
        data2=b;
    }

    void display()
    {
        cout << this-> data1 << endl;
        cout << this-> data2 << endl;
    }
};
int main()
{
    MyClass<int, char> obj(1, 'c');
    obj.display();

  return 0;
}