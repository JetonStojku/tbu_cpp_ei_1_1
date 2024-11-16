#include <iostream>  // Include library for input and output
using namespace std; // Use standard namespace

/*
Write a program to calculate the sum of user-provided numbers.
*/

int main()
{
    int count, num; // Variables to store count of numbers and current number
    int sum = 0;    // Variable to store the sum, initialized to 0

    // Ask the user how many numbers they want to input
    cout << "How many numbers will you enter? ";
    cin >> count; // Read the count

    // Loop to read and sum up the numbers
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num; // Read the current number
        sum += num; // Add the current number to the sum
    }

    // Output the sum of the numbers
    cout << "The sum of the numbers is: " << sum << endl;
    return 0; // Indicate successful program termination
}
