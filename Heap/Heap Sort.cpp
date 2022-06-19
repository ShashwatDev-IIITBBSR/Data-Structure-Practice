#include <iostream>
using namespace std;
struct MaxHeap
{
    int *arr;
    int max_size;
    int curr_size;
    MaxHeap(int c,int k)
    {
        arr=new int[c];
        max_size=c;
        curr_size=k;
    }
    void input_heap(int element,int index)
    {
        arr[index]=element;
    }
    void print_heap()
    {
        for(int i=0;i<curr_size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    int right_child(int a)
    {
        return 2*a+2;
    }
    int left_child(int a)
    {
        return 2*a+1;
    }
    int parent(int a)
    {
        return (a-1)/2;
    }
    void swap(int a, int b)
    {
        int k;
        k=arr[a];
        arr[a]=arr[b];
        arr[b]=k;
    }
};
void Heapify_max_heap(MaxHeap &m,int index)//recursive function
{
    int lc,rc,n,i;
    n=m.curr_size;
    lc=(2*index)+1;
    rc=(2*index)+2;
    if(lc>=n){return;}
    if(rc==n)
    {
        if(m.arr[lc]<m.arr[index])
        {
            m.swap(lc,index);
        }
        return;
    }
    if(m.arr[lc]>=m.arr[rc]&&m.arr[lc]>m.arr[index])
    {
        m.swap(lc,index);
        i=lc;
        Heapify_max_heap(m,i);
    }
    else if(m.arr[rc]>=m.arr[lc]&&m.arr[rc]>m.arr[index])
    {
        m.swap(index,rc);
        i=rc;
        Heapify_max_heap(m,i);
    }
}
void heap_sort(MaxHeap &m)//m contains a random array
{
    int j,k,i=m.curr_size-1;
    int parent=(i-1)/2;
    if(i==0){return;}
    for(j=parent;j>=0;j--)//This will convert random array to max heap
    {
        Heapify_max_heap(m,j);
    }
    k=m.curr_size-1;
    for(;k>1;k--)//Remember k>1 should be the condition
    {
        m.swap(0,k);
        m.curr_size--;
        Heapify_max_heap(m,0);
    }
}
int main()
{
    int n,s,k;
    cout<<"Enter max number of elements in heap ";
    cin>>n;
    cout<<"Enter size of heap ";
    cin>>s;
    struct MaxHeap m(n,s);
    for(int i=0;i<s;i++)
    {
        cout<<"Enter element ";
        cin>>k;
        m.arr[i]=k;
    }
    m.print_heap();
    cout<<endl;
    //Heapify_max_heap(m,0);
    //m.print_heap();
    //cout<<endl;
    heap_sort(m);
    m.curr_size=s;
    m.print_heap();
    return 0;
}