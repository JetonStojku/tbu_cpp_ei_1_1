// Program to calculate the perimeter (P) and area (S) of a rectangle with sides x and y

// The iostream library is used for input/output operations
#include <iostream>

int main()
{
    // Declare integer variables for the sides (x, y), perimeter (P), and area (S)
    int x, y, P, S;

    // Output a message asking the user to input the rectangle's sides
    std::cout << "Ju lutem, jepni brinjet (Please enter the sides):\n";

    // Take input from the user for the sides x and y
    std::cin >> x >> y;

    // Calculate the perimeter of the rectangle
    // Formula for perimeter: P = 2 * (x + y)
    P = 2 * (x + y);

    // Calculate the area of the rectangle
    // Formula for area: S = x * y
    S = x * y;

    // Output the calculated perimeter
    std::cout << "Perimetri eshte " << P << " : \n";

    // Output the calculated area
    std::cout << "Siperfaqja eshte " << S << " : \n";

    // Return 0 indicates successful program execution
    return 0;
}
