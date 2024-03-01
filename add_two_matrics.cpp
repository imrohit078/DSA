#include<iostream>
using namespace std;
int main() {
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    // Take input of first matrix
    cout << "Enter the elements of first matrix: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Take input of second matrix
    cout << "Enter the elements of second matrix: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the resulting matrix
    cout << "The sum of the two matrices is: \n" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
