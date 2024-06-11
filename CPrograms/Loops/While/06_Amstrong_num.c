#include <stdio.h>
void main()
{

    int num, rem, stored, amstrong = 0;
    printf("\nEnter any integer number:");
    scanf("%d", &num); // 153 //371 //

    stored = num;

    while (num > 0)
    {
        rem = num % 10;                          // Remainder
        amstrong = (rem * rem * rem) + amstrong; // 0=27+0 //27=125+27 //152=1+152 //153
        num = num / 10;                          // Quotient 15,1,0  //rahilela dokhy varch 😅
    }
    if (stored == amstrong)
    {
        printf("\n%d is Amstrong number.", amstrong);
    }
    else
    {
        printf("\n %d is Not Amstrong number.", amstrong);
    }
}