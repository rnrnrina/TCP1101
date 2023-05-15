// LAB 6.2 Introduction to Pass by Value
// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.
// NISRINA FAKHRIATI 1201303193

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(int);

int main()
{
    int wordCode;
    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___"
         << endl;
    cout << "Input a 1 if you want the sentence to be finished with party"
         << endl;
    cout << "Input any other number for the word country" << endl;
    cout << "Please input your choice now" << endl;
    cin >> wordCode;
    cout << endl;

    writeProverb(wordCode);

    return 0;
}

//   ******************************************************************************
//   writeProverb
//
//   task:     This function prints a proverb. The function takes a number
//             from the call. If that number is a 1 it prints "Now is the time
//             for all good men to come to the aid of their party."
//             Otherwise, it prints "Now is the time for all good men
//             to come to the aid of their country."
//             void writeProverb(int number)
//
//   data in:  code for ending word of proverb (integer)
//   data out: no actual parameter altered
//
//   *****************************************************************************

void writeProverb(int number)
{
    // Fill in the body of the function to accomplish what is described above
    if (number == 1)
    {
        cout << "Now is the time for all good men to come to the aid of their party." << endl;
    }
    else
    {
        cout << "Now is the time for all good men to come to the aid of their country." << endl;
    }
}

/*
---6.2.1
? What happens if you inadvertently enter a float such as -3.97?
* Output: Now is the time for all good men to come to the aid of their country.
*/

/*
NOTES
To compile:
g++ newproverb.cpp -o newproverb

To run:
./newproverb
*/