#include<stdio.h>
void main(){
    char grade;
    printf("Enter your performanc:");
    scanf("\n%c",&grade);
    switch (grade)
    {
    case 'A':printf("Excellent");
    break;
    case 'B':printf("Very Good");
    break;
    case 'C':printf("Good");
    break;
    case 'D':printf("Average");
    break;
    case 'E':printf("Poor");
    break;
   
    default:
         printf("Invalid Input");
    }
    
    }
