#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

/**
 * @brief Main function. Computes and prints the transpose of a 2x3 matrix.
 */
int main()
{
    // Initialize a 2x3 matrix with predefined values
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    // Declare a 3x2 matrix to store the transpose
    int transpose[3][2];

    // Compute the transpose of the matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Assign the transposed value
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Output the current element of the transposed matrix
            cout << transpose[i][j] << " ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
