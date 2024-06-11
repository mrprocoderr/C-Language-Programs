#include<stdio.h>
void main(){

    int num1;
    printf("Enter a integer value:");
    scanf("%d",&num1);

    if(num1>11){
        printf("Grater than 11 : %d",num1 );
    }
    else{
        printf("Smaller than 11: %d",num1);
    }
}