 #include<bits/stdc++.h>
 using namespace std;
 
 class BankDeposit
 {
      int Principal;
      int years;
      float intrestRate;
      float returnValue;

      public:
      BankDeposit() {} // Kisui kore na ei Constructor
      BankDeposit(int p ,  int y , float r);
      BankDeposit(int p ,  int y , int r);
      void Show();
 };

 BankDeposit::BankDeposit(int p, int y, float r)
 {
    Principal = p;
    years = y;
    intrestRate = float(r)/100;

    returnValue = Principal;
    for (int i = 0; i < y; i++)
    {
      returnValue = returnValue * (1+r);
    }
    
 }
 BankDeposit::BankDeposit(int p, int y, int R)
 {
    Principal = p;
    years = y;
    intrestRate = float(R)/100;

    returnValue = Principal;
    for (int i = 0; i < y; i++)
    {
      returnValue = returnValue * (1+R);
    }
    
 }
 void BankDeposit :: Show()
 {
   cout<< endl << "Principal value: " << Principal << endl;
   cout << "Return value after " << years ;
   cout << " years is " << returnValue << endl;
 }
 int main()
 {
  BankDeposit b1, b2, b3;
  int p, y;
  float r;
  int R;

  cout << "Enter the value of p , y and r: " << endl;
  cin >> p >> y >> r;
  b1 = BankDeposit(p,y,r);
  b1.Show(); 

  
  cout << "Enter the value of p , y and R: " << endl;
  cin >> p >> y >> R;
  b2 = BankDeposit(p,y,R);
  b2.Show(); 
  
  b3.Show();
   return 0;
 }