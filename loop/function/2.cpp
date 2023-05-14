#include<iostream>
using namespace std;
int maximum(int a,int b,int c)
{
    if(a>b && a>c)
     return a;
    else if(b>c && b>a)
     return b;
    else
     return c;
}
int main()
{ 
    int x,y,z;
    cout<<"Enter three no.";
    cin>>x>>y>>z;
    
    cout<<maximum(x,y,z)<<endl;
    return 0;
}