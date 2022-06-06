#include <iostream>
using namespace std;
struct strin
{
    char A[100];
    int length;
};
int h[26]={0};
int len(struct strin a)
{
    int i;
    i=0;
    while(a.A[i]!='\0')
    {
        i++;
    }
    return i;
}
void dublicate(struct strin a)
{
    int i=0;
    while(a.A[i]!='\0')
    {
        if((a.A[i]>=65)&(a.A[i]<=90))
        {
            h[a.A[i]-65]++;
        }
        else if ((a.A[i]>=97)&(a.A[i]<=122))
        {
            h[a.A[i]-97]++;
        }
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(h[i]>0)
        {
            cout<<(char)(i+97)<<" "<<h[i]<<endl;
        }
    }
}

void display(struct strin *a)
{
    cout<<a->A<<endl;
}
int main()
{
    struct strin z;
    cout<<"Enter String";
    cin>>z.A;
    z.length=len(z);
    dublicate(z);
    return 0;
}