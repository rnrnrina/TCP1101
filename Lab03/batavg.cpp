// LAB 3.4 Working with Type Casting
// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

#include <iostream>
#include <iomanip>

using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
    // int batAvg;
    // float batAvg;           // ---3.4.2 output: still 0
    /*
    double batAvg;
    double AT_BAT = int(AT_BAT);
    double HITS = int(HITS);
    */

    // double batAvg = int(batAvg);
    //batAvg = HITS / AT_BAT;           // an assignment statement
    double(batAvg) = double(HITS) / double(AT_BAT);

    cout << setprecision(6) << fixed << showpoint;
    cout << "The batting average is " << batAvg << endl;            // output the result

    return 0;
}

/*
NOTES
To compile:
g++ batavg.cpp -o batavg

To run:
./batavg
*/
