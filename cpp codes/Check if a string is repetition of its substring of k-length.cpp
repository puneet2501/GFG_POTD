class Solution{
public:
	int kSubstrConcat (int n, string s, int k)
	{
	     if (n % k != 0) return 0;

        unordered_map<string, int> hm;
    
        for (int i = 0; i < n; i += k) {
            string sub = s.substr(i, k);
            hm[sub] = hm[sub] + 1;
        }
    
        return (hm.size() > 2) ? 0 : 1;
    }
};