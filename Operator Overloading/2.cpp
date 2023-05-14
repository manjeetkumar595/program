#include<iostream>
using namespace std;

class Complex
{
    private:
     int real,imag;
    public:
     Complex(int r=0,int i=0)
     {
        real=r;
        imag=i;
     }
     Complex operator +(Complex x)
     {
        Complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
     }
     void display()
     {
        cout<<real<<"+"<<imag<<"i"<<endl;
     }
};

int main()
{
    int p1,p2;
    cout<<"Enter two no."<<endl;
    cin>>p1>>p2;
    Complex c1(p1,p2);
    Complex c2(5,4);
    Complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}