#include <stdio.h>
void main()
{
    int fact = 1, i;
    printf("Enter any integer number:");
    scanf("%d", &i);
    do
    {
        fact = fact * i;
        i--;
    } while (i != 0);
    printf("Factorial is:%d", fact);
}