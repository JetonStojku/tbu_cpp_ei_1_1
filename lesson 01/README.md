# **C++ Lesson 1: Introduction to C++ Programming**

Welcome to your first C++ lesson! In this lesson, you will learn the basics of how C++ works, how to use input and output (`cin` and `cout`), what variables are, and the different types of variables you can use in C++.

---

### **How C++ Works**

C++ is a powerful programming language that allows us to write instructions for the computer to perform tasks. It follows these steps:

1. **Source Code**: You write the code in a text editor or IDE (like Visual Studio Code or Dev-C++).
2. **Compilation**: The source code is compiled (translated) into machine code that the computer can understand.
3. **Execution**: The compiled code is executed by the computer to produce results.

---

### **Basic Input and Output: `cin` and `cout`**

In C++, we use `cout` to output (display) information to the screen and `cin` to take input from the user.

- **`cout`**: Stands for "console output." It is used to print messages and data to the screen.

    ```cpp
    std::cout << "Hello, World!";
    ```

- **`cin`**: Stands for "console input." It is used to read input provided by the user.

    ```cpp
    int number;
    std::cin >> number;  // Reads input from the user and stores it in the variable `number`
    ```

**Example:**

```cpp
#include <iostream>  // Include the input/output library

int main() {
    int age;

    // Asking the user for input
    std::cout << "Enter your age: ";
    
    // Reading the input value
    std::cin >> age;

    // Displaying the result
    std::cout << "Your age is " << age << std::endl;

    return 0;
}
```

---

### **What Are Variables?**

Variables are containers for storing data. When writing a program, we often need to keep track of certain values, such as numbers, text, or other data. This is where variables come in.

- Variables allow us to **store**, **retrieve**, and **manipulate** data.
- Every variable in C++ must have a **name** and a **type** (what kind of data it holds).

---

### **Why Do We Need Variables?**

- **Store Data**: Variables allow us to save data we can use later in the program.
- **Reuse**: Once data is stored in a variable, we can use it multiple times without asking the user for the same information again.
- **Change Values**: We can update the value stored in a variable as needed during the program's execution.

---

### **Different Types of Variables**

C++ has different types of variables, each designed to store a specific kind of data. Here are some of the most common ones:

1. **`int`**: Stores whole numbers (integers).

    ```cpp
    int myAge = 25;  // A variable storing an integer value (e.g., age)
    ```

2. **`float`**: Stores decimal numbers (single precision).

    ```cpp
    float price = 19.99;  // A variable storing a floating-point number (e.g., price)
    ```

3. **`double`**: Stores decimal numbers (double precision, more accurate than `float`).

    ```cpp
    double pi = 3.14159;  // A variable storing a double-precision number (e.g., pi)
    ```

4. **`char`**: Stores a single character (letter, number, symbol).

    ```cpp
    char grade = 'A';  // A variable storing a single character (e.g., grade)
    ```

5. **`bool`**: Stores a Boolean value (`true` or `false`).

    ```cpp
    bool isPassed = true;  // A variable storing a true/false value (e.g., passed status)
    ```

6. **`string`**: Stores text (a sequence of characters). To use `string`, you need to include the `<string>` library.

    ```cpp
    #include <string>  // Include the string library
    std::string name = "John";  // A variable storing a string (e.g., name)
    ```

---

### **Declaring and Initializing Variables**

- **Declaration**: Declaring a variable means telling the program what type of data the variable will hold.

    ```cpp
    int number;  // Declaring a variable of type integer
    ```

- **Initialization**: Initializing a variable means assigning a value to it.

    ```cpp
    int number = 5;  // Declaring and initializing the variable `number`
    ```

You can also declare a variable first and then initialize it later:

```cpp
int number;  // Declaration
number = 5;  // Initialization
```

---

### **Example Program: Using Different Variables**

```cpp
#include <iostream>  // Include the input/output library
#include <string>    // Include the string library

int main() {
    // Declare and initialize variables of different types
    int age = 25;                // Integer variable
    float height = 5.9;          // Float variable
    double weight = 72.5;        // Double variable
    char grade = 'A';            // Character variable
    std::string name = "Alice";  // String variable
    bool isStudent = true;       // Boolean variable

    // Output the values of the variables
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is a student: " << (isStudent ? "Yes" : "No") << std::endl;

    return 0;
}
```

---

### **Summary**

- **C++**: A programming language where you write code, compile it, and run it to perform tasks.
- **`cin`**: Used for taking input from the user.
- **`cout`**: Used for displaying output on the screen.
- **Variables**: Containers that store data. You can use them to store different types of data like integers (`int`), floating-point numbers (`float`, `double`), characters (`char`), Booleans (`bool`), and strings (`string`).
