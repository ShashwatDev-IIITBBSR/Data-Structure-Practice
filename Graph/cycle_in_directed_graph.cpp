class Solution {
  public:
    bool cycle(int val,vector<bool> &visited,vector<bool> &dfs_visited, vector<int> adj[])
    {
        visited[val]=true;
        dfs_visited[val]=true;
        for(auto j:adj[val])
        {
            if(!visited[j])
            {
                if((cycle(j,visited,dfs_visited,adj))){return true;}
            }
            else if(visited[j]&&dfs_visited[j]){return true;}
        }
        dfs_visited[val]=false;
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> visited(V,false),dfs_visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(cycle(i,visited,dfs_visited,adj))
                {
                    return true;
                }
            }
        }
        return false;
    }
};