#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter 2 number ";
    cin>>x>>y;
    int a,b,c;
    a=x&y;
    b=x|y;
    c=x^y;
    cout<<"applying And,Or and Xor operator we respectively get "<<a<<" "<<b<<" "<<c;
}