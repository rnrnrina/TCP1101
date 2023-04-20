// LAB 3b.1 The pair Data Structure
// Write a program which stores 2 coordinates of a 2-D plane with the pair data structure and calculate the distance between them. The first coordinate is point1( 3, 5 ) and the second coordinate is point2( 10, 6 ).

#include <iostream>
#include <cmath>
#include <utility>

using namespace std;

int main()
{
    system("clear");

    pair<int, int> point1;
    pair<int, int> point2;
    // * pair: datatype that contains two variables

    // Write your code here
    point1 = make_pair(3, 5);
    point2 = make_pair(10, 6);
    /*
    Can also be written as:
    point1.first = 3;
    point1.second = 5;
    point2.first = 10;
    point2.second = 6;
    */

    int a = point2.first - point1.first;
    int b = point2.second - point1.second;
    double distance = sqrt((a * a) + (b * b));

    cout << "Distance = " << distance << endl;          // Desired output: 7.07107

    return 0;
}

/*
NOTES
To compile:
g++ pair.cpp -o pair

To run:
./pair
*/