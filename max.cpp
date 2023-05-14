#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter array size"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter array element";
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for (int i = 0; i < size; i++)
    {
        if(a[i]>max)
         max=a[i];
    }
    cout<<"Max is = "<<max<<endl;
    return 0;
}