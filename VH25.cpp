#include<bits/stdc++.h>
using namespace std;

class Employee
{
    int ID;
    int salary;
    
    public:
    void setId(void)
    {
        salary = 122;
     cout << "Enter ID of Employee: " << endl;
     cin >> ID;  
    }
    void getID(void)
     {
        cout << "The ID of this employee is: " << ID << endl;
     } 
};
int main()
{
    Employee dristy, eshan, ayesha , mimiya;
    dristy.setId();
    dristy.getID();

    Employee FB[4];
    for (int i = 0; i < 4; i++)
    {
        FB[i].setId();
        FB[i].getID();
    }
    
    return 0;
}