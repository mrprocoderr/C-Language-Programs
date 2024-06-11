#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter two value:");
    scanf("%d%d",&num1,&num2);
    if(num1==num2){
        printf("Both are equal number %d == %d",num1,num2);
    }
    else{
        printf("Both are not equal %d != %d ",num1,num2);
    }
}