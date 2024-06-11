#include <stdio.h>
void main()
{

    int i, j,n;
    printf("Enter any integer :");
    scanf("%d",&n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == n || j == 1 || i==j)
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

//* * * * *
//*     *
//* 