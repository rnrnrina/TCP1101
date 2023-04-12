// LAB 3.5 Student Generated Code Assignments
// Option 1: Write a program that will read in 3 grades from the keyboard and will print the average (to 2 decimal places) of those grades to the screen. It should include good prompts and labeled output. Use the examples from the earlier labs to help you. Notice in the sample run that the answer is stored in fixed point notation with two decimal points of precision.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // system("clear");

    double grade1, grade2, grade3, average;

    cout << "\nPlease input the first grade" << endl;
    cin >> grade1;

    cout << "\nPlease input the second grade" << endl;
    cin >> grade2;

    cout << "\nPlease input the third grade" << endl;
    cin >> grade3;

    average = ((grade1 + grade2 + grade3) / 3);
    cout << setprecision(2) << fixed;
    cout << "\nThe average of the three grades is " << average << endl;

    return 0;
}

/*
NOTES
To compile:
g++ avggrade.cpp -o avggrade

To run:
./avggrade
*/
