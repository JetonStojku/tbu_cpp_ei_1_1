// Program to calculate the average of three numbers

// The iostream library is used for input/output operations
#include <iostream>

int main()
{
    // Declare float variables for the numbers (x, y, z), the sum (s), and the average (mes)
    float mes, x, y, z, s = 0;

    // Output a message asking the user to input the first number (x)
    std::cout << "\nJepni numrin x (Enter number x):\n";

    // Take input from the user for the first number (x)
    std::cin >> x;

    // Output a message asking the user to input the second number (y)
    std::cout << "Jepni numrin y (Enter number y):\n";

    // Take input from the user for the second number (y)
    std::cin >> y;

    // Output a message asking the user to input the third number (z)
    std::cout << "Jepni numrin z (Enter number z):\n";

    // Take input from the user for the third number (z)
    std::cin >> z;

    // Calculate the sum of the three numbers
    s = x + y + z;

    // Calculate the average by dividing the sum by 3
    mes = s / 3;

    // Output the result, displaying the average of the three numbers
    std::cout << "Mesatarja e 3 numrave eshte " << mes << ".\n";

    // Return 0 indicates successful program execution
    return 0;
}
