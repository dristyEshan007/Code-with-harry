#include <bits/stdc++.h>
using namespace std;

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
};

int Employee :: count;

int main()
{
    Employee dristy, eshan, ayesha;
    dristy.setData();
    dristy.getData();

    eshan.setData();
    eshan.getData();

    ayesha.setData();
    ayesha.getData();
    return 0;
}