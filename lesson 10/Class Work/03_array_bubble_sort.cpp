// Create a function to sort an array using bubble sort

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
 * @brief Prints an array of integers.
 *
 * @details This function takes in an array of integers and its size as parameters
 * and prints out each element of the array separated by a space.
 *
 * @param arr The array of integers to print.
 * @param size The number of elements in the array.
 */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    insertArray(arr, n);
    cout << "Original array: ";
    printArray(arr, n);
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}