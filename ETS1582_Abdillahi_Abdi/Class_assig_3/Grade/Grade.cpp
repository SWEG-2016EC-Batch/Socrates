#include <iostream>
using namespace std;

int main(){
float test_score, quiz_score, assignment_score, project_score, final_exam_score;
float total_score;
char grade;
cout<<"Enter your Test score:"<<endl;
cin>>test_score;
if (test_score >15)
{
    cout<<"Maximum mark is 15, please try again"<<endl;
    cin>>test_score;
}
cout<<"Enter your Quiz score:"<<endl;
cin>>quiz_score;
if(quiz_score >5)
{
 cout<<"Maximum mark is 5, please try again"<<endl;
 cin>>quiz_score;
}
cout<<"Enter your Assignment score:"<<endl;
cin>>assignment_score;
if (assignment_score >10)
{
    cout<<"Maximum mark is 10, please try again"<<endl;
    cin>>assignment_score;
}
cout<<"Enter your Project score:"<<endl;
cin>>project_score;
if (project_score >20)
{
    cout<<"Maximum mark is 20, please try again"<<endl;
    cin>>project_score;
}
cout<<"Enter your Final Exam score:"<<endl;
cin>>final_exam_score;
if (final_exam_score >50)
{
    cout<<"Maximum mark is 50, please try again"<<endl;
    cin>>final_exam_score;
}
total_score = test_score+ quiz_score + assignment_score + project_score + final_exam_score;
if (total_score >= 90)
{
    grade = 'A','+';
}
else if (total_score >= 80 && total_score <90)
{
    grade ='A';
}
else if(total_score >= 75 && total_score <80)
{
    grade = 'B','+';
}
else if (total_score >= 60 && total_score <75)
{
    grade = 'B';
}
else if (total_score >= 55 && total_score <60){
    grade = 'C','+';
}
else if (total_score >= 45 && total_score <55)
{
    grade = 'C';
}
else if (total_score >= 30 && total_score <45)
{
    grade ='D';
}
else {
    grade='f';
}
cout<< "Your Total Score is :"<< total_score <<endl;
cout<<"YOur Grade is:"<< grade<<endl;

    return 0;
}