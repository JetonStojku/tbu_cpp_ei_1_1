#include <iostream> // Include for input/output operations
using namespace std;

int main()
{
    int N, sum = 0; // Declare two variables: N for input, sum initialized to 0

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> N; // Take user input and store it in N

    // Loop to calculate the sum of numbers from 1 to N
    for (int i = 1; i <= N; i++)
    {
        sum += i; // Add the current value of i to the sum
    }

    // Output the calculated sum
    cout << "The sum of first " << N << " natural numbers is: " << sum;

    return 0;
}
