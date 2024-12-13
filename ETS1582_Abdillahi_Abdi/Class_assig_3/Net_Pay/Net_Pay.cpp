#include <iostream>
using namespace std;
int main(){
 double basic_salary, gross_salary, net_salary,worked_hours,
  extra_worked_hours, bonus_rate;
 float pension, bonus, tax;
 cout<<"Enter your Basic Salary:"<<endl;
 cin>> basic_salary;
 cout<<"Enter your Worked Hours:"<<endl;
 cin>> worked_hours;
 if (worked_hours >40)
 {
    extra_worked_hours = worked_hours - 40;
    cout<<"Enter your Bonus_rate:"<<endl;
 cin>> bonus_rate;

 }
 else{
    extra_worked_hours =0;
 }
 
 bonus = extra_worked_hours * bonus_rate;
 gross_salary = basic_salary + bonus;
 pension= basic_salary* 0.7;
 if (gross_salary <= 200)
{
    tax =gross_salary * 0.0;
}
else if (gross_salary >200 &&  gross_salary <=600)
{
    tax = gross_salary * 0.1;
}
else if (gross_salary >600 && gross_salary <= 1200)
{
    tax + gross_salary * 0.15;
}
else if (gross_salary >1200 && gross_salary <= 2000){
    tax = gross_salary * 0.2;
}
else if (gross_salary > 2000 && gross_salary <= 3500)
{
    tax + gross_salary * 0.25;
}
else(gross_salary > 3500);
{
    tax = gross_salary * 0.3;
}
net_salary = gross_salary - pension - tax;
cout<<"your Net Salary is:"<<net_salary<<endl;
    return 0;

}