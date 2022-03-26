/*0-40 D
41-60 c
61-75 b
75-100 A */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    
    printf("The marks of student is :");
    scanf("%d",&i);
    if (i<=40){
        printf("D");}
        else if (i>40 && i<=60)  {
            printf("C");
    }
    else if(i>60 && i<=75){
        printf("B");
    }
    else
    printf("A");
    return 0; 
}