#include <stdio.h>
void main()
{

    int i = 1, num,mul;
    
    printf("Enter the number:");
    scanf("%d", &num);
    while (i <= 10)
    {
        mul=num * i;
        printf("\n%d * %d = %d", num ,i, mul);
        i++;
    }
    
}