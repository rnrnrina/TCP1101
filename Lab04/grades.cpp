// LAB 4.2 if/else if Statements
// This program prints "You Pass" if a student's average is 60 or higher and prints "You Fail" otherwise

#include <iostream>
using namespace std;

int main()
{
    // system("clear");

    float average; // holds the grade average

    cout << "Input your average:" << endl;

    cin >> average;

    /*
    //// if (average > 60)
    if (average >= 60)          // ---4.2.1
        cout << "You Pass" << endl;
    if (average < 60)
        cout << "You Fail" << endl;
    */

    /*
    // ---4.2.2 modify into single if/else statement
    if (average >= 60) {
        cout << "You Pass" << endl;
    } else {
        cout << "You Fail" << endl;
    }
    */

    // ---4.2.3
    if (average >= 90 && average <= 100) {
        cout << "You are in 'A' category." << endl;
    } else if (average >= 80 && average <= 89) {
        cout << "You are in 'B' category." << endl;
    } else if (average >= 60 && average <= 79) {
        cout << "You Pass" << endl;
    } else if (average >= 0 && average <= 59) {
        cout << "You Fail" << endl;
    } else {
        cout << "Invalid data" << endl;
    }

    return 0;
}

/*
NOTES
To compile:
g++ grades.cpp -o grades

To run:
./grades
*/