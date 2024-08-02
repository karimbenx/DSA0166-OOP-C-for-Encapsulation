#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void removeDuplicates(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
}
void displayArray(const vector<int> &arr) {
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {15, 14, 25, 14, 32, 14, 31};
    cout << "Original Array: ";
    displayArray(arr);
    removeDuplicates(arr);
    cout << "Sorted Array without duplicates: ";
    displayArray(arr);
    return 0;
}
