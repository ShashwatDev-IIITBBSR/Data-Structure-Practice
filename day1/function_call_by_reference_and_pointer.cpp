#include<iostream.h>
using namespace std;
void swap_by_ref(int &a,int &b )
{
    int c;
    c=a;
    a=b;
    b=c;
}
void swap_by_pointer(int *a,int *b )
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
     int q,w,t,y;
     int *e,*r;
     cout<<"Enter 4 number ";
     cin>>q>>w>>t>>y;
     *e=t;
     *r=y;
     swap_by_ref(q,w);
     cout<<q<<" "<<w<<endl;
    swap_by_pointer(e,r);
     cout<<*e<<" "<<*r<<endl;
}