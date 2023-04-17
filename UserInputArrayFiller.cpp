#include <iostream>

using namespace std;

// Initialize the Global variables
const int NUM_COLUMNS = 7;
const int NUM_ROWS = 3;
const int JUMP_SIZE = 7;

void fillArray(double list[], double first, double last, int jump); // Creating the user-defined function

int main() {

    int first, last; // Initialize the variables

    // Initialize the arrays
    double firstLine[NUM_COLUMNS];
    double secondLine[NUM_COLUMNS];
    double thirdLine[NUM_COLUMNS];
    double arr[NUM_ROWS][NUM_COLUMNS];

    // Fill first row of array
    cout << "Enter the first value of the first row:\n";
    cin >> first;

    cout << "Enter the last value of the first row:\n";
    cin >> last;

    fillArray(firstLine, first, last, JUMP_SIZE); // function will put the values into the 2-d array

    // Fill second row of array
    cout << "Enter the first value of the second row:\n";
    cin >> first;

    cout << "Enter the last value of the second row:\n";
    cin >> last;

    fillArray(secondLine, first, last, JUMP_SIZE); // function will put the values into the 2-d array

    // Fill third row of array
    cout << "Enter the first value of the third row:\n";
    cin >> first;

    cout << "Enter the last value of the third row:\n";
    cin >> last;

    fillArray(thirdLine, first, last, JUMP_SIZE); // function will put the values into the 2-d array

    // Copy values from individual rows to 2D array
    for (int i = 0; i < NUM_COLUMNS; i++) {
        arr[0][i] = firstLine[i];
        arr[1][i] = secondLine[i];
        arr[2][i] = thirdLine[i];
    }

    cout << endl;

    // Print contents of array
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLUMNS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

void fillArray(double list[], double first, double last, int jump) {

    double interval = (last - first) / (jump - 1); // Calculates the interval for the matrix

    for (int i = 0; i < jump; i++) { // Calculates the values that will be put into the array
        list[i] = first + i * interval;
    }
}