#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day no. ";
    cin>>day;
    if(day==1)
     cout<<"mon";
    else if(day==2) 
    cout<<"tue";
    else if(day==3)
    cout<<"wed";
    else if(day==4)
    cout<<"thu";
    else if(day==5)
    cout<<"fri";
    else if(day==6)
    cout<<"sat";
    else if(day==7)
    cout<<"sun";
    else
    cout<<"Invalid day";
    return 0;
}