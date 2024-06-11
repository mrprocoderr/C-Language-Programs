#include <stdio.h>
void main()
{
    int num1, num2;
    char oprator;
    printf("\nEnter the two integer:");
    scanf("%d%d", &num1, &num2);
    printf("\nEnter your choice:\n");
    scanf("\n%c", &oprator);
    switch (oprator)
    {
    case '+':
        num1 += num2;
        printf("Addition is:%d", num1);
        break;
    case '-':
        num1 -= num2;
        printf("Subtraction is:%d", num1);
        break;
    case '*':
        num1 *= num2;
        printf("Multiplication is:%d", num1);
        break;
    case '/':
        if (num2 != 0)
        {   num1 /= num2;
            printf("Division is:%d", num1);
            break;
        }
        else{
            printf("Error");
        }
    case '%':
        num1 %= num2;
        printf("Modulo is:%d", num1);
        break;
    default:
        printf("Enter proper oprator..!");
        break;
    }
}