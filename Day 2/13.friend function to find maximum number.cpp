#include <iostream>
using namespace std;
class Largest {
    int a, b, m;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    friend void find_Max(Largest);
};
void find_Max(Largest obj) {
    obj.m = (obj.a > obj.b) ? obj.a : obj.b;
    cout << "Maximum number is " << obj.m << endl;
}
int main() {
    Largest obj;
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    obj.setData(a, b);
    find_Max(obj);
    return 0;
}
