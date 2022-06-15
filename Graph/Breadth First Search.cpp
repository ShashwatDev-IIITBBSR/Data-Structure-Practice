
#include <iostream>

using namespace std;
#include <vector>
#include <queue>
vector<int> breadth_first_search(int num_of_nodes,vector<int> adj[])
{
    vector <int> bfs,y;
    int num,i,j,k;
    int vis[num_of_nodes+1]={0};
    for(i=1;i<num_of_nodes+1;i++)
    {
        if(!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i]=1;
            bfs.push_back(i);
            while(!q.empty())
            {
                k=q.front();
                q.pop();
                //bfs.push_back(k);//we can either do insertion at the time of pop or at time of 
                for(j=0;j<adj[k].size();j++)
                {
                    num=adj[k][j];
                    if(!vis[num])
                    {
                        vis[num]=1;
                        q.push(num);
                        bfs.push_back(num);
                    }
                }
            }
        }
    }
    return bfs;
}
int main()
{
    int m,n,i,j,u,v,s;
    cout<<"Enter no of nodes";
    cin>>n;
    cout<<"Enter number of Edges";
    cin>>m;
    vector<int> k;
    vector <int> adj[n+1];
    for(i=0;i<m;i++)
    {
        cout<<"Enter Edges ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=0;i<n+1;i++)
    {
        k=adj[i];
        s=k.size();
        for(j=0;j<s;j++)
        {
            cout<<k[j]<<" ";
        }
        cout<<endl;
    }
    k=breadth_first_search(n,adj);
    for(i=0;i<k.size();i++)
    {
        cout<<k[i];
    }
}
