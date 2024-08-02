#include <iostream>
using namespace std;
int main() {
    int marks[5];
    int total = 0;
    float aggregate;
    cout << "Please Enter the marks of five subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }
    aggregate = total / 5.0;
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << aggregate << endl;
    if (aggregate >= 75) {
        cout << "Grade: Distinction" << endl;
    } else if (aggregate >= 60 && aggregate < 75) {
        cout << "Grade: First Division" << endl;
    } else if (aggregate >= 50 && aggregate < 60) {
        cout << "Grade: Second Division" << endl;
    } else if (aggregate >= 40 && aggregate < 50) {
        cout << "Grade: Third Division" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }
    return 0;
}
