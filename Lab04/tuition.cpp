// LAB 4.5 Student Generated Code Assignments
/*
---Option 3: Write a program that prompts the user for their residential status (i.e., in-state or out-of-state) and whether they require room and board (Y or N). The program should then compute and output their bill for that semester.

* The University of Guiness charges $3000 per semester for in-state tuition and $4500 per semester for out-of-state tuition.
* In addition, room and board is $2500 per semester for in-state students and $3500 per semester for out-of-state students.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // system("clear");

    char tuitionCat, needRoom;
    double tuitionFee, roomFee, totalFee;

    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state:" << endl;
    cin >> tuitionCat;

    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not:" << endl;
    cin >> needRoom;

    switch (tuitionCat) {
        case 'I': case 'i':
            tuitionFee = 3000;

            switch (needRoom) {
                case 'Y': case 'y':
                    roomFee = 2500;
                break;

                case 'N': case 'n':
                    roomFee = 0;
                break;

                default:
                    cout << "Input invalid." << endl;
                return 1;
            }
        break;

        case 'O': case 'o':
            tuitionFee = 4500;

            switch (needRoom) {
                case 'Y': case 'y':
                    roomFee = 3500;
                break;

                case 'N': case 'n':
                    roomFee = 0;
                break;

                default:
                    cout << "Input invalid." << endl;
                return 1;
            }
        break;

        default:
            cout << "Input invalid." << endl;
        return 1;
        }

    totalFee = tuitionFee + roomFee;
    cout << "Your total bill for this semester is $" << totalFee << endl;

    return 0;
}

/*
NOTES
To compile:
g++ tuition.cpp -o tuition

To run:
./tuition
*/