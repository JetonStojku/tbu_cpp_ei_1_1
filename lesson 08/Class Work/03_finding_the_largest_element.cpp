#include <iostream>
using namespace std;

/**
 * @brief Main function. Finds the largest element in a 2x3 matrix.
 */
int main()
{
    // Declare a 2D array (matrix) to store 6 numbers
    int matrix[2][3] = {
        {12, 7, 5},
        {10, 15, 8}};

    // Initialize the maximum value to the first element in the array
    int max = matrix[0][0];

    // Iterate over each row of the matrix
    for (int i = 0; i < 2; i++)
    {
        // Iterate over each column of the current row
        for (int j = 0; j < 3; j++)
        {
            // Check if the current element is greater than the maximum
            if (matrix[i][j] > max)
            {
                // Update the maximum if the current element is greater
                max = matrix[i][j];
            }
        }
    }

    // Output the largest element of the matrix
    cout << "The largest element is: " << max << endl;

    // Return 0 to indicate successful program termination
    return 0;
}
