#include <iostream>
using namespace std;
int *array(int size)
{
    int *temp=new int[size];
    return temp;
}
int main()
{
    int a,i,*p;
    cout<<"Enter the size of Array ";
    cin>>a;
    p=array(a)
    for(i=0;i<a;i++)
    {
        cout<<"Enter "<<i<<" element ";
        cin>>p[i];
    }
    cout<<"Elements in reverse order are ";
    for(i=a-1;i>=0;i--)
    {
        cout<<p[i]<<" ";
    }
}