#include <stdio.h>

/*
Exercise 3: Reversing an Array
Write a C function that takes an integer array and its size as parameters and 
reverses the elements of the array in-place.
*/

void revfunc(int arr[], int size)
{
    int i, j, temp;
    for (i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(void)
{
    int myArr[5] = {78, 45, 88, 5, 0};
    int thesize = sizeof(myArr) / sizeof(myArr[0]);
    int originalArray;

    printf("The original Array: \n");
    for (int i = 0; i < thesize; i++)
    {
        printf("%d", myArr[i]);
        if (i < thesize - 1)
        {
        printf(", ");

        }
        
    }
    printf("\n");   
    revfunc(myArr, thesize);
    printf("The reversed Array: \n");
    for (int i = 0; i < thesize; i++)
    {
        
        printf("%d", myArr[i]);
        if (i < thesize - 1)
        {
        printf(", ");

        }
    }

}