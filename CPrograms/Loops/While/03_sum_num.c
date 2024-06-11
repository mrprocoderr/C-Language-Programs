#include <stdio.h>
void main()
{

    int i = 0, num;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("Sum of number:%d", sum);
}