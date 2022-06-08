#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void display()
{
    struct node* a=head;
    while(a)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
    cout<<endl;
}
void count()
{
    int n=0;
    struct node* a=head;
    while(a)
        {
            n++;
            a=a->next;
        }
    cout<<n<<endl;
}
void rdisplay(struct node *a)
{
    if(a!=NULL)
    {
        cout<<a->data<<" ";
        rdisplay(a->next);
    }
}
void insert_at_last(int element) 
{
    struct node* a=head;
    struct node *p;
    p=new node;
    p->data=element;
    p->next=0;
    if(!a)
    {
        head=p;
    }
    else
    {
        while(a->next)
        {
            a=a->next;
        }
        a->next=p;
    }
}
void removing_dublicate_from_sorted_linked_list()
{
    if(!head)
    {
        cout<<"Empty linked list ";
    }
    else if(!head->next)
    {
        cout<<"Only one element is present ";
    }
    else
    {
        struct node *p,*temp;
        temp=head;
        p=temp->next;
        while(p)
        {
           if(p->data==temp->data)
           {
               temp->next=p->next;
               p->next=NULL;
               p=temp->next;
           }
           else
           {
               temp=p;
               p=p->next;
           }
            
        }
    }
}
void reversing_a_linked_list()
{
    if(!head)
    {
        cout<<"Empty linked list ";
    }
    else if(!head->next)
    {
        cout<<"Only one element is present ";
    }
    else
    {
        struct node *a,*b,*c;
        a=head;
        b=head->next;
        c=head->next->next;
        a->next=NULL;
        while(c)
        {
            b->next=a;
            a=b;
            b=c;
            c=c->next;
        }
        b->next=a;
        head=b;
    }
}
void recursive_reverse(struct node*a,struct node *b)
{
    if(a==head)
    {
        a->next=NULL;
    }
    if(b==NULL)
    {
        head=a;
    }
    else
    {
        struct node *temp;
        temp=b->next;
        b->next=a;
        recursive_reverse(b,temp);
    }
}
void loop_or_not()
{
    struct node *p,*q;
    p=head;
    q=head->next;
    while(p&&q&&q->next&&p!=q)
    {
        p=p->next;
        if(!q->next)
        {
            break;
        }
        q=q->next->next;
    }
    if(p==q)
    {
        cout<<"Loop is present"; 
    }
    else
    {
        cout<<"Loop is absent ";
    }
}
int main()
{
    insert_at_last(2);
    insert_at_last(2);
    insert_at_last(5);
    insert_at_last(7);
    insert_at_last(82);
    insert_at_last(82);
    insert_at_last(82);
    reversing_a_linked_list();
    display();
    rdisplay(head);
    cout<<endl;
    removing_dublicate_from_sorted_linked_list();
    display();
    cout<<endl;
    count();
    cout<<endl;
    reversing_a_linked_list();
    display();
    recursive_reverse(head,head->next);
    display();
    loop_or_not();
    head->next->next->next->next=head->next->next;
    loop_or_not();
    cout<<endl;
    return 0;
}
