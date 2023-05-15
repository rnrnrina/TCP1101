// LAB 6.2 Introduction to Pass by Value
// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// ---6.2.2 Change the program so that an input of 1 from the user will print “party” at the end, a 2 will print “country” and any other number will be invalid so that the user will need to en- ter a new choice.

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(int);

int main()
{
    system("clear");

    int wordCode;
    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___"
         << endl;
    cout << "* Input a 1 if you want the sentence to be finished with party"
         << endl;
    cout << "* Input any other number for the word country" << endl;
    cout << "Please input your choice now" << endl;

    // while (true)
    while (wordCode != 1 && wordCode != 2)
    {
        cin >> wordCode;

        if (wordCode == 1 || wordCode == 2)
        {
            break;
        }
        else
        {
            cout << "\nI'm sorry but that is an incorrect choice; Please input a 1 or 2." << endl;
        }
    }

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
    // * Using case statement
    switch (number)
    {
    case 1:
        cout << "\nNow is the time for all good men to come to the aid of their party." << endl;
        break;

    case 2:
        cout << "\nNow is the time for all good men to come to the aid of their country." << endl;
        break;
    }
}
