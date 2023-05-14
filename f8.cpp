#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int a,b,c;
    cout<<"Enter two no. ";
    cin>>a>>b;
    c=add(a,b);
    cout<<"Add = "<<c<<endl;
    return 0;
}