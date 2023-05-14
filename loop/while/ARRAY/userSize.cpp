#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter no. of element ";
    cin>>size;
    int a[size];
    cout<<"Enter array element";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<sizeof a;
    return 0;
}