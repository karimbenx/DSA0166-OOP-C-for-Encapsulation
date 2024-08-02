#include <iostream>
using namespace std;
class Rectangle {
public:
    int length;
    int width;
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};
int main() {
    Rectangle rects[2];
    rects[0].setDimensions(4, 7);
    rects[1].setDimensions(4, 5);
    for (int i = 0; i < 2; ++i) {
        cout << rects[i].area() << endl;
    }
    return 0;
}
