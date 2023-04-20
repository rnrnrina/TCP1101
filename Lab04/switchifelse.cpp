// LAB 4.4 The switch Statement
// ---4.4.3 Rewrite the program switch.cpp using if and else if statements rather than a switch statement.

#include <iostream>
using namespace std;
 
int main() {
    // system("clear");

    char grade;

    cout << "What grade did you earn in Programming I ?" << endl;
    cin >> grade;

    if (grade == 'A') {
        cout << "An A - excellent work !" << endl;
    } else if (grade == 'B') {
        cout << "You got a B - good job" << endl;
    } else if (grade == 'C') {
        cout << "Earning a C is satisfactory" << endl;
    } else if (grade == 'D') {
        cout << "While D is passing, there is a problem" << endl;
    } else if (grade == 'F') {
        cout << "You failed - better luck next time" << endl;
    } else {
        cout << "You did not enter an A, B, C, D, or F" << endl;
    }

    return 0;
}

/*
NOTES
To compile:
g++ switchifelse.cpp -o switchifelse

To run:
./switchifelse
*/