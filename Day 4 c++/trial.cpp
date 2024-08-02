#include<iostream>
#include<string>
using namespace std;
class Person{
public:
string name;
int age;
string gender;
void getDisplay(){
cout<<"Enter the name: ";
cin>>name;
cout<<"Enter the age: ";
cin>>age;
cout<<"Enter the gender: ";
cin>>gender;
}
void showDisplay(){
cout<<"Name: "<<name;
cout<<"Age: "<<age;
cout<<"Gender: "<<gender;
}
};
class Result:public Person{
int totalMarks;
char grade;
public:
void getResultDisplay(){
cout<<"Enter the marks: ";
cin>>totalMarks;
cout<<"Enter the grade: ";
cin>>grade;
}
void showResultDisplay(){
cout<<totalMarks;
cout<<grade;
}
};
int main()
{
Result student;
student.getDisplay();
student.getResultDisplay()
;student.showDisplay();
student.showResultDisplay();
}
