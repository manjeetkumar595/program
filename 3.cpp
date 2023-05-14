//swap two no.
#include<iostream>
using namespace std;
int main()
{ 
    int num1,num2,temp;
    cout<<"Enter 1st no.";
    cin>>num1;
    cout<<"Enter 2nd no";
    cin>>num2;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swapping"<<endl;
    cout<<"value of 1st number"<<num1<<endl;
    cout<<"value of 2nd number"<<num2<<endl;
    return 0;
}
