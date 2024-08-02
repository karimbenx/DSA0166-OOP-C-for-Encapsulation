#include <iostream>
using namespace std;
class Complex {
public:
    int real, imag;
    Complex operator+(const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    Complex operator-(const Complex &obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }
    void input() {
        cout << "Enter the value of Complex Numbers (real and imaginary part): ";
        cin >> real >> imag;
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1, c2, result;
    c1.input();
    c2.input();
    result = c1 + c2;
    cout << "Result of addition: ";
    result.display();
    result = c1 - c2;
    cout << "Result of subtraction: ";
    result.display();
    return 0;
}
