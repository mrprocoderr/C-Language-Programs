#include <stdio.h>
void main()
{

    int no, num1 = 0, num2 = 1, num3 = 3, ans;
    printf("\n Enter any integer number:");
    scanf("%d", &no); 
    for (int i = 1; i <= no; i++)
    {
        printf("\nTribonacci series is:%d", num1);
        ans = num1 + num2 + num3;
        num1 = num2;
        num2 = num3;
        num3 = ans;
    }
}