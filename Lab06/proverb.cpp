// LAB 6.1 Functions with No Parameters
// This program prints the proverb
// "Now is the time for all good men to come to the aid of their party"
// in a function (procedure) called writeProverb that is called by the main function
// NISRINA FAKHRIATI 1201303193

#include <iostream>
#include <string>
using namespace std;

void writeProverb(); // This is the prototype for the writeProverb function

int main()
{
    // Fill in the code to call the writeProverb function
    writeProverb();

    return 0;
}

//*********************************************************************
//   writeProverb
//
//   task:     This function prints a proverb
//   data in:  none
//   data out: no actual parameter altered
//
//********************************************************************

// Fill in the function heading and the body of the function that will print
// to the screen the proverb listed in the comments at the beginning of the
// program
void writeProverb()
{
    cout << "Now is the time for all good men to come to the aid of their party." << endl;
}

/*
NOTES
To compile:
g++ proverb.cpp -o proverb

To run:
./proverb
*/