#include <stdio.h>
void main()
{
    int i, num = 5;
    printf("Enetr any integer:");
    scanf("%d",&i);

    do
    {
        i++;
        printf("\nPrint number: %d", i);
    } while (i <= 5);
}