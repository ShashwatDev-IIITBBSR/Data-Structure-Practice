#include<iostream.h>
using namespace std;
void display_max(int a,int b=0)
{
    if (a>b)
    {
        cout<<a<<" > "<<b;
    }
    else if (b>a)
    {
        cout<<b<<" > "<<a;
    }
    else
    {
        cout<<a<<" = "<<b;
    }
    cout<<endl;
}
int main()
{
    int q,w;
    cout<<"Enter 2 number ";
    cin>>q>>w;
    display_max(w);
    display_max(q,w);
}