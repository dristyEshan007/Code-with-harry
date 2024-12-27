#include<bits/stdc++.h>
using namespace std;

class Simple
{
    int data;
    int data2;
    int data3;
    public:
        Simple(int a, int b=9, int c=85)
        {
            data = a;
            data2 = b;
            data3 = c;
        }
    void printData();
};
void Simple :: printData()
{
    cout <<"Your Data is: " << data <<" and"<< " " << data2 << " and"<< " " << data3 << endl;
} 
int main()
{
    Simple s(243);
    s.printData();
  return 0;
}