#include <iostream>
using namespace std;

int main(){

    string employee_fullname;
    double weekly_working_hours, bonus_rate_per_hour;
    double tax=0.15;
    double pension_rate= 0.05;
    double base_salary, gross_salary,net_salary,bonus_payment;


cout<<"What is employees fullname: "<<endl;
getline(cin,employee_fullname);
    cout<<"Enter employees weekly working hours: "<<endl;
    cin>> weekly_working_hours;
    cout<<"Enter  employees base salary:"<<endl;
    cin>>base_salary;
     cout<<"Enter  employees bonus rate per hour:"<<endl;
    cin>>bonus_rate_per_hour;
    
    bonus_payment= bonus_rate_per_hour * weekly_working_hours;
    gross_salary= base_salary+ bonus_payment;
    net_salary= gross_salary - (tax + pension_rate);
    cout<<employee_fullname<<endl;
    cout<<"Your bonus payment is: "<<bonus_payment<<'$'<<endl;
cout<<"Your Gross salary is: "<<gross_salary<<'$'<<endl;
    cout<<"Your net salary is: "<<net_salary<<'$'<<endl;


  return 0;

}
