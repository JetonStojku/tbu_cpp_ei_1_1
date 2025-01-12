#include <iostream>
using namespace std;

/**
 * @brief Finds the maximum value in an array of integers.
 *
 * @param arr The array of integers to search.
 * @param size The number of elements in the array.
 * @return The maximum value in the array.
 */
int findMax(int arr[], int size)
{
    // Initialize the maximum value to the first element in the array
    int max = arr[0];

    // Iterate through the array, starting from the second element
    for (int i = 1; i < size; i++)
    {
        // Check if the current element is greater than the maximum
        if (arr[i] > max)
        {
            // Update the maximum if the current element is greater
            max = arr[i];
        }
    }

    // Return the maximum value
    return max;
}

int main()
{
    // Create an array of 5 integers
    int numbers[] = {3, 7, 1, 9, 5};

    // Calculate the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the maximum value in the array
    cout << "Maximum: " << findMax(numbers, size) << endl; // Call the function
    return 0;
}
