# Lesson 7: One-Dimensional Arrays in C++  

## What is an Array?  

An **array** is a collection of elements of the same type stored in contiguous memory locations. Arrays are used to store multiple values under a single variable name, making it easier to manage large amounts of data.  

For example, if you want to store the marks of 5 students, instead of creating 5 separate variables, you can use an array.  

## Why Do We Need Arrays?  

1. **Efficiency**: Arrays simplify the process of storing and accessing multiple values.  
2. **Easy Management**: With arrays, data can be processed using loops instead of repetitive individual variable handling.  
3. **Dynamic Usage**: Arrays allow for data to be organized systematically (e.g., sorting, searching).  

---

## Declaration and Initialization of One-Dimensional Arrays  

### Declaration  

To declare an array, specify the type, array name, and size:  

```cpp
type arrayName[size];
```  

Example:  

```cpp
int marks[5]; // Declares an array of 5 integers
```

### Initialization  

An array can be initialized during declaration:  

```cpp
int marks[5] = {90, 85, 78, 92, 88}; // Initializes the array with 5 values
```  

If you omit the size but provide the values, the size is inferred:  

```cpp
int marks[] = {90, 85, 78}; // Size is 3
```  

### Accessing Array Elements  

Array elements are accessed using an **index**, starting from 0:  

```cpp
marks[0] = 95;    // Updates the first element
cout << marks[2]; // Prints the third element
```  

---

### Example of Declaring, Initializing, and Accessing an Array  

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks[5] = {90, 85, 78, 92, 88}; // Initialize array

    // Access and print array elements
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << "'s marks: " << marks[i] << endl;
    }

    return 0;
}
```  

## Key Points to Remember

Indexing: Array indices start at 0 and go up to size - 1.
Fixed Size: Once declared, the size of an array cannot be changed.
Same Type: All elements in an array must be of the same type.
Out of Bounds: Accessing an index outside the array size leads to undefined behavior.
