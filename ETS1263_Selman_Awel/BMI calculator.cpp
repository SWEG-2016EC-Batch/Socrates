#include <iostream>
using namespace std;
int main()
{  
double height,weight,BMI;
 
 cout << "enter your height in meters:\n";
 cin >> height;
 cout << "enter your weight in kg:\n";
 cin >> weight;
 BMI = weight / height*height;
 cout << " your BMI is:" << BMI << endl;
 if (BMI <= 18.5)
 {
  cout << "you are under weight\n";
 }
 else if (BMI > 25)
 {
  cout << "you are over weight\n";
 }
 else
 {
  cout << "you are normal weight\n";
 }
 return 0;
} 