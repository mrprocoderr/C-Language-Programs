#include <stdio.h>
void main()
{

    int num, a = 0, b = 1, c;

    printf("Enter any integer number:");
    scanf("%d", &num); // 10
    for (int i = 1; i <= num; i++)
    {
        printf("\nFibonacci series is: %d", a); // 0,1,1,2,3,5,8,13,21,34
        c = a + b;
        a = b;
        b = c;
    }
}