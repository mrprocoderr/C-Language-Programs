#include <stdio.h>
void main()
{

    int i, j, k, num, sto_num;
    printf("Enter any integer:");
    scanf("%d", &num);
    sto_num = num;
    for (i = num; i >= 1; i--)
    {
        for (k = sto_num; k >= 1; k--)
        {
            printf(" ");
        }
        sto_num++;
        for (j = i; j >= 1; j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}