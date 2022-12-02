// This program calculates the Fine for someone that has been speeding on the road
// The fine is based on if the person has a previous offence or not

#include <iostream>


using namespace std;

double finecalc(double speed, char offse); // Function that will calculate the amount of the offense

int main() {

    // Initializing variables
    char offsense;
    double velocity;

    // Greeting to the user and initial question about how fast was the person going
    cout << "\nTime to calculate that criminal's fine."
            " How fast(mph) were they going?" << endl;
    cin >> velocity;

    // Gets the first or second offense value
    cout << "\nWas this their First or Second offense? First => F, Second => S." << endl;
    cin >> offsense;

    // If statement to give values under 66 a response
    if (velocity >= 66) {
        // Fines for speeds 66 and above
        cout << "\nThis person will have to pay $" << finecalc(velocity, offsense) << " for their crime." << endl;
    } else {
        // For speeds under 66
        cout << "\nGoing at this speed doesn't represent a criminal offense." << endl;
    } // end of if statement

    return 0; // Ends/Exits the program
}

double finecalc(double speed, char offse) { // Function takes the user input to calculate fine

    int payment = 0; // variable that will return the amount of the fine

    switch (toupper(offse)) { // switch case for the First offense charge
        case 'F': {
            if (speed >= 66 && speed <= 70) { // For if speed is between 66 and 70 and first offense
                payment = 250;
            } else if (speed >= 71 && speed <= 80) { // For if speed is between 71 and 80 and first offense
                payment = 300;
            } else if (speed >= 81 && speed <= 89) { // For if speed is between 81 and 89 and first offense
                payment = 450;
            } else if (speed >= 90) { // For if speed is greater than 90 and first offense
                payment = 1000;
            }
            break;
        } // End of F case

        case 'S': { // Switch case for the Second offense charge
            if (speed >= 66 && speed <= 70) { // For if speed is between 66 and 70 and second offense
                payment = 350;
            } else if (speed >= 71 && speed <= 80) { // For if speed is between 71 and 80 and second offense
                payment = 450;
            } else if (speed >= 81 && speed <= 89) { // For if speed is between 81 and 89 and second offense
                payment = 600;
            } else if (speed >= 90) { // For if speed is greater than 90 and second offense
                payment = 1500;
            }
            break;
        } // End of S case
    } // End of Switch

    return payment; // Returns the amount of money the fine will be!

}