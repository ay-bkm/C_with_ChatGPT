**Day 3: Pointers and Memory Management**

**Concepts:**
1. Pointers:
   - A pointer is a variable that stores the memory address of another variable.
   - Pointers are essential for dynamic memory allocation, passing variables to functions by reference, and working with arrays.

2. Declaring and Initializing Pointers:
   - To declare a pointer, use the asterisk (*) symbol followed by the data type. For example, `int *ptr;` declares a pointer to an integer.
   - Pointers must be initialized with the address of a variable before they can be used. For example, `int x = 10; int *ptr = &x;`.

3. Dereferencing Pointers:
   - Dereferencing a pointer means accessing the value stored in the memory address it points to. Use the asterisk (*) symbol before the pointer variable to dereference it. For example, `int y = *ptr;` assigns the value of the variable `x` to `y`.

4. Dynamic Memory Allocation:
   - The `malloc` function allows you to allocate memory dynamically during program execution.
   - Dynamic memory allocation is useful when you need to create data structures of variable sizes, like arrays.

5. Freeing Allocated Memory:
   - After dynamically allocating memory using `malloc`, it's essential to release the memory using the `free` function to avoid memory leaks.

**Exercises:**

**Exercise 1: Swapping Variables Using Pointers**
Write a C function that takes two integer pointers as parameters and swaps the values they point to.


**Exercise 2: Dynamic Array Creation**
Write a C program that dynamically allocates memory for an integer array based on user input for the array size.



**Exercise 3: Using Pointers to Modify Array Elements**
Write a C function that takes an integer array and its size as parameters and increments all elements of the array by a specified value.


These exercises will help you gain a solid understanding of pointers and dynamic memory allocation in C. Remember to run the code, experiment with pointers, and observe the changes to the variables' values. Keep practicing, and you'll become more comfortable with these concepts over time.
