// greeting.cpp
// LAB 1.1 – TRY IT: Compiling and Running Your First Program
// Purpose: Print a message to greet the user.

#include <iostream>         // Needed to do C++ I/O
#include <string>           // Needed by some compilers to use strings
using namespace std;
 
int main() {
    system("clear");

    string name;

    cout << "Please enter your first name: ";
    cin >> name;

    cout << "Hello, " << name << "." << endl;

    return 0;
}

/*
NOTES
To compile:
g++ greeting.cpp -o greeting

To run:
./greeting
*/
