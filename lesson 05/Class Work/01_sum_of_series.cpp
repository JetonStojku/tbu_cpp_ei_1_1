#include <iostream>  // Include library for input and output
using namespace std; // Use standard namespace for convenience

/*
Write a program that calculates the sum of the series:
    v = 1/2 + 4/4 + 9/6 + 16/8 + ... + n^2/2*n
*/

int main()
{
    int n;            // Variable to store the user input
    double sum = 0.0; // Variable to store the sum of the series, initialized to 0.0

    // Prompt user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n; // Read the user input

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // Calculate the current term: i^2 / (2 * i)
        sum += double(i * i) / (2.0 * i); // Add the term to the sum
    }

    // Output the result of the series sum
    cout << "The sum of the series is: " << sum << endl;
    return 0; // Indicate successful program termination
}
