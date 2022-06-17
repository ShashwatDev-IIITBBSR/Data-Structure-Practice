
#include <iostream>
#include<vector>
#include <queue>
#include<stack>
using namespace std;
void add_edge(vector<int> adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print_graph(vector<int> adj[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<i<<"-";
        for(auto j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
vector<int> breadthfirstsearch(vector<int> adj[],int n)
{
    int i,k;
    queue<int> q;
    vector<int> vec;
    vector<int>visit(n,0);
    for(i=0;i<n;i++)
    {
        if(!visit[i])
        {
            q.push(i);
            vec.push_back(i);
            cout<<i<<" ";
            visit[i]=1;
            while(!q.empty())
            {
                k=q.front();
                q.pop();
                for(auto j:adj[k])
                {
                    if(!visit[j])
                    {
                        q.push(j);
                        vec.push_back(j);
                        cout<<j<<" ";
                        visit[j]=1;
                    }
                }
            }
        }
    }
    return vec;
}
vector<int> depth_first_search(vector<int> adj[],int n)
{
    int i,k;
    stack<int> st;
    vector<int> vec;
    vector<int> visit(n,0);
    for(i=0;i<n;i++)
    {
        if(visit[i]==0)
        {
            st.push(i);
            while(!st.empty())
            {
                k=st.top();
                st.pop();
                if(visit[k]==0)//Checking value during pop
                {
                    visit[k]=1;
                    vec.push_back(k);
                    cout<<k<<" ";
                    for(auto j:adj[k])
                    {
                        if(visit[j]==0)
                        {
                            st.push(j);
                        }
                    }
                }
            }
        }
    }
    return vec;
}
void recursion_depth_first(vector<int> adj[],int val, vector<int>&visit,vector<int>&dfs)
{
    visit[val]=1;
    cout<<val<<" ";
    dfs.push_back(val);
    for(auto j:adj[val])
        {
            if(visit[j]==0)
            {
                recursion_depth_first(adj,j,visit,dfs);
            }
        }
}
    
vector<int> recursion_dfs(vector<int> adj[],int n)
{
    int i;
    vector<int>dfs(n);
    vector<int>visit(n,0);
    for(i=0;i<n;i++)
    {
        if(visit[i]==0)
        {
            recursion_depth_first(adj,i,visit,dfs);
        }
    }
    return dfs;
}
int main()
{
    int v,e,i,a,b;
    cout<<"Enter number of Nodes ";
    cin>>v;
    cout<<"Enter number of edges ";
    cin>>e;
    vector<int> adj[v];
    for(i=0;i<e;i++)
    {
        cout<<"Enter Edge ";
        cin>>a>>b;
        add_edge(adj,a,b);
    }
    print_graph(adj,v);
    breadthfirstsearch(adj,v);
    cout<<endl;
    depth_first_search(adj,v);
    recursion_dfs(adj,v);
    return 0;
}
