#include<bits/stdc++.h>
using namespace std;

class Employee // Base class
{
    
    public:
    int ID;
    float Salary; 
    Employee(int inpID)
    {
        ID = inpID;
        Salary = 43.00;
    }
    Employee(){}
    
};
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.....
}

Note:
1.Default visibility mode is private
2.Private Visbility Mode: Public members of the base class becomes private members of the derived class
3.Public Visbility Mode: Public members of the base class becomes public members of the derived class
4. Private members are never inherited
*/
class Programmer : public Employee //Derived class
{
    public: 
    Programmer(int inpID)
    {
         ID = inpID;
    }
    int languageCode = 9;
    void getData()
    {
        cout << ID << endl;
    }
};
int main()
{
    Employee Dristy(1) ,  Eshan(2);
    cout << Dristy.Salary << endl;
    cout << Eshan.Salary << endl;
    Programmer skillf(1);
    cout << skillf.languageCode << endl;
    cout << skillf.ID << endl;
    skillf.getData();
  return 0;
}