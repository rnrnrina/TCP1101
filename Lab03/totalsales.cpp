// LAB 3.5 Student Generated Code Assignments
// Option 3: Write a program that will input total sales (sales plus tax) that a business generates for a particular month. The program will also input the state and local sales tax percentage. It will output the total sales plus the state tax and local tax to be paid. The output should be in fixed notation with 2 decimal places.

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    // system("clear");             // system("cls"); for windows

    double totalSalesWithTax, totalSalesWithoutTax, stateTaxPercentage, localTaxPercentage, stateTax, localTax;

    cout << "Please input the total sales for the month" << endl;           // Input: 1080
    cin >> totalSalesWithTax;

    cout << "\nPlease input the state tax percentage in decimal form (.02 for 2%)" << endl;             // Input: 0.06 or 6%
    cin >> stateTaxPercentage;

    cout << "\nPlease input the local tax percentage in decimal form (.02 for 2%)" << endl;             // Input: 0.02 or 2%
    cin >> localTaxPercentage;

    cout << setprecision(2) << fixed << showpoint;
    
    cout << "\nThe total sales for the month is $" << totalSalesWithTax << endl;            // Desired output: 1080

    totalSalesWithoutTax = (totalSalesWithTax / (1 + (stateTaxPercentage + localTaxPercentage)));
    cout << "\nThe total sales without tax is $" << totalSalesWithoutTax << endl;           // Desired output: 1000

    stateTax = stateTaxPercentage * totalSalesWithoutTax;
    cout << "\nThe state tax for the month is $" << stateTax << endl;           // Desired output: 60

    localTax = localTaxPercentage * totalSalesWithoutTax;
    cout << "\nThe local tax for the month is $" << localTax << endl;           // Desired output: 20

    return 0;
}

/*
NOTES
To compile:
g++ totalsales.cpp -o totalsales

To run:
./totalsales
*/
