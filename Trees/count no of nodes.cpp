int findCountOfNodes(Node *root)
{
    if(!root)
    {
        return 0;
    }
    int leftTree = findCountOfNodes(root->left);
    int rightTree = findCountOfNodes(root->right);
    
    return leftTree + rightTree + 1;
}