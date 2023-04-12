// LAB 3.1 Working with the cin Statement
// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to the screen.

#include <iostream>
#include <iomanip>
/*
NOTES
* iomanip header file provides various functions and tools for manipulating the input and output stream formatting in C++.
* Ex. setprecision(), fixed, showpoint, setting the width and alignment of output, displaying values in different number bases, and displaying special characters.
*/
#include <string>           // ---3.1.4

using namespace std;

int main()
{
    int quantity;    // contains the amount of items purchased
    float itemPrice; // contains the price of each item
    float totalBill; // contains the total bill.

    cout << setprecision(2) << fixed << showpoint;           // output: $241.56
    // cout << setprecision(2) << showpoint;            // ---3.1.2 output: $2.4e+02
    // cout << setprecision(4) << fixed;            // ---3.1.3 output: $241.5600
    /*
    NOTES
    * setprecision(NUM): any floating-point numbers that are outputted to cout will be rounded to [NUM] decimal places.
    * fixed: the number of digits to the right of the decimal point will always be the same, regardless of the magnitude of the number.
    * showpoint: ensures that the decimal point is always displayed for floating-point values, even if there are no digits to the right of the decimal point.
    */

    // ---3.1.4
    // string itemName;
    string itemName;
    cout << "Please input the name of the item" << endl;
    // cin >> itemName;
    getline(cin, itemName);

    // ---3.1.1
    cout << "Please input the number of items bought" << endl;

    // Fill in the input statement to bring in the quantity.
    cin >> quantity;
    
    // Fill in the prompt to ask for the price.
    cout << "Please input the price of the item" << endl;

    // Fill in the input statement to bring in the price of each item.
    cin >> itemPrice;

    cout << "\nThe item you bought is " << itemName;         // ---3.1.4

    // Fill in the assignment statement to determine the total bill.
    totalBill = quantity * itemPrice;

    // Fill in the output statement to print total bill, with a label to the screen.
    cout << "\nThe total bill is $" << totalBill << endl;

    return 0;
}

/*
NOTES
To compile:
g++ bill.cpp -o bill

To run:
./bill
*/
