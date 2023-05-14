#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],mult[10][10];
    int r1,c1,r2,c2;
    cout<<"Enter row and column for 1st matrix : ";
    cin>>r1>>c1;
    cout<<"Enter row and column for 2nd matrix : ";
    cin>>r2>>c2;
    if(c1!=r2)
     {
        cout<<"Can not be multiply ";
        return 0;
     }
     cout<<"Enter element of 1st matrix : ";
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<" : ";
            cin>>a[i][j];
        }
     }
     cout<<"Enter element of 2nd matrix : "<<endl;
     for(int i=0;i<r2;i++)
     {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<" : ";
            cin>>b[i][j];
        }
     }
     cout<<"Enter element of 1st matrix : "<<endl;
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            mult[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                mult[i][j]+=a[i][k] * b[k][j];
            }
        }
     }
     cout<<"Output matrix : "<<endl;
     cout<<"Enter element of 1st matrix : "<<endl;
     for(int i=0;i<r1;i++)
     {
        for(int j=0;j<c2;j++)
        {
            cout<<" "<<mult[i][j];
            if(j==c2-1)
            cout<<endl;
            
        }
     }

    return 0;
}