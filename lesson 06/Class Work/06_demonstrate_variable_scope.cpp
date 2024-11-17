#include <iostream>
using namespace std;

/*
Write a program to show how variables behave in global, local, and block scopes.
*/

int globalVar = 100; // Global variable

int main()
{
    int localVar = 50; // Local variable

    if (true)
    {
        int blockVar = 20; // Block variable
        cout << "Block Variable: " << blockVar << endl;
    }
    // blockVar is not accessible here
    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;

    return 0;
}
