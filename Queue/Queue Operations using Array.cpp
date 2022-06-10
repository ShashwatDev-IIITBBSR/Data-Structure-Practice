#include <iostream>
using namespace std;
class queue
{
    public:
        int size;
        int front;
        int rear;
        int *arr;
};
bool isempty(queue *a)
{
    if(a->front==a->rear)
    {
        return true;
    }
    return false;
}
bool isfull(queue *a)
{
    if(a->rear==(a->size-1))
    {
        return true;
    }
    return false;
}
void enqueue(queue *a,int element)
{
    if(isfull(a))
    {
        cout<<"Overflow";
    }
    a->rear++;
    a->arr[a->rear]=element;
}
int dequeue(queue *a)
{
    int data;
    if(isempty(a))
    {
        cout<<"Underflow";
        return 0;
    }
    a->front++;
    data=a->arr[a->front];
    return data;
}

int main()
{
    queue *a;
    int n,n1,i,j;
    cout<<"Enter size of array ";
    cin>>n;
    a->size=n;
    a->front=a->rear=-1;
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
