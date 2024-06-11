#include <stdio.h>
void add(int a, int b)
{
    int sum = a + b;
    printf("\nAddition is:%d", sum);
}
void sub(int a, int b)
{
    int sub = a - b;
    printf("\nSubtraction is:%d", sub);
}
void mul(int a, int b)
{
    int mul = a * b;
    printf("\nMultiplication is:%d", mul);
}
void mod(int a, int b)
{
    int mod = a / b;
    printf("\nModulo is:%d", mod);
}
void div(int a, int b)
{
    if (b != 0)
    {
        int div = a / b;
        printf("\ndivision is:%d", div);
    }
    else
    {
        printf("Error");
    }
}
int main()
{
    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d%d", &num1, &num2);
    add(num1, num2);
    sub(num1, num2);
    mul(num1, num2);
    mod(num1, num2);
    div(num1, num2);
}