#include <stdio.h>
/**
 * main - prints square pattern of asterisks
 * Return: Always 0 (Success)
*/
int main(void)
{
    int i, j, size;


    printf("Enter the size of the square:\n");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        putchar('\n');
        for (j = 0; j < size; j++)
        {
            putchar('*');
        }
    }
    return (0);
}