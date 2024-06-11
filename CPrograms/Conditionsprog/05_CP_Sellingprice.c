#include<stdio.h>
void main(){
    int cp, sp, result;
    printf("Enter a number:");
    scanf("%d%d",&cp,&sp);
    if(sp>cp){
       result=sp-cp;
       printf("This is profit %d/-",result);
    }
    else{
        result=cp-sp;
       printf("This is Loss %d/-",result);

    }

}