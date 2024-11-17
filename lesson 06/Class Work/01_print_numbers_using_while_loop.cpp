#include <iostream>
using namespace std;

/*
Write a program to print numbers from 1 to n using a while loop.
*/

int main()
{
    int n, i = 1; // Initialize the counter
    cout << "Enter a number: ";
    cin >> n;

    while (i <= 10)
    {                     // Loop until i is 10
        cout << i << " "; // Print the current value of i
        i++;              // Increment the counter
    }

    return 0;
}
