#include<bits/stdc++.h>
using namespace std;

    class Binary
    {
        string s;
        public:
        void read(void);
        void chk_bin(void);
        void ones(void);
        void display(void);
    };

    void Binary :: read(void)
    {
        cout << "Enter a binary Number: "  << endl;
        cin >> s;
    }

    void Binary :: chk_bin(void)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i)!='0'  && s.at(i)!='1')
            {
                cout << "Incorrect Binary Format." << endl;
                exit(0);
            }
        }
        
    }

 void Binary :: ones(void)
 {
     for (int i = 0; i < s.length(); i++)
     {
        if(s.at(i) == '0')
        {
            s.at(i) = '1'; 
        }
        if(s.at(i) == '1')
        {
            s.at(i) = '0';
        }
     }
 }

void Binary :: display(void)
 {
    for (int i = 0; i < s.length(); i++)
     {
        cout << "Displaying your binary number "<< endl;
     cout << s.at(i);
     }
 }

int main()
{
    //OOPs classes and Objetcts
    //c++ --> initially called --> C with classes by stroustrap
    // Class --> Extention of Structures(in C)
    //Structures had limitations
    //        - Members were public
    //        - No Methods
    // Classes = Structure + more
    // Classes can have methods and properties
    // Classes --> can make few members as public or private
    //Structures in C++ are typedefed
    // You Can declare objects right after class declaration
    /* class Employee
    {
        class defination
    } dristy ,  eshan ,  diya;
    */
    // dristy.salary =3656 makes no sense if salary ias private

    // Nesting Of Member Functions

    Binary b;
    b.read(); 
    b.chk_bin(); 
    b.display();
    b.ones();
    b.display();

    return 0;
}