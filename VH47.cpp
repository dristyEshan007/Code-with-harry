#include<bits/stdc++.h>
using namespace std;

class SimpleCalculator
{
    int a,b;
    public:
    void  getDataSimple()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }

    void  performOperationSimple()
    {
        cout << "The value of a + b is : " << a+b << endl;
        cout << "The value of a - b is : " << a-b << endl;
        cout << "The value of a * b is : " << a*b << endl;
        cout << "The value of a / b is : " << a/b << endl;
    }
};
class ScientificCalculator
{
    int a,b;
     public:
    void  getDataSci()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
    void  performOperationSci()
    {
        cout << "The value of cos(a) is : " << cos(a)<< endl;
        cout << "The value of sin(b) is : " << sin(b)<< endl;
        cout << "The value of exp(a) is : " << exp(a) << endl;
        cout << "The value of exp(b) is : " << exp(b) << endl;
        cout << "The value of log(a) is : " << log(a) << endl;
        cout << "The value of log(b) is : " << log(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator,public ScientificCalculator //multiple inheritance
{

};
int main()
{
    SimpleCalculator calC;
    calC.getDataSimple();
    calC.performOperationSimple();

    ScientificCalculator c;
    c.getDataSci();
    c.performOperationSci();

    HybridCalculator hC;
    hC.getDataSci();
    hC.performOperationSci();
    hC.getDataSimple();
    hC.performOperationSimple();
  return 0;
}