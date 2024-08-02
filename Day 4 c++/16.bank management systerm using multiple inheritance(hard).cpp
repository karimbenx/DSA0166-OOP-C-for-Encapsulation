#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int accNum;
    string accType;
    float balance;
public:
    void getDetails() {
        cout << "Enter Customer Name: ";
        cin >> name;
        cout << "Enter Account Number: ";
        cin >> accNum;
        cout << "Enter Account Type: ";
        cin >> accType;
        balance = 30.0; // Assume an initial balance
    }

    void displayDetails() {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accNum << endl;
        cout << "Account Type: " << accType << endl;
        cout << "Balance: " << balance << endl;
    }
};

class SavingAccount {
public:
    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

class CurrentAccount : public Customer, public SavingAccount {
public:
    void manageAccount() {
        int choice;
        do {
            cout << "Choose Your Choice" << endl;
            cout << "1) Deposit" << endl;
            cout << "2) Withdraw" << endl;
            cout << "3) Display Balance" << endl;
            cout << "4) Display with full Details" << endl;
            cout << "5) Exit" << endl;
            cout << "Enter Your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: {
                    float amount;
                    cout << "Enter amount to Deposit: ";
                    cin >> amount;
                    deposit(amount);
                    break;
                }
                case 2: {
                    float amount;
                    cout << "Balance: " << balance << endl;
                    cout << "Enter amount to be withdraw: ";
                    cin >> amount;
                    withdraw(amount);
                    cout << "Balance Amount After Withdraw: " << balance << endl;
                    break;
                }
                case 3:
                    displayBalance();
                    break;
                case 4:
                    displayDetails();
                    break;
                case 5:
                    cout << "Thank You for Banking with us.." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (choice != 5);
    }
};

int main() {
    char accType;
    cout << "Enter S for saving customer and C for current a/c customer: ";
    cin >> accType;

    if (accType == 'S' || accType == 'C') {
        CurrentAccount customer;
        customer.getDetails();
        customer.manageAccount();
    } else {
        cout << "Invalid account type!" << endl;
    }

    return 0;
}
