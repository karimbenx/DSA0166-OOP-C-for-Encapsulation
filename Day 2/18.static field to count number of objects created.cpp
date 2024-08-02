#include <iostream>
using namespace std;
class Car {
public:
    static int count;
    int id;
    string name;
    int marks;
    Car() {
        count++;
    }
    void setData(int id, string name, int marks) {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }
    void displayData() {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    static void displayCount() {
        cout << "No. of objects created in the class: " << count << endl;
    }
};
int Car::count = 0;
int main() {
    Car car1, car2;
    int id;
    string name;
    int marks;
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    car1.setData(id, name, marks);
    cout << "Enter the Id of the Car: ";
    cin >> id;
    cout << "Enter the name of the Car: ";
    cin >> name;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks;
    car2.setData(id, name, marks);
    car1.displayData();
    car2.displayData();
    Car::displayCount();
    return 0;
}
