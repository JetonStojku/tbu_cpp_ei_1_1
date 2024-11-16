#include <iostream>  // Include library for input and output
using namespace std; // Use standard namespace

/*
Write a program that calculates the sum of the series:
    v = 2/2 - 4/3 + 6/4 - 8/5 + ... + 2*n/(n+1)
*/

int main()
{
    int n; // Variable to store the user input
    double sum = 0.0, k = 1.0;

    // Prompt user to enter the value of n
    cout << "Enter the value of n: ";
    cin >> n; // Read user input

    // Loop through numbers from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // Calculate the current term: 2 * i / (i + 1)
        double term = k * (2.0 * i) / (i + 1);
        k *= -1;
    }

    // Output the result of the series sum
    cout << "The sum of the series is: " << sum << endl;
    return 0; // Indicate successful program termination
}
