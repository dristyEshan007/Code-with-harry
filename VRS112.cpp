#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
    private:
    string registrationNumber;
    string Brand;

    protected:
    float rentalRate;

    public:
    void setDetails(string regNum, string B, float Rate)
    {
        registrationNumber = regNum;
        Brand = B;
        rentalRate = Rate;
    }

    virtual void displayDetails()
    {
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Brand: " << Brand << endl;
        cout << "Rental rate: BDT- " << rentalRate << endl;
    }
};

class Car : public Vehicle
{
    private:
    int numberOfDoors;

    public:
    void setNumberOfDoors(int door)
    {
        numberOfDoors = door;
    }

    void displayDetails() override
    {
        Vehicle::displayDetails();
        cout << "Number of Doors: " << numberOfDoors << endl;
    }

    float claculateRentalCost(int days)
    {
        return days * rentalRate;
    }
};

class Bike : public Vehicle
{
    private:
    bool isElectrical;

    public:
    void setIsElectrical(bool electrical)
    {
        isElectrical = electrical;
    }
    void displayDetails() override
    {
        Vehicle::displayDetails();
        cout << "Electrical: " << (isElectrical ? "Yes" : "No") << endl;
    }

    float calculateRentalCost(int hours)
    {
        return hours*(rentalRate/24);
    }

};
int main()
{
    Car c;
    c.setDetails("Dhaka-Ka-123", "Toyota", 5000.5);
    c.setNumberOfDoors(4);

    Bike b;
    b.setDetails("Dhaka-Ga", "Yaamaha", 200.0);
    b.setIsElectrical(true);

    cout << "Car Details: " << endl;
    c.displayDetails();
    cout << "Rental cost of 3 days: BDT- " << c.claculateRentalCost(3) << endl;

    cout<<"Bike Details: " << endl;
    b.displayDetails();
    cout << "Rental cost for 8 hours: BDT- " << b.calculateRentalCost(8) << endl;

    return 0;
}