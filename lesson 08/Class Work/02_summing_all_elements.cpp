#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

/**
 * @brief Main function. Calculates and prints the sum of all elements in a 2x3 matrix.
 */
int main()
{
    // Initialize a 2D array (matrix) with predefined values
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Variable to store the sum of all elements
    int sum = 0;

    // Iterate over each row of the matrix
    for (int i = 0; i < 2; i++)
    {
        // Iterate over each column of the current row
        for (int j = 0; j < 3; j++)
        {
            // Add the current element to the sum
            sum += matrix[i][j];
        }
    }

    // Output the total sum of all matrix elements
    cout << "The sum of all elements is: " << sum << endl;

    // Return 0 to indicate successful program termination
    return 0;
}
