#include <iostream>
using namespace std;

// Function to print an array
// This function takes in an array and its size as parameters
// and prints out each element of the array separated by a space
void printArray(int arr[], int size)
{
    // Loop through the array and print each element
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    // Print a newline character after printing all elements
    cout << endl;
}

int main()
{
    // Declare an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array using the sizeof operator
    // The sizeof operator returns the size of the array in bytes
    // We divide the total size of the array by the size of a single element
    // to get the number of elements in the array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the printArray function and pass in the array and its size
    printArray(numbers, size);

    // Return 0 to indicate successful program termination
    return 0;
}
