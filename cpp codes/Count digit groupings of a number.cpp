int dp[100][901];
class Solution{
    int solve(string &s, int i, int prev) {
        if(i == s.size())
            return 1;
        
        if(dp[i][prev] != -1)
            return dp[i][prev];
        
        int cur = 0;
        int ans = 0;
        for(int j = i; j < s.size(); j++) {
            cur += (s[j] - '0');
            if(cur >= prev)
                ans += solve(s, j + 1, cur);
        }
        return dp[i][prev] = ans;
    }
	public:
	int TotalCount(string str){
	    memset(dp, -1, sizeof dp);
	    return solve(str, 0, 0);
	}
};