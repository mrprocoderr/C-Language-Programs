#include <stdio.h>
void main()
{

    int fact=1, num;
    printf("Enter any number :");
    scanf("%d", &num);
    while (num != 0)
    {

        fact = fact * num;
        num--;
    }
    printf("Factorial is :%d", fact);
}