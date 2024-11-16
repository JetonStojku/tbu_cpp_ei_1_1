#include <iostream>  // Include library for input and output
using namespace std; // Use standard namespace

/*
Write a program to find the smallest number among user-provided numbers.
*/

int main()
{
    int count, num; // Variables to store count of numbers and current number
    int minNum;     // Variable to store the minimum number

    // Ask the user how many numbers they want to input
    cout << "How many numbers will you enter? ";
    cin >> count; // Read the count

    cout << "Enter number 1: ";
    cin >> minNum; // Initialize minNum with the first number

    // Loop through the rest of the numbers
    for (int i = 2; i <= count; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num; // Read the current number
        if (num < minNum)
        {
            // Update minNum if the current number is smaller
            minNum = num;
        }
    }

    // Output the smallest number
    cout << "The smallest number is: " << minNum << endl;
    return 0; // Indicate successful program termination
}
