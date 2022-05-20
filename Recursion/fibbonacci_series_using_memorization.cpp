#include<iostream.h>
using namespace std;
int A[100]={0};
int fibbo(int n)
{
    if (n==1 || n==2){ return 1;}
    if(A[n-2]==0)
    {
        A[n-2]=fibbo(n-2)+fibbo(n-3);
    }
    if(A[n-3]==0)
    {
        A[n-3]=fibbo(n-3)+fibbo(n-4);
    }
    return A[n-2]+A[n-3];
}
int main()
{
    A[0]=1;
    A[1]=1;
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<fibbo(n);
}