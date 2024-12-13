int num,sum=0,digit,fact=1,temp;
cout<<"enter the number "<<endl;
cin>>num;
temp=num;
while(num!=0){
  digit=num%10;
  fact=1;
  for(int i=1;i<=digit;i++){
    fact*=i;
  }sum+=fact;
  num/=10;  
  }
  cout<<sum<<endl;
if(temp==sum){
  cout<<"the number is strong\n";
}else{
  cout<<"the number is`nt strong\n";
}
return 0;
}

