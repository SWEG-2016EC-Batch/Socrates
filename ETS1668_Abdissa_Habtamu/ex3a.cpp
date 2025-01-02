#include<iostream>
using namespace std;
int main(){
int rev=0,n,digit,num;
cout<<"enter the number "<<endl;
cin>>num;
n=num;
do{
    digit=num%10;
  rev=(rev*10)+digit;
  num=num/10;
  }while(num!=0);
  cout<<"the reverse of  "<<n<< " is "<<rev<<endl;
  return 0;
}
