// Create a linear search function that takes in an array and a target value,
// and returns the index of the first occurrence of the target value in the array.
// If the target value is not found, return -1.

#include <iostream>
using namespace std;

/**
 * @brief Populate an array with elements from the standard input.
 *
 * @details This function takes in an array and a size as parameters and populates
 * the array with the next size number of elements from the standard input.
 *
 * @param arr The array to be populated.
 * @param size The number of elements to read from the standard input.
 */
void insertArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

/**
 * @brief Performs a linear search for a target value in an array.
 *
 * @param arr The array of integers to search within.
 * @param size The number of elements in the array.
 * @param target The value to search for in the array.
 * @return The index of the first occurrence of the target value in the array, or -1 if not found.
 */

int linearSearch(int arr[], int size, int target)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] == target)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    insertArray(arr, n);
    int target;
    cout << "Enter the target value: ";
    cin >> target;
    int index = linearSearch(arr, n, target);
    if (index == -1)
    {
        cout << "Target value not found in the array." << endl;
    }
    else
    {
        cout << "Target value found at index " << index << endl;
    }
    return 0;
}