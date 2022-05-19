#include<iostream.h>
using namespace std;
int *fun_create_array(int size)
{
    int *p,i;
    p=new int[size];
    for(i=0;i<size;i++)
    {
        p[i]=i;
    }
    return p;
}
int main()
{
    int a,*q,j=0;
    cout<<"Enter size ";
    cin>>a;
    q=fun_create_array(a);
    for(j;j<a;j++)
    {
        cout<<q[j]<<endl;
    }
}