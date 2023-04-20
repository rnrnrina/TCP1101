// LAB 3b.3 The array Data Structure
// Complete the program below which rotates the contents of an array one position to the right. The initial contents of the array is given.

#include <iostream>
#include <array>

using namespace std;

int main()
{
    system("clear");

    array<int, 4> a = {1, 2, 3, 4};

    cout << "Sample Run:" << endl;
    cout << a[0] << " ";            // Output: 1
    cout << a[1] << " ";            // Output: 2
    cout << a[2] << " ";            // Output: 3
    cout << a[3] << endl;           // Output: 4
    cout << endl;

    // Write your code here
    int b = a[3];               // hold a[3] in b

    a[3] = a[2];
    a[2] = a[1];
    a[1] = a[0];
    a[0] = b;

    cout << "Rotate right 1 position : " << endl;
    cout << a[0] << " ";
    cout << a[1] << " ";
    cout << a[2] << " ";
    cout << a[3] << endl;
    return 0;
}

/*
NOTES
To compile:
g++ array.cpp -o array

To run:
./array
*/

/*
// Assign 4 from a[3] to b
int b = a[3];

// Rotate array one position to the right
for (int i = 3; i > 0; i--)
{
a[i] = a[i - 1];            // Output: a[3] = 3, a[2] = 2, a[1] = 1
}

// Assign 4 to a[0]
a[0] = b;
*/