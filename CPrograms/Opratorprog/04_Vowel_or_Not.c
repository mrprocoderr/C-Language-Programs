#include<stdio.h>
void main(){

    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
  
       printf("It is a vowel: %c",ch);
    }
    else{
       printf("It is a constant: %c",ch);
    }
}
 