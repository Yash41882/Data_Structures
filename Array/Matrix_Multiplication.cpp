//Matrix Multiplication using Strassen's Algorithm (Best Logic)
//Time complexity = O(N log 7/2) = O(N log^2.8074)

// Another logic is using brute force, Time complexity = O(N^3)
// Thirc Logic is using Divide and Conqueror, Time Complexity = 8T(N/2) + O(N2) = O(N^3)

#include<iostream>
using namespace std;

int main()
{
    system("cls");
    int a[2][2],b[2][2],c[2][2];
    int m1,m2,m3,m4,m5,m6,m7,i,j;
    cout<<"Matrix Multiplication Strassen's method\n";
    cout<<"Enter the elements of 2x2 Matrix 1:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of 2x2 Matrix 2:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
    }
 
    cout<<"\nFirst matrix is:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nSecond matrix is\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }

    m1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
    m2= (a[1][0]+a[1][1])*b[0][0];
    m3= a[0][0]*(b[0][1]-b[1][1]);
    m4= a[1][1]*(b[1][0]-b[0][0]);
    m5= (a[0][0]+a[0][1])*b[1][1];
    m6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    m7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    c[0][0]=m1+m4-m5+m7;
    c[0][1]=m3+m5;
    c[1][0]=m2+m4;
    c[1][1]=m1-m2+m3+m6;

    cout<<"\nProduct of both is:\n";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return(0);
}
