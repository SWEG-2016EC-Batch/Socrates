#include<iostream>
using namespace std;
int main(){
int x,y,result;
cout<<"enter the base number\n";
cin>>x;
cout<<"enter the exponent number\n";
cin>>y; 
result=1;
while(y>0){  
    result=result*x;
    y--;
}
cout<<"the final result is  "<<result;
 

 return 0;
}