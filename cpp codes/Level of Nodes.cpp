class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    // code here
	    queue<pair<int,int>>q;
	    q.push({0,0});
	    vector<int>vis(V,0);
	    vis[0] = 1;
	    while(!q.empty()){
	        int level = q.front().first;
	        int node = q.front().second;
	        q.pop();
	        if(node==X) return level;
	        for(auto it:adj[node]){
	            if(!vis[it]){
	                vis[it] = 1;
	                q.push({level+1,it});
	            }
	        }
	    }
	    return -1;
	}
};