// Calculate the amount for each people after the total is given plus tip
// First take the percentage of tip divide by 100 then add 1 to multiply
// by the amount of money for the food then add the result to the total amount
// for food to receive the total amount plus taxes

#include <iostream> // Library required for cout and cin function


using namespace std; // holds a number of standard names, allows use of simplified syntax in C++


int main() {  // indicates that our program is starting

    // Step 1: Declare and initialize objects

    cout << "Enter the amount of the bill: " << endl;
    double total_amount; // This is taking in the total amount for the food
    cin >> total_amount;

    cout << "Enter the amount of people: " << endl;
    double total_people; //This is taking in the amount of people
    cin >> total_people;

    cout << "Enter the percentage of tip: " << endl;
    double tip; //This is taking in the percentage of tip for the meal
    cin >> tip;

    //Step 2: Compute the Final amount for the meal, meaning after taxes

    double Final_amount = total_amount + (total_amount * (tip / 100));


    //Step 3: Divide the Final after tip amount by the amount of people in the group

    double Amount_per_person = Final_amount / total_people;

    // Step 4: Print the Final amount and the amount each people will have to pay

    cout << "Total amount of the Bill plus tip: $" << Final_amount << ". Amount to be paid by each person: $"
    << Amount_per_person << "." << endl;

    //Step 5: Exit the program

    return 0;

}

