
#include <iostream>

using namespace std;
#include <vector>
#include <queue>
void depth_first_search(vector<int> adj[],vector <int> &dfs,int *visit,queue<int> &q)
{
    int k,j,ele;
    if(q.empty()){return;}
    k=q.front();
    q.pop();
    for(j=0;j<adj[k].size();j++)
    {
        ele=adj[k][j];
        if(!visit[ele])
        {
            q.push(ele);
            dfs.push_back(ele);
            visit[ele]=1;
            depth_first_search(adj,dfs,visit,q);
        }
    }
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
    for(i=1;i<n+1;i++)
    {
        k=adj[i];
        s=k.size();
        //cout<<k[i]<<" is connected to ";
        for(j=0;j<s;j++)
        {
            cout<<k[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Depth First Search ";
    vector <int> dfs;
    int *visit;
    visit=new int[n+1];
    queue<int> q;
    for(i=1;i<n+1;i++)
    {
        if(!visit[i])
        {
            q.push(i);
            visit[i]=1;
            dfs.push_back(i);
            depth_first_search(adj,dfs,visit,q);
        }
    }
    for(i=0;i<dfs.size();i++)
    {
        cout<<dfs[i]<<" ";
    }
}

