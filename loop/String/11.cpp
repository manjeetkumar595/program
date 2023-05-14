#include<iostream>
#include<string>
using namespace std;
int main()
{
    string email;
    cout<<"Enter email address : ";
    getline(cin,email);
    int index=email.find("@");
    cout<<"index= "<<index<<endl;
    cout<<"Username= "<<email.substr(0,index);
    return 0;
}