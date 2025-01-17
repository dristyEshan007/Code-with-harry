#include<bits/stdc++.h>
using namespace std;

// Map is an associative array

int main()
{
    map<string, int> marksMap;
    marksMap["Dristy"] = 98;
    marksMap["Basit"] = 58;
    marksMap["Diya"] = 9;

    marksMap.insert({{"Kozume"s, 169}, {"Kuroo",187}});
    map<string, int>    :: iterator iter;
    for ( iter = marksMap.begin(); iter !=marksMap.end() ; iter++)
    {
        cout << (*iter).first <<"   "<< (*iter).second << endl;
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max size is: " << marksMap.max_size() << endl;
    cout << "The empty return value is: " << marksMap.empty() << endl;    
  return 0;
}