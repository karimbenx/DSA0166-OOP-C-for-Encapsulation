#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    float arr[100];
    int n = 0;
    float input;
    cout << "Enter Infinite Numbers and (-1 To Stop Reading)" << endl;
    while (true) {
        cin >> input;
        if (input == -1)
            break;
        arr[n++] = input;
    }
    sort(arr, arr + n);
    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(arr+i) << endl;
    }
    return 0;
}
