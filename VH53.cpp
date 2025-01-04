#include<bits/stdc++.h>
using namespace std;

class A
{
    int a;
    public:
    void setData(int a)
    {
      this->a = a;
    }
    void getData()
    {
        cout<< "The vaue of a is : " << a << endl;
    }
};
int main()
{
    //  this is a keyword  which is a pointer which points to the object which invokes the
    // member function 
    A a;
    a.setData(5789);
    a.getData();
  return 0;
}