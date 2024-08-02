#include <iostream>
#include <string>
using namespace std;
class Student{
public:
string name;
int age;
string gender;
void getBasicInfo(){
cout<<"Enter student's basic information: "<<endl;
cout<<"Name: ";
cin>>name;
cout<<"Age: ";
cin>>age;
cout<<"Gender: ";
cin>>gender;
}
void displayBasicInfo()
{
cout<<"Name: "<<name<<" Age: "<<age<<" Gender: "<<gender<<endl;
}
};
class Result:public Student{
public:
int totalMarks;
char grade;
void getResultInfo()
{
cout<<"Enter student's result information:"<<endl;
cout<<"Total Marks: ";
cin>>totalMarks;
cout<<"Grade: ";
cin>>grade;
}
void displayResultInfo()
{
float percentage=(float)totalMarks/500*100;
cout<<"Total marks: "<<totalMarks<<" Percentage: "<<percentage<<" Grade: "<<grade<<endl;
}
};
int main()
{
Result student;
student.getBasicInfo();
student.getResultInfo();
student.displayBasicInfo();
student.displayResultInfo();
return 0;
}
