#include<iostream.h>
using namespace std;
int Combination(int n,int r)
{
    if (r==0){ return 1;}
    if(r==1){return n;}
    return n*Combination(n-1,r-1)/r;
}
int main()
{
    int a,b;
    cout<<"Enter the value of n and r in nCr ";
    cin>>a>>b;
    cout<<Combination(a,b);
}