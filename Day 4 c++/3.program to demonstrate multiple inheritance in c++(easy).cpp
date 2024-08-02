#include <iostream>
using namespace std;
class Base1 {
public:
    float a;
    void setA(float val) {
        a = val;
    }
};
class Base2 {
public:
    float b;
    void setB(float val) {
        b = val;
    }
};
class Base3 : public Base1, public Base2 {
public:
    float c;
    void setC(float val) {
        c = val;
    }
    void display() {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "value of c: " << c << endl;
    }
};
int main() {
    float a,b,c;
    cout<<"Enter the value of a,b,c: "<<endl;
    cin>>a>>b>>c;
    Base3 obj;
    obj.setA(a);
    obj.setB(b);
    obj.setC(c);
    obj.display();
    return 0;
}
