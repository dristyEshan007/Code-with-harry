#include<bits/stdc++.h>
using namespace std;

/*
The useful classes for working with files in C++ are:

1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with fils in C++ , you will have to open it, primarily there are 2 wayes to open
a file:
1. Using the constructor
2. Using the member function open() of the class 
*/
int main()
{
    string st = "Dristy";
    string st2;
    // Opening files using constructor and writing  it
    ofstream out("Sample60.txt"); //Write operation
    out<<st;

   // Opening files using constructor and reading it
    ifstream in("Sample60b.txt"); //Write operation
    in >> st2;
    getline(in, st2);
    cout << st2;
  return 0;
}