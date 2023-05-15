// LAB 6.2 Introduction to Pass by Value
// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their ___"
// Inputting a 1 will use the word party. Any other number will use the word country.

// ---6.2.3 Change the previous program so the user may input the word to end the phrase. The string holding the user’s input word will be passed to the proverb function instead of passing a number to it. Notice that this change requires you to change the proverb function heading and the prototype as well as the call to the function.

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(string);

int main()
{
    system("clear");
    
    string wordCode;

    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their ___" << endl;
    cout << "Please input the word you would like to have finish the proverb" << endl;
    cin >> wordCode;

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

void writeProverb(string word)
{
    // Fill in the body of the function to accomplish what is described above
    cout << "Now is the time for all good men to come to the aid of their " << word << endl;
}
