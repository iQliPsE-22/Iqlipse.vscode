#include<iostream>
using namespace std;

int main()
{
    int n,x=1,y=1;
    cin>>n;

    while(x<=n)
    {
        y*=x;
        x++;
    }
cout<<y;
    return 0;
}