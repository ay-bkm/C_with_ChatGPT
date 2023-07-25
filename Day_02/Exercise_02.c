#include <stdio.h>

/*
Exercise 2: Finding the Maximum Element
Write a C function that takes an integer array and its size as parameters and returns the maximum element in the array.
*/

int maxElem(int arr[], int size)
{
    int i, maxE = 0;
    for (i = 0; i < size; i++)
    {
        if (maxE <= arr[i])
        {
            maxE = arr[i];
        }
    }
    return (maxE);
}
int main(void){
    int myArr[5] = {45, 5455, 885, 0, 4};
    int thesize = sizeof(myArr) / sizeof(myArr[0]);

    int maximum = maxElem(myArr, thesize);
    printf("The maximum  number in the array is: %d", maximum);

    return (0);
}