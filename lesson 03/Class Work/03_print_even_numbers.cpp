#include <iostream> // Required for input/output
using namespace std;

int main()
{
    int N; // Declare variable N for input

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> N; // Store the input in N

    // Loop to check and print even numbers from 1 to N
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {                     // Check if i is divisible by 2 (even number)
            cout << i << " "; // Print even numbers followed by a space
        }
    }

    return 0;
}
