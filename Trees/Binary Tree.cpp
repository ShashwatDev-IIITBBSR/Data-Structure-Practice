#include <iostream>
#include <queue>
using namespace std;
struct node
{
    struct node *left_child;
    int val;
    struct node *right_child;
};
struct node* create()
{
    node *q;
    q=new node;
    int k;
    cout<<"Enter data ";
    cin>>k;
    if(k==-1)
    {
        return NULL;
    }
    q->val=k;
    cout<<"Enter left child of "<<q->val<<" ";
    q->left_child=create();
    cout<<"Enter right child of "<<q->val<<" ";
    q->right_child=create();
    return q;
}
int height(node *q)
{
    if(!q){return 0;}
    int x,y;
    x=height(q->right_child);
    y=height(q->left_child);
    if(x>y)
    {
        return x+1;
    }
    return y+1;
}
void preorder_traversal(node *q)
{
    if(q!=NULL)
    {
        cout<<q->val<<" ";
        preorder_traversal(q->left_child);
        preorder_traversal(q->right_child);
    }
    
}
void inorder_traversal(node *q)
{
    if(q!=NULL)
    {
        inorder_traversal(q->left_child);
        cout<<q->val<<" ";
        inorder_traversal(q->right_child);
    }
    
}
void postorder_traversal(node *q)
{
    if(q!=NULL)
    {   
        postorder_traversal(q->left_child);
        postorder_traversal(q->right_child);
        cout<<q->val<<" ";
    }
}
void level_order_traversal(node *a)
{
    queue<node*> q;
    node *l;
    q.push(a);
    cout<<a->val;
    while(!q.empty())
    {
        l=q.back();
        q.pop();
        if(l->left_child)
        {
            cout<<l->left_child->val;
            q.push(l->left_child);
        }
        if(l->right_child)
        {
            cout<<l->right_child->val;
            q.push(l->left_child);
        }
    }
}


int main()
{
    struct node *a;
    a=create();
    preorder_traversal(a);
    cout<<endl;
    inorder_traversal(a);
    cout<<endl;
    postorder_traversal(a);
    cout<<endl;
    cout<<height(a)<<endl;
    level_order_traversal(a);
    return 0;
}




