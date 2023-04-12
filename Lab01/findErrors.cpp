// findErrors.cpp
// Purpose: Find and fix errors. Program has one syntax error and one logic error.
// NISRINA FAKHRIATI 1201303193

#include <iostream>
// using namespace std     // SYNTAX ERROR
using namespace std;       // Correction: semicolon added

int main() {
    system("clear");

    double length = 0,      // Length of a room in feet
        // width = 0,       // Width of a room in feet
        width,
        area;               // Area of the room in sq. ft.

    // Get the room dimensions
    cout << "Enter room length (in feet): ";
    cin >> length;

    cout << "Enter room width (in feet): ";
    // cin >> length;       // LOGIC ERROR
    cin >> width;           // Correction: changed length to width

    // Compute and display the area
    area = length * width;
    cout << "The area of the room is " << area << " square feet." << endl;

    return 0;
}

/*
NOTES
To compile:
g++ findErrors.cpp -o findErrors

To run:
./findErrors
*/