// LAB 2.2 Working with Constants, Variables and Arithmetic Operators
// This program will output the circumference and area of the circle with a given radius.

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main() {
    // system("clear");

    double area;            // ? in this case, use float or double? --- double is better
    // float circumference;
    double circumference;
    // 2.2.3
    // Change the data type of circumference from float to int . Run the program and record the results.
    // int circumference;

    // FORMULA
    circumference = 2 * PI * RADIUS;
    area = PI * RADIUS * RADIUS;

    // Fill in the code for the cout statement that will output (with description) the circumference
    cout << "The circumference of the circle is " << circumference << endl;

    // Fill in the code for the cout statement that will output (with description) the area of the circle
    cout << "The area of the circle is " << area << endl;

    return 0;
}

/*
NOTES
To compile:
g++ circlearea.cpp -o circlearea

To run:
./circlearea
*/
