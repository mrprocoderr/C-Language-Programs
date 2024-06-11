#include<stdio.h>
void main(){

    int i,k,j;
    int no,n;
    int value=1;
    printf("Enter any integer number:");
    scanf("%d",&no);
    n=no; //no stored the value of n
    for(i=1;i<=no;i++){
        for(k=1;k<=n;k++){  //5 4 3 2 1
            printf(" ");
        }
        n--;
        for(j=1;j<=i;j++){
            printf("%d ",value);
            value++;
            
        }
        printf("\n");
    }
}