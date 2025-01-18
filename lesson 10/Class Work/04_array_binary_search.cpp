// Create a binary search function that takes in an array and a target value,
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
 * @brief Sorts an array of integers using the bubble sort algorithm.
 *
 * @details This function takes in an array and its size, then sorts the array
 * in ascending order by repeatedly stepping through the list, comparing
 * adjacent elements and swapping them if they are in the wrong order.
 * The pass through the list is repeated until the array is sorted.
 *
 * @param arr The array of integers to be sorted.
 * @param size The number of elements in the array.
 */

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/**
 * @brief Performs a binary search for a target value in a sorted array.
 *
 * @details This function takes in a sorted array of integers and a target value,
 * and returns the index of the first occurrence of the target value in the array.
 * If the target value is not found, return -1.
 *
 * @param arr The sorted array of integers to search within.
 * @param size The number of elements in the array.
 * @param target The value to search for in the array.
 * @return The index of the first occurrence of the target value in the array, or -1 if not found.
 */
int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
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
    bubbleSort(arr, n);
    int index = binarySearch(arr, n, target);
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