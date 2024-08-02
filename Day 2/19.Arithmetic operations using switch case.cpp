#include <iostream>
using namespace std;
int main() {
    int choice, num1, num2;
    cout << "Calculator:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulus\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Number 1: ";
    cin >> num1;
    cout << "Number 2: ";
    cin >> num2;
    switch (choice) {
    case 1:
        cout << "The value of addition is " << num1 + num2 << endl;
        break;
    case 2:
        cout << "The value of subtraction is " << num1 - num2 << endl;
        break;
    case 3:
        cout << "The value of multiplication is " << num1 * num2 << endl;
        break;
    case 4:
        if (num2 != 0) {
            cout << "The value of division is " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero" << endl;
        }
        break;
    case 5:
        cout << "The value of modulus is " << num1 % num2 << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}
