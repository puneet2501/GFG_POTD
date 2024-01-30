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

//Alternative Similar to Java code in the tutorial
class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> arr(N, vector<int>(W + 1, 0));
        
        for(int i=0;i<N;i++){
            for(int j=1;j<=W;j++) {
                int pick = 0, notPick = 0;
                if(wt[i]<=j) {
                    pick  = val[i] + arr[i][j-wt[i]];
                }
                if(i>0) notPick = arr[i-1][j];

                arr[i][j] = max(pick,notPick);
            }
        }
        return arr[N-1][W];
    }
};
