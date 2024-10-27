#include <iostream>  // Necessary for input/output operations
using namespace std; // Allows us to use names for objects and variables from the standard library

int main()
{
    int N; // Declare a variable to store the input number

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> N; // Take the user's input and store it in variable N

    // Loop to print numbers from 1 to N
    for (int i = 1; i <= N; i++)
    {
        cout << i << " "; // Print the current value of i followed by a space
    }

    // End the program
    return 0;
}
