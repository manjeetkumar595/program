#include<iostream>
using namespace std;
int main()
{
    int num1,num2,sum,sub,mult,mod;
    float div;
    cout<<"Enter 1st number ";
    cin>>num1;
    cout<<"Enter 2nd number ";
    cin>>num2;
    sum=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    mod=num1%num2;
    div=num1/num2;
    cout<<"sum of :"<<sum<<endl;
    cout<<"difference : "<<sub<<endl;
    cout<<"multiple of :"<<mult<<endl;
    cout<<"Modulus of : "<<mod<<endl;
    cout<<"Division of : "<<div<<endl;
    return 0;
}