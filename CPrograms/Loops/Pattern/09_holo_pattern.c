#include <stdio.h>
void main()
{

    int i, j, k, num, sto_num;
    printf("Enter any integer:");
    scanf("%d", &num);
   sto_num = num;
    for (i = 1; i <= num; i++)
    {
        for (k = 1; k <= sto_num; k++)
        {
            printf(" ");
        }
        sto_num--;
        for (j = 1; j <= i; j++)
        {
            if (j==1 || i==num || i==j  )
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