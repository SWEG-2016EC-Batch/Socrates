if(reg =='2'){
cout<<"what's your name: ";
            cin >> testname;
            for(int j=0;j<30;j++){
                if(testname==name[j]){
                    num=j;
                    //num will be used to specify the index of the names logged in with
                    break;
                }
                if(j==29&&testname!=name[j]){
                    cout<<"There is no account under "<< testname << endl;
                    cout<<"go to sign up and make an account"<<endl;
                    goto registration;
                }
            }
        cout<<"enter your id: ";
        for(int i =1;i<=3;i++){
            cin>> testid;
            if(testid == ID[num]){
                cout << "welcome sir!"<<endl;
                break;
            }
            else if(testid != ID[num]&& i<3){
                cout<<"wrong id, try again!";
            }
            else{
                cout<<"you have exceeded the number of trials"<<endl;
                goto registration;
            }
        }
        //to check if the person trying to log in knows the id
}
