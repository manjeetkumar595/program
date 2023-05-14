#include<iostream>
using namespace std;
class Rectangle
{
    private:
      int length,breadth;
    public:
     Rectangle()
     {
        length=0;
        breadth=0;
     }
     Rectangle(int l,int b){
        setLength(l);
        setBreadth(b);
     }
     Rectangle(Rectangle &rect)
     {
        length=rect.length;
        breadth=rect.breadth;
     }
     void setLength(int l)
     {
        if (l>0)
        {
            length=l;
        }
        else
         length=0;
     }
     void setBreadth(int b)
     {
        if(b>0)
         breadth=b;
        else
         breadth=0;
     }
     int getLength()
     {
        return length;
     }
     int getBreadth()
     {
        return breadth;
     }
     int area()
     {
        return length*breadth;
     }
     int perimeter()
     {
        return 2*(length+breadth);
     }
};
int main()
{
    Rectangle r();
    Rectangle r1(10,5);
    Rectangle r2(r1);
    //cout<<"Area= "<<r.area()<<endl;
    cout<<"Area1= "<<r1.area()<<endl;
    cout<<"Area2= "<<r2.area()<<endl;
    return 0;
}