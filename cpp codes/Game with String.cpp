class Solution{
public:
    int minValue(string s, int k){
        // code here
        vector<int>freq(26,0);
        for(char ch:s){
            freq[ch-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        for(int i=0;i<k;i++){
            freq[0]--;
            sort(freq.begin(),freq.end(),greater<int>());
        }
        int sum=0;
        for(int i=0;i<26;++i){
            sum+=freq[i]*freq[i];
        }
        return sum;
    }
};