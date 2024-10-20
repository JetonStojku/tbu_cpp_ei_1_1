// Program to check if a number is even or odd

#include <iostream>

int main()
{
    int num;

    // Ask the user to input a number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the number is even or odd
    if (num % 2 == 0) // Condition to check if the remainder of num divided by 2 is zero
    {
        std::cout << num << " is even.\n";
    }
    else // This block runs if the number is not even, meaning it is odd
    {
        std::cout << num << " is odd.\n";
    }

    return 0;
}

// Key notes:
// 1. The `%` operator is used to find the remainder when the number is divided by 2.
// 2. If the remainder is 0, the number is even; otherwise, it is odd.
