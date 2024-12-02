#include <iostream>
using namespace std;

/**
 * @brief Main function. Calculates the sum and average of an array of 5 integers
 * and prints the results to the console.
 */
int main()
{
    // Create an array of 5 integers and initialize it with values
    int numbers[5] = {10, 20, 30, 40, 50};

    // Initialize a variable to store the sum of the array elements
    int sum = 0;

    // Loop through the array and add each element to the sum
    for (int i = 0; i < 5; i++)
    {
        // Add the current element to the sum
        sum += numbers[i];
    }

    // Calculate the average of the array elements
    double average = sum / 5.0;

    // Print the sum
    cout << "Sum: " << sum << endl;

    // Print the average
    cout << "Average: " << average << endl;

    return 0;
}
