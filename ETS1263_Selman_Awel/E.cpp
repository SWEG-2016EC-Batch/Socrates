string num;
char temp;
cout<<"enter the number"<<endl;
cin>>num;
temp=num[0];
num[0]=num[num.size()-1];
num[num.size()-1]=temp;
cout<<"number after swapping is  :"<<num<<endl;
return 0;
}

