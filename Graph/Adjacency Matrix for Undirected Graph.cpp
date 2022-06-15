
#include <iostream>

using namespace std;

int main()
{
    int m,n,i,j,u,v;
    cout<<"Enter no of nodes";
    cin>>n;
    cout<<"Enter number of Edges";
    cin>>m;
    int adj[n+1][n+1]={0};
    for(i=0;i<m;i++)
    {
        cout<<"Enter Edges ";
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
