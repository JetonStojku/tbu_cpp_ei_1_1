#include <iostream>
using namespace std;

/*
Write a program to calculate the sum of numbers entered by the user until they input 0.
*/

int main()
{
    int number, sum = 0;

    do
    {
        cout << "Enter a number (0 to stop): ";
        cin >> number; // Read user input
        sum += number; // Add the number to the sum
    } while (number != 0); // Stop if the user enters 0

    cout << "The sum is: " << sum << endl;

    return 0;
}
