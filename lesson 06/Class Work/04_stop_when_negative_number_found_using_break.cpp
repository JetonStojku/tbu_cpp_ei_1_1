#include <iostream>
using namespace std;

/*
Write a program to find the first negative number in a series of inputs from the user.
*/

int main()
{
    int number;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0)
        { // Check if the number is negative
            cout << "First negative number found: " << number << endl;
            break; // Exit the loop when a negative number is found
        }
    }

    return 0;
}
