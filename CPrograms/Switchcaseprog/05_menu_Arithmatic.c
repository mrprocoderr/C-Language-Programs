/* Question 5: Menu-Driven Program
      Write a C program that displays a menu with four options:
      1. Add, 2. Subtract, 3. Multiply, 4. Divide. The user should select an option and then input two numbers.
      Use a switch statement to perform the selected operation and display the result.
      If the user selects an invalid option, display an error message.

 */

#include <stdio.h>
void main()
{

    int num1, num2, option;
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiply");
    printf("\n4.Divide");
    printf("\nEnter your choice:");
    scanf("%d", &option);
    
    if (option > 0 && option < 5)
    {
        printf("\nEnter two integer number:");
        scanf("%d%d", &num1, &num2);
    }
    else
    {
        printf("Invalid choise.. ");
    }
    switch (option)
    {
    case 1:
        num1 += num2;
        printf("\nAddition is:%d", num1);
        break;
    case 2:
        num1 -= num2;
        printf("Subtraction is:%d", num1);
        break;
    case 3:
        num1 *= num2;
        printf("Multiply is:%d", num1);
        break;
    case 4:
        if (num2 != 0)
        {
            num1 /= num2;
            printf("Divide is:%d", num1);
            break;
        }
        else
        {
            printf("Error");
        }
    }
}