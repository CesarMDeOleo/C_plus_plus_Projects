#include <iostream>

#include <unistd.h>


using namespace std;

int main() {

    cout << "\nThis medical device is intended for the average dog." << endl; // initial greeting for the user

    sleep(3); // time set up so that the user can read the prompt being displayed

    cout << "\nThe device will measure the dog's heart rate with a threshold value of 160 bpm,\n" // explanation of what the device does
            "which will display on the screen that the dog's heart rate has hit a dangerous level." << endl;

    sleep(4); // gives the user time to read the prompt above

    cout << "\nFor medium-sized dogs, a heart rate of 160 bpm and above is regarded as harmful."
            "\nSince this gadget is not a legitimate medical tool, "
            "we don't wish to draw any judgments regarding\nthe canine's cardiovascular condition. "
            "However, it's important to check on it to make sure your dog is healthy." << endl;

    sleep(7); // gives the user time to read the prompt above

    char answer; // initialization of variable that records the users answer to if their dog is medium-sized
    cout << "\nIs your dog considered a medium-sized dog? Yes => Y or No => N" << endl;
    cin >> answer;

    if (answer == 'N' || answer == 'n') { // if statement for when the answer is no

        cout << "\nSorry about that another model for your dog's size will be created in the future." << endl;

    } // end of if statement

    if (answer == 'Y' || answer == 'y') { // if statement for when the answer is yes

        cout << "\nWell, put the harness on your dog, making sure that the display faces "
                "in the opposite direction of the dog's face."
                " \nAfter that connect the red, blue, and black sensors to the dog"
                " in the position where they land on the harness." << endl; // tells user how to put on the harness

        sleep(5); // gives the user time to read the prompt above

        // tells user what the device is doing while its connected
        cout << "\nOnce the device is connected to the dog, it will start reading its heart rate.\n"
                "The LCD screen will print out the average heart rate of the dog per second;\n"
                "if this average goes above 160 bpm at any moment, the LCD will state a high heart rate alert." << endl;

    }  // end of if statement

    if (answer != 'N' && answer != 'n' && answer != 'Y' && answer != 'y') {

        cout << "\nThis isn't a supported input" << endl;

    }  // end of if statement

    return 0; // Exits the program
} // end of the main function