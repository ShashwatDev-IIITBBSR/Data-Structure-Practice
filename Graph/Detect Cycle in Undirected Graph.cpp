#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
void addedge(vector<int> adj[],int a, int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void print_graph(vector<int> adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i<<"-";
        for(auto j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void bfs(vector<int> adj[],int v)
{
    queue<int> q;
    vector<bool> visited(v,false);
    vector<int> vec;
    int k;
    cout<<"BFS-";
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            q.push(i);
            visited[i]=true;
            while(!q.empty())
            {
                k=q.front();
                q.pop();
                cout<<k<<" ";
                vec.push_back(k);//if we want to return in form of vector
                for(auto u:adj[k])
                {
                    if(!visited[u])
                    {
                        q.push(u);
                        visited[u]=true;//we will do true as soon as we push the element
                    }
                }
            }
        }
    }
}
void recursive_dfs(vector<int> adj[],vector<bool> &visited, int value)
{
    visited[value]=true;
    cout<<value<<" ";
    for(auto u:adj[value])
    {
        if(!visited[u])
        {
            recursive_dfs(adj,visited,u);
        }
    }
}
void dfs(vector<int> adj[],int v)
{
    vector<bool> visited(v,false);
    cout<<"DFS-";
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            recursive_dfs(adj,visited,i);
        }
    }
}
void iterative_dfs(vector<int> adj[],int v)
{
    int k;
    vector<bool> visited(v,false);
    stack<int> st;
    cout<<"DFS-";
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            st.push(i);
            while(!st.empty())
            {
                k=st.top();
                st.pop();
                if(!visited[k])
                {
                    cout<<k<<" ";
                    visited[k]=true;
                    for(auto v: adj[k])
                    {
                        if(!visited[v])
                        {
                            st.push(v);
                        }
                    }
                }
            }
        }
    }
}
void recursive_check_cycle_dfs(vector<int> adj[],vector<bool> &visited, int value,int &prev,bool &cycle)
{
    visited[value]=true;
    cout<<value<<" ";
    prev=value;
    for(auto u:adj[value])
    {
        if(!visited[u])
        {
            recursive_check_cycle_dfs(adj,visited,u,prev,cycle);
        }
        else
        {
            if(prev!=u)
            {
                cycle=true;
                break;
            }
        }
    }
}
bool cyclic_dfs(vector<int> adj[],int v)
{
    vector<bool> visited(v,false);
    bool cycle=false;
    int prev=-1;
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            recursive_check_cycle_dfs(adj,visited,i,prev,cycle);
        } 
    }
    return cycle;
}
int main()
{
    int u,v,n,e;
    cout<<"Enter no of Nodes/Vertex ";
    cin>>n;
    vector<int> adj[n];
    cout<<"Enter number of edges ";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cout<<"Enter Edge ";
        cin>>u>>v;
        addedge(adj,u,v);
    }
    print_graph(adj,n);
    bfs(adj,n);
    cout<<endl;
    dfs(adj,n);
    iterative_dfs(adj,n);
    if(cyclic_dfs(adj,v)){cout<<"Cycle is present ";}
    else{cout<<"Cycle not present";}
    return 0;
}
