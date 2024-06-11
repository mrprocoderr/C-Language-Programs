#include <stdio.h>
void main()
{
    int num=123456, revNum=0 , reminder = 0;
    printf("Enter first 10 number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        int temp;
        reminder = num % 10;
        revNum = revNum * 10 + reminder;
        num /= 10;
    }
    printf("Reverse order : %d", revNum);
}