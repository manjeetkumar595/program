#include<iostream>
using namespace std;
int main()
{
    int A[2][3],B[2][3],C[2][3];
    cout<<"Enter matrix A ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"Enter matrix B ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}