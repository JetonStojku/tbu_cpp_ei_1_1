# Lesson 9: Functions in C++

Functions are reusable blocks of code designed to perform specific tasks. This lesson covers:

1. Functions that **do not return** values.
2. Functions that **return** values.
3. Using one-dimensional and two-dimensional arrays as parameters.

---

## Why Do We Use Functions?

1. **Reusability**: Write code once and use it multiple times.
2. **Modularity**: Break a large program into smaller, manageable pieces.
3. **Readability**: Makes the program easier to understand.
4. **Debugging**: Easier to test and debug small pieces of code.

---

## Syntax of a Function

### General Syntax

```cpp
returnType functionName(parameterList) {
    // Function body
    return value; // Optional, based on returnType
}
```

- `returnType`: The data type of the value the function will return (e.g., `int`, `float`, or `void` if no value is returned).
- `functionName`: Name of the function.
- `parameterList`: List of inputs (parameters) to the function.

---

## Functions That Do Not Return Values

Functions with a `void` return type perform an operation without returning a result.

### Example 1: Display a Message

```cpp
#include <iostream>
using namespace std;

// Function to display a message
void displayMessage() {
    cout << "Hello from a function!" << endl;
}

int main() {
    displayMessage(); // Call the function
    return 0;
}
```

### Example 2: Print an Array

```cpp
#include <iostream>
using namespace std;

// Function to print elements of a one-dimensional array
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printArray(numbers, size); // Call the function
    return 0;
}
```

---

## Functions That Return Values

Functions can perform a calculation or operation and return the result to the caller.

### Example 1: Add Two Numbers

```cpp
#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 10, num2 = 20;
    int result = add(num1, num2); // Call the function
    cout << "Sum: " << result << endl;
    return 0;
}
```

### Example 2: Find the Maximum Element in an Array

```cpp
#include <iostream>
using namespace std;

// Function to find the maximum value in a one-dimensional array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int max = findMax(numbers, size); // Call the function
    cout << "Maximum value: " << max << endl;
    return 0;
}
```

---

## Using Arrays as Parameters

### One-Dimensional Arrays

Functions can take a one-dimensional array as a parameter by specifying the array type (`int`, `float`, etc.) and the brackets (`[]`).  
Example:

```cpp
void printArray(int arr[], int size);
```

### Two-Dimensional Arrays

Functions can also accept two-dimensional arrays as parameters. However, the second dimension must always be specified.  
Example:

```cpp
void print2DArray(int arr[][3], int rows);
```

### Example: Print a Two-Dimensional Array

```cpp
#include <iostream>
using namespace std;

// Function to print a two-dimensional array
void print2DArray(int arr[][3], int rows) {
    cout << "2D Array Elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    print2DArray(matrix, 2); // Call the function
    return 0;
}
```
