#include<bits/stdc++.h>
using namespace std;

class Student
{
    protected:
    int rollNumber;
    public:
    void setNumber(int);
    void getNumber(void);
}; 
void Student :: setNumber(int r)
{
    rollNumber = r;
}
void Student :: getNumber()
{
    cout<< "The roll number is: " << rollNumber <<endl;
}
class Exam : public Student
{
    protected:
    float Maths;
    float Physics;
    public:
    void setMarks(float, float);
    void getMarks(void);
};
void Exam :: setMarks(float m, float p)
{
    Maths = m;
    Physics = p;
}
void Exam :: getMarks()
{
    cout << "The marks in Physics obtained are:  " << Physics << endl;
    cout << "The marks in Maths obtained are:  " << Maths << endl;
}
class Result : public Exam
{
    float Percentage;
    public:
    void display()
    {
        getNumber();
        getMarks();
        cout << "Your Percentage is: " << (Maths+Physics)/2 <<"%"<< endl;
    }
};
int main()
{
    Result Dristy;
    Dristy.setNumber(343);
    Dristy.setMarks(94 , 90);
    Dristy.display();
  return 0;
}