#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,d,r1,r2;
    cout<<"Enter a,b & c :";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d=0)
    {
        r1=(-b+sqrt(d))/(2*a);
        cout<<"Real and equal";
        cout<<r1;
    }
    else if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"Real and unequal"<<endl;
        cout<<r1<<" "<<r2;
    }
    else{
        cout<<"Imaginary";
    }
    
    return 0;
}