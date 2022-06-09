#include <iostream>
using namespace std;
struct node
{
    int val;
    node *next;
};
node *top=NULL;
bool isEmpty()
{
    if(!top)
    {
        return true;
    }
    return false;
}
int pop()
{
    if(isEmpty())
    {
        cout<<"Underflow ";
        return 0;
    }
    int u;
    u=top->val;
    top=top->next;
    return u;
}
void push(int element)
{
    node *p;
    p=new node;
    p->val=element;
    if(top==NULL)
    {
        top=p;
        top->next=NULL;
    }
    else
    {
        p->next=top;
        top=p;
    }
}
int stacktop()
{
    if(isEmpty())
    {
        cout<<"Underflow ";
        return 0;
    }
    return top->val;
}
int peek(int index)
{
    if(isEmpty())
    {
        cout<<"Underflow";
        return 0;
    }
    int i=0;
    node *k;
    k=top;
    while(i<index)
    {
        k=k->next;
        i++;
    }
    return k->val;
}
int main()
{
  //Important step.Remember to allocate memory
    push(2);
    push(6);
    push(7);
    push(2);
    push(6);
    push(7);
    cout<<peek(0)<<endl;
    cout<<stacktop()<<endl; 
    cout<<pop()<<endl;
    cout<<peek(2)<<endl;
    cout<<stacktop()<<endl; 
    cout<<peek(0)<<endl;
    return 0;
}








