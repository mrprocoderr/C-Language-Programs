#include <stdio.h>
int add(int a)
{
   
    int sqr = a * a;
    return sqr;
   // return sqr,1; // override value on square 1
}
int main()
{

    int num1, num2;
    printf("\nEnter any two integer number:");
    scanf("%d", &num1);

    printf("Square is: %d", add(num1));
}