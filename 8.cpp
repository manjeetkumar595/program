#include<iostream>
using namespace std;
int main()
{
    float celsius,fahrenheit;
    cout<<"Enter fahrenheit ";
    cin>>fahrenheit;
    celsius=((fahrenheit-32)*5)/9;
    cout<<"celsius = " <<celsius;
    return 0;
}