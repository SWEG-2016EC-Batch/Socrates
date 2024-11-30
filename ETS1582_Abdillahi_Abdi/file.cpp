#include <iostream>
using namespace std;

int main()
{
    int time=1;
    int days,hours,minutes,seconds;
    double file_size;
    int transmission_rate=960;
    cout<<"Enter the size of the file in bytes "<<endl;
    cin>> file_size;
time= file_size/ transmission_rate;
days= time/8600;
time %=8600;
hours= time/3600;
time %=3600;
minutes= time/60;
time %=60;
seconds=time;

cout<<"it will take"<<days <<"days  "<<hours <<"hours "<<minutes<<"minutes  and "<<seconds<<"seconds"<<endl;
cout<<"to send this file"<<endl;

    return 0;
}