#include <iostream>
using namespace std;
int main()
{
    int a,i,*q;
    cout<<"Enter the size of Array ";
    cin>>a;
    q=new int[a];
    for(i=0;i<a;i++)
    {
        cout<<"Enter "<<i<<" element ";
        cin>>q[i];
    }
    cout<<"Elements are ";
    for(i=0;i<a;i++)
    {
        cout<<q[i]<<end;
    }
}