#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;/*Total Size of array. In this case it's 20*/
    int length;/*Number of element present in Array*/
};
void display(struct Array arr)
{
    int i=0;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;
}
void insert(struct Array *arr,int element)
{
    if(arr->length==arr->size)
    {
        cout<<"No space left for inserting an element ";
    }
    else
    {
        arr->A[arr->length]=element;
        arr->length++;
    }
}
int main()
{
    struct Array q={{9,8,7,6,5,5,6,7},20,8};
    display(q);
    insert(&q,99);
    display(q);
    return 0;
}
