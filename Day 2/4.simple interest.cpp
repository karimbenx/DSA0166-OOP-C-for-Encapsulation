#include <iostream>
using namespace std;
float calculateInterest(float principal, int years, bool isSenior) {
    float rate = isSenior ? 0.12 : 0.10;
    return principal * rate * years;
}
int main() {
    float principal;
    int years;
    char senior;
    bool isSenior;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is customer senior citizen (y/n): ";
    cin >> senior;
    isSenior = (senior == 'y' || senior == 'Y');
    cout << "Interest: " << calculateInterest(principal, years, isSenior) << endl;
    cout << "Test Case 1: " << calculateInterest(200000, 3, false) << endl; // 60000
    cout << "Test Case 2: " << calculateInterest(200000, 3, true) << endl;  // 72000
    return 0;
}
