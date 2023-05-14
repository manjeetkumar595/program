#include<iostream>
using namespace std;
int maximum(int a, int b,int c)
{
    if(a>>b && a>>c)
     return a;
    else if(b>>a && b>>c)
     return b;
    else 
    return c;
}

int main()

{
    int x=10,y=14,z=20;
    int res= maximum(x,y,z);
    cout<<res;
    return 0;
}