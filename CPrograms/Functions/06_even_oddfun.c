#include <stdio.h>

int even(int num)
{

    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{

    int number;
    printf("Enter any integer number:");
    scanf("%d", &number);
    int value = even(number);
    if (value)
    {
        printf("%d Is even ", number);
    }
    else
    {
        printf(" %d Is odd ", number);
    }
}