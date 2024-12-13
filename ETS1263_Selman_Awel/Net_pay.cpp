#include <iostream>
using namespace std;
int main() {
    float basic_salary, worked_hours,bonus_rate, bonus,gross_salary,pension, tax_rate,tax, net_pay;
    cout<<"enter your basic salary: "<<endl;
    cin>>basic_salary;
    cout<<"enter the hours you worked: "<<endl;
    cin>>worked_hours;
    if (worked_hours>40){
      cout<<"enter over time bonus rate: "<<endl;
      cin>>bonus_rate;
       bonus= (worked_hours-40)*bonus_rate;
       gross_salary= basic_salary+ bonus;
       pension=basic_salary*0.7;
        if(basic_salary<=200){
            tax_rate= 0;
        }else if(basic_salary>200&&basic_salary<=600){
            tax_rate=0.1;
        }else if(basic_salary>600&&basic_salary<=1200){
            tax_rate=0.15;
        }else if(basic_salary>1200&&basic_salary<=2000){
            tax_rate=0.2;
        }else if(basic_salary>2000&&basic_salary<=3500){
            tax_rate=0.25;
        }else{
            tax_rate=0.3;
        }
      cout<<"your tax rate is: "<<tax_rate<<endl;
      tax= tax_rate*gross_salary;
      net_pay= gross_salary-pension-tax;
      cout<<"your net salary is:"<<net_salary<<endl;
    }else{
    pension=basic_salary*0.7;
    if(basic_salary<=200){
            tax_rate= 0;
        }else if(basic_salary>200&&basic_salary<=600){
            tax_rate=0.1;
        }else if(basic_salary>600&&basic_salary<=1200){
            tax_rate=0.15;
        }else if(basic_salary>1200&&basic_salary<=2000){
            tax_rate=0.2;
        }else if(basic_salary>2000&&basic_salary<=3500){
            tax_rate=0.25;
        }else{
            tax_rate=0.3;
        }
    cout<<"your tax rate is: "<<tax_rate<<endl;
    gross_salary= basic_salary;
    tax= tax_rate*gross_salary;
      net_pay= gross_salary-pension-tax;
      cout<<"your net salary is:"<<net_pay<<endl;
    }
    
    

    return 0;
}
