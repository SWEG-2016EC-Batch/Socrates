#include iostream 
using namespace std;
int main (){
int num,first,last;
cout<<"enter the number"<<endl;
  cin>>num;
  
  if(num<0){
  num=-num;
}
last=num%10;
first=num;
while(first>=10){
  first/=10;
}
cout<<"the first number is "<<first<<" the last number is "<<last<<" their sum is "<<first+last<<endl;
return 0;
}
