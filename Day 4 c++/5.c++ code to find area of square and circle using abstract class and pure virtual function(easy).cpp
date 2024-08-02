#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual void area() = 0; // pure virtual function
};
class Square : public Shape {
    float length;
public:
    Square(float l) : length(l) {}
    void area() {
        cout << "Area of square: " << length * length << endl;
    }
};
class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}
    void area() {
        cout << "Area of circle: " << M_PI * radius * radius << endl;
    }
};
int main() {
    float radius, length;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> length;
    Circle c(radius);
    Square s(length);
    c.area();
    s.area();
    return 0;
}
