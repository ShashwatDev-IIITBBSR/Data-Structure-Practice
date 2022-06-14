#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct Queue
{
    node *front;
    node *rear;
};
int isEmpty(Queue *q)
{
    if(q->front==NULL)
    {
        return 1;
    }
    return 0;
}
void Enqueue(Queue *q,int element)
{
    node *a;
    a=new node;
    a->data=element;
    a->next=NULL;
    if(isEmpty(q))
    {
        q->front=q->rear=a;
    }
    else
    {
        q->rear->next=a;
        q->rear=a;
    }
}
int dequeue(Queue *q)
{
    if(isEmpty(q))
    {
        cout<<"Underflow error ";
        return -1;
    }
    node *temp;
    int e;
    e=q->front->data;
    temp=q->front->next;
    q->front->next=NULL;
    delete q->front;
    q->front=temp;
    return e;
}
int main()
{
    Queue *a;
    a->front=a->rear=NULL;
    int n,n1,i,j;
    cout<<"Enter number of elements to input ";
    cin>>n1;
    for(i=0;i<n1;i++)
    {
        cout<<"Enter element ";
        cin>>j;
        Enqueue(a,j);
    }
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;
    cout<<dequeue(a)<<endl;
    return 0;
}


