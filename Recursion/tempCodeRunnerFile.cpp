#include<iostream.h>
using namespace std;
void func(int n)
{
    if (n==0){
        cout<<0<<" ";
    }
    else
    {
        cout<<n<<" ";
        func(n-1);
    }
}
int main()
{
    int a;
    cout<<"Enter a positive number ";
    cin>>a;
    func(a);
}