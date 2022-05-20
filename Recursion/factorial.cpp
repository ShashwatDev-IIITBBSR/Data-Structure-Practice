#include<iostream.h>
using namespace std;
int fact(int n)
{
    if (n==0 || n==1){ return 1;}
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number whose sum has to be calculated ";
    cin>>n;
    cout<<fact(n);
}