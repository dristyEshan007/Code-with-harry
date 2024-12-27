#include <bits/stdc++.h>
using namespace std;
// Static Data Member
class Employee
{
    int ID;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter The ID: " << endl;
        cin >> ID;
        count++;
    }
    void getData(void)
    {
        cout << "The ID of this Employ is: " << ID << " This is employee number :" << count << endl;
    }

    static void getCount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee :: count;

int main()
{
    Employee dristy, eshan, ayesha;
    dristy.setData();
    dristy.getData();
    Employee::getCount();

    eshan.setData();
    eshan.getData();
     Employee::getCount();

    ayesha.setData();
    ayesha.getData();
     Employee::getCount();
    return 0;
    // Count is static data member
}