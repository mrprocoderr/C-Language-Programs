#include<stdio.h>
void main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("This is even number");
    }
    else{
        printf("This is odd numebr");
    }
}