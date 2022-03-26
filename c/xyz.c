#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    printf("the values of x,y,z is :");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y) {
        if(x>z)
        printf("x is greater than y and z");
        else
        printf("z is greater than x and y");
    }
    else
    {
        if(y>z)
        printf("y is greater than x and z");
        else
        printf("z is greater than x and y");
    }
    return 0; 
}