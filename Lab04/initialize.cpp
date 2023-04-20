// LAB 4.1 Relational Operators and the if Statement
// This program tests whether or not an initialized value is equal to a value input by the user

#include <iostream>
using namespace std;

int main()
{
    system("clear");

    int num1,     // num1 is not initialized
        num2 = 5; // num2 has been initialized to 5

    cout << "Please enter an integer" << endl;
    cin >> num1;

    cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

    /*
    // if (num1 = num2)         // ---4.1.1 error
    if (num1 == num2)
        //// cout << "Hey, thats a coincidence!" << endl;
        cout << "The values are the same. Hey, thats a coincidence!" << endl;          // ---4.1.3

    if (num1 != num2)
        cout << "The values are not the same" << endl;
    */

    // ---4.1.4 modify into single if/else statement
    if (num1 == num2) {
        cout << "The values are the same. Hey, that's a coincidence!" << endl;
    } else  {
        cout << "The values are not the same" << endl;
    }

    return 0;
}

/*
NOTES
To compile:
g++ initialize.cpp -o initialize

To run:
./initialize
*/