#include<iostream>
using namespace std;
class Rectangle
{
    public :
    int length,breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length + breadth);
    }

};
int main()
{
    
    Rectangle *ptr;
    ptr=new Rectangle;
    ptr ->length=15;
    ptr->breadth=10;
    cout<<"Area = "<<ptr->area()<<endl;
    cout<<"Perimeter = "<<ptr->perimeter()<<endl;
    return 0;
}
