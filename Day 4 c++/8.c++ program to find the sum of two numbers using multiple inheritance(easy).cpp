#include <iostream>
using namespace std;
class Base1 {
public:
    int x;
    void setx(int val){
    x=val;
    }
};
class Base2 {
public:
    int y;
    void sety(int val){
    y=val;
    }
};
class Derived : public Base1, public Base2 {
public:
    void displaySum() {
        cout << "Sum = " << x + y << endl;
    }
};
int main() {
    Derived obj;
    int val1, val2;
    cout << "enter value of x: ";
    cin >> val1;
    cout << "enter value of y: ";
    cin >> val2;
    obj.setx(val1);
    obj.sety(val2);
    obj.displaySum();
    return 0;
}
