#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year : ";
    cin>>year;
    if(year%4==0)
    cout<<"leap year";
    else if(year%400==0)
    cout<<"leap year";
    else if(year%100==0)
    cout<<"Not leap year";
    else 
    cout<<"Not leap year";
    return 0;
}