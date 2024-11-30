#include <iostream>
using namespace std;
int main (){
//Declare variables for the capacity in gallons and miles per gallons.
    double fuel_capacity, miles_per_gallons, driven_without_fuel;
    // after we created the variables we need to ask the user the quantity.
    cout<< "enter the fuel capacity in gallons.:"<<endl;
    cin>>fuel_capacity;
    cout<<"Enter the miles per gallons of the outomobile.:"<<endl;
    cin>>miles_per_gallons;
    driven_without_fuel= fuel_capacity * miles_per_gallons;
// we recieved the result after this calculation.
cout<<"the outomobile can be driiven "<< driven_without_fuel <<" "<<"miles with out refueling";
 




    return 0;
} 