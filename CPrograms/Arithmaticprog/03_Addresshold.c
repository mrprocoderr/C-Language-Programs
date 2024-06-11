#include<stdio.h>
int main(){
    int num1=0,num2=0,sum=0;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    printf("\nPrint first numbers:%d",num1);
    printf("\nPrint second numbers:%d",num2);
    
    sum=num1+num2;
    printf("\nAddition is:%d",sum);

    printf("\nAddress is:%d",&sum);
    printf("\nAddress is:%d",&num1);
    printf("\nAddress is:%d",&num2);
}