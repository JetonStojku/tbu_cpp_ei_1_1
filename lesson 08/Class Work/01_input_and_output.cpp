#include <iostream>
using namespace std;

/**
 * @brief Main function. Asks user for 4 numbers to fill a 2x2 matrix and prints it out.
 */
int main()
{
    // Declare a 2D array (matrix) to store 4 numbers
    int matrix[2][2];

    // Output a message asking user to input 4 numbers for the matrix
    cout << "Enter 4 numbers for a 2x2 matrix:" << endl;

    // Loop through the matrix and input values
    for (int i = 0; i < 2; i++)
    {
        // Loop through each row
        for (int j = 0; j < 2; j++)
        {
            // Input value for the current position in the matrix
            cin >> matrix[i][j];
        }
    }

    // Output a message to indicate that the matrix is being printed
    cout << "The matrix is:" << endl;

    // Loop through the matrix and output values
    for (int i = 0; i < 2; i++)
    {
        // Loop through each row
        for (int j = 0; j < 2; j++)
        {
            // Output the value at the current position in the matrix
            cout << matrix[i][j] << " ";
        }
        // Move to the next line after each row
        cout << endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
