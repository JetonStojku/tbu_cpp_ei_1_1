#include <iostream>
using namespace std;

/*
Write a program to calculate the factorial of a given number using a while loop.
*/

int main()
{
    int number, factorial = 1;

    cout << "Enter a positive number: ";
    cin >> number;

    int i = 1;
    while (i <= number)
    {
        factorial *= i; // Multiply the current value of factorial by i
        i++;            // Increment the counter
    }

    cout << "Factorial of " << number << " is " << factorial << endl;

    return 0;
}
