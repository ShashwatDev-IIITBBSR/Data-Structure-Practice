#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number of rows and columns in 2D array ";
    cin>>a>>b;
    int i,j,*A[a];
    cout<<"Enter Values ";
    for(i=0;i<a;i++)
    {
        A[i]=new int[b];
    }
    cout<<"Enter Values ";
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] ";
            cin>>A[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}