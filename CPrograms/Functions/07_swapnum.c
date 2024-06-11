#include <stdio.h>
int swap(int number1, int number2)
{
   
     number1= number1+number2;
    number2 = number1-number2;
    number1 = number1-number2;

    printf("\nAfter swapping number1:%d & number2:%d", number1, number2);
}

void main()
{
    int num1, num2;
    printf("\nEnter any two integer numbers :");
    scanf("%d%d", &num1, &num2);
    printf("\nbefor swapping number1:%d & number2:%d", num1, num2);
    swap(num1, num2);
}
