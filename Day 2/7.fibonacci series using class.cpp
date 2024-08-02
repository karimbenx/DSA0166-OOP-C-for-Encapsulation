#include <iostream>
using namespace std;
class Series {
public:
    void input(int n) {
        limit = n;
    }
    void show() {
        int a = 0, b = 1, next;
        cout << a << " " << b << " ";
        for (int i = 2; i < limit; ++i) {
            next = a + b;
            a = b;
            b = next;
            cout << next << " ";
        }
        cout << endl;
    }
private:
    int limit;
};
int main() {
    Series fib;
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;
    fib.input(limit);
    fib.show();
    return 0;
}
