#include<iostream>
using namespace std;
int main(){
int num,digit,even=1;
  cout<<"enter the number"<<endl;
  cin>>num;
  if(num<0){
  num=-num;
}while(num!=0){
digit=num%10;
if(digit%2==0){
  even*=digit;
  }
num/=10;  
}cout<<"the multiplication of even digits is "<<even<<endl;
return 0;
}
