**Day 1: Introduction to C**



**Concepts:**

1. C Programming Language:

   - C is a powerful and widely used programming language developed in the early 1970s.

   - It is known for its efficiency, portability, and versatility, making it suitable for various applications ranging from system programming to web development.



2. Compiling and Running C Programs:

   - C programs are written in plain text and saved with a `.c` extension.

   - To run a C program, you need to follow these steps:

     1. Write the C code in a text editor (e.g., Notepad, Visual Studio Code).

     2. Save the file with a `.c` extension (e.g., `hello.c`).

     3. Open a terminal or command prompt.

     4. Navigate to the directory containing the C file using the `cd` command (e.g., `cd path/to/your/directory`).

     5. Compile the C program using a C compiler (e.g., GCC - GNU Compiler Collection) with the command: `gcc -o output_file input_file.c`.

     6. Run the compiled program using its name (e.g., `./output_file` on Unix/Linux or `output_file.exe` on Windows).



3. Basic Structure of a C Program:

   - A C program typically consists of functions.

   - The `main()` function is the entry point of a C program and is where program execution begins.

   - Statements in C are terminated with a semicolon (`;`).



**Example: "Hello, World!" Program**

The traditional "Hello, World!" program is a simple program used to demonstrate the basic syntax of a programming language.



```c

#include <stdio.h>



int main() {

    printf("Hello, World!\n");

    return 0;

}

```



**Exercises:**



**Exercise 1: Print Your Name**

Write a C program that prints your name to the console.



**Exercise 2: Arithmetic Calculator**

Write a C program that takes two integer inputs from the user and performs basic arithmetic operations (addition, subtraction, multiplication, division) on those numbers, displaying the results.



**Exercise 3: Print a Square Pattern**

Write a C program to print a square pattern of asterisks (`*`) of a user-specified size.



These exercises will help you get started with C programming and familiarize yourself with basic syntax and input/output operations. Remember to compile and run your programs to see the output. Practice is key to becoming proficient in C, so keep coding and experimenting with different concepts!
