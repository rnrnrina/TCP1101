// LAB 6.4 Student Generated Code Assignments
/*
--- Option 1: Write a program that will read two floating point numbers (the first read into a variable called first and the second read into a variable called second ) and then calls the function swap with the actual parameters first and second. The swap function having formal parameters number1 and number2 should swap the value of the two variables.
*/

#include <iostream>
using namespace std;

// Function header
void swapNum(int &num1, int &num2);

int main()
{
    // system("clear");

    int num1, num2;

    cout << "Enter the first number. Then hit enter" << endl;
    cin >> num1;

    cout << "Enter the first number. Then hit enter" << endl;
    cin >> num2;

    cout << "\nYou input the numbers as " << num1 << " and " << num2 << endl;

    swapNum(num1, num2);

    cout << "\nAfter swapping, the first number has the value of " << num1 << " which was the value of the second number." << endl;

    cout << "The second number has the value of " << num2 << " which was the value of the first number." << endl;

    return 0;
}

void swapNum(int &num1, int &num2)
{
    int saveNum = num2;
    num2 = num1;
    num1 = saveNum;

    return;
}

/*
NOTES
To compile:
g++ 641.cpp -o 641

To run:
./641
*/