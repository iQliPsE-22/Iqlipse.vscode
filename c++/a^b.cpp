#include<iostream>
using namespace std;
int main()
{
    int a,b,x=1,i=1;
    
    cin>>a>>b;
    

    while(x<=b)
{
    i*=a;
   x++; 
   
}
cout<<i;
    return 0;
}