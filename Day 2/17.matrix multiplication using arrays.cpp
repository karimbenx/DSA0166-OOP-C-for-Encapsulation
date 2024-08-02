#include <iostream>
using namespace std;
int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int matrix1[row][col], matrix2[row][col], result[row][col];

    cout << "Enter the first matrix elements: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the second matrix elements: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Result of matrix multiplication: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
