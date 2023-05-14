#include<iostream>
using namespace std;
class Student
{
    private:

     int roll;
     string name;
     int mathMArks;
     int phyMArks;
     int chemMArks;
    public:
     Student(int r,string n,int m,int p,int c)
     {
        roll=r;
        name=n;
        mathMArks=m;
        phyMArks=p;
        chemMArks=c;
     }
     int totat()
     {
        return mathMArks+phyMArks+chemMArks;
     }
     char grade()
     {
        int average=totat()/3;
        if(average>=60)
         return 'A';
        else if(average>40 && average<60)
         return 'B';
        else
         return 'C';
     }
};
int main()
{
    int roll;
    string name;
    int p,c,m;
    cout<<"Enter student roll no. : "<<endl;
    cin>>roll;
    cout<<"Enter student name : "<<endl;
    cin>>name;
    cout<<"Enter 3 subject marks : ";
    cin>>m>>p>>c;

    Student s (roll,name,m,p,c);
    cout<<"Total Marks : "<<s.totat()<<endl;
    cout<<"Grade of student : "<<s.grade()<<endl;
    return 0;
}