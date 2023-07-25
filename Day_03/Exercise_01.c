#include <stdio.h>

/*
Exercise 1: Swapping Variables Using Pointers
 Write a C function that takes two integer pointers as parameters and swaps the values they point to.
*/

void reversefunc(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int val1 = 5;
    int val2 = 6;
    int *ptr1 = &val1;
    int *ptr2 = &val2;
    printf("Values before swapping:\nThe first value (val1): %d\nThe second value (val2): %d\n", *ptr1, *ptr2);
    reversefunc(ptr1 , ptr2); 
    printf("Values after swapping:\nThe first value (val1): %d\nThe second value (val2): %d", *ptr1, *ptr2);
}