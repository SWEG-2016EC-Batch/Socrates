#include <iostream>
using namespace std;
int main() {
    float test, quiz, project, assignment, final_exam;
    float  total;
    cout<<"enter mark of your test out of 15%\n";
    cin>>test;
    cout<<"enter mark of your quiz out of 5%\n";
    cin>>quiz;
    cout<<"enter mark of your project out of 20%\n";
    cin>>project;
    cout<<"enter mark of your assignment out of 10%\n";
    cin>>assignment;
    cout<<"enter mark of your final exam out of 50%\n";
    cin>>final_exam;
  total=  test+quiz+project+assignment +final_exam;
  cout<<"your total mark is: "<<total<<endl;
  if(total>=90){
      cout<<"your grade is A+"<<endl;
  }else if(total>=80){
      cout<<"your grade is A"<<endl;
  }else if(total>=75){
      cout<<"your grade is B+"<<endl;
  }else if(total>=60){
      cout<<"your grade is B"<<endl;
  }else if(total>=55){
      cout<<"your grade is  c+"<<endl;
  }else if (total>=45){
      cout<<"your grade is C"<<endl;
  }else if (total>=30){
      cout<<"your grade is D"<<endl;
  }else{
      cout<<"your grade is F"<<endl;
  }
  
    

    return 0;
}
