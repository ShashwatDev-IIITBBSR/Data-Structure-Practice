class Solution
{
	public:
	vector<int> in_degree(int V, vector<int> adj[])
	{
	    vector<int> vec(V,0);
	    for(int i=0;i<V;i++)
	    {
	        for(auto j:adj[i])
	        {
	            vec[j]++;
	        }
	    }
	    return vec;
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> indegree;
	    queue<int> q;
	    vector<int> final;
	    vector<bool> visited(V,false);
	    indegree=in_degree(V,adj);
	    int k;
	    for(int i=0;i<V;i++)
	    {
	        if(indegree[i]==0&&!visited[i])
	        {
	            visited[i]=true;
	            final.push_back(i);
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        k=q.front();
	        q.pop();
            for(auto j:adj[k])
	        {
	            if(indegree[j]>0)
	            {
	                indegree[j]--;
	                if(indegree[j]==0&&!visited[j])
	                {
	                    visited[j]=true;
	                    final.push_back(j);
	                    q.push(j);
	                }
	            }
	        }
	     }
	     return final;
	}
};