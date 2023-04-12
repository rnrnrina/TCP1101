// LAB 2.3 Rectangle Area and Perimeter
// This program will output the perimeter and area of the rectangle with a given length and width.
// NISRINA FAKHRIATI 1201303193

#include <iostream>
using namespace std;

const int length = 8;
const int width = 3;

int main() {
    // system("clear");

    // double length, width;
    double area;            // ? in this case, use float or double? --- A: double
    double perimeter;
    
    area = length * width;
    perimeter = (2 * length) + (2 * width);

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;

    return 0;
}

/*
NOTES
To compile:
g++ rectanglearea.cpp -o rectanglearea

To run:
./rectanglearea
*/