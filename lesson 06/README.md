# Lesson 6: **While Loops, Do-While Loops, `continue`, `break`, and Variable Scope in C++**

---

## **Introduction**

This lesson focuses on:

1. **While loops**  
2. **Do-while loops**  
3. **The `continue` statement**  
4. **The `break` statement**  
5. **Variable scope**  

These concepts help you write efficient and structured programs by repeating code, exiting loops early, or skipping certain iterations, while understanding where variables can and cannot be accessed.

---

### **1. While Loops**

#### **What is a While Loop?**

A `while` loop repeats a block of code as long as the condition is `true`.

#### **Syntax:**

```cpp
while (condition) {
    // Code to execute repeatedly
}
```

#### **How It Works:**

1. The condition is evaluated first.
2. If the condition is `true`, the code block runs.
3. The process repeats until the condition becomes `false`.

#### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int count = 1;

    // Print numbers from 1 to 5
    while (count <= 5) {
        cout << "Count: " << count << endl;
        count++; // Increment the counter
    }

    return 0;
}
```

---

### **2. Do-While Loops**

#### **What is a Do-While Loop?**

A `do-while` loop is similar to a `while` loop but guarantees that the code inside the block executes **at least once**, even if the condition is false.

#### **Syntax:**

```cpp
do {
    // Code to execute
} while (condition);
```

#### **How It Works:**

1. The block of code runs first.
2. The condition is checked after execution.
3. If the condition is `true`, the loop repeats. Otherwise, it exits.

#### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int count = 1;

    // Print numbers from 1 to 5
    do {
        cout << "Count: " << count << endl;
        count++;
    } while (count <= 5);

    return 0;
}
```

---

### **3. The `continue` Statement**

#### **What is `continue`?**

The `continue` statement skips the current iteration of a loop and moves to the next iteration.

#### **Syntax:**

```cpp
while (condition) {
    if (/* condition to skip */) {
        continue; // Skip the rest of the code in this iteration
    }
    // Code to execute
}
```

#### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << i << " "; // Print only odd numbers
    }
    return 0;
}
```

---

### **4. The `break` Statement**

#### **What is `break`?**

The `break` statement exits the loop immediately, regardless of the condition.

#### **Syntax:**

```cpp
while (condition) {
    if (/* condition to exit */) {
        break; // Exit the loop
    }
    // Code to execute
}
```

#### **Example:**

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Stop the loop when i is 5
        }
        cout << i << " ";
    }
    return 0;
}
```

---

### **5. Variable Scope in C++**

#### **What is Variable Scope?**

Variable scope refers to where a variable can be accessed in a program.

#### **Types of Scope:**

1. **Global Scope**: Variables declared outside all functions, accessible anywhere in the program.
2. **Local Scope**: Variables declared inside a function or block, accessible only within that function or block.
3. **Block Scope**: Variables declared inside `{}` braces, accessible only within those braces.

#### **Example:**

```cpp
#include <iostream>
using namespace std;

int globalVar = 100; // Global variable

int main() {
    int localVar = 50; // Local variable

    if (true) {
        int blockVar = 20; // Block variable
        cout << "Block Variable: " << blockVar << endl;
    }
    // blockVar is not accessible here

    cout << "Global Variable: " << globalVar << endl;
    cout << "Local Variable: " << localVar << endl;

    return 0;
}
```

---

### **Key Differences Between While and Do-While Loops**

| Feature          | `while` Loop                            | `do-while` Loop                        |
|------------------|-----------------------------------------|----------------------------------------|
| **Execution**    | Executes **only if the condition is true**. | Executes **at least once**, even if the condition is false. |
| **Condition Check** | Condition is checked **before** executing the code block. | Condition is checked **after** executing the code block. |
