#include <stdio.h>
void main()
{

    int i, j, k, num;
    printf("Enter any integer:");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (k = i; k <= num; k++)
        {
            printf(" ");
        }

        for (j = i; j >= 1; j--)
        {
            if (j == 1 || i == j)
            {

                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = num-1; i >= 1; i--)
    {

        for (k = num; k >= i; k--)
        {
            printf(" ");
        }

        for (j = i; j >= 1; j--)
        {
            if (j == 1 || i == j)
            {

                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}