#include <iostream>
using namespace std;

/**
 * @brief Finds the maximum value in an array of 5 integers.
 *
 * @details Program iterates through an array of 5 integers, comparing each element
 * to the current maximum. If the current element is greater than the maximum,
 * the maximum is updated. Finally, the maximum value is printed to the console.
 */
int main()
{
    // Create an array of 5 integers
    int numbers[5] = {12, 45, 7, 89, 33};

    // Initialize the maximum value to the first element in the array
    int max = numbers[0];

    // Iterate through the array (starting from the second element)
    for (int i = 1; i < 5; i++)
    {
        // Check if the current element is greater than the maximum
        if (numbers[i] > max)
        {
            // Update the maximum if the current element is greater
            max = numbers[i];
        }
    }

    // Output the maximum value to the console
    cout << "The largest number is: " << max << endl;

    // Return 0 to indicate successful program termination
    return 0;
}
