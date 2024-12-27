#include<bits/stdc++.h>
using namespace std;
/*
Inheritance:

Student ---> Test
Student ---> Sposrts
Test---> Result
Sport --> Result
*/
class Student
{
    protected:
    int rollNo;
    public:
    void setNumber(int a)
    {
        rollNo = a;
    }
    void printNumber()
    {
        cout << "Your roll Number is:  " << rollNo << endl;
    }
};
class Test : virtual public Student
{
    protected:
    float Maths, Physics;
    public:
    void setMarks(float m1, float m2)
    {
        Maths = m1;
        Physics = m2;
    }
    void printMarks(void)
    {
        cout << "You have obtained: " << endl 
             << "Maths: " << Maths << endl
             << "Physics: " << Physics << endl;
    }
};
class Sports : virtual public Student
{
    protected:
    float score;

    public:
    void setScore(float sc)
    {
        score = sc;
    }
    void printScore(void)
    {
        cout << "Your PT score is: " 
             << score << endl;
    }
};


class Result : public Test, public Sports
{
    private:
    float total;
    public:
    void display(void)
    {
        total = Maths + Physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your Total Score is  " << total << endl;
    }
};
int main()
{
    Result Dristy;
    Dristy.setNumber(343);
    Dristy.setMarks(56.45,57.5);
    Dristy.setScore(65);
    Dristy.display();
  return 0;
}