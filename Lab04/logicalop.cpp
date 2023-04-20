// LAB 4.3 Logical Operators
// This program illustrates the use of logical operators

#include <iostream>

using namespace std;

int main()
{
    system("clear");

    char year;
    float gpa;

    cout << "What year student are you ?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
         << endl
         << endl;
    cin >> year;

    cout << "Now enter your GPA" << endl;
    cin >> gpa;

    /*
    //// if (gpa >= 2.0 && year == '4')
    if (!(gpa <= 2.0) && year == '4')           // ---4.3.1
        cout << "It is time to graduate soon" << endl;
    //// else if (year != '4' || gpa < 2.0)
    else if (year < '4' || gpa < 2.0)           // ---4.3.2 yes(?) char can be letter, number, symbol
        cout << "You need more schooling" << endl;
    */

    // ---4.3.3
    if (gpa >= 2.0 || year == '4')
        cout << "It is time to graduate soon" << endl;
    else if (year != '4' && gpa < 2.0)
        cout << "You need more schooling" << endl;
    /*
    * who will graduate: year 4, those with gpa >= 2.0 including non-year 4
    * who won't graduate: anyone whose gpa <= 2.0 
    * problem: if year = 4, gpa = 1.9, output: It is time to graduate soon
    */

    return 0;
}


/*
NOTES
To compile:
g++ logicalop.cpp -o logicalop

To run:
./logicalop
*/