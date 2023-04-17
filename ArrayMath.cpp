#include <iostream>
#include <cmath>

using namespace std;

int main() {


    // This line declares the variable number and assigns the value 5 to it.
    int number = 5;

    // This line declares an array of doubles called result with size of number.
    double result[number];

    // This line declares an array of doubles called my_array and initializes it with some values.
    double my_array[number] = {1,5,10,12,4};

    // This line prints the original array.
    cout << "The original array is: " << endl;

    // This for loop iterates through the elements of my_array and prints them.
    for (int i = 0; i < number; i++) {

        cout << my_array[i] << ' ';

    }

    cout << endl;

    for (int i = 0; i < number; i++) {

        result[i] = (my_array[i]+10) / (2);

    }

    // This line prints the results of the first operation.
    cout << "\nThe answer to the first operation is:\n";


    for (int i = 0; i < number; i++) {

        cout << result[i] << ' ';
    }

    // This line prints a new line for the new operation.
    cout << "\n\nThe answer to the second operation is:\n";


    for (int i = 0; i < number; i++) {

        result[i] = pow(my_array[i], 3);

    }


    for (int i = 0; i < number; i++) {

        cout << result[i] << ' ';
    }

    // This line prints a new line for the new operation.
    cout << "\n\nThe answer to the third operation is:\n";


    for (int i = 0; i < number; i++) {

        result[i] = pow(my_array[i], 0);

    }


    for (int i = 0; i < number; i++) {

        cout << result[i] << ' ';
    }

    // This line prints a new line for the new operation.
    cout << "\n\nThe answer to the fourth operation is:\n";


    for (int i = 0; i < number; i++) {

        result[i] = 1/sqrt(my_array[i]);

    }


    for (int i = 0; i < number; i++) {

        cout << result[i] << ' ';
    }

    // This line prints a new line for the new operation.
    cout << "\n\nThe answer to the fifth operation is:\n";


    for (int i = 0; i < number; i++) {

        result[i] = pow(my_array[i], 0) + 10;

    }

    for (int i = 0; i < number; i++) {

        cout << result[i] << ' ';
    }

    // This line prints a new line for the new operation.
    cout << "\n\nThe answer to the sixth operation is:\n";

    for (int i = 0; i < number; i++) {

        result[i] = (my_array[i])/(my_array[i] + 3);

    }

    for (int i = 0; i < number; i++) {

        cout << result[i] << ' ';
    }

    cout << endl;

    return 0; // ends the program
}