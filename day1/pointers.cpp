#include<iostream.h>
using namespace std;
int main()
{
    int x=10;
    int i;
    int *p;
    p=&x;
    cout<<"Value of p "<<*p<<endl; 
    int *z;
    z=new int[5];
    z[2]=6;
    cout<<" Values in z are ";
    for (i=0;i<5;i++)
    {
        cout<<z[i]<<" ";
    }
}