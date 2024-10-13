// Program to find the maximum of three integers

// The iostream library is used for input/output operations
#include <iostream>

int main()
{
    // Declare integer variables for the numbers (a, b, c) and the maximum (max)
    int a, b, c, max;

    // Output a message asking the user to input the first integer (a)
    std::cout << "Enter the first number (a):\n";

    // Take input from the user for the first integer (a)
    std::cin >> a;

    // Output a message asking the user to input the second integer (b)
    std::cout << "Enter the second number (b):\n";

    // Take input from the user for the second integer (b)
    std::cin >> b;

    // Output a message asking the user to input the third integer (c)
    std::cout << "Enter the third number (c):\n";

    // Take input from the user for the third integer (c)
    std::cin >> c;

    // Check if 'a' is greater than or equal to both 'b' and 'c'
    if (a >= b && a >= c)
    {
        max = a; // If 'a' is the largest, assign 'a' to 'max'
    }
    // Check if 'b' is greater than or equal to both 'a' and 'c'
    else if (b >= a && b >= c)
    {
        max = b; // If 'b' is the largest, assign 'b' to 'max'
    }
    else
    {
        max = c; // Otherwise, 'c' is the largest, so assign 'c' to 'max'
    }

    // Output the largest number
    std::cout << "The maximum of " << a << ", " << b << ", and " << c << " is " << max << ".\n";

    // Return 0 indicates successful program execution
    return 0;
}

// Key notes:
// 1. The user enters three integers.
// 2. The program compares the numbers using if-else conditions to find the largest.
// 3. We check all possibilities for which number is the largest and assign it to 'max'.
// 4. The result is then displayed using std::cout.
