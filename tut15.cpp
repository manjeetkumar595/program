#include<iostream>
using namespace std;
 int sum(int a,int b)
 {
    int c= a+b;
    return c;
 }

 int main()
 {
    int num1,num2;
    cout<<"Enter 1st no. "<<endl;
    cin>>num1;
    cout<<"Enter 2nd no. "<<endl;
    cin>>num2;
    cout<<"Sum = "<<sum(num1,num2);
    return 0;
 }