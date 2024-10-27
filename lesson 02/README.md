# **C++ Lesson 2: Conditional Statements in C++**

Welcome to the second C++ lesson! In this lesson, we will explore **conditional statements** like `if`, `else if`, and `else`. You’ll learn how to make decisions in your programs, check conditions, and execute different code depending on the situation.

---

### **Why Do We Need If Statements?**

In programming, there are many situations where we need our code to make decisions based on conditions. For example, we may want to:

- Check if a user’s input is valid.
- Decide whether someone is eligible for something (like a discount based on age).
- Perform different actions based on the weather (rainy or sunny).

This is where **conditional statements** come in. They allow the program to decide which path to take based on a condition.

---

### **What is an `if` Statement?**

The `if` statement allows us to **check a condition**. If the condition is true, the code inside the `if` block is executed. If the condition is false, the code is skipped.

**Syntax of `if` Statement**:

```cpp
if (condition) {
    // Code to run if condition is true
}
```

- **Condition**: A logical statement that evaluates to either `true` or `false`.
- **Block**: The code inside the `{}` will only run if the condition is true.

---

### **What is `else if`?**

Sometimes, we need to check multiple conditions. If the first `if` statement is false, we can use `else if` to check another condition.

**Syntax of `else if` Statement**:

```cpp
if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition2 is true
}
```

---

### **What is `else`?**

The `else` statement is used to run code if none of the `if` or `else if` conditions are true.

**Syntax of `else` Statement**:

```cpp
if (condition1) {
    // Code if condition1 is true
} else if (condition2) {
    // Code if condition2 is true
} else {
    // Code if neither condition1 nor condition2 is true
}
```

- **Important**: The `else` statement does not have a condition. It simply runs when all previous conditions are false.

---

### **What is a Condition?**

A **condition** is a logical expression that can be either true or false. Conditions are used to control the flow of the program, allowing it to make decisions based on the result.

**Example of a condition**:

```cpp
if (age >= 18) {
    std::cout << "You are an adult.";
}
```

In this case, `age >= 18` is the condition. It checks whether the value of `age` is greater than or equal to 18.

---

### **Comparison Operators**

Conditions often use **comparison operators** to compare values. Here are some common ones:

| Operator | Description                  | Example          |
|----------|------------------------------|------------------|
| `==`     | Equal to                     | `a == b`         |
| `!=`     | Not equal to                 | `a != b`         |
| `>`      | Greater than                 | `a > b`          |
| `<`      | Less than                    | `a < b`          |
| `>=`     | Greater than or equal to     | `a >= b`         |
| `<=`     | Less than or equal to        | `a <= b`         |

These operators are used inside conditions to compare variables or values.

---

### **Logical Operators (Connecting Multiple Conditions)**

Sometimes, you need to check multiple conditions at the same time. You can connect them using **logical operators**:

| Operator | Description                  | Example                      |
|----------|------------------------------|------------------------------|
| `&&`     | AND (Both conditions must be true) | `a > 0 && a < 10` |
| `\|\|`     | OR (One of the conditions must be true) | `a < 0 \|\| b > 5` |
| `!`      | NOT (Inverts the condition)   | `!(a == 5)` (true if `a` is not 5) |

### **Truth Table for `&&` (AND) and `||` (OR)**

| Condition 1 | Condition 2 | `&&` (AND) | `\|\|` (OR) |
|-------------|--------------|------------|-----------|
| `true`      | `true`       | `true`     | `true`    |
| `true`      | `false`      | `false`    | `true`    |
| `false`     | `true`       | `false`    | `true`    |
| `false`     | `false`      | `false`    | `false`   |

---

- **AND (`&&`)**: The result is `true` **only if both conditions are true**.
- **OR (`||`)**: The result is `true` **if at least one of the conditions is true**.

---

### **Examples**

#### Example 1: Checking if a Number is Positive

```cpp
#include <iostream>

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is positive
    if (number > 0) {
        std::cout << "The number is positive.";
    } else if (number == 0) {
        std::cout << "The number is zero.";
    } else {
        std::cout << "The number is negative.";
    }

    return 0;
}
```

#### Example 2: Grading System

```cpp
#include <iostream>

int main() {
    int score;

    std::cout << "Enter your score: ";
    std::cin >> score;

    // Check the score and assign a grade
    if (score >= 90) {
        std::cout << "Grade: A";
    } else if (score >= 80) {
        std::cout << "Grade: B";
    } else if (score >= 70) {
        std::cout << "Grade: C";
    } else if (score >= 60) {
        std::cout << "Grade: D";
    } else {
        std::cout << "Grade: F";
    }

    return 0;
}
```

#### Example 3: Checking Age for Driving Eligibility

```cpp
#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Check if the user is eligible to drive
    if (age >= 18) {
        std::cout << "You are eligible to drive.";
    } else {
        std::cout << "You are not eligible to drive.";
    }

    return 0;
}
```

---

### **Summary**

In this lesson, you learned:

- The **`if` statement** is used to check a condition and run code if it is true.
- The **`else if` statement** allows checking multiple conditions.
- The **`else` statement** runs code if none of the conditions are true.
- **Conditions** use comparison operators to compare values.
- You can connect conditions using **logical operators** like `&&` (AND) and `||` (OR).
