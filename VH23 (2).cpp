#include<bits/stdc++.h>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;
    
    public:
    void initCounter(void) {counter = 0;}
    void setPrice(void);
    void displayPrice(void);

};
void Shop :: setPrice(void)
{
    cout << "Enter ID of your Item no " << counter+1 << endl;
    cin >> itemID[counter];
    cout << "Enter Price of your Item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop :: displayPrice(void)
{
    for (int  i = 0; i < counter; i++)
    {
        cout << "The Price of Item with ID " << itemID[i] << "is" << itemPrice[i] << endl;
    }
    
}

int main()
{
    Shop dokan;
    dokan.initCounter();
    dokan.setPrice();
    dokan.setPrice();
    dokan.setPrice();
    dokan.displayPrice();
    return 0;
}