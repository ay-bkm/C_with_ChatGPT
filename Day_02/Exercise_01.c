#include <stdio.h>
/**
 * main - Sum of Array Elements
 * Return: Always 0 (Success)
*/

/*
Exercise 1: Sum of Array Elements
Write a C function that takes an integer array and its size as parameters and returns the sum of all elements in the array.
*/
int sumArray(int arr[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (sum);
}
int main(void)
{
    int myArray[5] = {1, 1, 1, 1, 1};
    int thesize = sizeof(myArray) / sizeof(myArray[0]);
    int thesum = sumArray(myArray, thesize);
    printf("The sum of this array is: %d\n", thesum);
    return (0);
}