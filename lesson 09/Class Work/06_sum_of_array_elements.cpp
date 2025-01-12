/**
 * @file sum_of_array_elements.cpp
 * @brief Calculates the sum of elements in an array.
 * @author [Your Name]
 * @date [Current Date]
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates the sum of elements in an array.
 * @param arr The array of integers to sum.
 * @param size The number of elements in the array.
 * @return The sum of all elements in the array.
 */
int sumArray(int arr[], int size)
{
    int sum = 0; // Initialize sum to 0

    // Iterate through each element in the array
    for (int i = 0; i < size; i++)
    {
        // Add the current element to the sum
        sum += arr[i];
    }

    // Return the calculated sum
    return sum;
}

int main()
{
    // Create an array of 5 integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the sum of elements in the array to the console
    cout << "Sum of elements: " << sumArray(numbers, size) << endl; // Call the function

    // Return 0 to indicate successful program termination
    return 0;
}
