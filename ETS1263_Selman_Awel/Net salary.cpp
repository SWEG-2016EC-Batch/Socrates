# include <iostream>
using namespace std;
int main(){
 long double base_salary,bonus_rate,bonus_payement,pension,tax,gross_salary,net_salary;
 int working_hours;
 string name;
 cout<<"enter your name\n";
 cin>>name;
 cout<<"enter your base salary\n";
 cin>>base_salary;
 cout<<"enter your weekly working hours\n";
 cin>>working_hours;
 cout<<"enter your company bonus rate\n";
 cin>>bonus_rate;
 bonus_payement = bonus_rate * working_hours;
 gross_salary = base_salary + bonus_payement; 
 pension = 0.05 * base_salary;
 tax = 0.15 * base_salary;
 net_salary = gross_salary -pension-tax ;
 cout<<"dear mr/s "<<name<<endl;
 cout<<"your bonus payment is :"<<bonus_payement<<endl;
 cout<<"your gross salary is :"<<gross_salary<<endl;
cout<<"your net salary is :"<<net_salary<<endl; 
 
     
return 0;
 }