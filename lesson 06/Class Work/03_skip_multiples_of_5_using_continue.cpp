#include <iostream>
using namespace std;

/*
Write a program to print numbers from 1 to n but skip multiples of 5.
*/

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {             // Check if the number is a multiple of 5
            continue; // Skip the rest of the loop for this iteration
        }
        cout << i << " "; // Print numbers that are not multiples of 5
    }

    return 0;
}
