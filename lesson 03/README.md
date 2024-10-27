# **Lesson 3: Loops in C++ - Focus on `for` Loops**

## **What Are Loops?**

In programming, loops are structures that allow us to repeat a block of code multiple times. Loops are essential for automating repetitive tasks and reducing the amount of code you need to write.

### **Why Do We Need Loops?**

Loops help us:

- **Avoid repetition**: Instead of writing the same code multiple times, we use loops to repeat actions.
- **Work efficiently with data**: Loops allow us to process data collections (like arrays) by iterating through them.
- **Handle dynamic situations**: When you don’t know in advance how many times an action needs to be performed, loops allow for flexible repetition.

---

## **What Is a `for` Loop?**

A `for` loop is a control flow statement that allows us to execute a block of code a specific number of times. It’s especially useful when we know how many iterations are needed in advance.

### **Syntax of a `for` Loop**

```cpp
for (initialization; condition; update) {
    // Code block to be executed
}
```

- **Initialization**: This step is executed only once at the beginning of the loop. It usually sets up a loop control variable (e.g., `int i = 0`).
- **Condition**: This is the condition that must be true for the loop to continue. The loop runs as long as this condition is true. When it’s false, the loop stops.
- **Update**: After every iteration, this step is executed. It typically updates the loop control variable (e.g., `i++`).

---

## **Example of a `for` Loop**

Here’s a simple example where we print the numbers from 1 to 5:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {  // Loop from 1 to 5
        cout << "Number: " << i << endl;  // Output the value of i
    }
    return 0;
}
```

### **How It Works:**

1. **Initialization**: `int i = 1` (the loop starts with `i = 1`).
2. **Condition**: `i <= 5` (the loop runs as long as `i` is less than or equal to 5).
3. **Update**: `i++` (after each iteration, `i` increases by 1).

The loop will run 5 times, printing the numbers 1 to 5.

---

## **Why Use `for` Loops?**

We use `for` loops when:

- We know **in advance** how many times we need to iterate.
- We need to work with a **range of numbers** or **process elements** in an array or a collection.
  
The `for` loop is compact and easy to understand, especially for tasks that involve counting or traversing through a sequence.

---

## **Loop Control in `for` Loops**

### **1. Break Statement**

The `break` statement allows us to exit a loop early, even if the loop’s condition is still true.

Example:

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        break;  // Exit the loop when i equals 3
    }
    cout << "Number: " << i << endl;
}
```

This will print `1` and `2`, then exit the loop when `i` is `3`.

### **2. Continue Statement**

The `continue` statement skips the current iteration of the loop and moves to the next one.

Example:

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Skip the rest of the loop when i equals 3
    }
    cout << "Number: " << i << endl;
}
```

This will print `1`, `2`, `4`, and `5`, skipping `3`.

---
