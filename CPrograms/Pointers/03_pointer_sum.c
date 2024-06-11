#include <stdio.h>
int number(int *num)
{
    *num = *num + 10;
   // printf("\nprint the values: %d", num);
}

void main()
{
    int a = 20;
    printf("\nprint the values: %d", a);
    number(&a);
    printf("\nprint the values: %d", a);
}