#include <iostream>

using namespace std;

int main()
{
    string nameinfo,name[30]={"no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name","no name"};
    string testname,cartorent,address[30],password="password",passwordcheck;
    string nowrented[30][4];
    string suv[6]={"CHR","Tucson","Creta","Jatour","Bolero","Mahindra"};
    string sport[6]={"bla","blu","bli","ble","blo","bol"};
    string Luxary [6]={"bla","blu","bli","ble","blo","bol"};
    string economic[6]={"bla","blu","bli","ble","blo","bol"};
    string convertible[6]={"bla","blu","bli","ble","blo","bol"};
    string date[12],rentmonthar[30][4],rentmonth,returnmonthar[30][4],returnmonth,returnedmonth,returneddate[12][30];
    char reg,cartype,choice,choicetwo;
    int duration,penalitytime,returned,returnedday[12][30],daynums[12][30],rentdate[30][4],rentday,returndate[30][4],returnday;
    int carprice[30][4],penalityprice[30][4],penalityrate=500;
    int suvprice[6]={1000,2000,3000,4000,5000,6000};
    int sportprice[6]={1,1,1,1,1,1};
    int Luxaryprice[6]={1,1,1,1,1,1};
    int economicprice[6]={1,1,1,1,1,1};
    int convertibleprice[6]={1,1,1,1,1,1};
    int totaltransaction=0,totalpenality=0,totalcarprice=0;
    int carnum,startday,endday,num,testid,id=0001,licensenum[30],idinfo,ID[30]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int x=1,y=0,w,q,s=0,z=0;
    for(int i=0;i<12;i++){
        for(int j=0;j<30;j++){
            if(i==0){
                date[i]="Jan";

                    daynums[i][j]=j+1;

            }
            else if(i==1){
                date[i]="Feb";

                    daynums[i][j]=j+1;

            }
            else if(i==2){
                date[i]= "Mar";

                    daynums[i][j]=j+1;

            }
            else if(i==3){
                date[i]="Apr";

                    daynums[i][j]=j+1;

            }
            else if(i==4){
                date[i]="May";

                    daynums[i][j]=j+1;

            }
            else if(i==5){
                date[i]="Jun";

                    daynums[i][j]=j+1;

            }
            else if(i==6){
                date[i]="Jul";

                    daynums[i][j]=j+1;

            }
            else if(i==7){
                date[i]="Aug";

                    daynums[i][j]=j+1;

            }
            else if(i==8){
                date[i]="Sep";

                    daynums[i][j]=j+1;

            }
            else if(i==9){
                date[i]="Oct";

                    daynums[i][j]=j+1;

            }
            else if(i==10){
                date[i]="Nov";

                    daynums[i][j]=j+1;

            }
            else if(i==11){
                date[i]="Dec";

                    daynums[i][j]=j+1;

            }
        }
    }
    while(x>0){
registration:

    cout<<"1 to sign up\n";
    cout<<"2 to sign in\n";
    cout<<"3 to sign in as admin\n";
    cin >> reg;

    if(reg=='1'){


    }



    else if(reg=='2'){

        carnum:
        cout << "how many cars do you want to rent:";
        cin >> carnum;
        if(carnum < 1){
            cout << "invalid number" << endl;
        goto carnum;
        }
        if(carnum >1 && carnum <=3){
            cout<<"pick one car at a time!"<<endl;
        }
        if(carnum>3){
            cout<< "one person can't rent morethan 3 cars!"<<endl;
            goto carnum;
            }
        for(int j=1;j<=carnum;j++){

        if(j == 1){
        cout << "Which type of car would you like to rent "<< j << "st"<<endl;
        }
        else if(j == 2){
        cout << "Which type of car would you like to rent "<< j << "nd"<<endl;
        }
        if(j == 3){
        cout << "Which type of car would you like to rent "<< j << "rd"<<endl;
        }
        cout<< "1 for SUV"<< endl;
        cout<< "2 for Luxary"<< endl;
        cout<< "3 for Sport"<< endl;
        cout<< "4 for Economic"<< endl;
        cout<< "5 for Convertible"<< endl;
        cin>>cartype;
        if(cartype=='1'){
                cout<<"which SUV would you like to rent?"<<endl;
             cout<<"Type the name of the car you want to rent exactly as the list below!"<<endl;

                for(int i=0;i<6;i++){
                    cout<< suv[i]<< " costs "<< suvprice[i]<<" per day"<<endl;

                }


        suvrent:
                    cin>>cartorent;
                    for(int i=0;i<6;i++){
                    if(cartorent!=suv[i]&&i==5){
                        cout<< "There is no such car! try again"<<endl;
                        goto suvrent;
                    }
                    else if(cartorent == suv[i]){
                        break;
                    }
                }

                cout<<"when would you like to rent the car? type the date exactly as demonstrated!"<<endl;
                for(int i=0;i<12;i++){
                        if(i>0){
                            cout<<endl;
                        }
                        cout<<date[i]<<" ";
                    for(int j=0; j<30;j++){
                        cout<< daynums[i][j]<<" ";

                    }
                }
                cout<<endl;
                suvrentmonth:
                cout<<"month: ";
                cin>> rentmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && rentmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto suvrentmonth;
                    }
                    else if(rentmonth==date[i]){
                        rentmonthar[num][j]== rentmonth;
                        break;
                    }
                 }
                 suvrentday:
                 cout<< "day: ";
                 cin>>rentday;
                 if(rentday<1||rentday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto suvrentday;
                 }
                 else{
                    rentdate[num][j]==rentday;
                 }

              cout<< "when would you like to return the car? type as specified on the calender erlier!"<<endl;
              suvreturnmonth:
                cout<<"month: ";
                cin>> returnmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto suvreturnmonth;
                    }
                    else if(returnmonth==date[i]){
                        returnmonthar[num][j]== returnmonth;
                        break;
                    }
                 }
                 suvreturnday:
                 cout<< "day: ";
                 cin>>returnday;
                 if(returnday<1||returnday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto suvreturnday;
                 }
                 else{
                    returndate[num][j]==returnday;
                 }




                for(int i=0;i<6;i++){
                if(cartorent==suv[i]){
                    carprice[num][j]= duration*suvprice[i];
                    break;
                }
              }
                z=0;
                cout<< "when was the car returned? type as specified on the calender erlier!"<<endl;
              suvreturnedmonth:
                cout<<"month: ";
                cin>> returnedmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnedmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto suvreturnedmonth;
                    }
                    else if(returnedmonth==date[i]){
                        returneddate[num][j]== returnedmonth;
                        break;
                    }
                 }
                 suvreturnedday:
                 cout<< "day: ";
                 cin>>returned;
                 if(returned<1||returned>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto suvreturnedday;
                 }
                 else{
                    returnedday[num][j]==returned;
                 }


              for(int i=0;i<6;i++){
                if(cartorent==suv[i]){
                    penalityprice[num][j]= penalitytime*penalityrate;
                    break;
                }
              }


            }


        if(cartype=='2'){
            cout<< "Which Luxary car would you Like to rent?"<<endl;
            cout<<"Type the name of the car you want to rent exactly as the list below!"<<endl;
                for(int i=0;i<6;i++){
                    cout<< Luxary[i]<<" costs "<<Luxaryprice[i] <<" per day"<<endl;
                }
                Luxaryrent:
                    cin>>cartorent;
                    for(int i=0;i<6;i++){
                    if(cartorent!=Luxary[i]&&i==5){
                        cout<< "There is no such car! try again"<<endl;
                        goto Luxaryrent;
                    }
                    else if(cartorent == Luxary[i]){
                        break;
                    }
                }

                cout<<"when would you like to rent the car? type the date exactly as demonstrated!"<<endl;
                for(int i=0;i<12;i++){
                        if(i>0){
                            cout<<endl;
                        }
                        cout<<date[i]<<" ";
                    for(int j=0; j<30;j++){
                        cout<< daynums[i][j]<<" ";

                    }
                }
                cout<<endl;
                Luxaryrentmonth:
                cout<<"month: ";
                cin>> rentmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && rentmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto Luxaryrentmonth;
                    }
                    else if(rentmonth==date[i]){
                        rentmonthar[num][j]== rentmonth;
                        break;
                    }
                 }
                 Luxaryrentday:
                 cout<< "day: ";
                 cin>>rentday;
                 if(rentday<1||rentday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto Luxaryrentday;
                 }
                 else{
                    rentdate[num][j]==rentday;
                 }

              cout<< "when would you like to return the car? type as specified on the calender erlier!"<<endl;
              Luxaryreturnmonth:
                cout<<"month: ";
                cin>> returnmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto Luxaryreturnmonth;
                    }
                    else if(returnmonth==date[i]){
                        returnmonthar[num][j]== returnmonth;
                        break;
                    }
                 }
                 Luxaryreturnday:
                 cout<< "day: ";
                 cin>>returnday;
                 if(returnday<1||returnday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto Luxaryreturnday;
                 }
                 else{
                    returndate[num][j]==returnday;
                 }


                for(int i=0;i<6;i++){
                if(cartorent==Luxary[i]){
                    carprice[num][j]= duration*Luxaryprice[i];
                    break;
                }
                }
                z=0;
                cout<< "when was the car returned? type as specified on the calender erlier!"<<endl;
              Luxaryreturnedmonth:
                cout<<"month: ";
                cin>> returnedmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnedmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto Luxaryreturnedmonth;
                    }
                    else if(returnedmonth==date[i]){
                        returneddate[num][j]== returnedmonth;
                        break;
                    }
                 }
                 Luxaryreturnedday:
                 cout<< "day: ";
                 cin>>returned;
                 if(returned<1||returned>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto Luxaryreturnedday;
                 }
                 else{
                    returnedday[num][j]==returned;
                 }

              for(int i=0;i<6;i++){
                if(cartorent==Luxary[i]){
                    penalityprice[num][j]= penalitytime*penalityrate;
                    break;
                }
              }
        }
        if(cartype==3){
            cout<< "Which sport car would you Like to rent?"<<endl;
            cout<<"Type the name of the car you want to rent exactly as the list below!"<<endl;
                for(int i=0;i<6;i++){
                    cout<< sport[i]<< " costs "<<sportprice[i]<<" per day"<<endl;
                }
                sportrent:
                    cin>>cartorent;
                    for(int i=0;i<6;i++){
                    if(cartorent!=sport[i]&&i==5){
                        cout<< "There is no such car! try again"<<endl;
                        goto sportrent;
                    }
                    else if(cartorent == sport[i]){
                        break;
                    }
                }

                cout<<"when would you like to rent the car? type the date exactly as demonstrated!"<<endl;
                for(int i=0;i<12;i++){
                        if(i>0){
                            cout<<endl;
                        }
                        cout<<date[i]<<" ";
                    for(int j=0; j<30;j++){
                        cout<< daynums[i][j]<<" ";

                    }
                }
                cout<<endl;
                sportrentmonth:
                cout<<"month: ";
                cin>> rentmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && rentmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto sportrentmonth;
                    }
                    else if(rentmonth==date[i]){
                        rentmonthar[num][j]== rentmonth;
                        break;
                    }
                 }
                 sportrentday:
                 cout<< "day: ";
                 cin>>rentday;
                 if(rentday<1||rentday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto sportrentday;
                 }
                 else{
                    rentdate[num][j]==rentday;
                 }

              cout<< "when would you like to return the car? type as specified on the calender erlier!"<<endl;
              sportreturnmonth:
                cout<<"month: ";
                cin>> returnmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto sportreturnmonth;
                    }
                    else if(returnmonth==date[i]){
                        returnmonthar[num][j]== returnmonth;
                        break;
                    }
                 }
                 sportreturnday:
                 cout<< "day: ";
                 cin>>returnday;
                 if(returnday<1||returnday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto sportreturnday;
                 }
                 else{
                    returndate[num][j]==returnday;
                 }

                for(int i=0;i<6;i++){
                if(cartorent==sport[i]){
                    carprice[num][j]= duration*sportprice[i];
                    break;
                }
                }
                z=0;
                cout<< "when was the car returned? type as specified on the calender erlier!"<<endl;
              sportreturnedmonth:
                cout<<"month: ";
                cin>> returnedmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnedmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto sportreturnedmonth;
                    }
                    else if(returnedmonth==date[i]){
                        returneddate[num][j]== returnedmonth;
                        break;
                    }
                 }
                 sportreturnedday:
                 cout<< "day: ";
                 cin>>returned;
                 if(returned<1||returned>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto sportreturnedday;
                 }
                 else{
                    returnedday[num][j]==returned;
                 }

              for(int i=0;i<6;i++){
                if(cartorent==sport[i]){
                    penalityprice[num][j]= penalitytime*penalityrate;
                    break;
                }
              }

        }
        if(cartype=='4'){
            cout<< "Which economic car would you Like to rent?"<<endl;
            cout<<"Type the name of the car you want to rent exactly as the list below!"<<endl;

                for(int i=0;i<6;i++){
                    cout<< economic[i]<< " costs "<<economicprice[i]<<" per day"<<endl;
                }
                economicrent:
                    cin>>cartorent;
                    for(int i=0;i<6;i++){
                    if(cartorent!=suv[i]&&i==5){
                        cout<< "There is no such car! try again"<<endl;
                        goto carnum;
                    }
                    else if(cartorent == suv[i]){
                        break;
                    }
                }

                cout<<"when would you like to rent the car? type the date exactly as demonstrated!"<<endl;
                for(int i=0;i<12;i++){
                        if(i>0){
                            cout<<endl;
                        }
                        cout<<date[i]<<" ";
                    for(int j=0; j<30;j++){
                        cout<< daynums[i][j]<<" ";

                    }
                }
                cout<<endl;
                economicrentmonth:
                cout<<"month: ";
                cin>> rentmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && rentmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto economicrentmonth;
                    }
                    else if(rentmonth==date[i]){
                        rentmonthar[num][j]== rentmonth;
                        break;
                    }
                 }
                 economicrentday:
                 cout<< "day: ";
                 cin>>rentday;
                 if(rentday<1||rentday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto economicrentday;
                 }
                 else{
                    rentdate[num][j]==rentday;
                 }

              cout<< "when would you like to return the car? type as specified on the calender erlier!"<<endl;
              economicreturnmonth:
                cout<<"month: ";
                cin>> returnmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto economicreturnmonth;
                    }
                    else if(returnmonth==date[i]){
                        returnmonthar[num][j]== returnmonth;
                        break;
                    }
                 }
                 economicreturnday:
                 cout<< "day: ";
                 cin>>returnday;
                 if(returnday<1||returnday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto economicreturnday;
                 }
                 else{
                    returndate[num][j]==returnday;
                 }

                for(int i=0;i<6;i++){
                if(cartorent==economic[i]){
                    carprice[num][j]= duration*economicprice[i];
                    break;
                }
                }
                z=0;
                cout<< "when was the car returned? type as specified on the calender erlier!"<<endl;
              economicreturnedmonth:
                cout<<"month: ";
                cin>> returnedmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnedmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto economicreturnedmonth;
                    }
                    else if(returnedmonth==date[i]){
                        returneddate[num][j]== returnedmonth;
                        break;
                    }
                 }
                 economicreturnedday:
                 cout<< "day: ";
                 cin>>returned;
                 if(returned<1||returned>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto economicreturnedday;
                 }
                 else{
                    returnedday[num][j]==returned;
                 }

              for(int i=0;i<6;i++){
                if(cartorent==economic[i]){
                    penalityprice[num][j]= penalitytime*penalityrate;
                    break;
                }
              }
        }
        if(cartype=='5'){

            cout<< "Which convertible would you Like to rent?"<<endl;
        cout<<"Type the name of the car you want to rent exactly as the list below!"<<endl;

                for(int i=0;i<6;i++){
                    cout<< convertible[i]<<" costs "<< convertibleprice[i]<<" per day"<<endl;
                }
                convertiblerent:
                    cin>>cartorent;
                    for(int i=0;i<6;i++){
                    if(cartorent!=convertible[i]&&i==5){
                        cout<< "There is no such car! try again"<<endl;
                        goto carnum;
                    }
                    else if(cartorent == convertible[i]){
                        break;
                    }
                }

                cout<<"when would you like to rent the car? type the date exactly as demonstrated!"<<endl;
                for(int i=0;i<12;i++){
                        if(i>0){
                            cout<<endl;
                        }
                        cout<<date[i]<<" ";
                    for(int j=0; j<30;j++){
                        cout<< daynums[i][j]<<" ";

                    }
                }
                cout<<endl;
                convertiblerentmonth:
                cout<<"month: ";
                cin>> rentmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && rentmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto convertiblerentmonth;
                    }
                    else if(rentmonth==date[i]){
                        rentmonthar[num][j]== rentmonth;
                        break;
                    }
                 }
                 convertiblerentday:
                 cout<< "day: ";
                 cin>>rentday;
                 if(rentday<1||rentday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto convertiblerentday;
                 }
                 else{
                    rentdate[num][j]==rentday;
                 }

              cout<< "when would you like to return the car? type as specified on the calender erlier!"<<endl;
              convertiblereturnmonth:
                cout<<"month: ";
                cin>> returnmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto convertiblereturnmonth;
                    }
                    else if(returnmonth==date[i]){
                        returnmonthar[num][j]== returnmonth;
                        break;
                    }
                 }
                 convertiblereturnday:
                 cout<< "day: ";
                 cin>>returnday;
                 if(returnday<1||returnday>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto convertiblereturnday;
                 }
                 else{
                    returndate[num][j]==returnday;
                 }

                for(int i=0;i<6;i++){
                if(cartorent==convertible[i]){
                    carprice[num][i+1]= duration*sportprice[i];
                    break;
                }
                }
                z=0;
                cout<< "when was the car returned? type as specified on the calender erlier!"<<endl;
              convertiblereturnedmonth:
                cout<<"month: ";
                cin>> returnedmonth;
                 for(int i=0;i<12;i++){
                    if(i==11 && returnedmonth!=date[i]){
                        cout<< "please write it as the calender!"<<endl;
                        goto convertiblereturnedmonth;
                    }
                    else if(returnedmonth==date[i]){
                        returneddate[num][j]== returnedmonth;
                        break;
                    }
                 }
                 convertiblereturnedday:
                 cout<< "day: ";
                 cin>>returned;
                 if(returned<1||returned>30){
                    cout<<"please enter a day between 1 and 30!"<<endl;
                    goto convertiblereturnedday;
                 }
                 else{
                    returnedday[num][j]==returned;
                 }

              for(int i=0;i<6;i++){
                if(cartorent==convertible[i]){
                    penalityprice[num][i+1]= penalitytime*penalityrate;
                    break;
                }
              }
        }
        z=0;
        }
        cout<< "Thank you for choosing us! you will now be redirected to the menu"<<endl;

    }

    else if(reg=='3'){
            cout<<"What's the password: ";
            int admintry=1;
            passwordcheckleb:
    cin>>passwordcheck;
    if(password==passwordcheck){
            cout<<"Welcome sir! Choose the option you want!"<<endl;
        cout<<"1 Monthly transactions report\n";
        cout<<"2 Customer details\n";
        cout<<"3 Rentals this month\n";
        cout<<"4 average rental per person\n";
        cout<<"5 change penality rate\n";
        cout<<"anyt other number to go back to menue\n";
        cin>>choice;
        if(choice=='1'){

        }
        else if(choice=='2'){

        }
        else if(choice=='3'){
            int number=0;
            for(int i=0;i<30;i++){
                for(int j =1;j<=3;j++){
                    for(int k=0;k<6;k++){
                        if(nowrented[i][j]==suv[k]){
                            number++;
                        }else if(nowrented[i][j]==Luxary[k]){
                            number++;
                        }else if(nowrented[i][j]==sport[k]){
                            number++;
                        }else if(nowrented[i][j]==economic[k]){
                            number++;
                        } else if(nowrented[i][j]==convertible[k]){
                            number++;
                        }
                    }
                }
            }
            cout<< "The number of rentals is: "<<number;
        }
        else if(choice=='4'){
            int number=0;
            int people =0;
            double average;
            for(int i=0;i<30;i++){
                for(int j =1;j<=3;j++){
                    for(int k=0;k<6;k++){
                        if(nowrented[i][j]==suv[k]){
                            number++;
                        }else if(nowrented[i][j]==Luxary[k]){
                            number++;
                        }else if(nowrented[i][j]==sport[k]){
                            number++;
                        }else if(nowrented[i][j]==economic[k]){
                            number++;
                        } else if(nowrented[i][j]==convertible[k]){
                            number++;
                        }
                    }
                }
            }
            for(int i=0;i<30;i++){
                if(name[i]!="no name"){
                    people++;
                }
            }
            average= number/people;
            cout<< "The average number of rented car per person is: "<<average<<endl;
        }
        else if(choice=='5'){
            cout<<"1 check penality rate\n";
            cout<<"2 change penality rate\n";
            cin>>choicetwo;
            if(choicetwo=='1'){
                cout<<"The penality rate is: "<<penalityrate<<endl;
            }
            else if(choicetwo=='2'){
                cout<< "enter the penality rate you desire: ";
                cin>>penalityrate;
            }
        }
        cout<< "you will now be redirected to the menu\n";
    }
    else{
        if(admintry!=3){
            cout<<"wrong password! Try again!"<<endl;
            admintry++;
            goto passwordcheckleb;
        }
        else{
            cout<<"You have exceeded the number of trials! You will be redirected to the menu!"<<endl;
        }
    }
    }
    else{
        cout<< "not an option! you will be redirected to the menu\n";
    }

    x++;
    }
    return 0;
}
