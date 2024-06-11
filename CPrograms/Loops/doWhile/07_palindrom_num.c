#include <stdio.h>
void main()
{

    int no = 121, revNum = 0, reminder = 0, stored = 0;
    printf("Enter any integer number:");
    scanf("%d", &no);
    stored = no;
    do
    {

        reminder = no % 10;
        revNum = revNum * 10 + reminder;
        no = no / 10;
    } while (no != 0);

    if (stored == revNum)
    {
        printf("\n is palindrom  %d", revNum);
    }
    else
    {

        printf("\nis not palindrom %d", revNum);
    }
}