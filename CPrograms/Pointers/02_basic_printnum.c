#include <stdio.h>
void main()
{
    int num = 10;
    int *p;
    p = &num;

    printf("\nNumber is: %d ", num);
    printf("\naddress of number is: %d ", &num);
    printf("\nInside the pointer value is: %d", p);
    printf("\nPointer value is: %d", *p);
}