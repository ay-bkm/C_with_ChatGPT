#include <stdio.h>
/**
 * main - Takes input from user
 * Return: Always 0 (Success)
*/

int main(void){
    char operator;
    int first_number;
    int second_number;

    printf("Write the arithmetic operator:\n");
    scanf("%c", &operator);
    printf("Enter the first number:\n");
    scanf("%d", &first_number);
    printf("Enter the second number: \n");
    scanf("%d", &second_number);

    switch (operator)
    {
    case '+':
        printf("The result of arithmetic operation is %d", first_number + second_number);
        break;
    case '-':
        printf("The result of arithmetic operation is %d", first_number - second_number);
        break;
    case '/':
        printf("The result of arithmetic operation is %d", first_number / second_number);
        break;
    case '*':
        printf("The result of arithmetic operation is %d", first_number * second_number);
        break;
    
    default:
        printf("%c is not a valid operator.", operator);
        break;
    }
    return (0);
}