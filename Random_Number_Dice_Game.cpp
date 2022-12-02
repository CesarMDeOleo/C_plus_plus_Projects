// Random numbers calculations

#include <iostream> // Library needed for cout and other program basics
#include <time.h> // Library needed for time function

using namespace std; // Allows use of simplified syntax in C++


int main() {

    // Step 1: Declare and initialize all variables


    int dice1_Manuel, dice2_Manuel;


    int dice1_Reyes, dice2_Reyes;

    int totaldice_Manuel, totaldice_Reyes;

    // Step 2: Use computer time to use the random seed

    srand (time(NULL));


    // Step 3: Calculate the values of the Manuel's two dice and Reyes's two dice.

    dice1_Manuel = rand()%6+1; // range 1 to 6
    dice2_Manuel = rand()%6+1;
    dice1_Reyes = rand()%6+1;
    dice2_Reyes = rand()%6+1;


    // Step 4: Add the values of each of the Student's values.

    totaldice_Manuel = dice1_Manuel + dice2_Manuel;
    totaldice_Reyes = dice1_Reyes + dice2_Reyes;

    // Step 5: Print the result to the screen for the user.

    cout << "\nTotal of Manuel: " << totaldice_Manuel
    << "\nTotal of Reyes: " << totaldice_Reyes << endl;

    // Step 6: exit the program.
    return 0;
}
