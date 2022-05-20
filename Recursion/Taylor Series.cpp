/* Taylor Series e^x=1+ x/1! + x*2/2! + x*3/3! +....*/

#include<iostream.h>
using namespace std;
float taylor(float x,int n) /*n is number of terms you want in Taylor series*/
{
    float s=1;
    for(;n>0;n--)
    {
        s=1+x/n*s;
        cout<<s<<" ";
    }
    return s;
}
float cal(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    return taylor(x,n)+cal(x,n-1);
}
int main()
{
    int a,b;
    cout<<"Enter a number whose sum has to be calculated ";
    cin>>a;
    cout<<"Enter number of terms in Taylor series ";
    cin>>b;
    cout<<"Value is "<<taylor(a,b);
}