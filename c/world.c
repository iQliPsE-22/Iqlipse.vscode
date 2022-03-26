#include<stdio.h>
#include<stdlib.h>//standrad library

int main(){
    int x,y;
    printf("Please enter value of x and y : ");
    scanf("%d%d",&x,&y);
    
    if(x>y)
    {
        printf("x is greater than y");
    }
    else
    {
        printf("y is greater than x");
    }
    return 0;

}

