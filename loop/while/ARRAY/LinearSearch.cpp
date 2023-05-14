#include<iostream>
using namespace std;
int main()
{
    int key,a[10],n=10;
    cout<<"Enter no. ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Found it "<<i;
            return 0;
        }
    }
    cout<<"Not found";

    return 0;
}