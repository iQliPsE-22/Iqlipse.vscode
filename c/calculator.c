#include<stdio.h>
#include<stdlib.h>

int main (){
    int num1,num2;
    char opr;
    printf("Enter the operator :");
    scanf("%c%",&opr);
    printf("Enter number 1 and  number 2 :");
    scanf("%d%d",&num1,&num2);
     
    switch(opr) {
        case '+':
        printf("The sum is:%d" ,num1+num2);
        break;
        case '-':
        printf("The difference is:%d" ,num1-num2);
        break;
        case '*':
        printf("The product is:%d" ,num1*num2);
        break;
        case '/':
        printf("the quotient is:%d" ,num1/num2);
        break; 
        default: printf("\nInvalid operator");
        break;
    }
    
    return 0;
} 