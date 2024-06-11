#include<stdio.h>
void main(){

    int i,k,j;
    int no,n;
    printf("Enter any integer number:");
    scanf("%d",&no);
    n=no; //no stored the value of n
    for(i=1;i<=no;i++){        //row
        for(k=1;k<=n;k++){     //space
            printf(" ");
        }
        n--; // decrement the space
        for(j=1;j<=i;j++){     //disply patern
            printf("%d ",i);
            // printf("%d ",j);
        }
        printf("\n");
    }
}