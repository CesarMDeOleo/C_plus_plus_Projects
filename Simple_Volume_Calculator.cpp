// This program calculates the volumes of right rectangular pyramids, cylinders, and spheres

#include <iostream>

#include <cmath>


using namespace std;

// First step create functions to calculate each individual volume

double sphere(double radius); // Function for the sphere volume
double cylinder(double radius_c, double height_c); // Function for the cylinder volume
double pyramid(double length, double width, double height); // Function for the pyramid volume

int main() {

    // Initialize the answer variable
    char answer;

    // Greet the user with the initial question
    cout << "\nWhat are Volume you trying to find?"
            " R => Right rectangular pyramid,"
            " S => Sphere,"
            " C => Cylinder." << endl;
    cin >> answer;

    // If statement for choosing which function to run and has a non-supported input message
    if (answer == 'S' || answer == 's') {
        double radius; // Initializes the radius variable for the Sphere
        cout << "\nWhat is the radius of this Sphere?" << endl;
        cin >> radius;
        cout << "\nThe volume of this Sphere is " << sphere(radius) << " m^3." << endl; // Prints out the calculated volume of the sphere
    } else if (answer == 'C' || answer == 'c') {
        double radius_c; // Initializes the radius variable for the Cylinder
        cout << "\nWhat is the radius of this Cylinder?" << endl;
        cin >> radius_c;
        double height_c; // Initializes the height variable for the Cylinder
        cout << "\nWhat is the height of this Cylinder?" << endl;
        cin >> height_c;
        cout << "\nThe volume of this Cylinder is " << cylinder(radius_c, height_c) << " m^3." << endl; // Prints out the calculated volume of the cylinder
    } else if (answer == 'R' || answer == 'r') {
        double length, width, height; // Initializes the variables for the Right rectangular pyramid
        cout << "\nWhat is the length of this Pyramid?" << endl;
        cin >> length;
        cout << "\nWhat is the width of this Pyramid?" << endl;
        cin >> width;
        cout << "\nWhat is the height of this Pyramid?" << endl;
        cin >> height;
        // Prints out the calculated volume of the Right rectangular pyramid
        cout << "\nThe volume of this Right rectangular pyramid is " << pyramid(length, width, height) << " m^3." << endl;
    } else {
        cout << "\nSorry, this input is not supported!" << endl;
    } // end of the If statement

    return 0; // Ends/Exits the program
}

double sphere(double radius) { // Sphere volume calculation function

    // Initializing the local variables that will form (4/3)
    float a = 4;
    float b = 3;

    // Calculates the volume of the sphere using the user input for the radius variable
    double volume_sphere = ((M_PI) * ((radius) * (radius) * (radius))) * (a / b);

    return volume_sphere; // Returns the value for the volume for the sphere

}

double cylinder(double radius_c, double height_c) { // Cylinder volume calculation function

    // Calculates the volume of the cylinder using the user input for the radius and height variables
    double volume_cylinder = (M_PI) * (radius_c * radius_c) * (height_c);

    return volume_cylinder; // Returns the value for the volume for the cylinder

}

double pyramid(double length, double width, double height) { // Right Rectangular Pyramid volume calculation function

    // Calculates the volume of the pyramid using the user input for the length, width, and height variables
    double volume_pyramid = (length * width * height) / 3;

    return volume_pyramid; // Returns the value for the volume for the Right Rectangular Pyramid

}