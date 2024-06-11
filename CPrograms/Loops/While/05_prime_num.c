#include <stdio.h>
void main()
{

    int num = 15;
    int i = 2;
    int temp = 1;
   // printf("Enter any integer :");
   // scanf("%d", &num);

    while (i < num - 1)
    {

        if (num % i == 0)
        {
            printf("\n %d Is not prime number", num);
            temp = 0;
            break;
        }
        i++;
    }
    if (temp)
    {
        printf("\n %d Is  prime number ", num);
    }
}