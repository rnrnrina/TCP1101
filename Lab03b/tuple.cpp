// LAB 3b.2 The tuple Data Structure
// Write a program to store and print a list of three customers of a bank. Each customer has an id, a name, a credit rating and an amount of money in a bank. Store the information of each customer in a tuple. The output of the program should follow the format and the contents as shown below.

#include <iostream>
#include <iomanip>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    system("clear");

    tuple<int, string, char, double>
        cust1 = make_tuple(1241, "Ali", 'B', 34200.78),
        cust2 = make_tuple(1242, "Ah Kau", 'B', 29000.45),
        cust3 = make_tuple(1243, "Muthu", 'A', 42100.50);

    cout << setprecision(2) << fixed << showpoint;

    cout << "***** List of Customers *****\n\n";

    cout << "ID\t\t: " << get<0>(cust1) << endl;
    cout << "Name\t\t: " << get<1>(cust1) << endl;
    cout << "Credit rating\t: " << get<2>(cust1) << endl;
    cout << "Account Balance\t: " << get<3>(cust1) << endl
         << endl;

    cout << "ID\t\t: " << get<0>(cust2) << endl;
    cout << "Name\t\t: " << get<1>(cust2) << endl;
    cout << "Credit rating\t: " << get<2>(cust2) << endl;
    cout << "Account Balance\t: " << get<3>(cust2) << endl
         << endl;

    cout << "ID\t\t: " << get<0>(cust3) << endl;
    cout << "Name\t\t: " << get<1>(cust3) << endl;
    cout << "Credit rating\t: " << get<2>(cust3) << endl;
    cout << "Account Balance\t: " << get<3>(cust3) << endl
         << endl;

    cout << "***** End of List *****" << endl;

    return 0;
}

/*
NOTES
To compile: // ---IMPORTANT!!!
clang++ -std=c++11 -stdlib=libc++ tuple.cpp -o tuple
g++ tuple.cpp -o tuple          // * compiler not working for tuple

To run:
./tuple
*/