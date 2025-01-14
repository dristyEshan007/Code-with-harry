#include<bits/stdc++.h>
using namespace std;

template < class T >
class Dristy
{
    public:
    T data;
    Dristy(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
   void  Dristy<T> :: display()
    {
        cout << data;
    }

    void func(int a)
    {
        cout << "I am First Func()" << a << endl;
    }

template <class T>
     void func(T a)
    {
        cout << "This is templetised Func()" << a << endl;
    }

    template <class T>
     void func1(T a)
    {
        cout << "This is templetised Func()" << a << endl;
    }
int main()
{
    // Dristy<int> d(423);
    // Dristy<char> d('c');
    // Dristy<float> d(42.3);
    // cout << d.data<< endl;
    // d.display();

    func(45); //exact match takes the highest priority
    func1(43);
  return 0;
}