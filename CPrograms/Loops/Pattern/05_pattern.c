#include <stdio.h>
void main()
{

    int i, j, k ,no;
    printf("Enter any integer number:");
    scanf("%d",&no);
    for (i = 1; i <= no; i++)
    {
        for (j = 1; j <= no; j++)
        {
             // if (i==1 || j==1  ||j==1+no/2|| i==1+no/2 || j==no || i==no )
             if (i==1 || j==1  || i==3 || j==5 || i==5 )
            {
                printf(" *");
            }
            else{
                printf("  ");
            }
         
        }
            printf("\n");
    }
}