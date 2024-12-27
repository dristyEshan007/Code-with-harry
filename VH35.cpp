#include<bits/stdc++.h>
using namespace std;
int count=0;
class Num
{
    public:
    Num(){
    count++;
    cout << "THis is the time when constructor is called for object number"<< count << endl;
    }
   ~Num()
   {
    cout <<"This is the time when destructor is called for obeject umber" << count <<endl;
    count --;
   } 
};
int main()
{
    cout << "We are inside our nmain function." << endl;
    cout << "Creating first object n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout<< "Exiting this block" << endl;
    }
    cout << "Back to main." << endl;
  return 0;
}