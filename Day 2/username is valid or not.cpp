#include <iostream>
#include <string>
using namespace std;
bool isValidUsername(string user1, string user2) {
    return user1 == user2;
}
int main() {
    string username1, username2;
    if (isValidUsername(username1, username2)) {
        cout << "User name is Valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }
    cout << "Test Case 1: " << (isValidUsername("computer", "compute")?"valid":"invalid") << endl;
    cout << "Test Case 2: " << isValidUsername("#$%", "ower") << endl;
    cout << "Test Case 3: " << isValidUsername("000", "000") << endl;
    cout << "Test Case 4: " << isValidUsername("-aste", "--aste")  << endl;
    cout << "Test Case 5: " << isValidUsername("artificial", "ARTIFICIAL") << endl;
    return 0;
}
