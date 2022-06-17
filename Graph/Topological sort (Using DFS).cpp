class Solution
{
    
	public:
	void recursive_dfs(int val,stack<int> &st,vector<int> &final,vector<bool> &visited,
	vector<int> adj[])
	{
	    visited[val]=true;
	    for(auto j:adj[val])
	    {
	        if(!visited[j])
	        {
	            recursive_dfs(j,st,final,visited,adj);
	        }
	    }
	    st.push(val);//returning time we will push it
	    final.push_back(val);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> st;
	    vector<int> final;
	    vector<bool> visited(V,false);
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            recursive_dfs(i,st,final,visited,adj);
	        }
	    }
	    //we can either pop out stack or reverse vector
	    reverse(final.begin(),final.end());
	    return final;
	}
};