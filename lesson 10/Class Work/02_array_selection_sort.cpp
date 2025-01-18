// TODO: Create a selection sort function that takes in an array and its size,
// then sorts the array in ascending order by repeatedly finding the smallest
// element and swapping it with the first element of the unsorted portion of the
// array. The pass through the array is repeated until the array is sorted.

#include <iostream>
using namespace std;

void insertArray(int arr[], int size);
void printArray(int arr[], int size);
void selectionSort(int arr[], int size);
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
    selectionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

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
 * @details This function takes in an array of integers and its size as parameters,
 * and prints out each element of the array separated by a space. After printing
 * all the elements, a newline character is printed.
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
 * @brief Sorts an array of integers using the selection sort algorithm.
 *
 * @details This function takes in an array and its size, then sorts the array
 * in ascending order by repeatedly finding the smallest element and swapping
 * it with the first element of the unsorted portion of the array. The pass
 * through the array is repeated until the array is sorted.
 *
 * @param arr The array of integers to be sorted.
 * @param size The number of elements in the array.
 */
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}