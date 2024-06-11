#include <stdio.h>
void main()
{

    int mark;
    printf("Enter your mark:");
    scanf("%d", &mark);
    if (mark <= 100 && mark > 90)
    {
        printf("A Grade");
    }
    else if (mark <= 90 && mark > 70)
    {
        printf("B Grade");
    }
    else if (mark <= 70 && mark > 50)
    {
        printf("c Grade");
    }
    else if (mark <= 50 && mark >= 35)
    {
        printf("D Grade");
    }
    else if (mark < 34)
    {
        printf("\nFail Bhai Ghar chala ja...!");
    }
    else
    {
        printf("\nOnly grade(integer) enter plz...");
    }
}