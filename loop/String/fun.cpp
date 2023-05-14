#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello";
    //str.resize(100);
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    cout<<str.max_size()<<endl;
    //str.clear();
    if(str.empty())
    cout<<"String is empty"<<endl;
    else
    cout<<"Not empty";
    cout<<str<<endl;
    return 0;
}