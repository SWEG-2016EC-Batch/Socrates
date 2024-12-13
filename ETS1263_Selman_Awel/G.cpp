int digit,rev=0,num,temp;
cout<<"enter the number"<<endl;
cin>>num;
temp=num;
while(num!=0){
  digit=num%10;
  rev=(rev*10)+digit;
  num/=10;
}cout<<"the reverse of "<<temp<<" is "<<rev<<endl;
if(temp==rev){
  cout<<"the number is palindrome\n";
}else{
cout<<"the number is not palindrome\n";  
}
return 0;
}

