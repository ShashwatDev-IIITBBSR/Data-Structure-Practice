#include<iostream.h>
using namespace std;
int sum(int n)
{
    if (n==0){ return 0;}
    return n + sum(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number whose sum has to be calculated ";
    cin>>n;
    cout<<sum(n);
}