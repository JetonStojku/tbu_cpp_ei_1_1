#include <iostream> // Required for input/output
using namespace std;

int main()
{
    int N; // Variable for input number

    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> N; // Store the input in N

    // Loop to print the multiplication table of N from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        cout << N << " * " << i << " = " << N * i << endl; // Display the result
    }

    return 0;
}
