#include <iostream>
using namespace std;
class Number {
public:
    int x;
    int* ptr;
    void setx() {
        cout << "Enter the X value: ";
        cin >> x;
        this->x = x;
        ptr = &x;
    }
    void getx() {
        cout << "X value is: " << *ptr << endl;
    }
};
int main() {
    Number number;
    number.setx();
    number.getx();
    return 0;
}
