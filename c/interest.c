#include<stdio.h>
#include<stdlib.h>

int main(){
   int P,T,R;
    printf("The value of Principal amount,Time and Rate is :");
    scanf("%d%d%d",&P,&T,&R);
    printf("Simple interest is:%d" , P*T*R/100);
    return 0;	
}