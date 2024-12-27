#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    cout << " The fuction has 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "The function has 3 arguments" << endl;
    return a + b + c;
}

//Volume of  a cylinder
int volume(double r, int h)
{
    return(3.14159 * r * r *h);
}

// Volume of a cube
int volume(int a)
{
    return(a*a*a);
}

// Volume of a rectangle
int volume(int l , int b ,  int h)
{
    return(l*b*h);
} 
int main()
{
    cout << "The sum of 3 and 6 is " << sum(3,6) << endl;
     cout << "The sum of 3,7 and 6 is " << sum(3,7,6) << endl;
     cout << "The volume of cuboid  3 is "<< volume(3) << endl;
     cout << "The volume of cylinder  3.13 and 5 is "<< volume(3.13,5) << endl;
     cout << "The volume of rectangle  3 , 7, 6 is "<< volume(3,7,6) << endl;
         return 0;
}