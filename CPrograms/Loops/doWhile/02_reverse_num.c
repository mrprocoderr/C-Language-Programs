#include <stdio.h>
void main()
{

    int i, revNum = 0, reminder = 0;
    printf("Enter any 10 number:");
    scanf("%d", &i);
    do
    {
        reminder = i % 10;
        revNum = revNum * 10 + reminder;
        i = i / 10;

    } while (i != 0);

    printf("Reverse num:%d", revNum);
}