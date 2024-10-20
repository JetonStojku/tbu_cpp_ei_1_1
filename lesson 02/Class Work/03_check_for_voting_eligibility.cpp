// Program to check if a person is eligible to vote

#include <iostream>

int main()
{
    int age;

    // Ask the user to input their age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Check if the age is 18 or above for voting eligibility
    if (age >= 18) // Condition to check if age is greater than or equal to 18
    {
        std::cout << "You are eligible to vote.\n";
    }
    else // This block runs if age is less than 18
    {
        std::cout << "You are not eligible to vote.\n";
    }

    return 0;
}

// Key notes:
// 1. The program checks if the age entered is 18 or greater.
// 2. Depending on the age, the program informs the user if they can vote or not.
