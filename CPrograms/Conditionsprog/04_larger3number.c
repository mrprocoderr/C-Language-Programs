#include <stdio.h>
void main()
{

    int num1, num2, num3;
    printf("Enter 3 integer number:\n");
    scanf("\n%d%d%d", &num1, &num2, &num3);
    if (num1 == num2 && num1 == num3)
    {
        printf("All they are same !");
    }

    else if (num1 >= num3 && num1 >= num2)
    {
        printf("grater number is: %d \3 ", num1);
    }

    else if (num2 >= num3 && num2 >= num1)
    {
        printf("grater number is: %d \3 ", num2);
    }
    // else if (num3 >= num1 && num3 >= num2)
    else 
    {
        printf("grater number is: %d \3", num3);
    }
}