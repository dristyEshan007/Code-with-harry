#include<bits/stdc++.h>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it=lst.begin(); it != lst.end();  it++)
    {
        cout << *it <<" " << endl;
    }
    
}
int main()
{
    list<int> list1; // List of 0 Length;
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout << *iter << " " << endl;
    // iter++;
    // cout << *iter <<" " << endl;
    // iter++ ;
    // cout << *iter << " " << endl;
    // iter++;
    // cout << *iter << " " << endl;
    // iter++; 
    // cout << *iter << " " << endl;
    // iter++;

    display(list1);
    //Removing elements from the list

    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9);

    //Sorting the list
    list1.sort();
    display(list1);

    list<int> list2(3); //Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;

    *iter = 5;
    iter++;

    *iter = 35;
    iter++;
    
    display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<< "List 1 After merging" << endl;
    display(list1);

  return 0;
}