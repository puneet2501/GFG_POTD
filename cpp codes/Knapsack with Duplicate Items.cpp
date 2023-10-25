class Solution {
public:
    int dp[1001][1001];
    int solve(int N, int W, int val[], int wt[]){
      if(N==0 || W==0) return 0;
      if(dp[N][W]!=-1) return dp[N][W];
      if(wt[N-1]<=W){
          return dp[N][W]=max({val[N-1]+solve(N, W-wt[N-1], val, wt), solve(N-1, W, val, wt)});
      }
      else 
      return dp[N][W]=solve(N-1, W, val, wt);
    }
    int knapSack(int N, int W, int val[], int wt[]){
        memset(dp,-1,sizeof(dp));
        return solve(N,W,val,wt);
    }
};