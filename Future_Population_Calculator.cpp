#include <iostream>

#include <cmath>

#include <unistd.h>

#include <iomanip>


using namespace std;

double population(char & , char & , char & ); // Function to calculate the effect of the special conditions
void calculation_p(double & , double & , double & , double & , double & ); // calculate the future population of the animal

int main() {

    // Greetings the user

    cout << "\nHello there, this a population simulator application"
            ".\n\nThe program will calculate the future population of an animal species "
            "based on 4 different attributes.\nFirst the initial population of the animal,"
            " then the level of predators in the environment, \nthe level of Habitat fragmentation, the future"
            " effect of climate change and natural disasters, and the amount of time." << endl;

    sleep(5);

    char again = 'Y'; // Variable to repeat the simulation

    while (again == 'y' || again == 'Y') { // While statement that will repeat the simulation

        // Special conditions questions for the user

        double animal_amount;
        cout << "\nWhat is the initial population of this Animal Species?" << endl;
        cin >> animal_amount;

        char weather;
        cout << "\nHow much is climate change and natural disasters "
                "predicted to affect this Animal's environment in the future?"
                "\nLow => (L), Average => (A), Severe => (S)" << endl;
        cin >> weather;

        char predators;
        cout << "\nWhat is the predator level in the habitat of this animal species?"
                "\nLow => (L), Average => (A), Severe => (S)" << endl;
        cin >> predators;

        char fragmentation;
        cout << "\nWhat is the future predicted level of Habitat fragmentation that this species will experience? "
                "\nLow => (L), Average => (A), Severe => (S)" << endl;
        cin >> fragmentation;

        // Time questions for the user

        double start_time;
        cout << "\nWhat in what year of the development of this animal's population would you like to start in?" <<
             endl;
        cin >> start_time;

        double end_time;
        cout << "\nIn what year should you like in to end in?" << endl;
        cin >> end_time;

        // Time interval question

        double time_interval;
        cout << "\nWhat time interval would you like to experience?" << endl;
        cin >> time_interval;

        // Creates the table of the values

        cout << "\nPopulation" << setw(12) << "Time\n" << endl;

        // Total value of the Special conditions questions

        double total = population(weather, predators, fragmentation);

        // Will calculate the change in population for the animal

        calculation_p(animal_amount, total, start_time, end_time, time_interval);

        // Asks the user if they want to do another simulation

        cout << "\n\nWould you like to get the analysis of another species? Yes => (Y) or No => (N)" << endl;
        cin >> again;

        if (again == 'N' || again == 'n') { // Will give a message if the user decides to not run the simulation again
            cout << "\nWell thank you for using this simulation program." << endl;
        }

    } // end of the While statement

    return 0; // Ends the program

} // end of the main function

double population(char & weather, char & predators, char & fragmentation) {

    // Initializing variables

    double total;
    double weather_num;
    double predators_num;
    double fra_num;

    // If statement to change the values of the weather value that corresponds to climate change

    if (weather == 'L' || weather == 'l') {

        weather_num = 0.05;

    } else if (weather == 'A' || weather == 'a') {

        weather_num = 0.01;

    } else if (weather == 'S' || weather == 's') {

        weather_num = -0.1;

    } else {

        weather_num = 0;

    }

    // If statement to change the values of the predator value that corresponds to the predator level

    if (predators == 'L' || predators == 'l') {

        predators_num = 0.1;

    } else if (predators == 'A' || predators == 'a') {

        predators_num = 0.05;

    } else if (predators == 'S' || predators == 's') {

        predators_num = 0.01;

    } else {

        predators_num = 0;

    }

    // If statement to change the values of the fragmentation value that corresponds to habitat fragmentation change

    if (fragmentation == 'L' || fragmentation == 'l') {

        fra_num = 0.05;

    } else if (fragmentation == 'A' || fragmentation == 'a') {

        fra_num = 0.01;

    } else if (fragmentation == 'S' || fragmentation == 's') {

        fra_num = -0.1;

    } else {

        fra_num = 0;

    }

    total = fra_num + predators_num + weather_num; // adds the value for total value for the special condition questions

    return total; // returns the total value of the changes for the population equation

} // end of function

void calculation_p(double & animal_amount, double & total, double & start_time, double & end_time, double & time_interval) {

    double population_equation; // initializing the equation that will produce the future population values

    do { // do-while loop

        population_equation = animal_amount * pow((1 + total), start_time);

        cout << round(population_equation) << setw(15) << start_time << endl;

        if (population_equation < 1) {

            cout << "\nI'm sorry but this poor animal has gone extinct. In about year: " << start_time <<
                 " of this simulation." << endl;

            return; // Ends the program
        }

        start_time = start_time + time_interval; // changes the start time value that will calculate the future population

    } while (start_time <= end_time); // end of do-while loop

    if (population_equation > animal_amount) { // Will give the user a message that the population is increasing

        cout << "\nAmazing it looks like the population of this animal species is steadily growing." << endl;

    }

} // end of function