int num,temp,sum=0;
cout<<"enter the number "<<endl;
cin>>num;
temp=num;
for(int i=1;i<num;i++){
  if(num%i==0){
    sum+=i;
  }
  }
  cout<<"the sum is: "<<sum<<endl;
if(sum==temp){
  cout<<"the number is perfect\n";
}else{
  cout<<"the number isn`t perfect\n";
}
return 0;
}

