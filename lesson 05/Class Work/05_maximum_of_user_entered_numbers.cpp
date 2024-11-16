#include <iostream>  // Include library for input and output
using namespace std; // Use standard namespace

/*
Write a program to find the largest number among user-provided numbers.
*/

int main()
{
    int count, num; // Variables to store count of numbers and current number
    int maxNum;     // Variable to store the maximum number

    // Ask the user how many numbers they want to input
    cout << "How many numbers will you enter? ";
    cin >> count; // Read the count

    cout << "Enter number 1: ";
    cin >> maxNum; // Initialize maxNum with the first number

    // Loop through the rest of the numbers
    for (int i = 2; i <= count; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num; // Read the current number
        if (num > maxNum)
        {
            // Update maxNum if the current number is larger
            maxNum = num;
        }
    }

    // Output the largest number
    cout << "The largest number is: " << maxNum << endl;
    return 0; // Indicate successful program termination
}
