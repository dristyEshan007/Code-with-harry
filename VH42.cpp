#include<bits/stdc++.h>
using namespace std;
class Simple
{
    protected:
        int x1,y1;
    public:
        void Process()
        {

            cout<<"The addition is "<<x1+y1<<endl;
            cout<<"The subtraction is "<<x1-y1<<endl;
            cout<<"The multiplication is "<<x1*y1<<endl;
            cout<<"The division is "<<x1/y1<<endl;

        }
        void Set(int a,int b)
        {
            x1=a;
            y1=b;
        }
};
class Scientific
{
    protected:
        int x2,y2;
    public:
        void Process()
        {
            cout<<"The square root of x is "<<sqrt(x2)<<endl;
            cout<<"The square root of y is "<<sqrt(y2)<<endl;
            cout<<"The cube root of x is  "<<cbrt(x2)<<endl;
            cout<<"The cube root of y is "<<cbrt(y2)<<endl;
        }
        void Set(int a,int b)
        {

            x2=a;
            y2=b;
        }
};



class Hybrid: public Simple,public Scientific

{
    public:
        void Masterset(int a,int b)
        {
            Simple::Set(a,b);
            Scientific::Set(a,b);
            Simple::Process();
            Scientific::Process();
        }
};
int main()
{
    int p,q;
    Hybrid h;
    cout<<" Enter two values "<<endl;
    cin>>p>>q;
    h.Masterset(p,q);

    return 0;
}