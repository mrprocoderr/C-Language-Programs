#include<stdio.h>
void main(){
int a=71,b=5,sum=0, sub=0,mul=0;
int mod=0;
    
    sum=a+b;
    printf("Addition is:%d",sum);
    sub=a-b;
    printf("\nSubtraction is:%d",sub);
    mul=a*b;
    printf("\nMultiplication is:%d",mul);
    printf("\nPreincrement is:%d",++mul);

    mod=(int)a%(int)b;
    printf("\n Modulo is:%d",mod);

 
}