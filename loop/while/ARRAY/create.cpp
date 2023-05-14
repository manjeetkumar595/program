#include<iostream>
using namespace std;
int main()
{
    string cars[3];
    cout<<"Enter car name: ";
    for(int i=0;i<3;i++)
    {
        cin>>cars[i];
    }
    for(int i=0;i<3;i++)
    {
        cout<<cars[i]<<endl;
    }
    cout<<sizeof(cars);
    return 0;
}