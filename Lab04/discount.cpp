// LAB 4.5 Student Generated Code Assignments
/*
---Option 2: Write a program that prompts the user for the number of shirts required and then computes the total price. Make sure the program accepts only nonnegative input.

* The local t-shirt shop sells shirts that retail for $12. 

! Number of Shirts      Discount
* 5–10                  10%
* 11–20                 15%
* 21–30                 20%
* 31 or more            25%
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    // system("clear");

    const double priceShirt = 12;
    double discount, costPerShirt, totalCost;
    int numOfShirt;

    cout << "How many shirts would you like?" << endl;
    cin >> numOfShirt;

    if (numOfShirt >= 0) {
        if (numOfShirt >= 5) {
            discount = 0.1;
        } else if (numOfShirt >= 11) {
            discount = 0.15;
        } else if (numOfShirt >= 21) {
            discount = 0.2;
        } else if (numOfShirt >= 31) {
            discount = 0.25;
        } else {
            discount = 0;
        }

        costPerShirt = priceShirt * (1 - discount);
        totalCost = numOfShirt * costPerShirt;

        // cout << showpoint << setprecision(2) << fixed;
        cout << "The cost per shirt is $" << costPerShirt << " and the total cost is $" << totalCost << endl;

    } else {
        cout << "Invalid Input: Please enter a nonnegative integer" << endl;
    }

    return 0;
}

/*
NOTES
To compile:
g++ discount.cpp -o discount

To run:
./discount
*/