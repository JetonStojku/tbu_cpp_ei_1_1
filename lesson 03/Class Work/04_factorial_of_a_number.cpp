#include <iostream> // Required for input/output operations
using namespace std;

int main()
{
    int N;        // Variable to store input number
    int fact = 1; // Initialize fact to 1, as factorial of 0 is 1

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> N; // Store user input in N

    // Loop to calculate the factorial of the number
    for (int i = 1; i <= N; i++)
    {
        fact *= i; // Multiply fact by i (current iteration number)
    }

    // Output the result
    cout << "The factorial of " << N << " is: " << fact;

    return 0;
}
