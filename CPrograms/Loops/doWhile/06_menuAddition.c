#include <stdio.h>

int main()
{
    int num1, num2, option;
    char continueChoice ;

    do
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiply");
        printf("\n4. Divide");
        printf("\n5. Continue");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        if (option > 0 && option < 5)
        {
            printf("\nEnter two integer numbers: ");
            scanf("%d%d", &num1, &num2);

            switch (option)
            {
            case 1:
                printf("\nAddition is: %d\n", num1 + num2);
                break;
            case 2:
                printf("Subtraction is: %d\n", num1 - num2);
                break;
            case 3:
                printf("Multiply is: %d\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                {
                    printf("Divide is: %d\n", num1 / num2);
                }
                else
                {
                    printf("Error: Division by zero is not allowed\n");
                }
                break;
            }
        }
        else if (option == 6)
        {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        else if (option != 5)
        {
            printf("Invalid choice. Please enter a valid option.\n");
        }

        if (option != 6)
        {
            printf("Do you want to continue? (y/n): ");
            scanf(" %c", &continueChoice);
        }

    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}
