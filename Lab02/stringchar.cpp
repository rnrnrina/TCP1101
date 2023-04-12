// LAB 2.4 Working with Characters and Strings
// This program demonstrates the use of characters and strings
// NISRINA FAKHRIATI 1201303193

#include <iostream>
#include <string>
using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle";     // use double quotes for strings
const char BESTRATING = 'A';                    // use single quotes for characters

int main()
{
    char rating;                // 2nd highest product rating
    string favoriteSnack;       // most preferred snack
    int numberOfPeople;         // the number of people in the survey
    int topChoiceTotal;         // the number of people who prefer the top choice
    
    // Fill in the code to do the following:
    favoriteSnack = "crackers";         // Assign the value of "crackers" to favoriteSnack
    rating = 'B';                       // Assign a grade of 'B' to rating
    numberOfPeople = 250;               // Assign the number 250 to the numberOfPeople
    topChoiceTotal = 148;               // Assign the number 148 to the topChoiceTotal
    
    // ---2.4.3 
    /*
    cout << "What is your favorite soda?" << endl;
    cout << "My favorite soda is: ";
    cin >> FAVORITESODA;            // * FAVORITESODA cannot be changed because it's a constant
    */

    // ---2.4.4 
    /*
    cout << "What is your favorite snack?" << endl;
    cout << "My favorite snack is: ";
    cin >> favoriteSnack;
    */
    favoriteSnack = "popcorn";      // * favoriteSnack can be changed

    // Fill in the blanks of the following:
    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people "
         << topChoiceTotal << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating
         << endl;

    return 0;

}

/*
NOTES
To compile:
g++ stringchar.cpp -o stringchar

To run:
./stringchar
*/