#include <iostream>
using namespace std;

/**
 * @brief Main function. Asks user for 5 numbers and prints them out.
 */
int main()
{
    // Array to store 5 numbers
    int numbers[5];

    // Input values
    cout << "Enter 5 numbers:" << endl;

    // Input 5 numbers
    for (int i = 0; i < 5; i++)
    {
        // Input number
        cin >> numbers[i];
    }

    // Output values
    cout << "You entered:" << endl;
    for (int i = 0; i < 5; i++)
    {
        // Output number
        cout << numbers[i] << " ";
    }

    return 0;
}
