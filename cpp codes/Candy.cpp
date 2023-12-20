class Solution {
  public:
    int minCandy(int n, vector<int> &a) {
        vector<int>dp(n,1);
        int sum=0;
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1]) dp[i]+=dp[i-1];
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>a[i+1] and dp[i]<=dp[i+1]) dp[i]=dp[i+1]+1;
        }
        for(auto i:dp) sum+=i;
        return sum;
    }
};