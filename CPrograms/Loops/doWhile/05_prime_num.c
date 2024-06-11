#include <stdio.h>
void main()
{

    int num = 0;
    int i = 2;
    int temp = 1;
    printf("Enter any integer:");
    scanf("%d", &num);
    do
    {
        if (num % i == 0)
        {
            printf("%d is not prime number ", num);
            temp = 0;
            break;
        }

        i++;

    } while (i < num - 1);

    if (temp)
    {
        printf("%d is prime number", num);
    }
}