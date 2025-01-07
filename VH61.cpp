#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Connecting our file with dout stream
    ofstream dout("Sample60.txt");

    // Creating a name string and filling it with the string entered by the user
    cout << "Enter your name: ";
    string name;
    cin >> name;
    

    // Writing a string to the flie
    dout<<"My name is " + name;

    dout.close();

    ifstream din("Sample60.txt");
    string content;

    din >> content;
    cout << "The content of file isL " << content;
    din.close();
  return 0;
}