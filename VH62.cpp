#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("Sample60.txt");
    out << "This is me";
    out << "This is me also";
    out << "This is also me";
    out << "This is alsi me";
    out.close();

    ifstream in;
    string st , st2;
    in.open("Sample60.txt");
    // in >> st >> st2;
    // cout << st;
    // cout << st2;

    while (in.eof() ==0)
    {
        getline(in, st);
        cout << st << endl;
    }
    
    in.close();


  return 0;
}