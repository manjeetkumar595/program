#include<iostream>
using namespace std;
template<class T>
T maximum(T x, T y)
{
    if(x>y)
     return x;
    else
     return y;
}
int main()
{
    int c=maximum(19,5);
    float d=maximum(10.5f,6.6f);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}