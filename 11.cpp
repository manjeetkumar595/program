#include<iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter hour :";
    cin>>hour;
    if(hour>=9 && hour<=18)
    {
        cout<<"Working";
    }
    else{
        cout<<"leisure";
    }

    return 0;
}