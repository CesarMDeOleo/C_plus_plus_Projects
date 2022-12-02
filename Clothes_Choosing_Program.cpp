// This program suggests what outfits to wear in either warm or cold weather

#include <iostream> // Library needed for cout and other program basics

#include <time.h> // Library needed for time function

using namespace std; // Allows use of simplified syntax in C++

int main() {
    // Step 1: Declare and initialize all variables
    // Weather, Warm and Cold tops, and Warm and Cold bottoms
    char weather;
    cout << "What is the current weather: warm => (W) or cold => (C)" << endl;
    cin >> weather;

    int WarmTops;
    int WarmBottoms;

    int ColdTops;
    int ColdBottoms;
    // Step 2: Use computer time to use the random seed
    srand(time(NULL));


    // Step 3: Calculation to make if Warm selected
    if (toupper(weather) == 'W') { // toupper converts a character to upper case
        cout << "\nI got you. I'm going to make you the best Warm weather outfit ever. \n";

        // 3.1: Random number generator for warm tops and bottoms
        WarmTops = rand() % 6 + 1;
        WarmBottoms = rand() % 6 + 1;

        // 3.2: This will print the chosen warm top
        cout << "\nUse this Top: ";
        // 3.3: This will choose the random number generated and equal it to the case and pick that top
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
        // 3.4: This will print the chosen warm bottom
        cout << "\nUse this Bottoms: ";

        // 3.5: This will choose the random number generated and equal it to the case and pick that bottom
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

    // Step 4: Calculation to make if Cold selected
    if (toupper(weather) == 'C') {  // toupper converts a character to upper case
        cout << "\nOh my chills. Make sure to wear this or else you will freeze to death. \n";

        // 4.1: Random number generator for cold tops and bottoms
        ColdTops = rand() % 6 + 1;
        ColdBottoms = rand() % 6 + 1;


        // 4.2: This will print the chosen cold top
        cout << "\nUse this Top: ";

        // 4.3: This will choose the random number generated and equal it to the case and pick that top
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
        // 4.4: This will print the chosen cold bottom
        cout << "\nUse this Bottoms: ";

        // 4.5: This will choose the random number generated and equal it to the case and pick that bottom
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
        // Step 5: Make sure to bring your timbs
        cout << "\nMake sure to put on your timbs." << endl;
    }

    // Step 6: exit the program.
    return 0;
}
