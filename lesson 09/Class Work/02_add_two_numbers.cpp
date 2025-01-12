#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 15;
    cout << "Sum: " << add(num1, num2) << endl; // Call the function
    return 0;
}
