#include <iostream>
using namespace std;
class Number {
protected:
    int num;
public:
    void getNumber() {
        cout << "Enter an integer number: ";
        cin >> num;
    }
};
class Square : public Number {
public:
    void showSquare() {
        cout << "Square of " << num << " is: " << num * num << endl;
    }
};
class Cube : public Number {
public:
    void showCube() {
        cout << "Cube of " << num << " is: " << num * num * num << endl;
    }
};
int main() {
    Square sq;
    Cube cb;
    sq.getNumber();
    sq.showSquare();
    cb.getNumber();
    cb.showCube();
    return 0;
}
