#include <iostream>
using namespace std;

// Function to print a 2D array
// This function takes in a 2D array (matrix) and the number of rows as parameters
// and prints out each element of the matrix separated by a space
// The outer loop iterates over each row of the matrix
// The inner loop iterates over each column of the current row
// After printing each row, a newline character is printed to move to the next line
void print2DArray(int arr[][3], int rows)
{
    // Iterate over each row of the matrix
    for (int i = 0; i < rows; i++)
    {
        // Iterate over each column of the current row
        for (int j = 0; j < 3; j++)
        {
            // Print the current element of the matrix
            cout << arr[i][j] << " ";
        }
        // Print a newline character after printing each row
        cout << endl;
    }
}

int main()
{
    // Declare a 2x3 matrix with predefined values
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Call the function to print the 2D array
    print2DArray(matrix, 2);
    print2DArray(matrix, 2); // Call the function
    return 0;
}
