// LAB 4.4 The switch Statement
// This program illustrates the use of the switch statement.

#include <iostream>
using namespace std;
int main()
{
    // system("clear");

    char grade;

    cout << "What grade did you earn in Programming I ?" << endl;
    cin >> grade;

    // ---4.4.2
    switch (grade)
    {
    case 'A':
    case 'B':
    case 'C':
    case 'D':
        cout << "YOU PASSED!" << endl;
        break;
    }

    switch (grade) // This is where the switch statement begins
    {
    case 'A':
        cout << "An A - excellent work !" << endl;
        break;
    case 'B':
        cout << "You got a B - good job" << endl;
        break;
    case 'C':
        cout << "Earning a C is satisfactory" << endl;
        break;
    case 'D':
        cout << "While D is passing, there is a problem" << endl;
        break;
    case 'F':
        cout << "You failed - better luck next time" << endl;
        break;
    default:
        cout << "You did not enter an A, B, C, D, or F" << endl;
    }

    /*
    ---4.4.1 output when break statements are removed:
    What grade did you earn in Programming I ?
    A
    An A - excellent work !
    You got a B - good job
    Earning a C is satisfactory
    While D is passing, there is a problem
    You failed - better luck next time
    You did not enter an A, B, C, D, or F
    */
   
    return 0;
}

/*
NOTES
To compile:
g++ switch.cpp -o switch

To run:
./switch
*/