#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*Funcion Objects(Functor): Function wrapped in a  class so that
    it is available like an object
    */
   int arr[] = {1, 73, 4, 2, 54, 77};
   sort(arr, arr+5);
   sort(arr, arr+6, greater<int>());
   for (int i = 0; i < 6; i++)
   {
    cout << arr[i] << " " << endl;
   }
   
  return 0;
}