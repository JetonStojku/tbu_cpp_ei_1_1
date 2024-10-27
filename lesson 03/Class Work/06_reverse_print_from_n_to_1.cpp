#include <iostream> // Necessary for input/output
using namespace std;

int main()
{
    int N; // Variable for input number

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> N; // Store the input in N

    // Loop to print numbers from N down to 1
    for (int i = N; i >= 1; i--)
    {
        cout << i << " "; // Print the current value of i followed by a space
    }

    return 0;
}
