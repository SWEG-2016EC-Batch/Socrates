#include<iostream>
using namespace std;
int main()
{
    start:
    int  tank_capacity, miles_per_gallon, no_of_miles;
    cout <<"enter the capacity in gallons of your automobile fuel tank\n ";
    cin>> tank_capacity;
    if(cin.fail()){
    	cout<<"invalid input,please try again\n";
    	cin.clear();
    	cin.ignore();
    	goto start;
    }else{
    cout <<"input the miles per gallon your automobile can be driven\n";
    cin>>miles_per_gallon;
   no_of_miles=(tank_capacity *miles_per_gallon);
   cout<< "the miles your automobile goes with out refueling is:  "<<no_of_miles;
    }
    return 0;
}
