#include <iostream>
using namespace std;


int main(){
    //declare variables to store the values of Weight,height,BMI,attempts and the choice.
float weight, height, BMI;
int attempts= 0;
char choice;
// use the do while loop to make the program serve for multiple users.
do{
// promt the user to input the values to estimate the BMI.
cout<<"Enter the person's weight in kilograms" <<endl;
cin>> weight;
cout<<"Enter the person's height in meters" <<endl;
cin>> height;
// after the user completes the input, calculate BMI as following.
BMI = weight /( height * height);
cout<<"Your BMI is :"<<BMI<<endl;
//classify the possiple situations of the BMI value, then tell the user which situation defines him.
if (BMI > 0 && BMI <= 18.5)
{
    cout<<"you are under weight"<<endl;
}
else if (BMI >= 18.6 && BMI <=24.9)
{
    cout<<"you are normal"<<endl;
}
else if (BMI> 25.0 )
{
    cout<<"you are over weight"<<endl;
}
else {
    cout<<"your BMI value is incorrect";
}
cout<<endl;
attempts++;
// after the first attempt, ask the user to decide whether he/she wants to continue for another user.
cout<<" do you want to calculate a BMI of another customer?"<<endl;
cout<< "if yes, press [y] otherwise, press[n]"<<endl;
cin>>choice;
//if the user select yes, the program will continue, but if the user select no then terminate the program.
}
while (choice== 'y' || choice== 'Y'); {
    cout<<"the end, Good bye!!!" <<endl;
}


return 0;

}
