#include <stdio.h>
int add()
{
    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d%d", &num1, &num2);
    int sum = num1 + num2;
    return sum;
}
int sub()
{
    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d%d", &num1, &num2);
    int sub = num1 - num2;
    return sub;
}
int mul()
{
    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d%d", &num1, &num2);
    int mul = num1 * num2;
    return mul;
}
int mod()
{
    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d%d", &num1, &num2);
    int mod = num1 % num2;
    return mod;
}
int div()
{
    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d%d", &num1, &num2);
    if (num2 != 0)
    {

        int div = num1 / num2;
        return div;
    }
    else
    {
        printf("Error");
        return 0;
    }
}
int main()
{
    // int value = add();
    // printf(" Sum is: %d", value);

    // printf(" Sub is: %d", sub());
    // printf(" Mul is: %d", mul());
    // printf(" Mod is: %d", mod());
    printf(" div is: %d", div());
}