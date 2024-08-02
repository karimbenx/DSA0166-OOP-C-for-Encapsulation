#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    string name;
    int id;
    float basicSalary, hra, da, gp, np;
    void getData() {
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the employee id: ";
        cin >> id;
        cout << "Enter the basic salary: ";
        cin >> basicSalary;
        cout << "Enter the hra: ";
        cin >> hra;
        cout << "Enter the da: ";
        cin >> da;
    }
    void calculateSalary() {
        gp = basicSalary + hra + da;
        np = gp - hra;
    }
    void displayData() {
        cout << name << "\t" << id << "\t" << basicSalary << "\t" << hra << "\t" << da << "\t" << gp << "\t" << np << endl;
    }
};
int main() {
    int num;
    cout << "Enter the number of employees: ";
    cin >> num;
    Employee employees[num];
    for (int i = 0; i < num; i++) {
        employees[i].getData();
        employees[i].calculateSalary();
    }
    cout << "EMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP" << endl;
    for (int i = 0; i < num; i++) {
        employees[i].displayData();
    }
    return 0;
}
