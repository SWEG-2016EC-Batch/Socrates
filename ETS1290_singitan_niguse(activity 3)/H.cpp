#include <iostream>
using namespace std;
int main(){
int freq[10]={0};
int num,digit;
cout<<"enter the number "<<endl;
cin>>num;
if(num<0){
  num=-num;
}while(num>0){
  digit=num%10;
  freq[digit]++;
  num/=10;
}cout<<"digit   |"<<"   frequency"<<endl;
cout<<"-------------------"<<endl;
for(int i=0;i<10;i++){
  if(freq[i]>0){
    cout<<i<<"       |     "<<freq[i]<<endl;
  }
}
return 0;
}
