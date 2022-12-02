// This program performs currency conversion from dollars to 
// E => euros, P => mexican pesos, S => pounds sterling, C => canadian dollars, D => dominican pesos
 
#include <iostream> 
using namespace std; 

int main() 
{ 
    double dollars, equivalentCurr;             // variables for dollar amount and equivalent value 
    char currencyCode;                          // variable for selecting currency 
    const double 
        ECONVERSION{1.02},                    // conversion rate for euros
        PCONVERSION{20.15},                   // conversion rate for pesos
        SCONVERSION{0.9},                    // conversion rate for pounds
        CACONVERSION{1.3833},                   // Added the conversion rate for canadian dollars
        DACONVERSION{53.60};                    // and the conversion rate for dominican pesos
     
    cout << "enter dollar amount: $";      // Prompt user for dollar value
    cin >> dollars;                             // Save the user input to dollars 
    cout << "enter currency code: \n"           // Prompt user for currency input 
         << "E => Euros \n" 
            "P => Mexican Pesos \n" 
            "S => British Pounds Sterling \n"
            "C => Canadian Dollar \n"           // Added the text so the user can choose to convert to canadian dollar
            "D => Dominican Pesos \n";          // or dominican pesos
    cin >> currencyCode;                        // Save the user input for which currency 
    switch(toupper(currencyCode)) {  // toupper converts a character to upper case 
        case 'E':                               // Calculation to make if euros selected 
            cout << "converting dollars to euros.. \n"; 
            equivalentCurr = dollars * ECONVERSION; 
            break; 
        case 'P':                              // Calculation to make if pesos selected 
            cout << "converting dollars to pesos.. \n"; 
            equivalentCurr = dollars * PCONVERSION; 
            break; 
        case 'S':                              // Calculation to make if pounds selected 
            cout << "converting dollars to pounds sterling.. \n"; 
            equivalentCurr = dollars * SCONVERSION; 
            break;
        case 'C':                             // Included the case C for the Calculation to make if canadian pounds selected
            cout << "converting dollars to canadian dollar... \n";
            equivalentCurr = dollars * CACONVERSION; // This will simply multiply the dollar amount times the canadian conversion rate
            break;
        case 'D':                             // Included the case D for Calculation to make if dominican pesos selected
            cout << "converting dollars to dominican pesos... \n";
            equivalentCurr = dollars * DACONVERSION; // This will simply multiply the dollar amount times the dominican conversion rate
            break;
        default:                              // Calculation to make if invalid input selected 
            cout << currencyCode << "not supported at this time \n"; 
            equivalentCurr = dollars; 
            break; 
    } 
    cout << "Equivalent amount: " << equivalentCurr << endl;    // Print the result 
 
    return 0; 
} 
