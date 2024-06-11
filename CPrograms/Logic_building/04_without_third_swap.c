#include <stdio.h>
int swap(int *number1, int *number2)
{

    // *number1 = *number1 + *number2; //logic 1
    // *number2 = *number1 - *number2;
    // *number1 = *number1 - *number2;

    *number1 = *number1 * *number2; // logic 2
    *number2 = *number1 / *number2;
    *number1 = *number1 / *number2;

    // printf("\nAddress of number1 is:%d:-%d", number1, *number1);
    // printf("\nAddress of number2 is:%d:-%d\n", number2, *number2);
}

void main()
{
    int num1, num2;
    printf("\nEnter any two integer numbers :");
    scanf("%d%d", &num1, &num2);

    // printf("\nAddress of number1 is:%d:-%d", &num1, num1);
    // printf("\nAddress of number2 is:%d:-%d\n", &num2, num2);
    printf("\nbefor swapping number1:%d & number2:%d\n", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping number1:%d & number2:%d", num1, num2);
}
