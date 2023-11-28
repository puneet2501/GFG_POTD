class Solution {
public:
	int isEulerCircuit(int V, vector<int>adj[]){
	    // Code here
	    int cnt=0;
        for(int i=0;i<V;i++){
            if(adj[i].size()%2==0){
                cnt++;
            }
        }
        if(cnt==V) return 2;
        if(cnt==V-2) return 1;
        return 0;
	}
};