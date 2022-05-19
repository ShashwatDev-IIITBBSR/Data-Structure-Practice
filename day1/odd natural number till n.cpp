#include<iostream.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number upto which natural numbers are to be printed ";
    cin>>n;
    for(int i=1;i<=n;i=i+2)
    {
        cout<<i<<" ";
    }
}
