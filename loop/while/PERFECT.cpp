#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter any no. ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if (2*n==sum)
    {
        cout<<"Perfect no.";
    }
    else
    {
        cout<<"Not perfect no.";
    }
    
    return 0;
}