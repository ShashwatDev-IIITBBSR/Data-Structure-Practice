#include <iostream>
using namespace std;
struct strin
{
    char A[100];
    int length;
};
void reverse_of_string(struct strin *a)
{
    int i=0;
    char temp;
    int l=a->length;
    for(;i<a->length/2;i++)
    {
        temp=a->A[l-i-1];
        a->A[l-i-1]=a->A[i];
        a->A[i]=temp;
    }
}
void display(struct strin *a)
{
    cout<<a->A<<endl;
}
void toggle(struct strin *a)
{
    int i;
    for(i=0;i<a->length;i++)
    {
        if((a->A[i]>=65)&&(a->A[i]<=90))
        {
            a->A[i]=a->A[i]+32;
        }
        else if((a->A[i]>=97)&&(a->A[i]<=122))
        {
            a->A[i]=a->A[i]-32;
        }
    }
}
int main()
{
    int i;
    struct strin b;
    cout<<"Enter the string ";
    cin>>b.A;
    for(i=0;i<100;i++)
    {
        if(b.A[i]=='\0')
        {
            b.length=i;
            break;
        }
    }
    display(&b);
    reverse_of_string(&b);
    display(&b);
    toggle(&b);
    display(&b);
    return 0;
}