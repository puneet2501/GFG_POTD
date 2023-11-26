class Solution{
public:
    void solve(vector<int> &list, int n, bool flag, int k) {
        list.push_back(n);
        if (flag && n > 0) solve(list, n - 5, flag, k);
        if (flag && n == 0) solve(list, 5, false, k);
        if (flag && n < 0) solve(list, n + 5, false, k);
        if (!flag && n > 0 && n < k) solve(list, n + 5, false, k);
        else return;
    }
    
    vector<int> pattern(int N) {
        // code here
        vector<int> list;
        list.push_back(N);
        if (N <= 0) return list;
        
        solve(list, N - 5, true, N);
        return list;
    }
};