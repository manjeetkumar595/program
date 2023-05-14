#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a any string : "<<endl;
    getline(cin,str);
    string rev="";
    int len=str.length();
    rev.resize(len);
    //change case of letter
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 &&str[i]<=90)
        {
            str[i]+=32;
        }
    }
    //reverse
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        rev[i]=str[j];
    }
    rev[len]='\0';
    cout<<"Reverse= "<<rev<<endl;
    //compare string
    if(str.compare(rev)==0)
     cout<<"Palindrome"<<endl;
    else
     cout<<"Not a palindrome"<<endl;
    return 0;
}