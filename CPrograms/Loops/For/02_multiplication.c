#include <stdio.h>
void main()
{

    int i, j, num = 0;

    for (i = 2; i <= 5; i++)
    {

        for (j = 1; j <= 10; j++)
        {
            num = i * j;
            printf("\n%d * %d = %d", i, j, num);
        }
    }
}