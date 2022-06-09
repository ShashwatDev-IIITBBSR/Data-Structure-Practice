#include <iostream>
using namespace std;
struct stack 
{
    int size;
    int top;
    int *A;
};
bool isEmpty(stack *a)
{
    if(a->top==-1)
    {
        return true;
    }
    return false;
}
bool isFull(stack *a)
{
    if(a->top==(a->size-1))
    {
        return true;
    }
    return false;
}
int pop(stack *k)
{
    if(k->top==-1)
    {
        cout<<"Underflow ";
        return 0;
    }
    int u;
    u=k->A[k->top];
    k->top--;
    return u;
}
void push(stack *k,int element)
{
    if(k->top==k->size-1)
    {
        cout<<"Overflow ";
        return;
    }
    k->A[++k->top]=element;
}
int stacktop(stack *a)
{
    if(isEmpty(a))
    {
        cout<<"Underflow ";
        return 0;
    }
    return a->A[a->top];
}
int peek(stack *a,int index)
{
    if(isEmpty(a))
    {
        cout<<"Underflow ";
        return 0;
    }
    return a->A[index];
}
int main()
{
    stack *a=new stack;
    a->top=-1;
    a->size=20;
    a->A=new int[20];   //Important step.Remember to allocate memory
    push(a,2);
    push(a,6);
    push(a,7);
    push(a,2);
    push(a,6);
    push(a,7);
    cout<<pop(a)<<endl;
    cout<<peek(a,2)<<endl;
    cout<<stacktop(a)<<endl;
    cout<<stacktop(a);
    return 0;
}








