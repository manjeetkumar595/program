#include<iostream>
using namespace std;
void prime()
{
    int num,i,flag=0;
    cout<<"Enter positive no. ";
    cin>>num;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
     cout<<"Not prime no.";
    else
     cout<<"It's prime no.";
}
int main()
{
    prime();
    return 0;
}