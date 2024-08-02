#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {15, 14, 25, 32, 14, 31};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    int result = linearSearch(arr, n, x);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
