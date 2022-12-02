//Factorial program
//Function definition: n! = n*(n-1)*(n-2)*..*
//                     0! is 1 by definition
//Function factorial returns n!
//Function factorial assumes n is non-negative int

#include <iostream>

using namespace std;

void factorial(double & , double & ); // Function that will do the factorial calculation
// It will take two values that will represent the number from the user and calculate its factorial
// This will then be given back to the user.

int main() {

    double user_number, final_result; // Initialization of variables

    cout << "Please enter a number to calculate the factorial: " << endl;
    cin >> user_number; // records the number inputted by the user

    if (user_number >= 0) { // IF statement that will print out the factorial only if the number is greater or equal to 0
        cout << "\n" << user_number << "! is equal to ";
        factorial(user_number, final_result);
        cout << final_result << ".\n";

    } else { // For if the number is negative
        cout << "not defined for negative numbers" << endl;
    } // End of IF statement

    return 0; // Exits out of the program
}

void factorial(double & number, double & nfactorial) {

    nfactorial = 1; // initializing local variables

    while (number > 1) { // while loop that calculates the factorial of the use inputted number

        nfactorial = nfactorial * number;
        number--;

    } // End of While loop

} // End of Function