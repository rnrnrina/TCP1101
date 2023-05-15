#include <iostream>
using namespace std;

void swap(int &num1, int &num2)
{
    // int saveNum = num2;
    // num2 = num1;
    // num1 = saveNum;

    int saveNum = num1;
    num1 = num2;
    num2 = saveNum;

    return;
}

int main()
{
    // system("clear");

    int a = 10, b = 2;
    cout << "a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "\nAfter swapping: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
