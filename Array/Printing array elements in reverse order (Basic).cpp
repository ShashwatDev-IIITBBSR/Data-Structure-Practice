#include <iostream>
using namespace std;
int main()
{
    int i,*p;
    p=new int[5];
    for(i=0;i<5;i++)
    {
        cout<<"Enter "<<i<<" element ";
        cin>>p[i];
    }
    cout<<"Elements in reverse order are ";
    for(i=4;i>=0;i--)
    {
        cout<<p[i]<<" ";
    }
}
