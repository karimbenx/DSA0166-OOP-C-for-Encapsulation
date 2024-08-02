#include <iostream>
#include <string>
using namespace std;
void getperson(int age) {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else if (age < 0) {
        cout << "Invalid age." << endl;
    } else {
        cout << "You are allowed to vote after " << 18 - age << " years." << endl;
    }
}
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    getperson(age);
    getperson(25);
    getperson(18);
    getperson(12);
    getperson(-18);
    getperson(34.5);
    return 0;
}
