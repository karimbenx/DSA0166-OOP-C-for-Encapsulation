#include <iostream>
using namespace std;
class Box {
public:
    int length;
    void setWidth(int w) {
        width = w;
    }
    int getWidth() {
        return width;
    }
private:
    int width;
};
int main() {
    Box box;
    int length, width;
    cout << "Enter the Length of box: ";
    cin >> length;
    cout << "Enter the Width of box: ";
    cin >> width;
    box.length = length;
    box.setWidth(width);
    cout << "Length of box: " << box.length << endl;
    cout << "Width of box: " << box.getWidth() << endl;
    return 0;
}
