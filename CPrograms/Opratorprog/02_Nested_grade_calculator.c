#include <stdio.h>
void main()
{

    int mark;
    printf("Enter your grade:");
    scanf("%d", &mark);
    // printf("Grade is:%d\n",mark);
    if (mark >= 75)
    {
        printf("Grade A");
    }
    else{
        if(mark>=60){
            printf("Grade B");
        }
        else{
            if(mark>=40){
                printf("Grade C");

            }
            else{
                printf("Fail...! \nNext Time...");
            }
        }
    }
   
}
