#include <iostream>
#include <string>
using namespace std;
inline bool isPalindrome(const string& str) {
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main() {
    string str;
    if (isPalindrome(str)) {
        cout << "THE GIVEN STRING IS PALINDROME" << endl;
    } else {
        cout << "THE GIVEN STRING IS NOT PALINDROME" << endl;
    }
    cout << "Test Case 1: " << (isPalindrome("MONEY") ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test Case 2: " << (isPalindrome("5678765") ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test Case 3: " << (isPalindrome("MALAY12321ALAM") ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test Case 4: " << (isPalindrome("MALAYALAM") ? "Palindrome" : "Not Palindrome") << endl;
    cout << "Test Case 5: " << (isPalindrome("1234.4321") ? "Palindrome" : "Not Palindrome") << endl;

    return 0;
}
