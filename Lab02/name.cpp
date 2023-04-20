// LAB 2.1 Working with the cout Statement
// name.cpp
// Purpose: This program will write the name, address and telephone number of the programmer.

#include <iostream>
using namespace std;

int main() {
    // system("clear");

    /* Example
    cout << "Deano Beano" << endl;
    cout << "123 Markadella Lane" << endl;
    cout << "Fruitland, Md. 55503" << endl;
    cout << "489-555-5555" << endl;
    */

    cout << "************" << endl;
    cout << "\tProgrammer:\tDeano Beano" << endl;
    cout << "\t\t\t123 Markadella Lane" << endl;
    cout << "\t\t\tFruitland, Md. 55503\n\n\n" << endl;
    cout << "\tTelephone:\t489-555-5555" << endl;
    cout << "************" << endl;

    return 0;
}

/*
NOTES
To compile:
g++ name.cpp -o name

To run:
./name
*/