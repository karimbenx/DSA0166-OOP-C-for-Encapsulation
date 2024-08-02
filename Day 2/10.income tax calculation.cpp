#include <iostream>
using namespace std;

float calculateTax(float income) {
    if (income <= 60000)
        return 0;
    else if (income > 60000 && income <= 150000)
        return income * 0.05;
    else if (income > 150000 && income <= 500000)
        return income * 0.10;
    else
        return income * 0.15;
}
int main() {
    float income;
    cout << "Enter your income: ";
    cin >> income;
    cout << "Your income tax is: " << calculateTax(income) << endl;
    return 0;
}
