#include <iostream>
using namespace std;
int main(){
long num;
int counter=0;
cout<<"enter the number"<<endl;
cin>>num;
if(num<0){
  num=-num;
}else if(num==0){
  counter=1;
}while(num!=0){
  num/=10;
  counter++;
}    
cout<<"the number of the digits of inserted number is "<<counter<<endl;
return 0;
}
