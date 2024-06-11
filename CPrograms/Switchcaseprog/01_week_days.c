#include<stdio.h>
void main(){
    char day_firstchar;
    printf("Enter days first charecter:");
    scanf("\n%c",&day_firstchar);
    switch (day_firstchar)
    {
    case 'M':printf("Monday");
    break;
    case 't':printf("tuesday");
    break;
    case 'W':printf("Wednesday");
    break;
    case 'T':printf("Thuesday");
    break;
    case 'F':printf("Friday");
    break;
    case 'S':printf("Saturday");
    break;
    case 's':printf("sunday");
    break;
    default:
         printf("Invalid Input");
    }
    
    // int day_num;
    // printf("Enter your day:");
    // scanf("%d",&day_num);
    // switch (day_num)
    // {
    // case 1:printf("Monday");
    // break;
    // case 2:printf("tuesday");
    // break;
    // case 3:printf("Wednesday");
    // break;
    // case 4:printf("Thuesday");
    // break;
    // case 5:printf("Friday");
    // break;
    // case 6:printf("Saturday");
    // break;
    // case 7:printf("Sunday");
    // break;
    // default:
    //      printf("Invalid Input");
    // }
}