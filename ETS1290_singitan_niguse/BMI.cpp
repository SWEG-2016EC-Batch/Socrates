#include <iostream>
using namespace std;
int main()
{
	char repeat;
	do{
	double height,weight,H,BMI;
	cout << "enter your height in meters:\n";
	cin >> height;
	cout << "enter your weight in kg:\n";
	cin >> weight;
	H = height * height;
	BMI = weight / H;
	cout << " your BMI is:" << BMI << endl;
	if (BMI <= 18)
	{
		cout << "you are under weight\n";
	}
	else if (BMI > 28)
	{
		cout << "you are over weight\n";
	}
	else
	{
		cout << "you are normal weight\n";
	}
	cout<<"press '1' to repeat and any key to terminate\n"<<endl;
	cin>>repeat;
	}while(repeat=='1');
	cout<<"program successfully terminated,thanks for using"<<endl;
	
	return 0;
}
