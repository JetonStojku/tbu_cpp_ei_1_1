// Program to check if a year is a leap year

#include <iostream>
using namespace std;

int main()
{
    int year;

    // Ask the user to input a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Leap year conditions
    {
        cout << year << " is a leap year.\n";
    }
    else // This block runs if the year is not a leap year
    {
        cout << year << " is not a leap year.\n";
    }

    return 0;
}

// Key notes:
// 1. A year is a leap year if it is divisible by 4, but not by 100, unless it's also divisible by 400.
// 2. The program uses a compound condition to check these rules.
