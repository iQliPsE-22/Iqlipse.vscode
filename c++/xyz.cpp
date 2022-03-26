#include<iostream>
using namespace std;

int main()
{
    int x,y,z,a;
    cin>>x>>y>>z>>a;

if (x>y && x>z)
{
    if(x>a)
        cout<<x;
    else
        cout<<a;
}
else if (y>z && y>a)
{
    if(y>z)
        cout<<y;
    else
        cout<<a;
}
else
{    if(z>a)
    cout<<z;
    else 
    cout<<a;
}
    return 0;
}