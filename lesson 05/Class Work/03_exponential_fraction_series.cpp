#include <iostream>  // Include library for input and output
#include <cmath>     // Include library for power calculations (pow function)
using namespace std; // Use standard namespace

/*
Write a program that calculates the sum of the series:
    v = 2/3 - 4/9 - 8/27 + 16/81 + ... + 2^n/3^n
*/

int main()
{
    int n;            // Variable to store the user input
    double sum = 0.0; // Variable to store the sum of the series, initialized to 0.0

    // Prompt user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n; // Read user input

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // Calculate the current term: 2^i / 3^i
        double term = pow(2, i) / pow(3, i);
        if (i % 4 == 0 || i % 4 == 1)
        {
            // If the current term index is even, subtract the term
            sum -= term;
        }
        else
        {
            // If the current term index is odd, add the term
            sum += term;
        }
    }

    // Output the result of the series sum
    cout << "The sum of the series is: " << sum << endl;
    return 0; // Indicate successful program termination
}
