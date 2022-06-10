#include <iostream>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
bool isFull(queue *q)
{
    int k;
    if((q->front)<(q->rear))
    {
        k=(q->rear)-(q->front);
        if(k==(q->size-1))
        {
            return true;
        }
        return false;
    }
    else if((q->front)==(q->rear))
    {
        return false;
    }
    else
    {
        if((q->rear)+1==q->front)
        {
            return true;
        }
        return false;
    }
}
bool isEmpty(queue *q)
{
    if(q->front==q->rear)
    {
        return true;
    }
    return false;
}
void enqueue(queue *q,int element)
{
    if(!isFull(q))
    {
        int k;
        k=((q->rear)+1)%(q->size);
        q->rear=k;
        q->arr[k]=element;
    }
    else
    {
        cout<<"Overflow";
    }
}
int dequeue(queue *q)
{
    if(isEmpty(q))
    {
        cout<<"Underflow Error";
        return -1;
    }
    if(q->front==(q->size-1))
    {
        q->front=0;
        return q->arr[q->front];
    }
    q->front++;
    return q->arr[q->front];
}
int main()
{
    queue *a;
    int n,n1,i,j;
    cout<<"Enter size of array ";
    cin>>n;
    a->size=n;
    a->front=a->rear=0;
    a->arr=new int[n];
    cout<<"Enter number of elements to input ";
    cin>>n1;
    for(i=0;i<n1;i++)
    {
        cout<<"Enter element ";
        cin>>j;
        enqueue(a,j);
    }
    cout<<dequeue(a);
    cout<<dequeue(a);
    cout<<dequeue(a);
    return 0;
}
