// LAB 3.3 Arithmetic Operations and Math Functions
// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

#include <iostream>
#include <cmath> // needed for math functions like sqrt()
#include <iomanip>          // ---3.3.3 directive (i/o manipulation)

using namespace std;

int main()
{
    float a, b; // the smaller two sides of the triangle
    float hyp;  // the hypotenuse calculated by the program

    cout << "Please input the value of the two sides" << endl;

    cin >> a >> b;

    // Fill in the assignment statement that determines the hypotenuse
    hyp = sqrt((a*a) + (b*b));

    cout << "The sides of the right triangle are " << a << " and " << b << endl;

    cout << setprecision(2) << fixed << showpoint;          // ---3.3.3 formatted feature
    cout << "The hypotenuse is " << hyp << endl;

    return 0;
}

/*
NOTES
To compile:
g++ righttrig.cpp -o righttrig

To run:
./righttrig
*/
