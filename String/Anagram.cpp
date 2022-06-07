#include <iostream>
using namespace std;
struct strin
{
    char A[100];
    int length;
};
int len(struct strin a)
{
    int i=0;
    while(a.A[i]!='\0')
    {
        i++;
    }
    return i;
}
int h[26];
int anagram(struct strin a,struct strin b)
{
    int i=0;
    for(;i<a.length;i++)
    {
        if ((a.A[i]>=65)&(a.A[i]<=90))
        {
            h[a.A[i]-65]=h[a.A[i]-65]+1;
        }
        else if ((a.A[i]>=97)&(a.A[i]<=122))
        {
            h[a.A[i]-97]++;
        }
    }
    for(i=0;i<b.length;i++)
    {
        if ((b.A[i]>=65)&(b.A[i]<=90))
        {
            h[b.A[i]-65]=h[b.A[i]-65]-1;
        }
        else if ((b.A[i]>=97)&(b.A[i]<=122))
        {
            h[b.A[i]-97]--;
        }
    }
    for(i=0;i<26;i++)
    {
        if(h[i]!=0)
        {
            return 0;
        }
    }
    return 1;
}
void display(struct strin a)
{
    int i=0;
    while(a.A[i]!='\0')
    {
        cout<<a.A[i]<<" ";
        i++;
    }
    cout<<endl;
}
int main()
{
    struct strin q,w;
    cout<<"Enter string ";
    cin>>q.A;
    cout<<"Enter second string ";
    cin>>w.A;
    display(q);
    display(w);
    q.length=len(q);
    w.length=len(w);
    if(anagram(q,w))
    {
        cout<<"Both are Anagram ";
    }
    else{ cout<<"Both are not Anagram ";}
    return 0;
}




