 #include <iostream>
using namespace std;
int main()
{
	double height,weight,H,BMI;
	for(int i=0;i<10;i++){
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
	}
	return 0;
}
