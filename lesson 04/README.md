# Lesson 4: Constants and Switch Statements in C++

## Overview

In this lesson, we'll cover two important C++ concepts: **Constants** and the **Switch Statement**. Constants allow us to create fixed values that don't change throughout the program, while switch statements help us manage multiple conditions effectively without multiple `if-else` statements.

---

## Section 1: Constants

### What is a Constant?

A **constant** in C++ is a variable whose value is set once and cannot be changed during the execution of the program. Constants are useful when we need a fixed value that shouldn't be altered, such as the value of π (pi) or any other known constant.

### Why Do We Use Constants?

1. **Safety**: Prevents accidental modification of values that shouldn’t change.
2. **Readability**: Names of constants are usually descriptive, making the code more understandable.
3. **Maintainability**: If a value needs updating, it can be changed in one place without altering the entire program.

### Defining a Constant

In C++, constants are defined using the `const` keyword:

```cpp
const float PI = 3.14159;  // Defines a constant PI with a value of 3.14159
```

**Note**: By convention, constants are often written in uppercase to differentiate them from variables.

### Example of a Constant

```cpp
#include <iostream>
using namespace std;

int main() {
    const int DAYS_IN_WEEK = 7;  // Days in a week don't change, so we make this a constant
    cout << "There are " << DAYS_IN_WEEK << " days in a week." << endl;
    
    // DAYS_IN_WEEK = 8;  // This line would cause an error since DAYS_IN_WEEK is a constant
    return 0;
}
```

**Explanation**:

- The `DAYS_IN_WEEK` constant holds the value `7`, which cannot be modified later in the program.
- Attempting to change its value will result in a compilation error.

---

## Section 2: Switch Statements

### What is a Switch Statement?

A **switch statement** allows us to compare the value of a variable against multiple cases. It’s an alternative to using multiple `if-else` conditions, which can make the code cleaner and easier to read.

### Why Do We Use Switch Statements?

1. **Efficiency**: Easier to understand than multiple `if-else` statements for straightforward comparisons.
2. **Organization**: Keeps code organized and makes it easier to add or remove conditions.

### Syntax of Switch Statements

```cpp
switch (variable) {
    case constant1:
        // Code to execute if variable == constant1
        break;  // Ends the current case
    case constant2:
        // Code to execute if variable == constant2
        break;
    // Add more cases as needed
    default:
        // Code to execute if none of the cases match
}
```

- **Variable**: The variable we are comparing.
- **Case**: Each case represents a potential value of the variable.
- **Break**: Used to exit the switch block once a case is executed.
- **Default**: Executes if none of the cases match. It is optional.

### Example of a Switch Statement

Here’s an example where we determine the day of the week based on an integer input:

```cpp
#include <iostream>
using namespace std;

int main() {
    int day;
    
    cout << "Enter a number (1-7) to select a day of the week: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Sunday" << endl;
            break;
        case 2:
            cout << "Monday" << endl;
            break;
        case 3:
            cout << "Tuesday" << endl;
            break;
        case 4:
            cout << "Wednesday" << endl;
            break;
        case 5:
            cout << "Thursday" << endl;
            break;
        case 6:
            cout << "Friday" << endl;
            break;
        case 7:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a number from 1 to 7." << endl;
    }

    return 0;
}
```

**Explanation**:

- The user enters a number between `1` and `7`.
- The `switch` statement checks which day corresponds to the number. For instance, if the input is `1`, it prints "Sunday".
- The `default` case handles any input that doesn’t match a day.

### Important Notes on Switch Statements

- **Only discrete values**: `Switch` statements work with integers, `char`, and enumerated types. They don’t work directly with `float`, `double`, or `string`.
- **Break Statements**: Without `break`, C++ continues executing the next case(s) even if a match is found. This is called **fall-through**.

---

## Summary

In this lesson, we covered:

1. **Constants**:
   - Constants are fixed values that do not change.
   - Defined using the `const` keyword for safety and readability.

2. **Switch Statements**:
   - Allow multi-branching based on a variable’s value.
   - Useful for managing multiple potential values in a cleaner format than `if-else`.
