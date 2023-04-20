// LAB 4.5 Student Generated Code Assignments
/*
--- Option 1: Write a program that prompts the user for their quarterly water bill for the last four quarters. The program should find and output their average monthly water bill.
* If the average bill exceeds $75, the output should include a message indicating that too much water is being used.
* If the average bill is at least $25 but no more than $75, the output should indicate that a typical amount of water is being used.
* Finally, if the average bill is less than $25, the output should contain a message praising the user for conserving water.
*/

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    // system("clear");

    double q1Bill, q2Bill, q3Bill, q4Bill, avgBill;

    cout << "Please input your water bill for quarter 1:" << endl;
    cin >> q1Bill;

    cout << "Please input your water bill for quarter 2:" << endl;
    cin >> q2Bill;
    
    cout << "Please input your water bill for quarter 3:" << endl;
    cin >> q3Bill;
    
    cout << "Please input your water bill for quarter 4:" << endl;
    cin >> q4Bill;

    avgBill = (q1Bill + q2Bill + q3Bill + q4Bill) / 12;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Your average monthly bill is $" << avgBill << ". ";

    if (avgBill < 25) {
        cout << "Good job for conserving water!" << endl;
    } else if (avgBill >= 25 && avgBill <= 75) {
        cout << "You are using a typical amount of water." << endl;
    } else {
        cout << "You are using excessive amounts of water." << endl;
    }

    return 0;
}

/*
NOTES
To compile:
g++ waterbill.cpp -o waterbill

To run:
./waterbill
*/