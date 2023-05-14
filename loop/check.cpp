#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter anything" ;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
     cout<<"Uppercase";
    }
    else if(ch>=97 && ch<=122)
    {
         cout<<"lowercase";
    }
    else
    {
        cout<<"digit";
     }


    return 0;
}