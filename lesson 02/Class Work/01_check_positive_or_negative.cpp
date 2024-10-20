// Program to check if a number is positive, negative, or zero

#include <iostream>

int main()
{
    int num;

    // Ask the user to input a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is positive, negative, or zero
    if (num > 0) // Condition to check if the number is positive
    {
        std::cout << num << " is positive.\n";
    }
    else if (num < 0) // Condition to check if the number is negative
    {
        std::cout << num << " is negative.\n";
    }
    else // This block runs if the number is neither positive nor negative (i.e., zero)
    {
        std::cout << "The number is zero.\n";
    }

    return 0;
}

// Key notes:
// 1. The program uses an `if-else` chain to check if a number is positive, negative, or zero.
// 2. The user inputs a number and based on its value, a different message is displayed.
