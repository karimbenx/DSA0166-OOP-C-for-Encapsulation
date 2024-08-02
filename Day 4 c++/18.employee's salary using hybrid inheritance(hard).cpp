#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name;
    float basicSalary;

public:
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter basic salary of Employee: ";
        cin >> basicSalary;
    }
};

class Salary : public Employee {
protected:
    float grossSalary;
    float netSalary;

public:
    void calculateSalary() {
        float hra = 0.1 * basicSalary;
        float da = 0.1 * basicSalary;
        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - 500; // Assuming a flat deduction for simplicity
    }

    void displaySalary() {
        cout << "Gross Salary = Rs." << grossSalary << endl;
        cout << "Net Salary = Rs." << netSalary << endl;
    }
};

class EmployeeDetails : public Salary {
public:
    void displayDetails() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        displaySalary();
    }
};

int main() {
    EmployeeDetails emp;
    emp.getDetails();
    emp.calculateSalary();
    emp.displayDetails();
    return 0;
}
