#include <iostream>
using namespace std;

/**
 * @brief Prints the reversed array
 *
 * @details This program creates an array with 5 elements, then prints the message
 * "Reversed Array: ", followed by the elements of the array in reverse order.
 */
int main()
{
    // Create an array with 5 elements
    int numbers[5] = {1, 2, 3, 4, 5};

    // Print the message "Reversed Array: "
    cout << "Reversed Array: ";

    // Iterate over the array starting from the last element
    for (int i = 4; i >= 0; i--)
    {
        // At each iteration, print the current element
        cout << numbers[i] << " ";
    }

    // Return 0 to indicate successful program termination
    return 0;
}
