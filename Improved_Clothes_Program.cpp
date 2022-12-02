// This program suggests what outfits to wear in either warm or cold weather

#include <iostream> // Library needed for cout and other program basics

#include <time.h> // Library needed for time function

using namespace std; // Allows use of simplified syntax in C++

void warm_clothes(char & ); // Function calculation for the warm clothes to use
void cold_clothes(char & ); // Function to calculate the cold clothes to use
void Lucky(int number); // Function to calculate the amount of money the user can spend on buying the outfit.

int main() {
    //Initializing main variables
    int x = 0;
    char weather_c_w;
    cout << "What is the current weather: warm => (W) or cold => (C)" << endl; // Asking the user for their weather choose
    cin >> weather_c_w;

    // IF statement for the user if a non-supported input is given
    if (weather_c_w != 'W' && weather_c_w != 'C' && weather_c_w != 'w' && weather_c_w != 'c') {
        cout << "\nThe program doesn't support that as input." << endl;
    }

    if (weather_c_w == 'W' || weather_c_w == 'w') // If statement to run the warm clothes functions
    {
        warm_clothes(weather_c_w);

        cout << "\nYour budget for this outfit is $";
        Lucky(x); // Gives the user the amount of money the user can spend on buying the outfit
        cout << ".\n";
    }

    if (weather_c_w == 'C' || weather_c_w == 'c') // If statement to run the cold clothes functions
    {
        cold_clothes(weather_c_w);

        cout << "\nYour budget for this outfit is $";
        Lucky(x); // Gives the user the amount of money the user can spend on buying the outfit
        cout << ".\n";
    }

    return 0; // Exits the program
}

void warm_clothes(char & weather) {

    int WarmTops;
    int WarmBottoms;

    // Use computer time to use the random seed
    srand(time(NULL));

    // Random number generator for warm tops and bottoms
    WarmTops = rand() % 6 + 1;
    WarmBottoms = rand() % 6 + 1;
    int Lucky_number_Warm = WarmTops + WarmBottoms;

    // Calculation to make if Warm selected
    if (toupper(weather) == 'W') { // toupper converts a character to upper case
        cout << "\nI got you. I'm going to make you the best Warm weather outfit ever. \n";

        // This will print the chosen warm top
        cout << "\nUse this Top: ";
        // This will choose the random number generated and equal it to the case and pick that top
        switch (WarmTops) {
            case 1:
                cout << "White color short-sleeve polo shirt. \n";
                break;
            case 2:
                cout << "Cotton white color button-up shirt. \n";
                break;
            case 3:
                cout << "Red color sleeveless shirt. \n";
                break;
            case 4:
                cout << "Red Tank top. \n";
                break;
            case 5:
                cout << "Red Crewneck shirt. \n";
                break;
            case 6:
                cout << "White V-Neck shirt. \n";
                break;
        }
        // This will print the chosen warm bottom
        cout << "\nUse this Bottoms: ";

        // This will choose the random number generated and equal it to the case and pick that bottom
        switch (WarmBottoms) {
            case 1:
                cout << "Red khaki shorts. \n";
                break;
            case 2:
                cout << "White cargo shorts. \n";
                break;
            case 3:
                cout << "Red gym shorts. \n";
                break;
            case 4:
                cout << "Grey Chino shorts. \n";
                break;
            case 5:
                cout << "Denim shorts. \n";
                break;
            case 6:
                cout << "Red Bermuda shorts. \n";
                break;
        }
    }

}

void cold_clothes(char & weather) {

    int ColdTops;
    int ColdBottoms;
    // Use computer time to use the random seed
    srand(time(NULL));

    // Random number generator for cold tops and bottoms
    ColdTops = rand() % 6 + 1;
    ColdBottoms = rand() % 6 + 1;
    int Lucky_number_cold = ColdTops + ColdBottoms;

    // Calculation to make if Cold selected
    if (toupper(weather) == 'C') { // toupper converts a character to upper case
        cout << "\nOh my chills. Make sure to wear this or else you will freeze to death. \n";

        // This will print the chosen cold top
        cout << "\nUse this Top: ";

        // This will choose the random number generated and equal it to the case and pick that top
        switch (ColdTops) {
            case 1:
                cout << "Black Henley shirt. \n";
                break;
            case 2:
                cout << "Blue Long sleeve shirt. \n";
                break;
            case 3:
                cout << "Black Sweater. \n";
                break;
            case 4:
                cout << "Black Hoodie. \n";
                break;
            case 5:
                cout << "Green Jacket. \n";
                break;
            case 6:
                cout << "Black coat. \n";
                break;
        }
        // This will print the chosen cold bottom
        cout << "\nUse this Bottoms: ";

        // This will choose the random number generated and equal it to the case and pick that bottom
        switch (ColdBottoms) {
            case 1:
                cout << "Long denim jeans. \n";
                break;
            case 2:
                cout << "Black cargo pants. \n";
                break;
            case 3:
                cout << "Black Sweat pants. \n";
                break;
            case 4:
                cout << "Blue Skinny jeans. \n";
                break;
            case 5:
                cout << "Blue Harem pants. \n";
                break;
            case 6:
                cout << "Black Hiking pants. \n";
                break;
        }

    }
}

void Lucky(int number) { // Gives back the amount the user can spend

    if (number == 0) {
        srand(time(NULL));

        int amount = rand() % 100 + 1; // Random number that will become the amount of money the user can use
        cout << amount;
    }
}