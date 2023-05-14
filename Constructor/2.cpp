#include<iostream>
using namespace std;
class Student
{
    private:
     int roll;
     string name;
     int mathMarks;
     int phyMarks;
     int cheMarks;
    public:
     Student(int r,string n,int m,int p, int c)
     {
        roll=r;
        name=n;
        mathMarks=m;
        phyMarks=p;
        cheMarks=c;
     }
     int total()
     {
        return mathMarks+phyMarks+cheMarks;
     }
     char grade()
     {
        float average;
        average=total()/3;
        if(average>=60)
         return 'A';
        else if(average>=40 && average<60)
         return 'B';
        else
          return 'C';
     }
};
int main()
{
    int roll;
    string name;
    int math,phy,che;
    cout<<"Enter roll no. "<<endl;
    cin>>roll;
    cout<<"Enter student name "<<endl;
    getline(cin,name);
    cout<<"Enter subject marks "<<endl;
    cin>>math>>phy>>che;
    Student S(roll,name,math,phy,che);
    cout<<"Total marks = "<<S.total()<<endl;
    cout<<"Grade = "<<S.grade()<<endl;
    return 0;
}