#include<iostream>
using namespace std;
int main()
{
    int n;
    float num[100],sum=0.0,average;
    cout<<"Enter the no. of elements ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". Enter No.";
        cin>>num[i];
        sum=sum+num[i];
    }
    average=sum/n;
    cout<<"Average = "<<average;
    return 0;
}