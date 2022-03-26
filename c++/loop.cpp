#include<iostream>
using namespace std;

int main()
{
    int m,n,i=0,y=0;
    cin>>m>>n;

    while(m<=n)
    {
        i+=m;
        m++;
        y++;


    }
    cout<<i<<"\n";
    cout<<y<<"\n";
    cout<<"The average value is "<<i/y;
    
    
    
    return 0;
}
    