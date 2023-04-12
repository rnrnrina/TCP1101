// LAB 3.5 Student Generated Code Assignments
// Option 2: Write a program that will input the amount of chairs sold for each style. It will print the total dollar sales of each style as well as the total sales of all chairs in fixed point notation with two decimal places.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string style1 = "American Colonial";
const string style2 = "Modern";
const string style3 = "French Classical";

const double price1 = 85.00;
const double price2 = 57.50;
const double price3 = 127.75;
 
int main() {
    // system("clear");

    double total1, total2, total3;
    int quantity1, quantity2, quantity3;

    cout << "\nPlease input the number of " << style1 << " chairs sold" << endl;
    cin >> quantity1;

    cout << "\nPlease input the number of " << style2 << " chairs sold" << endl;
    cin >> quantity2;

    cout << "\nPlease input the number of " << style3 << " chairs sold" << endl;
    cin >> quantity3;

    cout << setprecision(2) << fixed << showpoint;
    
    total1 = price1 * quantity1;
    cout << "\nThe total sales of " << style1 << " chairs: $" << total1 << endl;

    total2 = price2 * quantity2;
    cout << "\nThe total sales of " << style2 << " chairs: $" << total2 << endl;

    total3 = price3 * quantity3;
    cout << "\nThe total sales of " << style3 << " chairs: $" << total3 << endl;

    double total = total1 + total2 + total3;
    cout << "\nThe total sales of all chairs: $ " << total << endl;

    return 0;
}

/*
NOTES
To compile:
g++ furniture.cpp -o furniture

To run:
./furniture
*/
