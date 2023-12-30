class Solution{
    public:
    vector<string> winner(string a[],int n) {
        int i, maxi=0;
        vector<string> v;
        unordered_map<string, int> mp;
        for(i=0;i<n;i++) mp[a[i]]++;
        for(auto x: mp) {
            maxi=max(maxi, x.second);
        }
        for(auto x: mp) {
            if(x.second==maxi) v.push_back(x.first);
        }
        sort(v.begin(), v.end());
        return {v[0], to_string(maxi)};
    }
};