#include<iostream>
using namespace std;
int main(){
	int days,hours,minutes,seconds;
	int file_size;
	int time;
	int transmission_rate=960;
	cout<<"enter the file size in bytes\n";
	cin>>file_size;
	time=file_size/transmission_rate;
	days=time/86,400;
	time=time%86,400;
	hours=time/3600;
	time=time%3600;
	minutes=time/60;
	time=time%60;
	seconds=time;
	cout<<"it takes "<<days<<" day:"<<hours<<" hour:"<<minutes<<" minute:"<<seconds<<" second";
	return 0;
}
