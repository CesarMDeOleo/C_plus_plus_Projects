// Challenge 7 part 2
// First include the libraries that will be used

#include <iostream>

#include <cmath>

#include <unistd.h>

#include <time.h>

using namespace std;

int main() {

    // Declare and initialize the again variable
    char again = 'Y';
    // While loop design to make the program run again if the user desires so
    while (again == 'y' || again == 'Y') {

        // Declare and initialize objects
        int count(1), ceiling(5);
        bool done(false);
        char answer;
        const char YES('Y'), NO('N');

        // Random number variables for the do-while question loop

        srand(time(NULL));
        int random_digit;
        int array_value = 0;
        int special_random_array_value;

        // Initial user greet will ask if the user is thinking of an answer for the game
        cout << "\nWhat would be the first thing you would buy if you become a millionaire tomorrow?\n" <<
             "\nI will try to guess it in 4 " <<
             "or fewer tries. Just answer Y for yes or N for no to my questions.\n" <<
             "\nPlease MENTALLY choose from the following 10 \n" << sleep(3) << // Will stop the program for 2 seconds so user can read
             "1. A mansion\n"
             "02. A supercar\n"
             "03. Newest iPhone\n"
             "04. A luxury vacation package\n"
             "05. An 8k T.V\n"
             "06. Pay off your debt\n"
             "07. Designer clothes\n"
             "08. Buy stocks\n"
             "09. A private jet\n"
             "10. A company\n" <<
             "\nAre you thinking of an answer? " << endl;
        cin >> answer; // records the user's answer to begin the switch cases

        switch (toupper(answer)) { // switch case for the user's response to the previous question
            case YES: { // if user's response is yes this case will run
                string guess_a[] { // Array of question parts that will be asked to the user each (except for the first) will be chosen randomly
                        "A whole company",
                        "A place to live in",
                        "Something that can fly",
                        "Expensive clothes",
                        "Pieces of a company",
                        "Debt relief",
                        "An expensive car",
                        "A big expensive T.V",
                        "A new Phone",
                        "A luxury vacation"
                };

                do { // Loop which will iterate the questions to ask the user to guess their answer from the first question

                    special_random_array_value = rand() % 9 + 1; // random number generator from 1 to 9 inclusive

                    while (special_random_array_value == array_value) { // while loop that will make sure the same random number isn't used back to back in a program
                        random_digit = rand() % 9 + 1;
                        special_random_array_value = random_digit;
                    } // each random number represents one of the 10 question parts in the array

                    cout << "\nAre you thinking of " << guess_a[array_value] << '?' << endl; // prints out the randomly chosen question part

                    cin >> answer;

                    switch (toupper(answer)) { // second switch case for deciding if the guess was correct or not.
                        case YES: // case for the guess by the random number generator being correct
                            cout << "\nI guessed: " << guess_a[array_value] << endl;
                            cout << "\nI guessed it in " << count << " tries.\nI'm the best!" << endl;
                            done = true;
                            break; // end of this small yes case
                        case NO: // case No which counts the amount of times that there was a guess
                            // Must guess again.
                            ++count; // count of guesses
                            if (count >= ceiling) { // if statement that makes sure that program ends after the ceiling limit is meet.
                                cout << "\nI didn't guess it in time. That was just luck, go again!" << endl;
                                done = true;
                            }
                            break; // end of case NO
                        default: // if the user types something other than n or y
                            cout << "\nI don't support " << answer << " as an input only Y or N." << endl;
                            done = true;
                    }

                    array_value = special_random_array_value; // makes the random integer be equal to x which represents which random question part will be used

                } while (!done && answer != 'Y'); // end of the do-while loop
                // end of do-while loop
                break;
            } // end of the YES case
            case NO: // if user's response is yes this case will run
                cout << "\nWell if you got nothing in mind I can't do nothing about that." << endl;
                break; // end of the NO case
            default: // if the user types something other than n or y
                cout << "\nI don't support " << answer << " as an input only Y or N." << endl;
        } // the end of this massive switch case

        cout << "\nDo you want to play again? Y(yes) or N(no)" << endl;
        cin >> again;

    } // end of massive while loop

    return 0;
}