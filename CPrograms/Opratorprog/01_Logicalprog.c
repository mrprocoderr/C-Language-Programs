#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter two value:");
    scanf("%d%d",&num1,&num2);
    num1+=num2;
    printf("Sum of two numbers:%d\n",num1);
    num1-=num2;
    printf("Subtraction:%d\n",num1);
    num1*=num2;
    printf("Multiplaction:%d\n",num1);
    num1/=num2;
    printf("Division:%d\n",num1);
    num1%=num2;
    printf("Modulo:%d",num1);

    }