#include <stdio.h>
#include <stdlib.h>

/*
Exercise 2: Dynamic Array Creation 
Write a C program that dynamically allocates memory for an integer array based on user input for the array size.
*/

int main(void){
    int arrsize = 0;
    int *ptr;
    printf("Enter the size of Array:\n");
    scanf("%d", &arrsize);
    ptr = (int *)malloc(arrsize * sizeof(int));

if (ptr == NULL) {
        printf("Memory allocation failed. Exiting program.");
        return 1;
    }

    printf("The allocated memory is: %ld bytes\n", arrsize * sizeof(int));
    printf("The adress of the allocated memory is: %p\n", ptr);

free (ptr);
return (0);
}