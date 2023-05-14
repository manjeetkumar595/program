#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Mult\n"<<"4. Div\n"<<endl;
    int choice;
    cout<<"Enter your choice : ";
    cin>>choice;
    int a,b,c;
    cout<<"Enter two no. : ";
    cin>>a>>b;
    switch(choice)
    {
        case 1:
         c=a+b;
         break;
        case 2:
         c=a-b;
         break;
        case 3:
         c=a*b;
         break;
        case 4:
         c=a/b;
         break;
        default:
         cout<<"Invalid choice"<<endl;   
    }
    cout<<"Result is : "<<c<<endl;
    return 0;
}