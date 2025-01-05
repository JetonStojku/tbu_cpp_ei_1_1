# Lesson 8: Two-Dimensional Arrays in C++

## What Are Two-Dimensional Arrays?

A **two-dimensional array** (2D array) is an array of arrays. It is used to represent data in rows and columns, similar to a table or matrix.

For example, to store a 3x3 grid of integers, you can use a two-dimensional array.

---

## Why Do We Need Two-Dimensional Arrays?

1. **Representation of Tabular Data**: Ideal for grids, tables, matrices, or other structured data.
2. **Organization**: Simplifies handling of multi-row and multi-column data.
3. **Efficient Processing**: Enables easy implementation of algorithms that work on matrices (e.g., games, image processing).

---

## Declaration and Initialization

### Declaration

To declare a 2D array:

```cpp
type arrayName[rows][columns];
```

Example:

```cpp
int matrix[3][3]; // Declares a 3x3 array of integers
```

### Initialization

You can initialize a 2D array during declaration:

```cpp
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

Alternatively, all elements can be initialized to the same value by explicitly assigning:

```cpp
int matrix[3][3] = {0}; // All elements are 0
```

### Accessing Elements

Elements are accessed using two indices:

```cpp
arrayName[rowIndex][columnIndex];
```

Example:

```cpp
matrix[0][0] = 10; // Assigns 10 to the first element
cout << matrix[1][2]; // Prints the element in the second row, third column
```

---

### Example: Declaring and Printing a 2D Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print the array
    for (int i = 0; i < 2; i++) {        // Loop through rows
        for (int j = 0; j < 3; j++) {    // Loop through columns
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to the next row
    }

    return 0;
}
```
