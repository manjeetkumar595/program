#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;
    cout<<"Enter two no. ";
    cin>>x>>y;
    //int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}