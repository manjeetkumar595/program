#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="WELCOME";
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;

    }
    cout<<"Length is "<<count<<endl;
    return 0;
}