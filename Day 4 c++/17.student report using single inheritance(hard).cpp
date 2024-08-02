#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNumber;
    string name;
    string address;
    string city;
    float marks1, marks2, marks3;

public:
    void getDetails() {
        cout << "Enter student roll number: ";
        cin >> rollNumber;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student address: ";
        cin >> address;
        cout << "Enter student city: ";
        cin >> city;
        cout << "Enter the marks1: ";
        cin >> marks1;
        cout << "Enter the marks2: ";
        cin >> marks2;
        cout << "Enter the marks3: ";
        cin >> marks3;
    }

    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "********************" << endl;
        cout << "The student roll number: " << rollNumber << endl;
        cout << "The student name: " << name << endl;
        cout << "The student address: " << address << endl;
        cout << "The student city: " << city << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;

        float total = marks1 + marks2 + marks3;
        float percentage = total / 3;
        cout << "Total percentage: " << percentage << endl;

        if (percentage >= 75) {
            cout << "Grade A" << endl;
        } else if (percentage >= 60) {
            cout << "Grade B" << endl;
        } else if (percentage >= 50) {
            cout << "Grade C" << endl;
        } else {
            cout << "Grade F" << endl;
        }
    }
};

int main() {
    Student student;
    student.getDetails();
    student.displayDetails();
    return 0;
}
