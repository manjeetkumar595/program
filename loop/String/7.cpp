#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string :";
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++)
    {
        str[i]+=32;
    }
    cout<<str;
    return 0;

}