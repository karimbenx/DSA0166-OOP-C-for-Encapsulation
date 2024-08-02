#include <iostream>
using namespace std;
class Complex {
public:
    int real;
    int imag;
    void setValues(int r, int i) {
        real = r;
        imag = i;
    }
    void display() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << endl;
        cout<<"The complex Numbers: "<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main() {
    Complex c;
    Complex *ptr = &c;
    int realPart, imagPart;
    cout << "Enter the real and imaginary parts: ";
    cin >> realPart >> imagPart;
    ptr->setValues(realPart, imagPart);
    ptr->display();
    return 0;
}
