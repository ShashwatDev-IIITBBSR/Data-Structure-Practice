#include <iostream>
using namespace std;
#include <vector>
#include <queue>
void addEdge(vector <int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printgraph(vector<int> adj[],int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        for(auto x: adj[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
vector<int> Breadthfirstsearch(vector<int> adj[],int num)
{
    int i,j,k,n;
    int vec[num+1]={0};
    vector<int> breadth;
    for(i=1;i<num+1;i++)
    {
        if(!vec[i])
        {
            queue<int> q;
            q.push(i);
            vec[i]=1;
            breadth.push_back(i);
            while(!q.empty())
            {
                k=q.front();
                q.pop();
                for(auto j : adj[k])
                {
                    if(!vec[j])
                    {
                        vec[j]=1;
                        q.push(j);
                        breadth.push_back(j);
                    }
                }
            }
        }
    }
    return breadth;
}
int main()
{
    int n,m,i,a,b;
    vector<int> v;
    cout<<"Enter no. of nodes in Graph ";
    cin>>n;
    cout<<"Enter no. of edges";
    cin>>m;
    vector<int> adj[n+1] ;
    for(i=0;i<m;i++)
    {
        cout<<"Enter Edge ";
        cin>>a>>b;
        cout<<endl;
        addEdge(adj,a,b);
    }
    printgraph(adj,n+1);
    v=Breadthfirstsearch(adj,n);
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}















