// Program to check if a number is divisible by both 3 and 5

#include <iostream>
using namespace std;

int main()
{
    int num;

    // Ask the user to input a number
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is divisible by both 3 and 5
    if (num % 3 == 0 && num % 5 == 0) // Condition to check divisibility by 3 and 5
    {
        cout << num << " is divisible by both 3 and 5.\n";
    }
    else // This block runs if the number is not divisible by both 3 and 5
    {
        cout << num << " is not divisible by both 3 and 5.\n";
    }

    return 0;
}

// Key notes:
// 1. The `%` operator checks divisibility.
// 2. The program uses the logical AND (&&) to ensure both conditions (divisibility by 3 and 5) are true.
