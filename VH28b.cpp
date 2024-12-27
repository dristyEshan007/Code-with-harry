#include<bits/stdc++.h>
using namespace std;
class C2;
class C1
{
    int c1Val;
    friend void exchange(C1 &, C2 &);

    public:
    void inData(int a)
    {
        c1Val = a;
    }
    void display()
    {
        cout << c1Val << endl;
    }
};


class C2
{
    int c2Val;
friend void exchange(C1 &, C2 &);
    public:
    void inData(int a)
    {
        c2Val = a;
    }
    void display()
    {
        cout << c2Val << endl;
    }
};

void exchange(C1 &x, C2 &y)
{
    int tmp = x.c1Val;
    x.c1Val = y.c2Val;
    y.c2Val = tmp;
}
int main()
{
    C1 oc1;
    C2 oc2;

    oc1.inData(34);
    oc2.inData(90);
    exchange(oc1, oc2);

    cout <<"The value after exchanging becomes: ";
     oc1.display();
    cout <<"The value after exchanging becomes: ";
     oc2.display();
    return 0;
}