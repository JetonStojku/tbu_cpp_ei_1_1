// Program to calculate the sum of three numbers

// The iostream library is used for input/output operations
#include <iostream>

int main()
{
    // Declare integer variables for the numbers (a, b, c) and the sum (sum)
    int a, b, c, sum;

    // Output a message asking the user to input the first number (a)
    std::cout << "Enter the first number (a):\n";

    // Take input from the user for the first number (a)
    std::cin >> a;

    // Output a message asking the user to input the second number (b)
    std::cout << "Enter the second number (b):\n";

    // Take input from the user for the second number (b)
    std::cin >> b;

    // Output a message asking the user to input the third number (c)
    std::cout << "Enter the third number (c):\n";

    // Take input from the user for the third number (c)
    std::cin >> c;

    // Calculate the sum of the three numbers
    sum = a + b + c;

    // Output the sum of the three numbers
    std::cout << "The sum of " << a << ", " << b << ", and " << c << " is " << sum << ".\n";

    // Return 0 indicates successful program execution
    return 0;
}

// Key notes:
// 1. The user enters three numbers.
// 2. We calculate their sum by adding them together.
// 3. We display the result using std::cout.
// 4. Simple arithmetic is used to compute the sum of the integers.
