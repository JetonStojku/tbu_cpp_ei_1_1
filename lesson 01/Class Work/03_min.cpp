// Program to find the minimum of two numbers a and b

// The iostream library is used for input/output operations
#include <iostream>

int main()
{
    // Declare integer variables for the numbers (a, b) and the minimum (min)
    int a, b, min;

    // Output a message asking the user to input the first number (a)
    std::cout << "\nJepni numrin a (Enter number a):\n";

    // Take input from the user for the first number (a)
    std::cin >> a;

    // Output a message asking the user to input the second number (b)
    std::cout << "Jepni numrin b (Enter number b):\n";

    // Take input from the user for the second number (b)
    std::cin >> b;

    // Use an if-else statement to find the minimum of the two numbers
    // If a is less than b, then assign a to min
    if (a < b)
        min = a;
    else
        // Otherwise, assign b to min
        min = b;

    // Output the result, displaying the two numbers and the minimum value
    std::cout << "Minimumi i 2 numrave " << a << " dhe " << b << " eshte " << min << ".\n";

    // Return 0 indicates successful program execution
    return 0;
}
