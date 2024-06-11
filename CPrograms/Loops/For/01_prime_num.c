#include <stdio.h>
void main()
{
    int num, temp = 1;
    printf("Enter any integer no.: ");
    scanf("%d", &num);

    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not Prime number", num);
            temp = 0;
            break;
        }
    }
    if (temp)
    {
        printf("%d is prime number", num);
    }
}