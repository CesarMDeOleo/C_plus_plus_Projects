#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double A_array[3][3], B_array[3][3];
    int k = 2, m = 9;

    // Creating Array A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A_array[i][j] = k;
            k += 2;
        }
    }

    // Creating Array B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            B_array[i][j] = m;
            m--;
        }
    }

    // Displaying Array A
    cout << "\nArray A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A_array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Displaying Array B
    cout << "Array B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B_array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Raising each element of Array A to power 2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A_array[i][j] = pow(A_array[i][j], 2);
        }
    }
    cout << "This is how array A looks after being raised by 2 in each element:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A_array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Multiplying element-wise Array A by Array B
    double C_array[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C_array[i][j] = A_array[i][j] * B_array[i][j];
        }
    }
    cout << "This is how array A looks after being multiplied by array B element wise:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C_array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Multiplying matrix-wise Array A by Array B
    double D_array[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            D_array[i][j] = 0;
            for (int w = 0; w < 3; w++) {
                D_array[i][j] += A_array[i][w] * B_array[w][j];
            }
        }
    }
    cout << "This is how array A looks after being multiplied by Array B matrix-wise:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << D_array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}