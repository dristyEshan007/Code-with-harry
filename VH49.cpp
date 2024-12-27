#include <bits/stdc++.h>
using namespace std;
/*

Syntax For initialization list in constructor:
constructor (argument-list) : initialization-section
{
 assignment + other code;
}

class Test{
    int a;
    int b;
      public:
      Test(int i, int j) : a(i) , b(j){constructor}
};
*/
class Test
{
    int b;
    int a;

public:
    // Test(int i, int j) : a(i), b(j) 
    // Test(int i, int j) : a(i), b(i + j) 
    // Test(int i, int j) : a(i), b(2 *j) 
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b (j) , a(i + b) ---> RED FLAG THIS  WILL CREATE PROLEMS because  a will be initialized first 
    // Test(int i, int j) : b (j) , a(i + b) --> This is fine because we initialized b first
    Test(int i, int j) : a(i)
    { 
        b = j;
        cout << "Value of a is : " << a << endl;
        cout << "Value Of B is :" << b << endl; 
        cout << "Constructor executed" << endl; 
    }
};
int main()
{
    Test t(45,4);
    return 0;
}