#include <iostream>
#include <cmath>
using namespace std;
class Circle {
protected:
    float radius;
public:
    void getRadius() {
        cout << "Enter the radius: ";
        cin >> radius;
    }
    float areaCircle() {
        return M_PI * radius * radius;
    }
};
class Rectangle : public Circle {
protected:
    float length;
    float breadth;
public:
    void getDimensions() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    float areaRectangle() {
        return length * breadth;
    }
};
class Cylinder : public Rectangle {
protected:
    float height;
public:
    void getHeight() {
        cout << "Enter the height: ";
        cin >> height;
    }
    float volumeCylinder() {
        return M_PI * radius * radius * height;
    }
};
int main() {
    Cylinder cyl;
    cout << "Getting the radius of the circle" << endl;
    cyl.getRadius();
    cout << "The area = " << cyl.areaCircle() << endl << endl;
    cout << "Getting the length and breadth of the rectangle" << endl;
    cyl.getDimensions();
    cout << "The area = " << cyl.areaRectangle() << endl << endl;
    cout << "Getting the height and radius of the cylinder" << endl;
    cyl.getRadius();
    cyl.getHeight();
    cout << "The volume of the cylinder is: " << cyl.volumeCylinder() << endl;

    return 0;
}
