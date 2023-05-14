#include<iostream>
using namespace std;
class Shape
{
    public:
     virtual float area()=0;
     virtual float perimeter()=0;
};
class Rectangle:public Shape
{
    private:
     float length,breadth;
    public:
     Rectangle(int l=1,int b=1)
     {
        length=l;
        breadth=b;
     }
     float area()
     {
        return length*breadth;
     }
     float perimeter()
     {
        return 2*(length+breadth);
     }
};
class Circle:public Shape
{
    private:
     float radius;
     public:
      Circle(int r)
      {
        radius=r;
      }
      float area()
      {
        return 3.142*radius*radius;
      }
      float perimeter()
      {
        return 2*3.142*radius;
      }

};
int main()
{
    Shape *p=new Rectangle(10,5);
    cout<<"Area of Rectangle = "<<p->area()<<endl;
    cout<<"Perimeter of Rectangle= "<<p->perimeter()<<endl;

    p=new Circle(5);
    cout<<"Area of circle= "<<p->area()<<endl;
    cout<<"Perimeter of circle = "<<p->perimeter()<<endl;
    return 0;
}
